#include <iostream>
08
	#include <cstring>
09
	#include "listType.h"
10
	#include "stockType.h"
11
	//#include "stockMarketMain.h"
12
	 
13
	using namespace std;
14
	 
15
	int main() {
16
	     
17
	 
18
	    stockType stock1 = new stockType("IBD", 68.00, 71.00, 72.00, 67.00, 75.00, 15000);
19
	    stockType stock2 = new stockType("MSET", 120.00, 140.00, 145.00, 140.00, 115.00, 30920);
20
	    stockType stock3 = new stockType("AOLK", 80.00, 75.00, 82.00, 74.00, 83.00, 5000);
21
	    stockType stock4 = new stockType("CSCO", 100.00, 102.00, 105.00, 98.00, 101.00, 25000);
22
	    stockType stock5 = new stockType("ABC", 123.45, 130.95, 132.00, 125.00, 120.50, 10000);
23
	     
24
	    //cin.get();
25
	 
26
	    return 0;
27
	}
