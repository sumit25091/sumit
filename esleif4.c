#include<stdio.h>

int main()
{
	float hardness,carbon_content,tensile_strength;
	
	printf("\n Enter hardness of steel(>58):");
	scanf("%f",&hardness);
	
	printf("\n Enter carbon content of steel(<0.7):");
	scanf("%f",&carbon_content);
	
	printf("\n Enter tensile strength of steel(>2800):");
	scanf("%f",&tensile_strength);
	
   if (hardness>58 && carbon_content<0.7 && tensile_strength>2800) {
   	 printf("Grade of steel :10/n");
   } 
   else if(hardness>58 && carbon_content<0.7) {
   	 printf("Grade of steel :9/n");
   }
   else if(hardness>58 && tensile_strength>2800) {
   	 printf("Grade of steeel :8/n");
   }
   else if(carbon_content<0.7 && tensile_strength>2800) {
   	 printf("Grade of steel :7/n");
   }
   else if(hardness>58 || carbon_content<0.7 || tensile_strength>2800) {
   	 printf("Grade of steel :6/n");
   }
   else {
   	 printf("Grade of steel :5/n");
   }
   
   return 0;
}
