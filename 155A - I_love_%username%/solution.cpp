#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int max, min;
    max = min = arr[0];
    int cnt = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            cnt++;
            max = arr[i];
        }
        else if (arr[i] < min)
        {
            cnt++;
            min = arr[i];
        }
    }

    cout << cnt;
    return 0;
}