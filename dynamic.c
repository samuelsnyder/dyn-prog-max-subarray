/*


dynamic (numbersArray)
	sum = 0
	max = 0
	for each element i in numbersArray
		sum += sum + numbersArray[i]
		if (sum < numbersArray[i])
			sum = numberSarray[i]
		else
			// numbersArray[i] = sum //store results in passed array
		if (sum > max)
			max = sum
	return max

Example:
pre 	1 2 3 -4 5 6 -14 5 2
post 	1 3 6  2 7 13 -1 5 7
max = 13

*/


int dynamic(int array[], int length)
{
	int sum = 0;
	int max = 0;
	int i;
	for (i = 0; i < length; i++ )
	{
		sum = sum + array[i];
		if (sum < array[i])
			sum = array[i];

		if (sum > max)
			max = sum;
	}
	return max;
}