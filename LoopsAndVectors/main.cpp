#include <iostream>
#include <vector>

using namespace std;

int main() {
    
    char menu;
    bool check = 0;
    vector <int> vec;
    
    do {        
        float sum = 0.0;
        int n;
        int small;
        int large;
        cout << "Choice:\nP - Print numbers\nA - Add a number\nM - Display mean of the numbers\nS - Display the smallest number\nL - Display the largest number\nQ - Quit" << endl;
        cout << "Type: ";
        cin >> menu;
        
        switch(menu) {
            case 'P':
            case 'p':
                if (vec.size() != 0) {
                    cout << "[ ";
                    
                    for (int number: vec) {
                        cout << number << " ";
                    }
                    cout << "]" << endl;
                }
                else {
                    cout << "[] - empty" << endl << endl;
                }
                
                break;
                
            case 'A':
            case 'a':
                cout << "Add number: ";
                cin >> n;
                
                vec.push_back(n);
                
                cout << n << " added." << endl << endl;
                
                break;
                
            case 'M':
            case 'm':
                    if (vec.size() != 0) {         
                        for (int number: vec) {
                            sum += number;
                        }
                        cout << sum/vec.size() << endl;
                    }
                    else {
                        cout << "[] - empty" << endl << endl;
                    }
                break;
                
            case 'S':
            case 's':
                if (vec.size() != 0) {
                    small = vec.at(0);
                    for (int number: vec) {
                        if (number < small) {
                            small = number;
                        }
                    }
                cout << "Smallest: " << small << endl << endl;
                }
                else {
                    cout << "[] - empty" << endl << endl;
                }
                break;
            case 'L':
            case 'l':
                if (vec.size() != 0) {
                    large = vec.at(0);
                    for (int number: vec) {
                        if (number > large) {
                            large = number;
                        }
                    }
                    cout << "Largest: " << large << endl << endl;
                }
                else {
                    cout << "[] - empty" << endl << endl;
                }
                break;
            
            case 'Q':
            case 'q':
                cout << "Bye" << endl;
                check = 1;
                break;
            default:
                cout << "Illegal choice" << endl;
                break;
        } 
    } while (!check);
 
    return 0;
}
