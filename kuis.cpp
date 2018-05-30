#include<iostream>
#include<conio.h>
#include <time.h>
#include <stdlib.h>
using namespace std;
int main()
{
	int angka,tebakan,ipilih;
	menu:
	lagi:
	int salah = 0;
	int i = 3;
	char jpilih;
	cout<<"kuis tebak angka\n";
	cout<<"1. Bermain dengan komputer\n";
	cout<<"2. Bermain dengan teman\n";
	cout<<"tentukan pilihan anda : ";cin>>ipilih;
	if (ipilih == 1)
	{
		system("cls");
		srand (time(NULL));
		angka=rand()% 10+1;
		a1:
		cout<<"kuis tebak angka mulai dari 1 - 10\n";
		cout<<"anda hanya mempunyai "<<i<<" kesempatan\n";
		cout<<"berapakah angkanya : ";cin>>tebakan;
			if (tebakan > angka)
			{
				salah=salah+1;
				i=i-1;
				if (salah >2 )
				{
					system("cls");
					goto end1;
				}
				cout<<"\nangka yang anda tebak terlalu besar\n";
				system("pause");
				system("cls");
				goto a1;
			}
			else if (tebakan < angka)
			{
				salah=salah+1;
				i=i-1;
				if (salah >2 )
				{
					system("cls");
					goto end1;
				}
				cout<<"\nangka yang anda tebak terlalu kecil\n";
				system("pause");
				system("cls");
				goto a1;
			}
			else if (tebakan == angka)
			{
				cout<<"angka yang anda tebak benar ";
				cout<<"ingin bermain lagi [y/n] : ";cin>>jpilih;
				switch (jpilih)
				{
					case 'y':
						system("cls");
						goto lagi;
						break;
					case 'n':
						cout<<"terimakasih telah menggunakan program kami";
						break;
					default:
						cout<<"pilihan tidak tercantum di program kami";
						break;
				}
			}
		end1:
		cout<<"kesempatan anda sudah habis, jawaban yang benar adalah "<<angka;
		cout<<"\ningin bermain lagi [y/n] : ";cin>>jpilih;
				switch (jpilih)
				{
					case 'y':
						system("cls");
						goto lagi;
						break;
					case 'n':
						cout<<"terimakasih telah menggunakan program kami";
						break;
					default:
						cout<<"pilihan tidak tercantum di program kami";
						break;
				}		
	}
	
	else if (ipilih == 2)
	
	{
		system("cls");
		cout<<"pilihlah angka dari 1 - 10\n";
		cout<<"input angka yang akan ditebak teman anda : ";cin>>angka;
		system("cls");
		a2:
		cout<<"kuis tebak angka mulai dari 1 - 10\n";
		cout<<"anda hanya mempunyai "<<i<<" kesempatan\n";
		cout<<"berapakah angkanya : ";cin>>tebakan;
			if (tebakan > angka)
			{
				salah=salah+1;
				i=i-1;
				if (salah >2 )
				{
					system("cls");
					goto end2;
				}
				cout<<"\nangka yang anda tebak terlalu besar\n";
				system("pause");
				system("cls");
				goto a2;
			}
			else if (tebakan < angka)
			{
				salah=salah+1;
				i=i-1;
				if (salah >2 )
				{
					system("cls");
					goto end2;
				}
				cout<<"\nangka yang anda tebak terlalu kecil\n";
				system("pause");
				system("cls");
				goto a2;
			}
			else if (tebakan == angka)
			{
				cout<<"angka yang anda tebak benar ";
				cout<<"ingin bermain lagi [y/n] : ";cin>>jpilih;
				switch (jpilih)
				{
					case 'y':
						system("cls");
						goto lagi;
						break;
					case 'n':
						cout<<"terimakasih telah menggunakan program kami";
						break;
					default:
						cout<<"pilihan tidak tercantum di program kami";
						break;
				}
			}
		end2:
		cout<<"kesempatan anda sudah habis, jawaban yang benar adalah "<<angka;
		cout<<"\ningin bermain lagi [y/n] : ";cin>>jpilih;
				switch (jpilih)
				{
					case 'y':
						system("cls");
						goto lagi;
						break;
					case 'n':
						cout<<"terimakasih telah menggunakan program kami";
						break;
					default:
						cout<<"pilihan tidak tercantum di program kami";
						break;
				}
	}
	else
	{
		cout<<"pilihan tidak tercantum di program kami\n";
		cout<<"anda akan otomatis keluar dari permainan, terimakasih";
	}
getch();
}
