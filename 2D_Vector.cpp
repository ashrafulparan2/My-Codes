#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector <vector<int>> movie_ratings
    {
        {1,2,3,4},
        {2,3,4,4},
        {3,3,2,1}
    };
    cout<< movie_ratings.at(0).at(1)<<endl;
    cout<< movie_ratings.at(1).at(1)<<endl;
    cout<< movie_ratings.at(0).at(2)<<endl;
}
