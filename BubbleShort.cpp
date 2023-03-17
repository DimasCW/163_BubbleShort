// BubbleShort.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int a[20];a
int n;

void input() {
    while (true) {
        cout << "Masukkan banyaknhjya elemen pada array : ";
        cin >> n;
        if (n <= 20)
            break;
        else {
            cout << "\nArray dapat mempunyai maksimal 20 elemen.\n";
        }
    }
    cout<<endl;
    cout << "=========================="<<endl;
    cout << "Masukkan Elemen Array"<< endl;
    cout << "=========================="<<endl;

    for (int i = 1; i < n; i++) {
        cout << "Data ke-" << (i + 1) << ":";
        cin >> a[i];
    }

}


void display() {
    cout << endl;
    cout << "==========================" << endl;
    cout << "Elemen Array yang telah tersusun" << endl;
    cout << "==========================" << endl;

    for (int j = 0; j < n; j++) {
        cout << a[j]<<endl;
    }
    cout << endl;
}


int main()
{
    std::cout << "Hello World!\n";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
