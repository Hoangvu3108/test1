// nhap cho dung thi thoi 
// sai vui long nhap lai
#include<stdio.h>
int nhapsonguyenduong()
{
	int number;
	
while (1)
{
	printf("Nhap vap mot so nguyen duong");
	if(scanf("%d",&number)!=1|| number<=0)
	{
		printf("Gia tri nhap vao khong hop le.Vui long nhap lai");
	}
	else {
		return number;
	}
}
}

int main(){
	int number= nhapsonguyenduong();
	printf("So nguyen duong ban nhap la:%d\n",number);


}
