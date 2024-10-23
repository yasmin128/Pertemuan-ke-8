#include <iostream>
#include <string>
using namespace std;

// Struct zodiak
struct Zodiak {
    string NamaZodiak;
    int MulaiDariBulan, MulaiDariTanggal;
    int AkhirDariBulan, AkhirDariTanggal;
};

// Fungsi untuk menemukan zodiak berdasarkan tanggal dan bulan lahir
void MenemukanZodiak(int Tanggal, int Bulan, Zodiak Zodiaks[], int size) {
    for (int i = 0; i < size; i++) {
        if ((Bulan == Zodiaks[i].MulaiDariBulan && Tanggal >= Zodiaks[i].MulaiDariTanggal) ||
            (Bulan == Zodiaks[i].AkhirDariBulan && Tanggal <= Zodiaks[i].AkhirDariTanggal)) {
            cout << "Zodiak Anda adalah: " << Zodiaks[i].NamaZodiak << endl;
            return;
        }
    }
}

int main() {
    // Inisialisasi array Zodiak
    Zodiak Zodiaks[] = {
        {"Capricorn", 12, 22, 1, 19},
        {"Aquarius", 1, 20, 2, 18},
        {"Pisces", 2, 19, 3, 20},
        {"Aries", 3, 21, 4, 19},
        {"Taurus", 4, 20, 5, 20},
        {"Gemini", 5, 21, 6, 20},
        {"Cancer", 6, 21, 7, 22},
        {"Leo", 7, 23, 8, 22},
        {"Virgo", 8, 23, 9, 22},
        {"Libra", 9, 23, 10, 22},
        {"Scorpio", 10, 23, 11, 21},
        {"Sagittarius", 11, 22, 12, 21}
    };

    int Tanggal, Bulan, Tahun;
    cout << "Masukkan Tanggal Lahir Anda ^_^" << endl;
    cout << "Tanggal (dd): ";
    cin >> Tanggal;
    cout << "Bulan (mm): ";
    cin >> Bulan;
    cout << "Tahun (yy): ";
    cin >> Tahun;

    // Validasi inputan dari user
    if (Bulan < 1 || Bulan > 12 || Tanggal < 1 || Tanggal > 31) {
        cout << "Tanggal atau bulan tidak valid!" << endl;
        return 0;
    }

    // Menampilkan tanggal, bulan, dan tahun yang dimasukkan dalam satu baris
    cout << "Tanggal Lahir Anda: " << Tanggal << "-" << Bulan << "-" << Tahun << endl;

    // Menemukan dan menampilkan zodiak berdasarkan input
    MenemukanZodiak(Tanggal, Bulan, Zodiaks, 12);

    return 0;
}
