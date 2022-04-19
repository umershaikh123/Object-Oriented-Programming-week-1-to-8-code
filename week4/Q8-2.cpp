#include <iostream>
using namespace std;

class nPoint
{
	private:
		static int length;
		int *p = new int [length];
		
	public:
		nPoint(){};
		~nPoint(){};
		
		void Set(int index, int value)
		{
			p[index] = value;	
		}	
		
		int Get(int index) const
		{
			return p[index];
		}
		
		static int Length()
		{
			return length;
		}
};

int nPoint::length = 4;

int main()
{
 
    nPoint p1;
	for(int i=0; i< p1.Length(); i++) {
	p1.Set(i, i*2);
    cout << p1.Get(i) << "\n";
    }

    cout << "Length of object is " << p1.Length();
   
   return 0;

}