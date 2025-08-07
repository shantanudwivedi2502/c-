/*#include <iostream>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false;

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (isPrime(num))
        cout << num << " is a prime number\n";
    else
        cout << num << " is not a prime number\n";

    return 0;
}*/
/*#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num, original, sum = 0, digits = 0;
    cout << "Enter a number: ";
    cin >> num;
    original = num;

    int temp = num;
    while (temp != 0) {
        digits++;
        temp /= 10;
    }

    temp = num;
    while (temp != 0) {
        int digit = temp % 10;
        sum += pow(digit, digits);
        temp /= 10;
    }

    if (sum == original)
        cout << original << " is an Armstrong number\n";
    else
        cout << original << " is not an Armstrong number\n";

    return 0;
}*/
/*#include <iostream>
using namespace std;

int main() {
    int num, sum = 0;
    cout << "Enter a number: ";
    cin >> num;

    while (num != 0) {
        sum += num % 10;
        num /= 10;
    }

    cout << "Sum of digits = " << sum << endl;
    return 0;
}*/
/*#include <iostream>
using namespace std;

int main() {
    int num = 12345, reversed = 0;
    while (num != 0) {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }
    cout << "Reversed number: " << reversed << endl;
    return 0;
}*/
/*#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 22, 5, 90, 56};
    int n = sizeof(arr)/sizeof(arr[0]);
    int maxVal = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > maxVal) maxVal = arr[i];
    }

    cout << "Largest element: " << maxVal << endl;
    return 0;
}*/
#include <iostream>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int num = 29;
    cout << (isPrime(num) ? "Prime" : "Not Prime") << endl;
    return 0;
}





