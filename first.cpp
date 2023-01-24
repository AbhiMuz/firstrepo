//this is my first cpp program:
#include<iostream>
using namespace std;
class student
{
	int id;
	public:	
		student(int x)
		{	
			id=x;
		}
		void show()
		{	
			cout<<"\nID="<<id;
		}
		
};
int main()
{
	student s(164);
	s.show();
	return 0;
}