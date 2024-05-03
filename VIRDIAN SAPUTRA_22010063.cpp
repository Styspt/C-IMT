#include <stdio.h>
 int main()
 {
 
   char nm[20],npm[15];
   float BB, TB, IMT;
   printf("Nama : "); gets(nm);
   printf("NPM : "); gets(npm);
   printf("Masukan Berat Badan Anda (Kg): "); scanf("%f",  &BB);
   printf("Masukan Tinggi Badan Anda (M) : "); scanf("%f",  &TB);
  
   IMT  =  BB/(TB*TB);
   printf("Indeks Massa Tubuh Anda Adalah = %g\n", IMT);
   
   if(IMT<=18.5)
   printf("Maka Termasuk Kategori Kurus");
   else
   if(IMT>=18.5)
           if(IMT<=24.9)
   printf("Maka Termasuk Kategori Normal");
   else
   if(IMT>=25)
           if(IMT<=29.9)
   printf("Maka Termasuk Kategori Kelebihan Berat Badan");
   else
   if(IMT>=30)
   printf("Maka Termasuk Kategori Obesitas");
  
 }