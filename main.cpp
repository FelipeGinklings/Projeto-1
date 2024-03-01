#include <iostream>

using namespace std;

int main() {
    int a, b, c, some;

    cout << "Please enter a number:\n";
    cin >> a >> b >> c;

    some = a + b + c;

    cout << "The result is: " << some;

    return 0;
}
// #include <iostream>
// using namespace std;

// int main() {
//   int some = 0;
//   int add;

//   for (int i = 0; i < 3; i++) {
//     cout << "Please enter a number: ";
//     cin >> add;

//     some += add;
//   }

//   cout << "The result is: " << some;

//   return 0;
// }