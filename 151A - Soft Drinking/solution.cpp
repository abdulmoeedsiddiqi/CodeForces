#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    int t_ml = ( k * l ) / nl ;
    int t_slices = c * d;
    int t_grams = (p / np);
    int toast = min( min(t_ml , t_slices) , t_grams ) / n ;
    cout << toast << endl;
    return 0;
}