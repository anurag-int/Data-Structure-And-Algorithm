//       operations Insertion, Deletion, Searching     ----------->   Time Complexity in Map ----> O(log n)  which in unordered_map --------> O(1)

#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;

int main()
{
    // creation <-------------------------------------------------
    unordered_map<string, int> m;

    // insertion
    // 1.

    pair<string, int> p = make_pair("Anurag", 3);
    m.insert(p);


    // 2
    pair <string, int> pair2("Gupta", 2);
    m.insert(pair2);

    // 3
    m["Programming"] = 1;

    // what will happen if we push some new data into which already exists
    // At the first time it will create and at second time it will going to update.
    // always it will 
    m["Programming"] = 2;



    // search  <-----------------------------------------------------
    // m.at will going to give the i.second value of the string
    cout << m["Anurag"] << endl;
    cout << m.at("Gupta") << endl;


    // This will going to create a new entry for new data. and initilize as 0.
    cout << m["Aditya"] << endl;
    cout << m.at("Aditya") << endl;


    // Size <--------------------------------------------------------
    // return the size of the map.

    cout << m.size() << endl;



    // to check presence or not <-----------------------------------------------------
    // return the bool if the key is present it will going to return 1 else 0.

    cout << m.count("Anurag") << endl;


    // erase <-------------------------------------------------
    // erase one count from the it.second (if count = 3) than count will update to count = 2.

    cout << m.erase("Anurag") << endl;
    cout << m["Anurag"] << endl;

    // Traverse <----------------------------------------------------------------
    // Simple : only for traversing

     for(auto i : m)
     {
        cout << i.first << " " << i.second << endl;
     }


     // Iterator <----------------------------------------------------
     // For accessing all the elements one by one .

        

        // creating iterator for one by one traverse the map
        unordered_map<string, int>  :: iterator it = m.begin();

        while(it != m.end())
        {
            cout << it->first << " " << it->second << endl;
            it++;
        }


    return 0;
}