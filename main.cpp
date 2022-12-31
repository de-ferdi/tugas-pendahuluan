#include "flight.h"

int main()
{
    ListJadwal L;
    infotype pesawat;
    adr_jadwalP P;
    int n;

    createListJadwal(L);
    cout << "Total inputan : ";
    cin >> n;
    for(int i = 0; i<n; i++){
        cout << "\nKode : ";
        cin >> pesawat.kode;
        cout << "Jenis : ";
        cin >> pesawat.jenis;
        cout << "Tanggal : ";
        cin >> pesawat.tanggal;
        cout << "Waktu : ";
        cin >> pesawat.waktu;
        cout << "Asal : ";
        cin >> pesawat.asal;
        cout << "Tujuan : ";
        cin >> pesawat.tujuan;
        cout << "Kapasitas : ";
        cin >> pesawat.kapasitas;

        InsertLast(L, createElemenJadwal(pesawat));
    }
    showJadwal(L);
    cout << "\n\nAfter" << endl;
    DeleteFirst(L,P);
    showJadwal(L);
    string dari, ke, tanggal;
    cout << "\nCari Penerbangan" << endl;
    cout << "Dari : ";
    cin >> dari;
    cout << "Ke : ";
    cin >> ke;
    cout << "Tanggal : ";
    cin >> tanggal;
    cout << SearchJ(L,dari, ke, tanggal);
    return 0;
}
