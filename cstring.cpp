#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

int main()
{
    char last[50];
    char first[50];
    char full[50];
    char temp[50];

    cin>>first;
    cin>>last;

    strcpy(full,first);
    strcat(full," ");
    strcat(full,last);

    cout<<full<<endl;

    cin.getline(temp,50);
    cout<<temp<<endl;

    for(size_t i{0};i<strlen(full); i++)
    {
        if(isalpha(full[i]))
        {
            full[i]=toupper(full[i]);
        }
    }
    cout<<full<<endl;
}
