#include<iostream.h>
#include<conio.h>
class A
{
  public:
	 void show()
	 {
	  cout<<"\nBase class";
	 }
};
class b:public A
{
  public:
	void show()
	{
	  cout<<"\nDerived class";
	}
};
void main()
{
  clrscr();
  A a;
  b c;
  a.show();
  c.show();
  c.A::show();
  getch();
}