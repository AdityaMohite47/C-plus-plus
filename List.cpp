// List is a container which is a bidirectional linear list which provides the efficient insertion and deletion of data...

// Ideally list is used to make the insertion and deletion operations faster and it's priority is not accessing the data from the memory
// faster...

#include <iostream>
#include <list>
#include <iterator>

void display(std::list<int> &a)
{
    std::list<int>::iterator iter;
    iter = a.begin();

    std::cout << "Displaying Your List : " << std::endl;
    for (size_t i = 0; i < a.size(); i++)
    {
        std::cout << *iter << " ";
        iter++;
    }
}
int main()
{
    std::list<int> list; // Empty list of 0 length.

    // Inserting elements in a list
    list.push_back(6);
    list.push_back(69);
    list.push_back(22);
    list.push_back(90);
    list.push_back(33);
    list.push_back(8);
    list.push_back(59);

    // display(list);

    // Iterating list
    std::list<int> list2(3); // Empty list of size 3.
    std::list<int>::iterator it = list2.begin();

    // for (size_t i = 0; i < list2.size(); i++)
    // {
    //     std::cout << "Enter a value" << std::endl;
    //     std::cin >> *it;
    //     it++;
    // }

    list2.push_back(55);
    list2.push_back(1);
    list2.push_back(34);

    // display(list2);

    // Removing an element of an list

    // list.pop_front(); // deleting element from front

    // list.pop_back(); // deleting element from back

    // list.remove(8); // deleting specific value , can't multidelete from between...

    // display(list);

    // Sorting a list
    // list.sort();
    // display(list);

    // Merging list [without sorting]

    // std::cout << "Before Merging" << std::endl;
    // display(list);
    // std::cout << std::endl;

    // list.merge(list2);

    // std::cout << "After Merging ";
    // display(list);

    // Merging with sorting
    // list.sort();
    // list2.sort();

    // std::cout << std::endl
    //           << std::endl;

    // list.merge(list2);

    // display(list);

    // reversing the list

    // list.reverse();
    // display(list);

    // empty() checks whether the list is empty or

    if (list.empty() == true)
    {
        return 0;
    }
    else
    {
        std::cout << "Lists are not empty" << std::endl;
        return 0;
    }
}