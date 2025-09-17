#include <iostream>
#include <stack>
using namespace std;

string reverseString(string str) {
    stack<char> s;
    for (char c : str) {
        s.push(c);
    }
    string reversed = "";
    while (!s.empty()) {
        reversed += s.top();
        s.pop();
    }
    return reversed;
}

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    string result = reverseString(str);
    cout << "Reversed string: " << result << endl;

    return 0;
}
