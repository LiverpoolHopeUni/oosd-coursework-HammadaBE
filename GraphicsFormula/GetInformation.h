#include <iostream>
using namespace std;


	class GetInformation
	{
		public:

		string access_level;
		cout << "Hello! Are you user or guest? ";
		cin >> access_level; // Get user input from the keyboard
		cout << "Hello " << access_level << "\n";

		if (access_level == "user") {
			cout << "You can control and access to the memory" << endl;

		}
		else if (access_level == "guest") {
			cout << "You can control \n";

		}
		else {
			cout << "Please, enter a correct option " << endl;
		}
		return 0;

	};