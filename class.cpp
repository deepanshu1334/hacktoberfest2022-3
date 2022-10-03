#include<iostream>//class complex to represent complex number//
#include<conio.h>
using namespace std;
class complex
{
 private:
 int a,b;
 public:
 void setdata(int x,int y)
    {
 	a=x;
 	b=y;
	}
	void showdata()
	{
		cout<<"a=\n"<<a<<"b=\n" <<b;
	}
	 complex add(complex x)
	{
		complex temp;//temporary object hai aur isme bhi a ur b bhi hain
		temp.a=a+x.a;//khali a c1 ka hai aur c2 pass kara hai x main
		temp.b=b+x.b;//khali b c1 ka hai aur x.b c2 ka hai
	   return temp;
	}	
};
int main()
{
	complex c1,c2,c3;
	c1.setdata(4,5);
	c2.setdata(2,6);
	//c3=c1+c2//+ operator ko nhi malum ki complex type ki value ko kaise add karna hai
	c3=c1.add(c2);
	c1.showdata();
	c2.showdata();
	c3.showdata();
	getch();
}

