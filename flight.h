#include<iostream>
using namespace std;

struct jadwalPenerbangan{
    string kode,jenis,waktu,asal,tujuan;
    string tanggal;
    int kapasitas;
};

typedef struct elemenJadwal *adr_jadwalP;
typedef struct jadwalPenerbangan infotype;

struct elemenJadwal{
    infotype info;
    adr_jadwalP next;
};

struct ListJadwal{
    adr_jadwalP First;
};

void createListJadwal(ListJadwal &L);
adr_jadwalP createElemenJadwal(infotype X);
void InsertLast(ListJadwal &L, adr_jadwalP P);
void showJadwal(ListJadwal L);
void DeleteFirst(ListJadwal &L, adr_jadwalP &P);
bool SearchJ(ListJadwal L, string dari, string ke, string tanggal);
