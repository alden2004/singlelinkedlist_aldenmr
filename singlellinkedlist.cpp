#include <iostream>
using namespace std;

struct buku {
    string judul, pengarang;
    int tahunterbit;
    buku *next;
};

buku *head, *tail, *cur, *newNode, *del;

void createdsinglelinkedlist(string judul, string pengarang, int tb) {
    head = new buku();
    head->judul = judul;
    head->pengarang = pengarang;
    head->tahunterbit = tb;
    head->next = NULL;
    tail = head;
}

void addfirst(string judul, string pengarang, int tb) {
    newNode = new buku();
    newNode->judul = judul;
    newNode->pengarang = pengarang;
    newNode->tahunterbit = tb;
    newNode->next = head;
    head = newNode;
}

void addlast(string judul, string pengarang, int tb) {
    newNode = new buku();
    newNode->judul = judul;
    newNode->pengarang = pengarang;
    newNode->tahunterbit = tb;
    newNode->next = NULL;
    tail->next = newNode;
    tail = newNode;
}

void removefirst() {
    del = head;
    head = head->next;
    delete del;
}

void removelast() {
    del = tail;
    cur = head;
    while (cur->next != tail) {
        cur = cur->next;
    }
    tail = cur;
    tail->next = NULL;
    delete del;
}

void changefirst(string judul, string pengarang, int tb) {
    head->judul = judul;
    head->pengarang = pengarang;
    head->tahunterbit = tb;
}

void changelast(string judul, string pengarang, int tb) {
    tail->judul = judul;
    tail->pengarang = pengarang;
    tail->tahunterbit = tb;
}

void printsinglelinkedlist() {
    cur = head;
    while (cur != NULL) {
        cout << "judul buku : " << cur->judul << endl;
        cout << "pengarang buku : " << cur->pengarang << endl;
        cout << "tahun terbit buku : " << cur->tahunterbit << endl;
        cur = cur->next;
    }
}

int main() {
    createdsinglelinkedlist("kata, geez & aan", "nama pengarang", 2018);
    printsinglelinkedlist();
    cout << "\n\n" << endl;

    addfirst("dia adalah abangku", "hoa hoe", 2010);
    printsinglelinkedlist();
    cout << "\n\n" << endl;

    addlast("Aroma Kelapa", "hafifa sari", 2017);
    printsinglelinkedlist();
    cout << "\n\n" << endl;

    removefirst();
    printsinglelinkedlist();
    cout << "\n\n" << endl;

    addlast("12.12", "trauma berat", 2016);
    printsinglelinkedlist();
    cout << "\n\n" << endl;

    removelast();
    printsinglelinkedlist();
    cout << "\n\n" << endl;

    changefirst("kopikenangan", "info ngopi", 2021);
    printsinglelinkedlist();
    cout << "\n\n" << endl;

    changelast("judul terakhir", "pengarang terakhir", 2022);
    printsinglelinkedlist();
    cout << "\n\n" << endl;

    return 0;
}
