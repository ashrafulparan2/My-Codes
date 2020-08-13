#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s1;
    string s2{"Frank"};
    string s3{s2};
    string s4{"Frank", 3};
    string s5{s3, 0, 2};
    string s6(3, 's');
    string s7;
    s7 = "C++ Rocks!";
    string s8{"Hello"};
    s8 = s7;

    string p1{"C++"};
    string p2{"is a powerful"};
    string t;
    t = p1 + " " + p2 + " language";
    cout<<t<<endl;;

    s1="Frank";
    cout<<s1[0]<<endl;
    cout<<s1.at(0)<<endl;

    s1.at(0)='P';
}
