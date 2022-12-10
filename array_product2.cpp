#include<iostream>
using namespace std;
int main()
{
    int a[]={-1,1,0,-3,3},i,j=5;
    int answer[j];
    int product=1,p2=1,count=0;
     for(i=0;i<j;i++)
    {
        if(a[i]==0)
            count++;
    }
    if(count<=1)
    {


    for(i=0;i<j;i++)
    {

        product*=a[i];
    }
    for(i=0;i<j;i++)
    {
        if (a[i]==0)
         continue;
        else
        p2*=a[i];
    }
    for(i=0;i<j;i++)
    {
        if(a[i]!=0)
        answer[i]=product/a[i];
        else
        answer[i]=p2;


    }


    }
 else
 {
     for(i=0;i<j;i++)
    {

        answer[i]=0;

    }

 }
 cout<<"[";
    for(i=0;i<j;i++)
    {

        cout<<answer[i]<<"  ";

    }
    cout<<"]";
    return 0;
}
