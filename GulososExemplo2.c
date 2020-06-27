// Data 20/05/14 - Versão 1.0

#include <vector>
#include <queue>
#include <iostream>
#include <stdlib.h>
#define forn(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
int main()
{
    int n,x,i,a,b,custo;
    priority_queue <int, vector<int>, greater<int> > q;
    cin >> n;
    forn(i,n)
    {
        cin >> x;
        q.push(x);
    }

    custo = 0;
    forn(i,n-1)
    {
        a = q.top();
        q.pop();
        b = q.top();
        q.pop();
        cout << i+1 << "Merge com custo :" << a+b << endl;
        custo += a+b;
        q.push(a+b);
    }
    cout << custo;
    system("PAUSE");
    return 0;
}
