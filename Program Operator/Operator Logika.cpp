#include <iostream>
using namespace std;

main()
{
	bool nilai;
	nilai = ( (5 == 5 ) && ( 3 > 6) ); // hasil dari = fasle, karena (true && false)
	cout << "Nilai = " <<nilai <<endl;
	nilai = ( (5 == 5 ) || ( 3 > 6) ); // hasil dari = true, karena (true || false)
	cout << "Nilai = " <<nilai <<endl;
	
}
