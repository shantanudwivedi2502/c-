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
/*#include <iostream>
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
}*/
/*#include <iostream>
using namespace std;

int main() {
    int arr[] = {12, 35, 1, 10, 34, 1};
    int n = sizeof(arr)/sizeof(arr[0]);

    int first = INT_MIN, second = INT_MIN;
    for (int i = 0; i < n; i++) {
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        } else if (arr[i] > second && arr[i] != first) {
            second = arr[i];
        }
    }

    if (second == INT_MIN) cout << "No second largest element\n";
    else cout << "Second largest element: " << second << endl;
}*/
/*#include <iostream>
#include <algorithm>
using namespace std;

bool isAnagram(string s1, string s2) {
    if (s1.length() != s2.length()) return false;
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());
    return s1 == s2;
}

int main() {
    string s1 = "listen", s2 = "silent";
    cout << (isAnagram(s1, s2) ? "Anagram" : "Not Anagram");
}*/
/*#include <iostream>
using namespace std;

int fibonacci(int n) {
    if (n <= 1) return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n = 10;
    cout << "Fibonacci series: ";
    for (int i = 0; i < n; i++) {
        cout << fibonacci(i) << " ";
    }
}*/
#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int target) {
    int left = 0, right = n - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target) return mid;
        else if (arr[mid] < target) left = mid + 1;
        else right = mid - 1;
    }
    return -1;
}

int main() {
    int arr[] = {1, 3, 5, 7, 9};
    int n = sizeof(arr)/sizeof(arr[0]);
    int target = 7;

    int result = binarySearch(arr, n, target);
    if (result != -1) cout << "Element found at index " << result;
    else cout << "Element not found";
}








