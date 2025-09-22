// COMSC-210 | Lab 12 | Justin Mikesell
// IDE used: Visual Studio Code 

#include <iostream>
#include <algorithm>  // for sort(), find()
#include <numeric>    // for accumulate()
#include <array>
#include <fstream>     
using namespace std;

const int SIZE = 30;   

int main() {
    // declarations
    array<int, SIZE> entries{};   // BART Powell St entries each day for 30 days
    ifstream fin("data.txt");

if (!fin) {
    cout << "Error unable to open data.txt\n";
    return 1;
}


    // read values from file to array
    for (int i = 0; i < SIZE; i++) {
        fin >> entries[i];
    }
    fin.close();

    // capacity/emptiness
    cout << "1.  Size: " << entries.size() << endl;
    cout << "2.  max_size(): " << entries.max_size() << endl;
    cout << "3.  Empty? " << (entries.empty() ? "True" : "False") << endl;

       // values (range loop)
    cout << "4.  Values: ";
    for (int v : entries) cout << v << " "; cout << endl;

    // element access
    cout << "5.  Front: " << entries.front() << endl;
    cout << "6.  Back: " << entries.back() << endl;
    cout << "7.  5th Element: " << entries.at(4) << endl;
    cout << "8.  6th Element: " << entries[5] << endl;
    cout << "9.  Address (data): " << entries.data() << endl;

    // find max, min, and sum
    cout << "10. Min: " << *min_element(entries.cbegin(), entries.cend()) << endl;
    cout << "11. Max: " << *max_element(entries.cbegin(), entries.cend()) << endl;
    cout << "12. Sum: " << accumulate(entries.cbegin(), entries.cend(), 0) << endl;
    cout << "13. Avg: " 
         << (accumulate(entries.begin(), entries.end(), 0.0) / entries.size()) << endl;

    //sorting
    sort(entries.begin(), entries.end());
    cout << "14. Sorted ascending: ";
    for (int v : entries) cout << v << " "; cout << endl;

    sort(entries.rbegin(), entries.rend());
    cout << "15. Sorted descending: ";
    for (int v : entries) cout << v << " "; cout << endl;