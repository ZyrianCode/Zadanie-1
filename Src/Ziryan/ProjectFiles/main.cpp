#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

enum class EventTypes {  //список событий
    ARRIVAL = 1,
    LEAVE = 2,
    SWAP = 3
};

int main() {
    int EventType, AmountOfEvents;
    string Name; 
    vector<string> a;

    cin >> AmountOfEvents;
    for (int i = 0; i < AmountOfEvents; i++)
    {
        cin >> EventType;
        if (EventType == static_cast<int>(EventTypes::ARRIVAL))
        {
            cin >> Name;
            a.push_back(Name);
        }
        else if (EventType == static_cast<int>(EventTypes::LEAVE))
        {
            auto lastElement = a.end() - 1;
            cout << *lastElement << endl;

            if (!a.empty()) a.pop_back();
        }
        else if (EventType == static_cast<int>(EventTypes::SWAP))
        {
            iter_swap(a.begin(), a.end() - 1);
        }
    }
}
