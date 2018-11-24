#include "Menu.hpp"
#include "Test.hpp"
#include "File.hpp"

int main()
{
	cout << "Running tests..." << endl;

	if (!test())
	{
		cout << "Failed tests!" << endl;
		return EXIT_FAILURE;
	}
	else
	{
		cout << "Passed tests!" << endl;
	}

	List *list = createList();
	readFromFile(list);
	proceedTask(list);

	return EXIT_SUCCESS;
}