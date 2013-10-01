/*********************************************************************
Teht„v„: HARJOITUS 10
Tekij„: Pekka Melgin
PVM: 24.9.2013
Kuvaus:
Tee ohjelma, joka laskee sy”tetyist„ kokonaisluvuista sek„ positiivisten
ett„ negatiivisten kokonaislukujen osuuden. Lukujen sy”tt„ lopetetaan
sy”tt„m„ll„ luku 0.

Tulostus:
Sy”tit kokonaislukuja seuraavasti:
----------------------------------
Negatiiviset 7 kpl 70.00%
Positiiviset 3 kpl 30.00%
Yhteens„ 10 kpl 100.00%
*********************************************************************/
#include <iostream> 
using namespace std;  
int main() 
{ 
	int syotto = 0, luku, pos = 0, neg = 0;
	while (syotto == 0) {
		cout << "Sy”t„ luku: ";
		cin >> luku;
		if (luku > 0) {
			pos++;
		}
		else if (luku < 0) {
			neg++;
		}
		else {
			syotto = 1;
		}
	}
	cout << endl << "Sy”tit lukuja seuraavasti:\n"
		<< "------------------------------\n"
		<< "Negatiiviset: " << neg << " kpl "; cout.setf(ios_base::fixed, ios_base::floatfield);
												cout.precision(2); cout << 100 * (float(neg) / (float(neg) + float(pos))) << " %\n"
		<< "Positiiviset: " << pos << " kpl "; cout.setf(ios_base::fixed, ios_base::floatfield);
												cout.precision(2); cout << 100 * (float(pos) / (float(neg) + float(pos))) << " %\n"
		<< "Yhteens„: " << neg + pos << " kpl 100.00 %\n\n";
}