// #include <iostream>
// #include <iomanip>
// using namespace std;

// int main()
// {

//     int matirx1[2][2] = {{}, {}};
//     int matirx2[2][2] = {{}, {}};

//     cout << "Enter the values for matrix 1" << endl;
//     cin >> matirx1[0][0] >> matirx1[1][0] >> matirx1[0][1] >> matirx1[1][1];

//     cout << "Matrix 1 :" << endl;

//     cout << matirx1[0][0] << "     " << matirx1[1][0] << endl
//          << endl
//          << matirx1[0][1] << "     " << matirx1[1][1] << endl;

//     cout << "Enter the values for matrix 2" << endl;
//     cin >> matirx2[0][0] >> matirx2[1][0] >> matirx2[0][1] >> matirx2[1][1];

//     cout << "Matrix 2 :" << endl;

//     cout << matirx2[0][0] << "     " << matirx2[1][0] << endl
//          << endl
//          << matirx2[0][1] << "     " << matirx2[1][1];

// }

#include <iostream>
#include <map>

int main() {
    // Create a map with some key-value pairs
    std::map<int, std::string> myMap;
    myMap[1] = "One";
    myMap[2] = "Two";
    myMap[3] = "Three";
    myMap[4] = "Four";
    myMap[5] = "Five";

    // Search for a key in the map
    int keyToFind = 3;
    auto it = myMap.find(keyToFind);

    // Check if the key is found
    if (it != myMap.end()) {
        // Key found, print the corresponding value
        std::cout << "Value for key " << keyToFind << ": " << it->second << std::endl;
    } else {
        // Key not found
        std::cout << "Key " << keyToFind << " not found in the map." << std::endl;
    }

    return 0;
}
