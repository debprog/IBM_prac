#include <iostream>
using namespace std;
int main() {
    string s,w="",f="";
    cout<<"Enter string";
    cin>>s;
    int c=0,l;
     l=s.length();
    // cout<<l;
    if(l%4!=0)
    {
        cout<<"invalid";

    }
    else
    {
      //  cout<<"dd";
        for(int j=0;j<l;j++)
        {
           w=w+s[j];
           c++;
           if(c==4)
           {
              // cout<<w<<endl;
               if(w=="0000")
               {
                   f=f+"0";
               }
               else if(w=="0001")
               {
                  f=f+"1";

               }
                else if(w=="0010")
               {
                  f=f+"2";

               }
                else if(w=="0011")
               {
                  f=f+"3";

               }
                else if(w=="0100")
               {
                  f=f+"4";

               }
               else if(w=="0101")
               {
                  f=f+"5";

               }
                else if(w=="0110")
               {
                  f=f+"6";

               }
                else if(w=="0111")
               {
                  f=f+"7";

               }
                else if(w=="1000")
               {
                  f=f+"8";

               }
                else if(w=="1009")
               {
                  f=f+"9";

               }
                else if(w=="1011")
               {
                  f=f+"-";

               }
                else if(w=="1100")
               {
                  f=f+"*";

               }
                else if(w=="1101")
               {
                  f=f+"/";

               }
               c=0;
               w="";
           }

        }
    }
   cout<<f;

    return 0;
}
