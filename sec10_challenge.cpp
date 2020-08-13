#include <iostream>
using namespace std;

int main()
{
    string a{"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    string b{"QWERTYUIOPASDFGHJKLZXCVBNMqwertyuiopasdfghjklzxcvbnm"};

    string s{};

    getline(cin,s);

    for(char c:s)
    {
        if(c>'A'&&c<'Z'||c>'a'&&c<'z')
        {
            size_t pos=a.find(c);
            cout<<b.at(pos);
        }
        else
            cout<<c;
    }
    cout<<endl;
    cout<<s<<endl;
}
