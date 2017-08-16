/// Here, fastScan() uses getchar_unlocked() to read from buffer
/// getchar_unlocked() is not an Standard C/C++ function rather than a POSIX one
/// Thus, this program will not run on Windows platform but on Linux

#include <bits/stdc++.h>

using namespace std;

//#define _WINDOWS

//#ifdef _WINDOWS
// no getchar_unlocked on Windows so just call getchar()
//inline int getchar_unlocked() { return getchar(); }
//#endif

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
    /// variable to indicate sign of input number
    bool negative = false;
    register int c;

    number = 0;

    /// extract current character from buffer
    c = getchar_unlocked();
    if (c == '-')
    {
        /// number is negative
        negative = true;

        /// extract the next character from the buffer
        c = getchar_unlocked();
    }

    /// Keep on extracting characters if they are integers
    /// i.e ASCII Value lies from '0'(48) to '9' (57)
    for (; (c > 47 && c < 58); c = getchar_unlocked())
        number = number *10 + c - 48;

    /// if scanned input has a negative sign, negate the
    /// value of the input number
    if (negative)
        number *= -1;
}
