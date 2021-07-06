//variant #1
#include <iostream>
#include <cmath>

using namespace std;

long random(long start, long end)
{
    return start + (rand() + 1) % (end - start + 1);
}

float randomf(long start, long end, long dec)
{
    return roundf((start + (rand() / (float)RAND_MAX) * (end - start)) * dec) / dec;
}

void task1()
{
    long n;
    long m;
    long k;

    cout << "Enter n: ";
    cin >> n;
    cout << "Enter m: ";
    cin >> m;
    cout << "Enter k: ";
    cin >> k;

    for (int i = 0; i < m; i++)
    {
        cout << random(-25, 30) << ', ';
    }
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        cout << randomf(1, 5, 100) << ', ';
    }
}

void task2()
{
    long a;
    long b;

    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;

    const long n = 20;
    long arr[n];

    for (int i = 0; i < n; i++)
        arr[i] = random(a, b);

    //#1
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
            sum += arr[i];
    }

    //#2
    int max = arr[0];
    int max_index = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            max_index = i;
        }
    }

    int min = arr[max_index];
    int min_index = max_index;
    for (int i = min_index; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
            min_index = i;
        }
    }

    int pow = 1;
    for (int i = max_index; i < min_index; i++)
    {
        pow *= arr[i];
    }
}

int main()
{
    
}