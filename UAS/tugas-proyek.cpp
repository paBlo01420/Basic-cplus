//email: Dani Sulaiman
//Nim : 2200018486
//Kelas: J

                             // STUDY KASUS PEMBELIAN TIKET KRL

#include <iostream>
#include <fstream>
using namespace std;

struct data1
{
    string pPin = "12345"; 
    string noTlp = "08123456789"; 
    char tgl[20];
};

    
void krl()
{
    data1 dt1;
    ofstream tiketKu("Tiket.txt");
    string rute, kode, waktu, pin, tlpn, jam, nama, jKelamin;
    char pilihanJK, lagi;
    int tujuan, harga, pJam, bayar, jBayar, cari, data[10]={1, 2, 3, 4, 5, 6, 7, 8, 9, 10,};
    int buka = 24;
    int *ip;

    ip = &buka;

    do{
        for (int i=0; i<1; i++){
            cout <<"         SELAMAT DATANG DI APLIKASI "<<endl;
            cout <<"    PESAN TIKET KRL STASIUN LEMPUYANGAN"<<endl;
            cout <<"   Jl. Lempuyangan Bausasran, Yogyakarta"<<endl;
            cout <<"*-----------------------------------------*"<<endl;
            cout <<endl;
        }

        //Pendataan Diri
        cout <<"Login \n";
        cout <<"\nMasukkan no telpon : ";cin >>tlpn; //08123456789
	    cout <<"Masukan PIN        : ";cin >>pin; //12345

        //Login akun
		if(tlpn == dt1.noTlp){
            if (pin == dt1.pPin){                
                cout<<"~~ Login berhasil ~~"<<endl;
            }else {
                cout <<"~~ Password Salah ~~"<<endl;                
            } 
        } else {		
        cout<<"~~ Akun belum terdaftar ~~"<<endl;
        system("pause");
	}
        system("cls");
        
        //Pengimputan data penumpang
        cout << "Silahkan masukkan data anda : "<< endl;
		cout << "   Nama               = ";cin >> nama;
		cout << "   Jenis Kelamin[L/P] = ";cin >> jKelamin;
		
		switch(pilihanJK){
			case 'L' :
				jKelamin ="Cowok";
				break;
			case 'P' :
				jKelamin ="cewek";
				break;			
		}

        cout <<endl;
        cout <<"Masukkan tanggal keberangkatan [dd/mm/yy] = ";cin>>dt1.tgl;
        cout <<"\n";

        //Pengimputan Tujuan
        cout <<"Silahkan Pilih Tujuan Pemberhentian Stasiun: "<<endl;
        cout <<"--------------------------------------------"<<endl;
        cout <<"| No |   Tujuan Pemberhentian   |   Harga  |"<<endl;
        cout <<"--------------------------------------------"<<endl;
        cout <<"| 1. |          Brambanan       |  8.0000  |"<<endl;
        cout <<"| 2. |            Klaten        |  8.0000  |"<<endl;
        cout <<"| 3. |          Purwosari       |  8.0000  |"<<endl;
        cout <<"| 4. |        Solo Balapan      |  8.0000  |"<<endl;
        cout <<"| 5. |            Palur         |  8.0000  |"<<endl;
        cout <<"-------------------------------------------"<<endl;
        cout <<"Pilih tujuan pemberhetian [1/2/3/4/5]:";cin>>tujuan;
        cout <<endl;

        switch (tujuan){
            case 1:
                harga = 8.000;
                rute = "Lempuyangan - Brambanan";
                kode = "LB";
                break;
            case 2:
                harga = 8.000;
                rute = "Lempuyangan - Klaten";
                kode = "LK";
                break;
            case 3:
                harga = 8.000;
                rute = "Lempuyangan - Purwosari";
                kode = "LP";
                break;
            case 4:
                harga = 8.000;
                rute = "Lempuyangan - Solo Balapan";
                kode = "LS";
                break;
            case 5:
                harga = 8.000;
                rute = "Lempuyangan - Palur";
                kode = "LPA";
                break;    
            default: 
                cout <<"Menu tidak ada!"<<endl;
                cout <<"\n";
        }
        cout <<endl;

        //Pengimputan Jadwal keberangkatan penumpang
        cout <<"Silahkan pilih jadwal keberangkatan"<<endl;
        cout <<" ________________________________"<<endl;
        cout <<" |     JADWAL KEBERANGKATAN     |"<<endl;
        cout <<" |______________________________|"<<endl;
        cout <<" |            pagi              |"<<endl;
        cout <<" |  07.15 |   08.12  |  10.30   |"<<endl;
        cout <<" |______________________________|"<<endl;
        cout <<" |            siang             |"<<endl;
        cout <<" |  12.07 |   13.25  |  15.02   |"<<endl;
        cout <<" |______________________________|"<<endl;
        cout <<" |            malam             |"<<endl;
        cout <<" |  18.42 |   20.29  |  21.07   |"<<endl;
        cout <<" |______________________________|"<<endl;
        cout <<"  Pilih waktu keberangkatan: ";cin>>waktu;

        if (waktu == "pagi"){
            cout <<"  Masukkan jam keberangkatan: ";
            cin >>jam;
        } else if (waktu == "siang"){
            cout <<"Masukkan jam keberangkatan: ";
            cin >>jam;
        } else if (waktu == "malam"){
            cout <<"Masukkan jam keberangkatan: ";
            cin >>jam;
        } else {
            cout <<"Salah memasukkan data";
        } 

        cout <<endl; //Pilihan pembayaran
        cout <<"   Pembayaran yang tersedia   "<<endl;
        cout <<"-----------------------------"<<endl;
        cout <<"|No |          MENU         |"<<endl;
        cout <<"-----------------------------"<<endl;
        cout <<"|1. | Kartu KMT             |"<<endl;
        cout <<"|2. | Mobile Banking        |"<<endl;
        cout <<"|3. | Link Aja              |"<<endl;
        cout <<"|4. | Gopay                 |"<<endl;
        cout <<"-----------------------------"<<endl;
        cout <<endl;
        cout <<"Pilih jenis Pembayaran [1/2/3/4]: ";cin>>bayar;

        switch(bayar) {
            case 1: 
                cout <<"    Kartu KMT "<<endl;
                cout <<"Masukkan jumlah bayar = ";
                cin >>jBayar;
                system("cls");
                if (jBayar >= 8000){
                    cout <<"+- Berhasil Membayar -+\n"<<endl;
                }
                break;
            case 2: 
                cout <<" Mobile Banking "<<endl;
                cout <<"Masukkan jumlah bayar = ";
                cin >>jBayar;
                system("cls");
                if (jBayar >= 8000){
                    cout <<"+- Berhasil Membayar -+\n"<<endl;
                }
                break;
            case 3: 
                cout <<" Link Aja ";
                cout <<"Masukkan jumlah bayar = ";
                cin >>jBayar;
                system("cls");
                if (jBayar >= 8000){
                    cout <<"+- Berhasil Membayar -+\n"<<endl;
                }
                break;     
            case 4: 
                cout <<" Gopay ";
                cout <<"Masukkan jumlah bayar = ";
                cin >>jBayar;
                system("cls");
                if (jBayar >= 8000){
                    cout <<"+- Berhasil Membayar -+\n"<<endl;
                }
                break;
            default: 
                cout <<"Menu tidak tersedia!";
        }
        
        cout <<endl; //input tempat duduk
        cout<<"Pilih tempat duduk yang tersedia [2-10]: ";
        cin>>cari;
        for (int i=0; i<10; i++){
            if (data[i]==cari){
                cout<<"\nNomor duduk anda kursi ~ "<<i <<" ~";
            break;
            }
        }

        cout <<endl; //Tampilan tiket sudah jadi
        tiketKu <<" Verifikasi Tiket "<<endl;
        cout <<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
        cout <<"            TIKET KRL JOGJA - SOLO          "<<endl;
        cout <<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
        cout <<"                                            " <<endl;
        cout <<"    Kode tiket                = " <<kode      <<endl;
        cout <<"    Nama                      = " <<nama  <<endl;
        cout <<"    Jenis kelamin             = " <<jKelamin<<endl;
        cout <<"    Pemberhentian stasiun     = " <<rute    <<endl;
        cout <<"    Tanggal keberangkatan     = " <<dt1.tgl   <<endl;
        cout <<"    Waktu                     = " <<waktu     <<endl;
        cout <<"    Jam                       = " <<jam       <<endl;
        cout <<"    Nomor duduk               = " <<cari      <<endl;

        cout <<"    Keterangan pembayaran                    "<<endl; 
        cout <<"                                             "<<endl;      
        cout <<"         Harga tiket          = Rp."<<harga <<"000"<<endl;
        cout <<"     Status Pembayaran         ~ Lunas ~     "<<endl;

        cout <<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
        cout <<"    Jl. Lempuyangan Bausasran, Yogyakarta   "<<endl;
        cout <<"    Siap Melayani anda  "<< buka  << "  jam " <<endl;
        cout <<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;                                      

        cout <<"Apakah anda ingin memesan tiket lagi (y/t):";cin>>lagi;

    }while(lagi == 'y' || lagi == 'y');

        system("cls");
        cout <<"^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~^"<<endl;
        cout <<"        TERIMAH KASIH SUDAH MEMAKAI LAYANAN KAMI "<<endl; 
        cout <<"          SEMOGA PERJALANAN ANDA MENYENANGKAN "<<endl;
        cout <<"^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~^"<<endl;
        tiketKu.close();
}

int main(){
    krl();
}
