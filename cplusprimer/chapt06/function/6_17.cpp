/**
 * File Name:   6_17.cpp
 * Author:      mchenyuxiang
 * Email:       csyuxiang1988@gmail.com
 * CreateTime:  2017/12/4 13:11
**/
#include <iostream>

using namespace std;

void is_upper(const string &s) {
    int cnt = 0;
    for (auto &i:s) {
        if (isupper(i)) {
            cout << "upper is " << i << endl;
            break;
        } else {
            cnt++;
        }
    }
    if (cnt == s.size() - 1) {
        cout << " no upper " << endl;
    }
}

void to_lower(string &s) {
    for (auto &i:s)
        i = tolower(i);
}

int main() {
    cout << "input a string:" << endl;
    string word;
    cin >> word;
    cout << "calls is_upper(): " << endl;
    is_upper(word);
    cout << "calls to_lower(): " << endl;
    to_lower(word);
    cout << "Afer to_lower(): " << word << endl;
    return 0;
}

