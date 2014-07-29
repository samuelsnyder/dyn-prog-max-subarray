/*
//recursive
dynamic (numbersArray, length, i)
	if i == length - 1 //base case
		return max(numbersArray)
	sum = numbersArray[i-1] + numbersArray[i]
	if (sum > numbersArray[i])
			numbersArray[i] = sum;
		else
			//do nothing, start new subarray sum

Example:
pre 	1 2 3 -4 5 6 -14 5 2
post 	1 3 6  2 7 13 -1 5 7
max = 13

*/


int dynamicRecursive(int *numbersArray, long length, int i)
{
	int sum = numbersArray[i] + numbersArray[i+1];
	if (i == length - 2){ //base case
		for(i=0; i < length; i++){
			if(numbersArray[i] > sum)
				sum = numbersArray[i];
		}
		return sum;
	}
	if (sum > numbersArray[i+1])
		numbersArray[i+1] = sum;
	return dynamicRecursive(numbersArray, length, i + 1);
}