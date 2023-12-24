// Maps are the containers used to store key value pairs Ex {student:student1 , marks:<some number>}
// Map is an associative array...

#include <iostream>
#include <map>
#include <iterator>
int main()
{
    // Creating and inserting in a map
    std::map<std::string, int> Result;
    Result["Aditya"] = 88;
    Result["Alok"] = 89;
    Result["Amit"] = 77;
    Result.insert({"Ankush" , 79});
    
    std::map<std::string, int>::iterator iter = Result.begin();

    for (; iter != Result.end(); iter++)
    {
        std::cout << (*iter).first << " " << (*iter).second << "\n";
    }

    // (*iterator).<number_member> ; number = first , second , third and so on...

}