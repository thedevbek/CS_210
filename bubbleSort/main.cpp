/**
 * @Author: Your name
 * @Date:   2022-09-24 23:24:21
 * @Last Modified by:   Your name
 * @Last Modified time: 2022-09-24 23:25:26
 *
 * input bubble sort function
 */
#include <iostream>
#include <vector>
using namespace std;

void swapAaDoo(int *num1, int *num2)
{
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}
void SortVector(vector<int> &myVec)
{
    int myArray = myVec.size();
    for (int i = 0; i < myArray - 1; i++)
    {
        for (int j = 0; j < (myArray - 1); j++)
        {

            if (myVec[j] > myVec[j + 1])
            {
                swap(myVec[j], myVec[j + 1]);
            }
        }
    }
}

void printVector(vector<int> myVec, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << myVec[i] << " ";
    }
    cout << endl;
}
int main()
{
    int myArray;
    vector<int> myVec;
    cin >> myArray;
    for (int j = 0; j < myArray; j++)
    {
        int num;
        cin >> num;
        myVec.push_back(num);
    }
    SortVector(myVec);
    printVector(myVec, myArray);
    return 0;
}
