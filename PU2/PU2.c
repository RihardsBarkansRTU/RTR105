#include <stdio.h>
#include <stdlib.h>

void main() 
{
    
    char skaitlis,a,b,i;
    char *ptr;

    printf("Visaugstāk cienījāmais lietotāj! Es tevi lūdzu ievadīt skaitli, kas atbilstu \"signed char\" datu tipam!\n");
    scanf("%d",&skaitlis);

    //izveido masīvu
    ptr = (char*)malloc(8);
    for (char i = 0; i<8 ; i++)
    {
        // skaitlis 'a' netiek bīdīts (sākumā i = 0)
        a = (skaitlis>>i);
        // 'b' tiek pabīdīts vienu bitu pa labi vairāk, nekā 'a'
        b = (skaitlis>>i+1);
        
        //notiek salīdzināšna starp nebīdīto 'a' un bīdīto 'b'
        //Ja nobīdītais skaitlis 'b' ir 2 reizes mazāks, tad tiktu printēta 0, jo atlikuma nav.
        //Ja ir atlikums, tad tiktu printēts 1.
        //ar printf() binārais skaitlis tiktu printēts no LSM -> MSB, bet mums vajag otrādāk
        //Tādēļ visi skaitļi tiek saglabāti masīvā no beigām uz sākumu, un tad izprintēti
        if ((b*2)==a)
        {
            //pointeris norāda masīva beigu adresi, un skaita no tās atpakaļ
            //datu tips char neprasa reizināšanu ar 'sizeof', jo aizņem 1 baitu
            ptr[7-i] = 0;
        }
        else
        {
            ptr[7-i] = 1;
        }
    }
    //printē masīvu
    for (i=1 ; i<8 ; i++)
    {
        printf("%d",ptr[i]);
    }

    free(ptr);
}