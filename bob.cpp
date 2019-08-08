
#include <iostream>
#include <string>
using namespace std;

int main()
{
	// Intro statement
	cout << "By the end of the video you will find the car that suites your needs." << endl;


		// what type of car do you want
	int car1;
	cout << "What type of car do you want(sport(1), suv(2), electric(3), truck(4), convertible(5)?" << endl;
	cin >> car1;
	switch (car1)
	{
	case 1:
		// place to do code for sports car 

		// price section
		char price1;
		cout << "What type of sports car are you looking for affordable(a), performance(e), luxury(y) ?" << endl;
		cin >> price1;
		
		switch (price1) {

		case 'a':
			// place for code in affordable

			cout << "A car that fits your needs is the Dodge Charger. It has a starting price of $29,000." << endl;
			break;
		case 'e':
			//place for code in expensive 

			cout << "A car that is what you are looking for is the Bugatti Chiron. It has a starting price of $3,000,000. It is the fastest car in the world." << endl;
			break;
		case 'y':
			// place for code in luxury

			cout << "A car that is what you are looking for is the Aston Martin Vanquish. It has a starting price of $294,000. " << endl;
			break;
		}
		break;
	case 2 :
		// place to do code for suv

		//price section
		char price2;
		cout << "What is your price range for the car affordable(f), expensive(x), rugged affordable(r), rugged expensive(z), or luxurious(l)?" << endl;
		cin >> price2;
		
		switch (price2) {

		case 'f':
			// place for code in affordable 

			cout << "A car that fits your needs is the Honda Pilot. It has a starting price of $31,000." << endl;
			break;
		case 'x':
			//place for code in expensive

			cout << "A car that fits your needs is the Range Rover. It has a starting price of $90,000." << endl;
			break;
		case 'r':
			// place for rugged affordable

			cout << "A car that is what you are looking for is the Jeep Wrangler. It has a starting price of $28,000." << endl;
			break;
		case 'z':
			// place for rugged expensive

			cout << "A car that would be a good choice is the Mercedes G Wagon. It has a starting price of $124,000." << endl;
			break;
		case 'l':
			//place for luxury

			cout << "A good car for what you are looking for is the Rolls Royce Cullinan. It has a starting price of $325,000." << endl;
			break;
		} 
		break;
	case 3 :
		//place to do code for electric

		//price section
		char price3;
		cout << "What type of car are you looking: (affordable(r), performance(n), or luxury(u) ?" << endl;
		cin >> price3;
		
		switch (price3) {

		case 'r':
			// place to do code for affordable

			cout << "A car that fits your needs is the Tesla model 3. It has a starting price of $35,000." << endl;
			break;
		case 'n':
			// place to do code for performance

			cout << "A car that fits your needs is the Tesla model S p100d. It has a starting price of $93,000. It can go 0-60mph in 2.4 seconds." << endl;
			break;
		case 'u':
			// place to do code for luxury

			cout << "A car that fits your needs is the Tesla model X p100d. It has a starting price of $105,000." << endl;
			break;
		}
		break;
	case 4 :
		// place to do code for truck

		// price section
		char price4;
		cout << "What type of truck are you looking for: affordable(d), performance(t), or luxury(i) ?" << endl;
		cin >> price4;

		switch (price4) {


		case 'd':
			// place to do code for affordable 

			cout << "A truck that fits your needs is the Chevrolet Colorado. It has a starting price of $21,000." << endl;
			break;
		case 't':
			// place to do code for performance

			cout << "A truck that fits your needs is the Ford Raptor. It has a starting price of $53,000" << endl;
			break;
		case 'i':
			// place to do code for luxury

			cout << "A truck that has what you are looking for is the Ford F250 Limited. It has a Price of $80,000. " << endl;
			break;
		}
		break;
	case 5:
		// Place to do code for convertible

		//price section 
		char price5;
		cout << "What type of convertible are you looking for: affordable(s), performance(g), luxury(q)?" << endl;
		cin >> price5;

		switch (price5){


		case 's':
			//place to do code for affordable

			cout << "A car that has what you are looking for is the Chevrolet Camaro Convertible. It has a starting price of $30,000." << endl;
			break;
		case 'g':
			//place to do code for performance

			cout << "A convertible that has what you are looking for is the Lamborghini Aventador SVJ Roadster. It has a starting price of $574,000." << endl;
			break;
		case 'q':
			//place for luxury

			cout << "A convertible that has what you are looking for is the Rolls Royce Dawn. It has a starting price of $374,000." << endl;
			break;

		}

	}

}




