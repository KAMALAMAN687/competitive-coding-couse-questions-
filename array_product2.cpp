#include<iostream>
using namespace std;
int main()
{
    int a[]={1,2,3,4},i;
    int answer[4];
    int product=1,p2=1;
    for(i=0;i<4;i++)
    {

        product*=a[i];
    }
    for(i=0;i<4;i++)
    {
        if (a[i]==0)
         continue;
        else
        p2*=a[i];
    }
    for(i=0;i<4;i++)
    {
        if(a[i]!=0)
        answer[i]=product/a[i];
        else
        answer[i]=p2;


    }
    cout<<"[";
    for(i=0;i<4;i++)
    {

        cout<<answer[i]<<",";

    }
    cout<<"]";
    return 0;
}
