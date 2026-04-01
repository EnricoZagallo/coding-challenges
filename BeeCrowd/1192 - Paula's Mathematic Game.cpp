#include <iostream>
#include <cctype>
using namespace std;

 
int main() {
    int N;
    cin >> N;

    for (int i = 0; i < N; i++) {
        string s;
        cin >> s;

        char primeiro = s[0];
        char letra = s[1];
        char segundo = s[2];

        int num1 = primeiro - '0';
        int num2 = segundo - '0';

        if (primeiro == segundo) {
            cout << num1 * num2 << endl;
        } else if (isupper(letra)) {
            cout << num2 - num1 << endl;
        } else {
            cout << num1 + num2 << endl;
        }
    }

    return 0;
}
