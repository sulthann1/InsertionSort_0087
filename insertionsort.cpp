#include <iostream>
using namespace std;

int arr[20];
int n;

void input()
{
    while (true)
    {
        cout << "Masukan jumlah data pada array :";
        cin >> n;
        if (n <= 20)
        {
            break;
        }
        else
        {
            cout << "\n Array yang anda masukan maksimal 20 elemen.\n ";
        }
    }
    cout << endl;
    cout << "=====================" <<endl;
    cout << "Masukan Element Array" <<endl;
    cout << "=====================" <<endl;

    for (int i = 0; i <n; i++)
    {
        cout << "Data ke-" << (i+1) <<":";
        cin >> arr [i];
    }
}

void insertionsort ()
{
int temp;
int j, i;

for (i = 1; i<= n - 1; 1++)
{

    temp = arr[i];

    j = i -1;

    while ( j>= 0 && arr[j] > temp)
    {
      arr [j + 1] = arr[j];
      j--;  
    }
    arr [j + 1] = temp;
}
}

void display
