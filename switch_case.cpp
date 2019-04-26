#include <stdio.h>

int main() 
{
	int a;
	printf("nhap vao mot so a bat ky\n");
	scanf("%d", &a);
//	switch(a)
//	{
//		case 2: printf("hom nay la Mon");
//		break;
//		case 3: printf("hom nay la Tue");
//		break;
//		case 4: printf("hom nay la Wed");
//		break;
//		case 5: printf("hom nay la Thu");
//		break;
//		case 6: printf("hom nay la Fri");
//		break;
//		case 7: printf("hom nay la Sa");
//		break;
//		case 8: printf("hom nay la SUN");
//		break;
//		default: printf("hom nay la thu may?");
//		break;
//	}
	if(a == 2) {
		printf("hom nay la thu hai\a");
	}else if(a == 3) {
		printf("hom nay la thu ba\a");
	}else if(a == 4) {
		printf("hom nay la thu tu\a");
	}else if(a == 5) {
		printf("hom nay la thu nam\a");
	}else if(a == 6) {
		printf("hom nay la thu sau\a");
	}else if(a == 7) {
		printf("hom nay la thu bay\a");
	}else if(a == 8) {
		printf("hom nay la thu chu nhat\a");
	}else{
		printf("khong phai ngay trong tuan");
	}
	return 0;
}
