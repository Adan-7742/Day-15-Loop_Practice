//=======================================================================================================
//                                                                                                      =
//............................loop pratice using patterend  Day 3.......................................=
//                                                                                                      =
//=======================================================================================================


//...........................................................................................................
// On this Day we will discuss the tricks how to solve a patteren
//...........................................................................................................

//.....................................Point 1

//we have to things in a patteren 
//one is row and other is coloum


//.....................................Point 2

//first loop is used to contro the rows of a patteren
//no of lines = no of rows
// no of outer loop will run


//.....................................Point 3


// how many coloum are there in each row
//in dentify every row number how many coloum are there
//types of element in the coloum
 

//.....................................Point 4
 
// what do you need to print......

//.....................................Point 5

// now we need to print a new line

#include <iostream>
using namespace std;

/*

        00000
        11111
        00000
        11111
        00000



*/
int loop1(int n) {

	for (int i = 0;i < n;i++) {  // this loop is used for printing or telling the computer to 
		//  to print row

		for (int j = 1;j < n;j++) {      //this loop is used for printimh the coloum of patteren

			cout << (i  % 2) << " ";    // this is the output we want to print
			// now our out put will be in 0 000 form
			//  and 11111 form
		}

		cout << endl;
	}
	cout << "===================================================================================================" << endl;
	return 0;
}


/*

					1
					1 2
					3 5 8
					13 21 34 55
					89 144 233 377 610


*/


//loop that is used to show the fabiconi series 
// given ass

int loop2(int n) {


	int i, j;
	int n1 = 0, n2 = 1, r = n1 + n2;

	for (int i = 1;i <=n;i++) {

		for (int j = 1;j <= i;j++) {
			cout << r << " ";
			r = n1 + n2;
			n1 = n2;
			n2 = r;

		}
		cout << endl;
	}
	cout << "===================================================================================================" << endl;
	return 0;
}
/*

			*   *
			 * *
			  *
			 * *
			*   *




*/
// loop to create a cross patteren

int loop3(int n) {



	int i;
	for (int i = 1; i <= n; i++){
		
	for (int j = 1; j <= n; j++) {
		if ( i == j||i + j == n + 1) {
			cout << "*";
		}
		else {
			cout << " ";
		}
	}
	cout << endl;
}

	cout << "===================================================================================================" << endl;
	return 0;
}

/*

				1   1
				 2 2
				  3
				 4 4
				5   5



*/
// loop to create a cross patteren

int loop4(int n) {



	int i;
	for (int i = 1; i <= n; i++) {

		for (int j = 1; j <= n; j++) {
			if (i == j || i + j == n + 1) {
				cout << i;
			}
			else {
				cout << " ";
			}
		}
		cout << endl;
	}

	cout << "===================================================================================================" << endl;
	return 0;
}
/*

					5   5
					 4 4
					  3
					 2 2
					1   1



*/
// loop to create a cross patteren

int loop5(int n) {



	int i,j;
	for (int i = n; i >= 1; i--) {

		for( j = n; j >= 1; j--) {
			if (i == j || i + j == n + 1) {
				cout << i;
			}
			else {
				cout << " ";
			}
		}
		cout << endl;
	}

	cout << "===================================================================================================" << endl;
	return 0;
}

/*
 

				1   5
				 2 4
				  3
				 2 4
				1   5



*/
// loop to create a cross patteren

int loop6(int n) {



	int i;
	for (int i = 1; i <= n; i++) {

		for (int j = 1; j <= n; j++) {
			if (i == j || i + j == n + 1) {
				cout << j;
			}
			else {
				cout << " ";
			}
		}
		cout << endl;
	}

	cout << "===================================================================================================" << endl;
	return 0;
}
int main() 
{
	int c;
	cout << "Enter a number : " << endl;
	cin >> c;
	cout << endl;
	cout << endl;

	loop1(c);
	loop2(c);
	loop3(c);
	loop4(c);
	loop5(c);
	loop6(c);
}
