#include <bits/stdc++.h>

using namespace std;

void fastScan(int &number);

int main()
{
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);

    int n;

    while (true) {
        fastScan(n);

        if (!n) {
            break;
        }
        printf("%d\n", n);
    }

    return 0;
}

void fastScan(int &number)
{
    /// Variable to indicate sign of input number
    bool negative = false;
    register int c;

    number = 0;

    /// Extract current character from buffer
    c = getchar();
    if (c == '-')
    {
        /// Number is negative
        negative = true;

        /// Extract the next character from the buffer
        c = getchar();
    }

    /// Keep on extracting characters if they are integers
    /// i.e ASCII Value lies from '0'(48) to '9' (57)
    for (; (c > 47 && c < 58); c = getchar())
        number = number *10 + c - 48;

    /// If scanned input has a negative sign,
    /// Negate the value of the input number
    if (negative)
        number *= -1;
}
