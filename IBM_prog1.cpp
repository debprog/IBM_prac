#include <iostream>
using namespace std;
int main() {

    int n;
    cout<<"enter a size";
    cin>>n;
    int arr[n];


    for(int i=0;i<n;i++)
    {
        cout<<"enter elem"<<endl;

        cin>>arr[i];
    }

    int h=0,l=0;
    for(int i=0;i<5;i++)
    {
        if(arr[i]>h)
        {
            h=arr[i];
        }


    }

    int flag=0;
    for(int i=1;i<=h;i++)
    {
        flag=0;
        for(int j=0;j<5;j++)
    {
        if(arr[j]==i)
        {
            flag++;
        }
    }
         if(flag==0)
         {
             cout<<i;
             break;

         }
    }
   /* cout<<l;
    cout<<h;*/
    return 0;
}
