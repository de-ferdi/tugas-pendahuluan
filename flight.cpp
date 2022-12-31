#include "flight.h"

void createListJadwal(ListJadwal &L){
    L.First = NULL;
}

adr_jadwalP createElemenJadwal(infotype X){
    adr_jadwalP P = new elemenJadwal;
    P->info = X;
    P->next = NULL;
    return P;
}

void InsertLast(ListJadwal &L, adr_jadwalP P){
    if(L.First == NULL){
        L.First = P;
    }else{
        adr_jadwalP Q = L.First;
        while(Q->next != NULL){
            Q = Q->next;
        }
        Q->next = P;
    }
}

void showJadwal(ListJadwal L){
    if(L.First == NULL){
        cout << "List Kosong" << endl;
    }else{
        while(L.First != NULL){
            cout << "\n" << L.First->info.kode << " ";
            cout << L.First->info.jenis << " ";
            cout << L.First->info.tanggal << " ";
            cout << L.First->info.waktu << " ";
            cout << L.First->info.asal << " ";
            cout << L.First->info.tujuan << " ";
            cout << L.First->info.kapasitas << " ";
            L.First = L.First->next;
        }
    }
}
void DeleteFirst(ListJadwal &L, adr_jadwalP &P){
    if(L.First == NULL){
        cout << "List Kosong" << endl;
    }else{
        P = L.First;
        L.First = L.First->next;
        P->next = NULL;
    }
}

bool SearchJ(ListJadwal L, string dari, string ke, string tanggal){
    if(L.First == NULL){
        cout << "List Kosong" << endl;
    }else{
        while(L.First != NULL){
            if(L.First->info.asal == dari && L.First->info.tujuan == ke && L.First->info.tanggal == tanggal){
                return true;
            }
            L.First = L.First->next;
        }
    }
    return false;
}
