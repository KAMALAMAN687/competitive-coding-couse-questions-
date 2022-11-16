#include<iostream>
using namespace std ;
int main()
{
    cout<<"enter a number";
    int a,i,j,c,b,rev=0;
    cin>>a;
    c=a;
    if(a<0)
    {
        cout<<"false";
    }
    else
    {
        while(a)
        {
            b=a%10;
            rev=rev*10+b;
            a=a/10;

        }
        if(rev==c)
        {
            cout<<"true";
        }
        else
        cout<<"false";

    }

}