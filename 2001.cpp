#include<iostream>
#include<math.h>
#include<iomanip>

using namespace std;

int main()
{
    int x1,y1,x2,y2;
    int a,b;
    double ans;
    while(cin>>x1>>y1>>x2>>y2)
    {
        a=pow((x2-x1),2);
        b=pow((y2-y1),2);
        ans=sqrt(a+b);
        cout.setf(ios::fixed);
        cout.setf(ios::showpoint);
        cout.precision(2);
        cout<<setprecision(2)<<ans<<endl;
    }
    return 0;
}
