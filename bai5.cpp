#include <iostream>
using namespace std;
// Function prototypes
void arrSelectSort(int *[], int);
void showArray(const int [], int);
void showArrPtr(int *[], int);

int main()
{
   int NUM_DONATIONS;
   cout<<"THE NUMBER OF DONATIONS: ";
   cin>>NUM_DONATIONS ;
   int arr[1000];

   int* donations = new int[NUM_DONATIONS];
   for (int i = 0; i < NUM_DONATIONS; i++){
   	cin>>donations[i];
   }
   // An array of pointers to int.
    int *arrPtr[NUM_DONATIONS] = { nullptr, nullptr, nullptr, nullptr, nullptr,
                                  nullptr, nullptr, nullptr, nullptr, nullptr,
                                  nullptr, nullptr, nullptr, nullptr, nullptr };
   // Each element of arrPtr is a pointer to int. Make each element point to an element in the donations array.
   for (int count = 0; count < NUM_DONATIONS; count++)
      arrPtr[count] = &donations[count];

   // Sort the elements of the array of pointers.
   arrSelectSort(arrPtr, NUM_DONATIONS);

   // Display the donations using the array of pointers. This will display them in sorted order.
   cout << "The donations, sorted in ascending order, are:\n";
   showArrPtr(arrPtr, NUM_DONATIONS);

   // Display the donations in their original order.
   cout << "The donations, in their original order, are:\n";
   showArray(donations, NUM_DONATIONS);

   return 0;
}

// Definition of function arrSelectSort.
// This function performs an ascending order selection sort on arr, which is an array of pointers. Each element of arr points to an element of a second array. After the sort, arr will point to the elements of the second array in ascending order.

void arrSelectSort(int *arr[], int size)
{
    int startScan, minIndex;
    int *minElem;

    for (startScan = 0; startScan < (size - 1); startScan++)
    {
        minElem = arr[startScan];
        minIndex = startScan;
        for (int index = startScan + 1; index < size; index++)
        {
            if (*(arr[index]) < *minElem)
            {
                minElem = arr[index];
                minIndex = index;
            }
        }
        arr[minIndex] = arr[startScan];
        arr[startScan] = minElem;
    }
}

// Definition of function showArray.
// This function displays the contents of arr. size is the number of elements.

void showArray(const int arr[], int size)
{
    for (int count = 0; count < size; count++)
        cout << arr[count] << " ";
    cout << endl;
}

// Definition of function showArrPtr.
// This function displays the contents of the array pointed to by arr. size is the number of elements.

void showArrPtr(int *arr[], int size)
{
    for (int count = 0; count < size; count++)
        cout << *(arr[count]) << " ";
    cout << endl;
}

