#include <iostream>
#include <string>
using namespace std;
// memberi inililistsasi

class mahasiswa {
private :
    const int id;
    string nama;
    float nilai;

public :
    mahasiswa(int pId, string pNama, float pNilai) :id(pId), nama(pNama), nilai(pNilai) {
        //membuat defenisi
    }

    ~mahasiswa() {
        cout << "Id   = " << id << endl;
        cout << "Nama = " << nama << endl;
        cout << "Nilai = " << nilai << endl;
    }
};

int main()
{
    
}
