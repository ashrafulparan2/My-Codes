#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    string s1{"Apple"};
    string s2{"Banana"};
    string s3{s1};
    string s4{"apple"};

    cout<<boolalpha;
    cout<<(s2>s1)<<endl;
    cout<<(s3==s1)<<endl;
    cout<<(s4<s3)<<endl;

    string a{"Assertive"};
    //for
    for(size_t i{0};i<a.length();i++)
        cout<<a.at(i);
    cout<<endl;
    //range
    for(char c:a)
        cout<<c;
    cout<<endl;

    //substring

    a="This is a test";

    cout<<a.substr(0,4)<<endl;
    cout<<a.substr(5,2)<<endl;
    cout<<a.substr(10,4)<<endl;

    //find

    a="the secret word is booo";
    string b{};

    cin>>b;

    size_t pos=a.find(b);

    if(pos!=string::npos)
        cout<<pos<<endl;
    else
        cout<<"N\A"<<endl;

}
