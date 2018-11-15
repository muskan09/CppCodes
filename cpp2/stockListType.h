#ifndef H_StockListType
03
	#define H_StockListType
04
	  
05
	#include "listType.h"
06
	#include "stockType.h"
07
	  
08
	class stockListType: public listType<stockType>
09
	{
10
	public:
11
	    void printBySymbol();
12
	    void printByGain();
13
	    void printReports();
14
	    void sort();
15
	    void sortByGain();
16
	 
17
	    stockListType();
18
	    stockListType(int size);
19
	 
20
	private:
21
	    int *sortIndicesGainLoss;
22
	};
23
	 
24
	#endif
