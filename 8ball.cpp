#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int ran = 0;
    while(ran == 0)
    {
        ran = (std::rand() % 3) + 1;
        string answer = "";
        if (ran == 1)
        {
            cout << "what is your question: " << endl;
            cin >> answer;
            cout << "no" << endl;
        }
        else if (ran == 2)
        {
            cout << "what is your question: " << endl;
            cin >> answer;
            cout << "yes" << endl;
        }
        else if (ran == 3)
        {
            cout << "what is your question: " << endl;
            cin >> answer;
            cout << "maybe" << endl;
        }
    }
    return 0;
}
