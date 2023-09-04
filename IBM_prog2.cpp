// Online C++ compiler to run C++ program online
#include <iostream>
#include<cstdlib>
using namespace std;

int main() {
    // Write C++ code here
   int s,d1=0,d2=0,sum=0;
   cout<<"Enter size";
   cin>>s;
   int arr[s][s];
   for(int i=0;i<s;i++)
   {
       for(int j=0;j<s;j++)
        {
            cout<<"enter elem";
            cin>>arr[i][j];
        }
   }
    for(int i=0;i<s;i++)
   {
       for(int j=0;j<s;j++)
        {
            if(i==j)
            {
                d1=d1+arr[i][j];
            }
        }
   }
   for(int i=0;i<s;i++)
   {
       for(int j=0;j<s;j++)
        {
            if(i+j==s-1)
            {
                d2=d2+arr[i][j];
            }
        }
   }


   /*cout<<d1;
   cout<<d2;*/
   sum=abs(d1-d2);
   cout<<sum;
    return 0;
}
