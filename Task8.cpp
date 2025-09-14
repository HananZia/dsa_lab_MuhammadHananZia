#include <iostream>
#include <string>
using namespace std;

int findFirstOccurrence(const string& pat, const string& txt) {
    int M = pat.size();
    int N = txt.size();

    // empty pattern
    if (M == 0) return 0;

    // Naive search
    for (int i = 0; i <= N - M; i++) {
        int j;
        for (j = 0; j < M; j++) {
            if (txt[i + j] != pat[j]) {
                break;
            }
        }
        if (j == M) {
            return i; // return immediately on first match
        }
    }
    return -1; // return -1 on no match
}

int main() {
    // Test cases
    cout << "Pattern at beginning: "
         << findFirstOccurrence("AABA", "AABAACAADAABAABA") << endl; // 0

    cout << "Pattern at end: "
         << findFirstOccurrence("XYZ", "ABAXYZ") << endl; // 3

    cout << "Pattern not present: "
         << findFirstOccurrence("TEST", "WELCOME TO NUST") << endl; // -1

    cout << "Empty pattern: "
         << findFirstOccurrence("", "SOMETHINGWOULDBE") << endl; // 0

        cout << "Pattern at end: "
         << findFirstOccurrence("NUST", "SEECSISNUST") << endl; // 7

    cout << "Pattern not present: "
         << findFirstOccurrence("DSA", "OOPPROGRAMMING") << endl; // -1

    cout << "Empty pattern: "
         << findFirstOccurrence("", "NOTHINGTOWRITE") << endl; // 0

    return 0;
}
