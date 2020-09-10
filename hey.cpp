#include <iostream>

using namespace std;







int main()
{
  int secret = 0;
  string chair_count;
  do {
    cout << " type in number 1-10: ";
    cin >> secret;
  }
  while (secret != 7);

  cout << " input the number of chairs you have: ";
  cin >> chair_count;

  cout << "you have " << chair_count << " chairs" << endl;

  string sleep = "what if i told you that your name is wrong";
  cout << sleep << endl;




  return 0;
}
