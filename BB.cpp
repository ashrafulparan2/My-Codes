#include <iostream>
using namespace std;

int main()
{
    int t,i,c{0},d{0},e{0};
    char s;
    cin>>t;
    for ( i=0 ; i<t; i++)
    {
        cin>>s;
        if(s=='U')
        {
            c++;
        }
        if(s=='N')
        {
            d++;
        }
        if(s=='S')
        {
            e++;
        }
    }
    if(c<d&&c<e)
        printf("%d\n",c);
    else if(d<c&&d<e)
        printf("%d\n",d);
    else
        printf("%d\n",e);

}
