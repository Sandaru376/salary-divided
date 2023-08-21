#include <iostream>
using namespace std;

int main() {
    int salary;

    cout << "Enter your salary: ";
    cin >> salary;



    int choise;
    cout << "press number 1  "<<endl;
    cin >> choise;


    switch (choise) {
        case 1: {
            int notes = salary / 5000;
            salary = salary % 5000;
            cout << "Number of 5000 notes: " << notes << endl;
            break;
        }
    }
    switch (choise){
        case 1: {
            int notes = salary / 1000;
            salary = salary % 1000;
            cout << "Number of 1000 notes: " << notes << endl;
            break;
        }

    }

    switch (choise){
        case 1: {
            int notes = salary / 500;
            salary = salary % 500;
            cout << "Number of 500 notes: " << notes << endl;
            break;
        }
    }

    switch (choise){
        case 1: {
            int notes = salary / 100;
            salary = salary % 100;
            cout << "Number of 100 notes: " << notes << endl;
            break;
        }

    }

        switch (choise){
        case 1: {
            int notes = salary / 50;
            salary = salary % 50;
            cout << "Number of 50 notes: " << notes << endl;
            break;
        }

    }

    return 0;
}
