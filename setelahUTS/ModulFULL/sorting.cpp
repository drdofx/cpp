#include <bits/stdc++.h>
#ifdef __cplusplus__
  #include <cstdlib>
#else
  #include <stdlib.h>
#endif

using namespace std;
#define ENTER_KEY cout << "\nPress Enter to continue"; fgetc(stdin); cin.ignore(numeric_limits<streamsize>::max(), '\n');

int printMenu() {
    int menu;
    cout << "\nMENU SORTING" << endl
    << "1. ISI ARRAY" << endl
    << "2. INSERTION SORT" << endl
    << "3. MAXIMUM SORT" << endl
    << "4. BUBBLE SORT" << endl
    << "5. KELUAR "<< endl;

    cout << "PILIH MENU: ";
    cin >> menu;
    return menu;
}

void isiArray(int arr[], int n)  {
    for (int i=0; i<n; i++) {
        cin >> arr[i];
    }
    cout << "Data Array Awal: " << endl;
    for (int i=0; i < n; i++)  
        cout << arr[i] << " ";  
    cout << endl; 
}  

void insertionSort(int a[], int n) {
    int x, temp;
    for (int i=1; i < n; i++) {
        temp=a[i];
        x=i-1;
        while (a[x] > temp && x >= 0) {
            a[x+1] = a[x];
            x-=1;
        }
        a[x+1] = temp;
    }
    cout << "Hasil Insertion Sort: ";
    for (int i=0; i < n; i++)  
        cout << a[i] << " ";  
    cout << endl; 
}

void maximumSort(int a[], int n) {
    int max, temp, x=n-1;
    for (int i=0; i < n-1; i++) {
        max = 0;
        for (int j=0; j <= x; j++) {
            if (a[j] > a[max]) max = j;
        }
        temp = a[x];
        a[x] = a[max];
        a[max] = temp;
        x--;
    }
    cout << "Hasil Maximum Sort: ";
    for (int i=0; i < n; i++)  
        cout << a[i] << " ";  
    cout << endl; 
}

void bubbleSort(int a[], int n) {
    int temp;
    bool swap;
    for (int i=0; i < n-1; i++) {
        swap = false;
        for (int j=0; j < n-i-1; j++) {
            if (a[j] > a[j+1]) {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
                swap = true;
            }
        }
        if (!swap) break;
    }
    cout << "Hasil Bubble Sort: ";
    for (int i=0; i < n; i++)  
        cout << a[i] << " ";  
    cout << endl; 
}

int main() {
    int n, menu_pilihan;
    cout << "Masukkan jumlah array: ";
    cin >> n;
    int a[n], b[n], c[n], d[n];
    menu:
        if (system("CLS")) system("clear");
        menu_pilihan = printMenu();
        switch(menu_pilihan) {
            case 1:
                cout << "Masukkan isi Array awal: ";
                isiArray(a, n);
                ENTER_KEY
                goto menu;
            case 2:
                copy(a, a+n, b);
                insertionSort(b, n);
                ENTER_KEY
                goto menu;
            case 3:
                copy(a, a+n, c);
                maximumSort(c, n);
                ENTER_KEY
                goto menu;
            case 4:
                copy(a, a+n, d);
                bubbleSort(d, n);
                ENTER_KEY
                goto menu;
            case 5:
                cout << "Keluar Program!\n"; 
                return 0;
        }
}