#include <stdio.h>
int main(void)
{
char c1; /* šī ir diskrēta mainīgā deklerēšana - noteikta
	izmēra atmiņas apgabals (char -> 1 byre) tiks sasaistīts
	ar noteiktu identikatoru(c1)
	atmiņā nav vakuums => šajā rezervētajā armiņas apgabalā būs
	kaut kāda 0 un 1 kobinācija */
printf("c1 mainīgā vērtība uzreic pēc deklarēšanas(simbols): %c\n",c1);
printf("c1 mainīgā vērtība uzreic pēc deklarēšanas(dec): %d\n",c1);
printf("c1 mainīgā vērtība uzreic pēc deklarēšanas(hex): %#x\n",c1);
printf("c1 mainīgā vērtība uzreic pēc deklarēšanas(oct): %#o\n",c1);
printf("\n");
	// mainīgā "loma" ir mainīties
c1 = 'A'; // visbiežāk šo izmaiņu veiksim ar NB! piešķiršanas operāciju
	// piešķiršanas operācijai ir gandrīz viszemākā prioritāte
	// (tā tiek izpildīta viena no pēdējām)
	// labajā pusē izreķinātais lielums (vertība) tiek izmitināta
	// atmiņas apgabalā, kas tiek saistīts ar kreisajā pusē
	// pieminēto identikatoru
printf("c1 mainīgā vērtība pēc piešķiršanas operācijas(simbols): %c\n",c1);
printf("c1 mainīgā vērtība pēc piešķiršanas operācijas(dec): %d\n",c1);
printf("c1 mainīgā vērtība pēc piešķiršanas operācijas(hex): %#x\n",c1);
printf("c1 mainīgā vērtība pēc piešķiršanas operācijas(oct): %#o\n",c1);

int birth_year = 2000; 	// šī ir mainīgā definēšana (atmiņas apgabala
			// sasaistīšana ar identifikatoru
			// un vērtības piešķiršana)
			// mainīgajiem identifikatoriem, jeb vārdiem vēlams
			// izvēlēties mnemoniskus nosaukumus - nosaukuma
			// vārds vais teksts atspoguļo nolūku, kuram šis
			// mainīgais ir paredzēts
			// identifikators nevar sākties ar ciparu
			// un saturēt atstarpi
			// var saturēt - [A...Za..z][0...9][_]
printf("\n");
printf("birth_year mainīgā vērtība(simbols): %c\n",birth_year);
printf("birth_year mainīgā vērtība(dec): %d\n",birth_year);
printf("birth_year mainīgā vērtība(hex): %#x\n",birth_year);
printf("birth_year mainīgā vērtība(oct): %#o\n",birth_year);

int i1, i2 = 0, i3 = 0x13, i4 = 025;
int modified_birth_year = birth_year >> 4;

printf("\n");
printf("modified_birth_year mainīgā vērtība(simbols): %c\n",modified_birth_year);
printf("modified_birth_year mainīgā vērtība(dec): %d\n",modified_birth_year);
printf("modified_birth_year mainīgā vērtība(hex): %#x\n",modified_birth_year);
printf("modified_birth_year mainīgā vērtība(oct): %#o\n",modified_birth_year);

char c = 10;
int i = 4569;
float f = 3.e-16;
double d = 4789e39;

printf("c=%d\t(piešķirtas atmiņas izmērs baitos - %ld)\n",c,sizeof(c));
printf("\tatrasanās vieta atmiņā - %p\n",&c);
printf("i=%d\t(piešķirtas atmiņas izmērs baitos - %ld)\n",i,sizeof(i));
printf("\tatrasanās vieta atmiņā - %p\n",&i);
printf("f=%e\t(piešķirtas atmiņas izmērs baitos - %ld)\n",f,sizeof(f));
printf("\tatrasanās vieta atmiņā - %p\n",&f);
printf("d=%e\t(piešķirtas atmiņas izmērs baitos - %ld)\n",d,sizeof(d));
printf("\tatrasanās vieta atmiņā - %p\n",&d);

printf("\n");
int *i_adrese = &i;
printf("i mainīgā adrese - %p\n",i_adrese);
int *i_adreses_kopija = i_adrese;
printf("i adreses kopija - %p\n",i_adreses_kopija);
printf("i mainīgā vērtība, iegūta pielietojot tā adresi - %d\n",*i_adrese);
printf("i mainīgā vērtība, iegūta pielietojot tā adreses kopiju - %d\n",*i_adreses_kopija);

int **i_adreses_adrese = &i_adrese;
printf("i adreses adrese - %p\n",i_adreses_adrese);
printf("i adreses adreses izmērs baitos - %ld\n",sizeof(i_adreses_adrese));

return 0;
}
