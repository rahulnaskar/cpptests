#include "libs.h"

using namespace std;

auto print = [](int n) {cout << n << endl;};

void rotate_example(vector<int>& list) {
    rotate(list.begin(), list.begin() + 2, list.end());
    for_each(list.begin(), list.end(), print);
}