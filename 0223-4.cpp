#include <stdio.h>
main(){
	int i,j,k,a1[4][3]={{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
	for(i=0;i<=3;i++){
		for(j=0;j<=2;j++){
			printf("%3d",a1[i][j]);
		} 
		printf("\n");
	}
	for(i=0;i<2;i++){
        for(j=0;j<3;j++){
        	k=a1[i][j];
            a1[i][j]=a1[3-i][j];
            a1[3-i][j]=k;
        }
    }

    // 印出翻轉後的矩陣
    printf("\n翻轉後的矩陣：\n");
    for (i=0;i<4;i++){
        for(j=0;j<3;j++){
            printf("%3d",a1[i][j]);
        }
        printf("\n");
    }

} 
