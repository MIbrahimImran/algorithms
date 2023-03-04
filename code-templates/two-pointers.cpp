#include<iostream>
#include<vector>

using namespace std;

void twoPointersOppositeEnd(vector<int> array) {
    int L = 0;
    int R = array.size() - 1;

    while (L < R) {
        cout << array[L] << " " << array[R] << endl;
        L++;
        R--;
    }
}

void twoPointersExhaustBothEnds(vector<int> array) {
    int L = 0;
    int R = 0;

    while (L < array.size() && R < array.size()) {
        if(array[L] < 5) {
            L++;
        } else {
            R++;
        }
    }

    while(L < array.size()) {
        cout << array[L] << endl;
        L++;
    }

    while(R < array.size()) {
        cout << array[R] << endl;
        R++;
    }
}


int main() {
    vector<int> array = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    cout << "Two Pointers Opposite End" << endl;
    twoPointersOppositeEnd(array);

    cout << "Two Pointers Exhaust Both Ends" << endl;
    twoPointersExhaustBothEnds(array);
    return 0;
}