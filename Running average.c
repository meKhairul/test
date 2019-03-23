#include <stdio.h> 
float main()
{
	int n,num[n];
	scanf("%d",&n);
	if(n<=100000) 
	{ 
		float s=0;
		float av; 
		for(int i=0;i<n;) 
   	{ 
		scanf("%d",&num[i]); 
		s+=num[i];
		i+=1;
		av=s/i;
		printf("%.10f\n",av);
		} 
	} 
}