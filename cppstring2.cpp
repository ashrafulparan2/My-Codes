#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s1{"Frank"};

    for(char c:s1)
        cout<<c<<endl;
    for(int c:s1)
        cout<<c<<endl;

    string s2{"This is a test"};

    cout<<s2.substr(0,4)<<endl;
    cout<<s2.substr(5,2)<<endl;
    cout<<s2.substr(10,4)<<endl;

    cout<<s2.find("This")<<endl;
    cout<<s2.find("is")<<endl;
    cout<<s2.find("e")<<endl;
    cout<<s2.find("test")<<endl;
    cout<<s2.find("is",4)<<endl;
    cout<<s2.find("xx")<<endl;

    cout<<s2.erase(0,5)<<endl;
    cout<<s2<<endl;
    cout<<s2.erase(5,4)<<endl;
    cout<<s2<<endl;
    s2.clear();
    cout<<s2<<endl;

    string name{"Ashraful"};

    cout<<name.length()<<endl;

    name += " Paran";

    cout<<name<<endl;

    string s;
    //cin>>s;
    //cout<<s<<endl;

    getline(cin, s);
    cout<<s<<endl;

    getline(cin, s, 'x');
    cout<<s<<endl;

}
