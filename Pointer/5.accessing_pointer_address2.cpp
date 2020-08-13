#include <bits/stdc++.h>
using namespace std;
int main()
{
    int *p;
    cout<<p<<endl;//value
    cout<<&p<<endl;//address
    cout<<sizeof p<<endl;
    p=nullptr;
    cout<<p<<endl;

    double *q{nullptr};
    unsigned long long *r{nullptr};
    vector<int> *s{nullptr};
    vector<string> *u{nullptr};
    string *v{nullptr};

    cout<<sizeof q<<endl;
    cout<<sizeof *q<<endl;
    cout<<sizeof r<<endl;
    cout<<sizeof *r<<endl;
    cout<<sizeof s<<endl;
    cout<<sizeof u<<endl;
    cout<<sizeof *u<<endl;
    cout<<sizeof v<<endl;
    cout<<sizeof *v<<endl;

    return 0;
}
