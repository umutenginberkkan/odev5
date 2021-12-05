

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(void) {

	srand(time(NULL));
	int a[15];
	for(int i =0;i<15;i++){
		a[i]=(rand()%40)+20;
	}
		int büyük =0; int küçük =100;int toplam =0; int ikinci =0;
	for(int k =0;k<15;k++){

		if(a[k]>a[k+1]&&a[k]>büyük) büyük=a[k];

		if(a[k]<a[k+1]&&a[k]<küçük) küçük=a[k];
		toplam+=a[k];
		}
	for(int p =0;p<15;p++){if(a[p]>a[p+1]&&a[p]>ikinci&&a[p]<büyük) ikinci=a[p];}


	for(int b =0;b<15;b++){
			printf("%d.eleman = %d\n",b+1,a[b]);
		}
	double c = toplam/15;

	printf("en büyük = %d\n",büyük);
	printf("2. en büyük = %d\n",ikinci);
	printf("en küçük = %d\n",küçük);
	printf("ortalama = %lf",c);


}
