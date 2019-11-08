#include <iostream>
#include<math.h>
using namespace std;

int main()
{

float a,b,c,sq,sq2,h,i;
float x1,x2,x3,x4,sqt,sqt2;
cout<<"Quadratic Equation is in form of ax^2+bx+c=0\n\n";
cout<<"Enter coefficient of a\n";
cin>>a;
cout<<"Enter coefficient of b\n";
cin>>b;
cout<<"Enter coefficient of c\n";
cin>>c;
sq=(b*b)-(4*a*c);
sqt=sqrt(sq);
/*discriminant solving i.e b^2-4ac*/
x1=(-b+sqt)/(2*a);
x2=(-b-sqt)/(2*a);/*for b^2-4ac>0 and for b^2-4ac=0*/
sq2=-1*sq;
sqt2=sqrt(sq2);
x3=(-b)/(2*a);
i=sqt2/(2*a);
x4=(-b)/(2*a);/*for b^2-4ac<0*/
cout<<"The square of the roots is: "<<sq<<endl;
h=sqt2/(2*a);
{
if(sq>0)
cout<<"The roots are Real and Distinct\nThe Square root is: "<<sqt<<"\n x is either : "<<x1<<" or" << x2<<endl;
else if(sq<0)
cout<<"The roots are Complex (i.e Real and Imaginary)\nThe Square root is: "<<sqt2<<"i\nx is either : "<<x3<<" or "<< i <<" or "<<x4<<" or " <<h <<endl;
else
cout<<"The roots are Real and Repeated\nThe Square root is: "<<sq<<"\n x is : "<<x1<<endl;
}
return 0;


}
