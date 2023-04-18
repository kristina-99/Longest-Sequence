#include <iostream>
using namespace std;

void longestSequesnce(int arr1[], int length)
{
    int biggestSequenceLength = 1;
    int currentSequenceLength = 1;
    int seqNum = 0;

    for (int i = 0; i < length; i++)
    {  
        if (arr1[i] == arr1[i - 1])
        {
            currentSequenceLength += 1;
        }
        else
        {
            currentSequenceLength = 1;
        }
        
        if (currentSequenceLength >= biggestSequenceLength)
        {
            biggestSequenceLength = currentSequenceLength;
            seqNum = arr1[i];
        }

    }
    if (biggestSequenceLength == 1)
    { 
        cout << arr1[length - 1];
    }
    else
    {
        for (int j = 0; j < biggestSequenceLength; j++)
        {   
            if (j != biggestSequenceLength - 1)
            {
                cout << seqNum << ' ';
            }
            else
            {
                cout << seqNum;
            }
        }
    }

}

int main()
{
    int arrlength;
    cin >> arrlength;

    int arr1[100];

    for (int i = 0; i < arrlength; i++)
    {
        int num;
        cin >> num;
        arr1[i] = num;
    }

    longestSequesnce(arr1, arrlength);
}

