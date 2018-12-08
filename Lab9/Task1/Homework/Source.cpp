#include "HashTable.hpp"
#include "Test.hpp"
#include <iostream>
#include <vector>

int main()
{
	vector <string> result;

	if (!test(result))
	{
		cout << "Tests failed!" << endl;
		for (int i = 0; i < result.size(); ++i)
		{
			cout << result[i] << endl;
		}
		return EXIT_FAILURE;
	}
	else
	{
		cout << "Passed all tests!" << endl;
	}

	ifstream input("input.txt", ios::in);
	
	if (!input.is_open())
	{
		cout << "Cannot open input.txt file!" << endl;
		return EXIT_FAILURE;
	}
	else
	{
		HashTable *table = readFromFile(input);

		vector<Element*> res;
		fillArray(table, res);

		cout << "WORD - FREQUENCY:" << endl;
		printWordsFrequency(res);
		cout << endl << "Load coefficient: " << loadCoefficient(table) << endl;
		cout << endl << "Average list length: " << averageLengthInSegment(table) << endl;
		cout << endl << "MAX list length: " << maxLenghtInSegment(table) << endl;
	}

	input.close();

	return EXIT_SUCCESS;
}