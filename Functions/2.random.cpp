#include <bits/stdc++.h>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
    int random_number{};
    size_t cnt{10};
    int mn{1},mx{6};

    //cout<<RAND_MAX<<endl;

    srand(time(nullptr));

    for(size_t i{0};i<=cnt;i++)
        {
            random_number = rand()%mx+mn;
            cout<<random_number<<endl;
        }
}
