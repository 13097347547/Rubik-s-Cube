#include<stdio.h>
void maigicshow(char str[][9]);
void turn(char str[][9]);
int main()
{	
	char magiccube[][9]={{'y','y','y','y','y','y','y','y','y'},{'o','o','o','o','o','o','o','o','o'},{'b','b','b','b','b','b','b','b','b'},
	{'r','r','r','r','r','r','r','r','r'},{'g','g','g','g','g','g','g','g','g'},{'w','w','w','w','w','w','w','w','w'}};
	maigicshow(magiccube);
	return 0;
}
void turn(char str[][9])
{
	int i,j,q;
	char a,b,c,d;
	scanf("%d", &q);
	switch(q)
	{
        case 1: 
        {
        	a=str[0][0];
        	str[0][0]=str[0][2];
        	str[0][2]=str[0][8];
        	str[0][8]=a;
        	for(i=0;i<5;i++)
			{
				a=str[1][i];
				str[1][i]=str[2][i];
				str[2][i]=str[3][i];
				str[4][i]=a;
			}
			break;	
		}
        case 2: ; break;
        case 3: ; break;
        case 4: ; break;
        case 5: ; break;
        case 6: ; break;
        default:printf("error\n"); break;
	}
}
void maigicshow(char str[][9])
{
	int i,j;
	for(i=0;i<6;i++)
	{
		for(j=0;j<9;j++)
		{
			printf("%d%d ",i,j);
			if(j%3==2) 
			printf("\n");
		}
		printf("\n");
	}
}
