#include <iostream>
using namespace std;

template <typename type>
class input {
public:
	input(char *prompt_message, type min_value, type max_value) {
		type input_value;
		do {
			cout << prompt_message << ": ";
			cin >> input_value;
		} while (!(input_value >= min_value && input_value <= max_value));
	}
};

int main()
{
	input<int> obj((char *)"input a number", 0, 10);
	return 0;
}