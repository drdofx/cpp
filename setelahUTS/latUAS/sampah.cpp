#include <bits/stdc++.h>

using namespace std;

int main() {
    struct person{ 
        string nama;
        int nilai;
    } people[3];

    for (int i=0; i<3; i++) {
        cin >> people[i].nama >> people[i].nilai;
    }

    for (int i=0; i<3; i++) {
        cout <<  people[i].nama << " = " << people[i].nilai << endl;
    }

    int key, j;
    string yek;
    
    for (int i = 1; i < 3; i++) 
    {  
        key = people[i].nilai;
        yek = people[i].nama;
        j = i - 1;  
  
        while (j >= 0 && people[j].nilai > key) 
        {  
            people[j + 1].nilai = people[j].nilai;  
            people[j + 1].nama = people[j].nama;  
            j = j - 1;  
        }  
        people[j + 1].nilai = key;
        people[j + 1].nama = yek; 
    }  

    for (int i=0; i<3; i++) {
        cout << endl << people[i].nama << " = " << people[i].nilai << endl;
    }

    return 0;
}