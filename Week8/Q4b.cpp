// Q4b
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
    void CheckState();

    friend ostream &operator<<(ostream &out, const TableLamp &t)
    {

        if (t.r == 1)
        {
            out << "My lamp is Currently On" << endl;
        }

        else if (t.r == 0)
        {

            out << "My lamp is Currently OFF" << endl;
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

        cout << "Lamp is switched  ON" << endl;
    }

    else if (r == 0)
    {
        s = OFF;

        cout << "Lamp is  switched OFF" << endl;
    }

    x++;
}

void TableLamp::CheckState()
{

    if (r == 1)
    {
        cout << "Lamp is switched  ON" << endl;
    }

    else if (r == 0)
    {

        cout << "Lamp is  switched OFF" << endl;
    }
}

class AdjTableLamp : public TableLamp
{

private:
    float brightness;

public:
    AdjTableLamp();
    void dim();
    void print(ostream &);
};

AdjTableLamp ::AdjTableLamp() : TableLamp()
{

    brightness = 1.0;
}

void AdjTableLamp ::dim()
{

    brightness -= 0.1;
    cout << "Brightness = " << brightness << endl;
}

void AdjTableLamp ::print(ostream &o)
{

    o << "My Adjust table lamp" << endl;
    o << "Brightness of the lamp :" << brightness << endl;
    CheckState();
}

int main()
{
    AdjTableLamp yourlamp;
    cout << yourlamp << endl; // empty
    cout << endl;
    yourlamp.print(cout);
    cout << endl;
    yourlamp.pressSwitch();
    cout << endl;
    yourlamp.dim();
    cout << endl;
    yourlamp.print(cout);
    cout << endl;
    return 0;
}

/*

int main()
{
    AdjTableLamp *alamp = new AdjTableLamp();
    cout << *alamp << endl;
    alamp->print(cout);
    alamp->pressSwitch(1);
    alamp->dim();
    alamp->print(cout);


    return 0;
}


*/