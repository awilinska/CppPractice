#include <iostream>
#include <string>

using namespace std;

int main() {
    string str {};
    string fund {};
    getline(cin,str);
    string pyramid {str};
    
    int pos = str.length();
    
    for (int n = 1; n <= pos; n++) {
        string str_tmp = str.substr(0,n);
        
        int spaces = pos - n;
        for (int x = 0; x < spaces; x++) {
            cout << " ";
        }
        
        for (char c: str_tmp) {
            cout << c;
        }
        
        for (size_t i = 0; i < str_tmp.length() - 1; i++) {
            int position = (str_tmp.length() - 2) - i;
            char n { str.at(position) };
            cout << n;
        }
        cout << endl;
    }
    
    return 0;
}
