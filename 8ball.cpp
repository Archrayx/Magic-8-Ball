#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
  while(true){

    int ran = (std::rand() % 3) + 1;
    string answer = "";
    if (ran == 1)
      {
        cout << "what is your question: " << endl;
        cin >> answer;
        cout << "no" << endl;
      }
    if (ran == 2)
      {
        cout << "what is your question: " << endl;
        cin >> answer;
        cout << "yes" << endl;
      }
    if (ran == 3)
      {
        cout << "what is your question: " << endl;
        cin >> answer;
        cout << "maybe" << endl;
      }
    }
}
