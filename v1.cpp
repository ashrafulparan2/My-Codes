#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double c,f,c1;
    int t;
    cin>>t;
    while(t--)
    {
        cin>>c>>f;
        c1=(f*5)/9;
        cout<<setprecision()<<c+c1<<endl;
        //printf("%.2lf\n",c+c1);
    }
}
