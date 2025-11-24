#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int total_drink = k * l;
    int total_slices = c * d;
    int total_salt = p;

    int toast_by_drink = total_drink / (n * nl);
    int toast_by_slices = total_slices / n;
    int toast_by_salt = total_salt / (n * np);

    cout << min(min(toast_by_drink, toast_by_slices), toast_by_salt);
}