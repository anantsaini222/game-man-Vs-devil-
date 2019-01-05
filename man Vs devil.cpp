#include<iostream>
using namespace std;

int main(){
	
	printf("\n\t\t\t\a*** MAN VS DEVIL BEGINS ***");
	printf("\n\n\nINSTRUCTION:");
	printf("\n1.Boat should not be empty.");
	printf("\n2.Boat max limit (02).");
	printf("\n3.If Devil>Man in any condition Game Over");
	
	for(;;){
        int m1=3,d1=3,m2=0,d2=0;
		int m,d;
	
	for(;;){
		
		printf("\n\n\n\t\t\tBoat On The Way to ISLAND:1");
		if(m=0){
		printf("\n\n\t\t\t    Men to send : ");
		scanf("%d",&m);
		}
		else if(d=0){
		printf("\t\t\t    Devil to send : ");
		scanf("%d",&d);
		}
		else{
			printf("\n\n\t\t\t    Men to send : ");
			scanf("%d",&m);
			printf("\t\t\t    Devil to send : ");
			scanf("%d",&d);
		}
		if(m+d>3){
				printf("\n\t\t\t\tGAME OVER");
				printf("\n\t\t\tDo You Want To Start Again.");
				break;
		}
		m1=m1-m;
		d1=d1-d;
		m2=m2+m;
		d2=d2+d;
		printf("\n\n  Total no.of men on Island1 : %d",m1);
		printf("\nTotal no.of devil on Island1 : %d",d1);
		printf("\n\n  Total no. of men on Island2 : %d",m2);
		printf("\nTotal no. of devil on Island2 : %d\n",d2);
		
		if(m2+d2==6){
			printf("\n\n\t\t\t\a   *** CONGRATULATION ***");
			printf("\n\t\t\t\t\a  YOU WON");
			break;
		}
		
		printf("\n\n\t\t\tBoat On The Way to ISLAND:2");
		if(m<0){
		printf("\n\n\t\t\t    Men to send : ");
		scanf("%d",&m);
		}
		else if(d<0){
		printf("\t\t\t    Devil to send : ");
		scanf("%d",&d);
		}
		else{
			printf("\n\n\t\t\t    Men to send : ");
			scanf("%d",&m);
			printf("\t\t\t    Devil to send : ");
			scanf("%d",&d);
		}
		if(m+d>3){
				printf("\n\t\t\t\tGAME OVER");
				printf("\n\t\t\tDo You Want To Start Again.");
				break;
		}
		m1=m1+m;
		d1=d1+d;
		m2=m2-m;
		d2=d2-d;
		printf("\n\n  Total no.of men on Island1 : %d",m1);
		printf("\nTotal no.of devil on Island1 : %d",d1);
		printf("\n\n  Total no. of men on Island2 : %d",m2);
		printf("\nTotal no. of devil on Island2 : %d\n",d2);	
	
	if(m1<0 || d1<0 || m2<0 ||d2<0){
                printf("\n\t\t\t\tGAME OVER");
				printf("\n\t\t\tDo You Want To Start Again.");
				break;
	}
	if(d1>m1){
		if (m1==1 || m2==2){
				printf("\n\t\t\t\tGAME OVER");
				printf("\n\t\t\tDo You Want To Start Again.");
				break;
				}
		else{
			
	 	} 
	}
	else if(d2>m2){
		if(m==0){
			continue;
		}
		else if(m2==1 || d2==2){
				printf("\n\t\t\t\tGAME OVER");
				printf("\n\t\t\tDo You Want To Start Again.");
				break;
				}
	 }
    else if(m1>3 || d1>3){
				printf("\n\t\t\t\tGAME OVER");
				printf("\n\t\t\tDo You Want To Start Again.");
				break;
	}
	else if(m2>3 || d2>3){
				printf("\n\t\t\t\tGAME OVER");
				printf("\n\t\t\tDo You Want To Start Again.");
				break;
	}
	else if( m1==0 || d1==0 ){
		 	   printf("\n\n\t\t\t\tCONGRATULATION");
			   break;
	}
   }
   if(m2+d2==6){
   	break;
   }
  }	
  return 0;
}
