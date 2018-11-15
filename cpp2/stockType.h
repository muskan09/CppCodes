#ifndef H_stockType
03
	#define H_stockType
04
	 
05
	#include <iostream>
06
	#include <fstream>
07
	#include "myString.h"
08
	 
09
	using namespace std;
10
	  
11
	class stockType
12
	{
13
	    friend ostream& operator<< (ostream&, const stockType&);
14
	    friend ifstream& operator>> (ifstream&, stockType&);
15
	 
16
	public:
17
	    void setStockInfo(newString symbol, double openPrice,
18
	                      double closeProce, double high,
19
	                      double Low, double prevClose,
20
	                      int shares);
21
	    newString getSymbol();
22
	    double getPercentChange();
23
	    double getOpenPrice();
24
	    double getClosePrice();
25
	    double getHighPrice();
26
	    double getLowPrice();
27
	    double getPrevPrice();
28
	    int getnoOfShares();
29
	 
30
	    stockType();
31
	    stockType(newString symbol, double openPrice,
32
	              double closeProce, double high,
33
	              double Low, double prevClose,
34
	             int shares);
35
	 
36
	    int operator ==(stockType other);
37
	    int operator !=(stockType other);
38
	    int operator <=(stockType other);
39
	    int operator >=(stockType other);
40
	    int operator >(stockType other);
41
	    int operator <(stockType other);
42
	 
43
	private:
44
	    newString stockSymbol;
45
	    double todayOpenPrice;
46
	    double todayClosePrice;
47
	    double todayHigh;
48
	    double todayLow;
49
	    double yesterdayClose;
50
	    double percentChange;
51
	    int noOfShares;
52
	};
53
	 
54
	//Overload the stream insertion operator <<
55
	ostream& operator << (ostream& osObject, const stockType& str)
56
	{
57
	osObject << str.strPtr;
58
	 
59
	return osObject;
60
	}
61
	 
62
	//Overload the stream extraction operator >>
63
	istream& operator >> (istream& isObject, stockType& str)
64
	{
65
	char temp[81];
66
	 
67
	isObject >> setw(81) >> temp;
68
	str = temp;
69
	return isObject;
70
	}
71
	 
72
	#endif
