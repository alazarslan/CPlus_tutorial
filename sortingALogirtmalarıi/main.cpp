#include <iostream>
#include <fstream>
using namespace std;

void swap(int *p1, int *p2) {
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

bool isSorted(const int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            return false;
        }
    }
    return true;
}

void bubbleSort(int arr[], int size) {
    while (!isSorted(arr, size)) {
        for (int i = 0; i < size - 1; i++) {
            if (arr[i] > arr[i + 1]) {
                swap(arr[i], arr[i+1]);
            }
        }
    }
}

void selectionSort(int arr[], int size) {
    int tempIdx;
    for (int i = 0; i < size - 1; i++) {
        tempIdx = i;
        for (int j = i + 1; j < size; j++) {
            if (arr[tempIdx] > arr[j]) {
                tempIdx = j;
            }
        }
        if (i != tempIdx) {
            swap(arr[tempIdx], arr[i]);
        }
    }
}



int main() {
    /*
    int arr[] = {15, 2, 33, 4, 22, 63, 7, 19, 15, 1};
    //bubbleSort(arr, 10);
    selectionSort(arr,10);
    for (int i = 0; i < 10; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    ofstream outFile;
    outFile.open("output.txt");
    string line = "Alaz bugun hic ders calismadi!";
    while (line.length() != 0) {
        outFile << line << endl;
        line.pop_back();
    }
    outFile.close();
    */
    fstream dosya;

    string oku;
    dosya.open("output.txt", ios::out | ios::in );
    dosya << "DENEME123123123" << endl;
    dosya.write("victor osimhen",14);
    char* buff;
    int n;
    dosya.read(buff, n);
    cout << buff << endl;
    cout << n << endl;
    dosya.close();
    //dosya >> oku;
    //cout << oku << endl;
    //outFile.open("output.txt",ios::app);
    //outFile << "DENEME123123123" << endl;
    //outFile.close();

    return 0;
}

