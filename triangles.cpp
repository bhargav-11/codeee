#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    double x,y,z;
    double x1,y1,x2,y2,x3,y3;
    int count=0;
    for(int i=0;i<n;i++)
    {
        cin>>x1>>y1>>x2>>y2>>x3>>y3;
        x=((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1));
        y=((x3-x2)*(x3-x2))+((y3-y2)*(y3-y2));
        z=((x1-x3)*(x1-x3))+((y1-y3)*(y1-y3));
        if(x<0)
            x*=-1;
        if(y<0)
            y*=-1;
        if(z<0)
            z*=-1;
        x=sqrt(x);
        y=sqrt(y);
        z=sqrt(z);
        //cout<<x<<endl<<y<<endl<<z<<endl;
        if(x+y==z || x+z==y || y+z==x)
        {
            continue;
        }
        else if(x*x+y*y==z*z || y*y+z*z==x*x || z*z+x*x==y*y)
        {
            count++;
        }
    }
    cout<<count;
    return 0;
}
