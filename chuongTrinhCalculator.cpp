#include <stdio.h>
void menu (){
	
	printf ("     TINH TOAN     \n");
	printf ("====================\n");
	printf ("1. Nhap so \n");
	printf ("2. Tinh tong \n");
	printf ("3. Tinh hieu \n");
	printf ("4. Tinh tich \n");
	printf ("5. Tinh thuong \n");
	printf ("6. Thoat \n");
	printf ("====================\n");
	printf ("Vui long chon chuc nang: \n");
}
int tinhTong(int a, int b){
	return a+b;
}

int tinhHieu(int a, int b){
	return a-b;
}

int tinhTich(int a,int b){
	return a*b;
}

double tinhThuong(int a, int b){
	return b!=0?(double)a/b:NULL;
}
int main(){
	int m,a,b;
	do {
		menu();
		scanf ("%d",&m);
		switch(m){
			case 1:{
				printf ("nhap so thu nhat:");
				scanf ("%d",&a);
				printf ("nhap so thu hai:");
				scanf ("%d",&b);
				break;
			}
			case 2:{
				int s=tinhTong(a,b);
				printf ("Tong cua hai so la: %d\n",s);
				break;
			}
			case 3:{
				int h=tinhHieu(a,b);
				printf ("Hieu cua hai so la: %d\n",h);
				break;
			}
			case 4:{
				int m=tinhTich(a,b);
				printf ("Tich cua hai so la: %d\n",m);
				break;
			}
			case 5:{
				double c=tinhThuong(a,b);
				if(c==NULL){
					printf ("khong the chia het cho 0\n");
				}else{
					printf ("Thuong so la: %f\n",c);
				}
				break;
			}
		}
	}while(m!=6);
}
