#include <iostream>
using namespace std;
int main() {

    string l1="a",l2="b",l3="";
    int l;
    cout<<"Total lines"<<endl;
    cin>>l;
    cout<<"Line 1"<<endl;
    cin>>l1;
    cout<<"Line 2"<<endl;
    cin>>l2;
    cout<<l1<<endl;
    cout<<l2<<endl;

    for(int i=3;i<=l;i++)
    {
        l3=l1+l2;
        cout<<l3<<endl;
        l1=l2;
        l2=l3;

    }
    return 0;
}
