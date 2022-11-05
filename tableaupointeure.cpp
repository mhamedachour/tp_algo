# include <stdio.h>
# include <time.h>
# include <math.h>
# include <stdlib.h>

void remplir (int *tab , int taille ,int valleuremax)
{
	int i;
	
	for (i=0;i<taille;i++)
	{
	  tab[i]=(int)(rand()/(((double)RAND_MAX+1)/valleuremax));
    }
    
    printf("\n");
    
	for (i=0;i<taille;i++)
	
    {
	    printf ("%d",tab[i]);
	    printf ("\t");
	    
	
    }
    printf ("\n");
	
	
}

void triselection (int* tab ,int max)

{
	int ind ,i;
	int j;
	int temp;
	i=0;
	while (i<max)
	{
		ind=i;
		
		for (j=i+1;j<max;j++)
		{
			if (tab[j]<tab[ind])
			{
					ind = j;
			}
			
		}
		temp=tab[i];
		tab[i]=tab[ind];
		tab[ind]= temp;

		i=i+1;
	}
	
	printf ("\nle tableau trei est : ");
	printf ("\n");
	
	
	for (j=0;j<max;j++)
	{
		printf ("%d",tab[j]);
		printf ("\t");
	}
	
        

}
void triinsertion (int *tab,int max)
{
	int i,j,pos,temp;
	for(i=0;i<max;i++)
	{
		temp=tab[i];
		pos=i;
		while((pos>0)&&(tab[pos-1]>temp))
		{
			tab[pos]=tab[pos-1];
			pos=pos-1;
		}
		tab[pos]=temp;
	}
	printf("le tableau tri est : ");
	printf("\n");
	for(j=0;j<max;j++)
	{
		printf("%d",tab[j]);
		printf("\t");
	}
}

void tribulle (int *tab,int n)
{
	int max=n;
	int i,j,temp;
	while (max>0)
	{
		i=0;
		while(i<max-1)
		{
			if(tab[i] > tab[i+1])
			{
				temp=tab[i];
				tab[i]=tab[i+1];
				tab[i+1]=temp;
			}
			i=i+1;
		}
		max=max-1;
	}
	printf("le tableau tri : ");
	printf("\n");
	for(j=0;j<n;j++)
	{
		printf("%d",tab[j]);
		printf("\t");
	}
	
}
int main()
{
	int* tab;
	int n ,s;
	
	printf ("donner moi la taille de tableau : ");
	scanf ("%d",&n);
	
	tab = (int*) malloc (n*sizeof(int));
	remplir (tab,n,1000000);
	printf("donne le type de tri:\n");
	printf("1->tri selection:\n 2->tri insertion: \n 3->tri bull: \n");
	scanf("%d",&s);
	if(s==1){
	
	triselection(tab,n);
	}
	printf("\n");
	if(s==2){
	triinsertion(tab,n);
	}
	printf("\n");
	if(s==3){
	tribulle(tab,n);
	}
	clock_t start = clock();
	for (long i=0;i<1000000;i++)
	{
		exp(log((double)i));
		clock_t finish= clock();
		printf("it took %d soconds to execute the for loop\n");
		(finish - start) / CLOCKS_PER_SEC;
		return 0;
	}
}

