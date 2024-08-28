#include <iostream>

using namespace std;

int main() {


    srand(time(NULL));

        int num = rand() % 6;

    cout << num << endl;
    return 0;
}
