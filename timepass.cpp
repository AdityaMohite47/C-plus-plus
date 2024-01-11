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

// #include <iostream>
// #include <map>

// int main() {
//     // Create a map with some key-value pairs
//     std::map<int, std::string> myMap;
//     myMap[1] = "One";
//     myMap[2] = "Two";
//     myMap[3] = "Three";
//     myMap[4] = "Four";
//     myMap[5] = "Five";

//     // Search for a key in the map
//     int keyToFind = 3;
//     auto it = myMap.find(keyToFind);

//     // Check if the key is found
//     if (it != myMap.end()) {
//         // Key found, print the corresponding value
//         std::cout << "Value for key " << keyToFind << ": " << it->second << std::endl;
//     } else {
//         // Key not found
//         std::cout << "Key " << keyToFind << " not found in the map." << std::endl;
//     }

//     return 0;
// }


#include <iostream>
#include <map>

int main() {
    std::map<int, std::string> map1;
    std::map<int, std::map<int, std::string>::iterator> linkMap;

    // Populate the first map
    map1[1] = "Value1";
    map1[2] = "Value2";
    map1[3] = "Value3";

    // Populate the second map with iterators from the first map
    for (auto it = map1.begin(); it != map1.end(); ++it) {
        linkMap[it->first] = it;
    }

    // Access values using the linked keys
    std::cout << "Value linked to key 2: " << linkMap[2]->second << std::endl;

    // Display the contents of map1
    std::cout << "Contents of map1:" << std::endl;
    for (const auto& pair : map1) {
        std::cout << "Key: " << pair.first << ", Value: " << pair.second << std::endl;
    }

    // Display the contents of linkMap
    std::cout << "Contents of linkMap:" << std::endl;
    for (const auto& pair : linkMap) {
        std::cout << "Linked Key: " << pair.first << ", Value: " << pair.second->second << std::endl;
    }

    return 0;
}

