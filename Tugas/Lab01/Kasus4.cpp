// Cek Error

#include <iostream>

using namespace std;

void myFunction(){
    cout << "Alo!!" << endl;
}

int myFunction(int x){
    return 5 + x;
}

int main(){
    cout << "Hello World" << endl;
    myFunction();
    cout << myFunction(7);

    return 0;
}

// Where the error is
// 1. di dalam fungsi pertama yang bertipe data void, karena tanda cout nya kebalik yang seharusnya <<
// di dalam fungsi ke dua, karena setelah return kurang titik koma
// di fungsi main di cout hello world kurang tanda petik di akhir kata
// di dalam fungsi main untuk pemanggilan fungsi myFunction() tidak perlu menggunakan cout, karena fungsi tersebut bertipe data void dimana fungsi ini tidak mengembalikan nilai