/*
Fhutka Hiban Dairoby
001202500055
*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>



int satu(int x){

	if(x >= 85){
		printf("\nyou got A\n");}
		else if(x >= 70){
		printf("\nyou got B\n");}
		else if(x >= 55){
		printf("\nyou got C\n");}
		else if(x >= 40){
		printf("\nyou got D\n");}
		else{printf("\nyou got E\n");}
		
		
	
	return printf("----------");
}


int dua(int y){	
	if(y >= 85){
		printf("\nyou got A\n");}
		else if(y >= 70){
		printf("\nyou got B\n");}
		else if(y >= 55){
		printf("\nyou got C\n");}
		else if(y >= 40){
		printf("\nyou got D\n");}
		else{printf("\nyou got E\n");}
	return printf("----------");
}

	
int tiga(int z){
	if(z >= 85){
		printf("\nyou got A\n");}
		else if(z >= 70){
		printf("\nyou got B\n");}
		else if(z >= 55){
		printf("\nyou got C\n");}
		else if(z >= 40){
		printf("\nyou got D\n");}
		else{printf("\nyou got E\n");}
	return printf("----------");
}


int maximum(int a, int b, int c){
	int max = a;
	if(b > max)
		max = b;
	if (c > max)
		max = c;
	return max;
}

int minimum(int d, int e, int f){
	int min = d;
	if(e < min)
		min = e;
	if (f < min)
		min = f;
	return min;
}

int main()
{
    int counter = 1, min, max, i = 0, num, pilih; 
    float avg, score_satu, score_dua, score_tiga;
	
	
    do
    {
	
        printf("\n\nchoose menu: \n1. Add student \n2. Show Summary \n3. Exit\n Choose: ");
        scanf("%i", &pilih);
        switch (pilih)
        {
        case 1:
	
			
			
            //  1st
            printf("Add three of your score: \n\n");
            printf("First score: ");
            scanf("%f", &score_satu);  
            // 2nd
            printf("Second score: ");
            scanf("%f", &score_dua);
            // 3rd
            printf("Third score: ");
            scanf("%f", &score_tiga);
        
//        printf("%i", dua(score2));
//    	printf("%i", satu(score1));
//    	printf("%i", tiga(score3));
            
            avg = (score_satu + score_dua + score_tiga)/3;
            printf("your average is %f see the summary for more detail", avg);
            break;

        case 2:
        	if(score_satu != 0){
			
		printf("%i", satu(score_satu));
    	printf("%i", dua(score_dua));
    	printf("%i", tiga(score_tiga));
		
		printf("\n\nyour hiegest score is %i", maximum(score_satu, score_dua, score_tiga));
		printf("\n\nyour lowest score is %i", minimum(score_satu, score_dua, score_tiga));
		
		
		}
    	
    	
    	else{printf("you didn't submit");
		}
            break;
//udah keluar tu kode
        case 3:
            counter = 5;
            printf("Thank you for using the service");
            break;

        default:
            printf("not invalid menu");
            break;
        } 
	}
	
    while (counter != 5);

    return 0;

}
