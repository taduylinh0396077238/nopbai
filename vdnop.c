#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
		int   a=1000000;
	float b=25000;
	float c=15000;
	float d=10000;
	float e=20000;
	float x=0;
	int z,id,sokhach,i;
	int sum=0;
	char y;
	
	printf("Chao mung quy khach den voi cua hang ToCoToCo\n");
	printf("chao quy khach quy khach den bao nhiu nguoi a\n");
	printf("nhap so khach den\n");
	scanf("%d",&sokhach);
	int nguoi[sokhach], sl[5];
	for(i=0 ; i <5 ;i++){
		sl[i]=0;
		}
	printf("moi quy khach chon nhung do uong sau day\n");
	printf("1.trà dá khong da  %f \n",b);
	printf("2. coca khong gas %f\n",c);
	printf("3. cafe vi uc %f \n",d);
	printf("4. nuoc khoang tinh khiet %f \n",x);
	printf("5.tra tranh không duong %f \n",e);
	for(i=0 ; i < sokhach ; i++){
		
		printf("quy khach thu %d muon chon gi\n",i+1);
		fflush(stdin);
		scanf("%d",&id);
		nguoi[i]=id;
		switch(id ){
		 	case 1:
		        sum = sum + b;
			    break;
			case 2:
			    sum = sum + c;
		     	break;
			case 3:
			    sum = sum + d;
			    break;
			case 4:
			    sum = sum + e;
			    break;
			case 5:
			    sum = sum + x;
			    break;		
		}
		}
	printf("tong %d", sum);
	printf("Thue 10%\n la %f",sum*1.1);
	printf("Tien phai thanh toan %f \n", sum*1.1);
	return 0;
}
