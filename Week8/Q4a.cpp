#include <iostream>
#include <string>
using namespace std;

class TableLamp
{
private:
    enum State
    {
        ON,
        OFF
    };

public:
    int x;
    int r;
    State s = OFF;
    TableLamp();
    void pressSwitch();

    friend ostream &operator<<(ostream &out, const TableLamp &t)
    {

        if (t.r == 1)
        {
            out << "My Table lamp is Currently On" << endl;
        }

        else if (t.r == 0)
        {

            out << "My Table lamp is Currently OFF" << endl;
        }

        return out;
    }
};
TableLamp::TableLamp()
{
    x = 1;
}

void TableLamp::pressSwitch()
{

    r = x % 2;

    if (r == 1)
    {
        s = ON;

        cout << "Table Lamp is switched  ON" << endl;
    }

    else if (r == 0)
    {
        s = OFF;

        cout << "Table Lamp is  switched OFF" << endl;
    }

    x++;
}

int main()
{
    TableLamp myTL;
    myTL.pressSwitch();
    cout << myTL << endl;

    myTL.pressSwitch();

    cout << myTL << endl;

    myTL.pressSwitch();

    cout << myTL << endl;
    return 0;
}

/*class AdjTableLamp : public TableLamp
{

private:
    float brightness;

public:
    AdjTableLamp();
    void dim();
    void print(ostream &);
};

AdjTableLamp ::AdjTableLamp()
{
    brightness = 1.0;
}

void AdjTableLamp ::dim()
{
    cout << "Brightness = " << (brightness - 0.1) << endl;
}

void AdjTableLamp ::print(ostream &o)
{
    o << "My Adjust table lamp" << endl;
    o << "Brightness of the lamp :" << brightness << endl;
} */
