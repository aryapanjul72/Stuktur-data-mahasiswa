#include<iostream>
#include<cstring>
#include<ctime>
using namespace std;
struct mhs{
	int NIM;
	string Nama;
	short ThnMasuk;
	};
struct mhs temp;
void looping();
void TampilSemuaData(mhs m[]){
	for(int i=0;i<6;i++){
			cout <<m[i].NIM<<"\t"<< m[i].Nama<<"\t"<<m[i].ThnMasuk<< endl;
	}
}
int linear_search(mhs m[], int element){
 	int flag=-1;
 	for (int count =0; count<6; count++){
		if(element == m[count].NIM){
 			flag=count;
			break;
		}
 	}
 return flag;
}
void Mencari(mhs m[]){
	TampilSemuaData(m);
	int element=0;
	cout<<"Masukkan NIM mahasiswa yang dicari: ";cin>>element;
	system ("CLS");
	system ("COLOR 4F");
	int flag=linear_search(m, element);
		if(flag !=-1){
			cout<<"NIM          :"<<m[flag].NIM<<endl;
			cout<<"Nama         :"<<m[flag].Nama<<endl;
			cout<<"Tahun Masuk  :"<<m[flag].ThnMasuk<<endl<<endl;
		}
		else{
			cout<<"\n Data Tersebut Tidak Ditemukan ";
		}
	}
void Ascending(mhs m[]){
	for (int a=1;a<6;a++){
        for (int b=0; b<6-a; b++)
            if (m[b].NIM>m[b+1].NIM){
                temp.NIM=m[b].NIM;
                m[b].NIM=m[b+1].NIM;
                m[b+1].NIM=temp.NIM;

                temp.Nama=m[b].Nama;
                m[b].Nama=m[b+1].Nama;
                m[b+1].Nama=temp.Nama;

                temp.ThnMasuk=m[b].ThnMasuk;
                m[b].ThnMasuk=m[b+1].ThnMasuk;
                m[b+1].ThnMasuk=temp.ThnMasuk;
            }
	}
	for(int i=0;i<6;i++){
		cout<<"NIM          :"<<m[i].NIM<<endl;
		cout<<"Nama         :"<<m[i].Nama<<endl;
		cout<<"Tahun Masuk  :"<<m[i].ThnMasuk<<endl<<endl;
	}
}
void Descending(mhs m[]){
	for (int a=1;a<6;a++){
        for (int b=0; b<6-a; b++)
            if (m[b].NIM<m[b+1].NIM){
                temp.NIM=m[b].NIM;
                m[b].NIM=m[b+1].NIM;
                m[b+1].NIM=temp.NIM;

                temp.Nama=m[b].Nama;
                m[b].Nama=m[b+1].Nama;
                m[b+1].Nama=temp.Nama;

                temp.ThnMasuk=m[b].ThnMasuk;
                m[b].ThnMasuk=m[b+1].ThnMasuk;
                m[b+1].ThnMasuk=temp.ThnMasuk;
            }
	}
	for(int i=0;i<6;i++){
		cout<<"NIM          :"<<m[i].NIM<<endl;
		cout<<"Nama         :"<<m[i].Nama<<endl;
		cout<<"Tahun Masuk  :"<<m[i].ThnMasuk<<endl<<endl;
	}
}	
void UbahNama(mhs m[]){
	int element=0;
	cout<<"Masukkan NIM mahasiswa yang dicari: ";cin>>element;
	int flag=linear_search(m, element);
		if(flag !=-1){
			cout<<"Ubah Nama: ";cin>>m[flag].Nama;	
		}
		else{
			cout<<"\n Data Tersebut Tidak Ditemukan ";
		}
		cout<<endl;
		cout<<"NIM          :"<<m[flag].NIM<<endl;
		cout<<"Nama         :"<<m[flag].Nama<<endl;
		cout<<"Tahun Masuk  :"<<m[flag].ThnMasuk<<endl<<endl;
	}
main(){
	 mhs m[6];
 
 		m[0].NIM = 110;
 		m[1].NIM = 107;
 		m[2].NIM = 142;
 		m[3].NIM = 205;
 		m[4].NIM = 104;
 		m[5].NIM = 108;
 
 		m[0].Nama = "BUDI";
 		m[1].Nama = "SUSAN";
 		m[2].Nama = "WAWAN";
 		m[3].Nama = "ENDI";
 		m[4].Nama = "HANIF";
 		m[5].Nama = "YUDI";
 
		m[0].ThnMasuk = 2000;
		m[1].ThnMasuk = 1999;
		m[2].ThnMasuk = 2001;
		m[3].ThnMasuk = 2002;
		m[4].ThnMasuk = 1999;
 		m[5].ThnMasuk = 1999;
	int menu,i;
	do{
		time_t a=time(0);
	string b=ctime(&a);
	cout<<b<<endl;
		system ("COLOR 1F");
		cout<<"=============================================================                        | BY   : ARYA PRIYAMANAYA |\n";
		cout<<"              PROGRAM STRUKTUR DATA MAHASISWA                                        | NIM  : 211011400157     |"<<endl;
		cout<<"=============================================================                        | KELAS: 02TPLP002        |\n\n";
		cout<<"---------------------|MENU|-------------\n"<<endl;
		cout<<"[ 1 ] ||Tampilkan Semua Data Mahasiswa||"<<endl;
		cout<<"[ 2 ] ||       Mencari Mahasiswa      ||"<<endl;
		cout<<"[ 3 ] ||      Mengurutkan Menaik      ||"<<endl;
		cout<<"[ 4 ] ||      Mengurutkan Menurun     ||"<<endl;
		cout<<"[ 5 ] ||      Ubah Nama Mahasiswa     ||"<<endl;
		cout<<"[ 6 ] ||            Selesai           ||\n"<<endl;
		cout<<"Pilhan:";cin>>menu;
		cout<<endl;
		switch(menu){
		case 1:
			TampilSemuaData(m);
			system ("PAUSE");
            system ("CLS");
			break;
		case 2:
			Mencari(m);
			system ("PAUSE");
            system ("CLS");
			break; 
		case 3:
			Ascending(m);
			system ("PAUSE");
			system ("CLS");
			break;
		case 4:
			Descending(m);
			system ("PAUSE");
			system ("CLS");
			break;
		case 5:
			UbahNama(m);
			break; 
		case 6:
			i++;
			system ("CLS");system ("COLOR 4F");
			cout<<"\n\n==============[ Terimakasih ]==============\n\n";
			break;
		default:
			cout<<"Pilihan Salah"<<endl<<endl;	
		}
    }
	while(i==0);
return
 0;
}
