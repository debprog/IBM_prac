#include <iostream>
using namespace std;


double cost(double e,double f,double g,double h)
{
    double c;

    c=(((e*e)-(f*g) )*h )/100;
    return c;
}

int main() {
    double sq,l,b,ct,f;
    cout<<"Enter side of sq field"<<endl;
    cin>>sq;
    cout<<"Enter length of house"<<endl;
    cin>>l;
    cout<<"Enter breadth of house"<<endl;
    cin>>b;
    cout<<"Enter cost of gardening"<<endl;
    cin>>ct;
    f=cost(sq,l,b,ct);
    cout<<f<<endl;


    return 0;
}
