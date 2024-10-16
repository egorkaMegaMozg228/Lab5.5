#include <iostream>
using namespace std;
int f(int m1, int n1,int num)
{
    int x1 = m1 - n1;
    int x2 = n1;
    if (m1 == 1 || n1 == 1) return 1;
    else
    if (x1 <= m1 / 2 && x2 > 0) {
        x1++;
        x2--;
        num++;
        
       1 * f(m1, n1-1, num);
    }
    else
    {
        return num;
    }
}

int main()

{
    int m = 0, n = 0;
    cout << "m = "; cin >> m;
    cout << "n = "; cin >> n;
    if (m == 1 || n == 1) cout << 1;
    else if (m < n) cout << f(n, m,0);
    else if (m == n) cout << 1 - f(m, m - 1,0);
    else cout << f(m, n - 1, 0) + f(m - n, n, 0);
    return 0;
}