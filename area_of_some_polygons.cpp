#include<iostream>
using namespace std;
class polygon
{
	float h,w;
	public:
		void setvalue()
		{
			cout<<"Enter height and Width of polygon";
			cin>>h>>w;
		}
		float height()
		{
			return(h);
		}		
		float width()
		{
			return(w);
		}
		virtual void area()
		{
			cout<<"In polygon class";
		}
};
class rectangle: public polygon
{
	void area()
	{
		cout<<"Area of  rectangle="<<(height()*width())<<endl;
	}
};
class triangle:public polygon
{
	void area()
	{
		cout<<"Area of Triangle"<<(height()*width())<<endl;
	}
};
int main()
{
	polygon *p;
	rectangle r;
	triangle t;
	p=&r;
	p->setvalue();
	p->area();
	p=&t;
	p->setvalue();
	p->area();
}
