#include <iostream>
#include <vector>
// <<>>
using namespace std;
class Alaz {
private:
    string name;
    int number;
public:
    Alaz(string isim, int sayi) {
        name = isim;
        number = sayi;
    }
};

void displayError ( int errorNr)
{
    static char* errorMsg[] = {
        "Invalid error number",
        "Error 1: Too much data ",
        "Error 2: Not enough memory ",
        "Error 3: No data available " };
    if( errorNr < 1 || errorNr > 3)
        errorNr = 0;
    cerr << errorMsg[errorNr] << endl;
}

int str_cmp(const char * s1, const char *s2) {
    int i;
    for (i = 0; *(s1+i) == *(s2 + i) && *(s1) != '\0'; ++i)
        ;
    return (*(s1+i) - *(s2+i));
}

int sumMatrix(int matrix[][5], int *rsum, int *csum) {
    int rowsum, colsum;
    for (int i = 0; i < 3; i++) {
        rowsum = 0;
        for (int j = 0; j < 5; j++) {
            rowsum += matrix[i][j];
        }
        rsum[i] = rowsum;
    }

    for (int i = 0; i < 5; i++) {
        colsum = 0;
        for (int j = 0; j < 3; j++) {
            colsum += matrix[j][i];
        }
        csum[i] = colsum;
    }

    int sonuc = rsum[0] + rsum[1] + rsum[2];
    return sonuc;
}

int main() {
    //Alaz arr[2] = { Alaz("alaz",1), Alaz("enes",2) };
    //Alaz* ptr = new Alaz[20];
    //int arr[][3] = {3,4,{5},{7}};
    char representative[2][20] = {"Armstrong, Wendy", "Beauty, Eve"};
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 20; j++) {
            cout << representative[i][j] << " ";
        }
        cout << endl;
    }

    /*
    int uzunluk = 5, num, temp, temp2;
    int arr[uzunluk];
    int sayi;
    cout << "Enter " << uzunluk << " integers: " << endl;
    for (int i = 0; i < uzunluk; i++) {
        cin >> sayi;
        arr[i] = sayi;
    }

    for (int i = 0; i < uzunluk; i++) {
        num = 0;
        temp = arr[i];
        for (int j = i + 1; j < uzunluk; j++) {
            if (temp > arr[j]) {
                num = j;
                temp = arr[j];
            }
        }
        if (num != 0) {
            temp2 = arr[i];
            arr[i] = temp;
            arr[num] = temp2;
        }
    }
    */

    char *line1 = "mauro icardi"; // 12
    char *line2 = "victor osimhen"; // 14
    cout << str_cmp(line1, line2) << endl;

    int matrix[3][5] = {{1,2,3,4,5},
                        {6,7,8,9,10},
                        {11,12,13,14,15}
    };
    int rowSum[3];
    int colSum[5];

    cout << sumMatrix(matrix, rowSum, colSum);

    return 0;
}
