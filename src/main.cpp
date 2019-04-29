#include <iostream>
#include <climits>
using namespace std;

int main()
{
  cout << "Welcome to Ryan's Room Cleaning Service!\n";

  cout << "How many rooms would you like to have cleaned?\n";

  int number_of_rooms{0};
  cin >> number_of_rooms;

  cout << "You indicated that you would like to have "
       << number_of_rooms
       << " room(s) cleaned."
       << endl;

  cout << "Estimate for service:\n";

  cout << number_of_rooms
       << " rooms serviced"
       << endl;

  cout << "Price per room: $"
       << 30
       << endl;

  cout << "Cost: $"
       << 30 * number_of_rooms
       << endl;

  cout << "Tax: $"
       << 30 * number_of_rooms * 0.06
       << endl;

  cout << "========================================\n";

  cout << "Total Estimate: $"
       << (30 * number_of_rooms) + (30 * number_of_rooms * 0.06)
       << endl;

  cout << "Estimate valid for "
       << 30
       << " days"
       << endl;

  return 0;
}
