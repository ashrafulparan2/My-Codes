#include <bits/stdc++.h>
using namespace std;

template <typename t>
void print(priority_queue<t> s)
{
    while (s.empty() == 0)
    {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
}

int32_t main()
{

    priority_queue<int> q; //uses vetor by default

    q.push(2);
    q.push(5);
    q.push(3);
    q.push(2);

    print(q);

    cout << q.top() << endl;

    q.pop();

    cout << q.top() << endl;

    for (int i : {4, 5, 6, 7, 3, 2, 100, 23, 45, 55})
    {
        q.push(i);
    }

    print(q);

    cout << q.size() << endl;

    return 0;
}
