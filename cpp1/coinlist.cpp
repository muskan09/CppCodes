//file name: stockType.h
#ifndef H_stockType
#define H_stockType

	#include <iostream>

	#include <fstream>

	#include "myString.h"

	 

	using namespace std;

	class stockType

	{

	    friend ostream& operator<< (ostream&, const stockType&);

	    friend ifstream& operator>> (ifstream&, stockType&);

	 

	public:
	    void setStockInfo(newString symbol, double openPrice,

	                      double closeProce, double high,

	                      double Low, double prevClose,

	                      int shares);

	    newString getSymbol();

	    double getPercentChange();

	    double getOpenPrice();

	    double getClosePrice();

	    double getHighPrice();

	    double getLowPrice();

	    double getPrevPrice();

	    int getnoOfShares();

	 

	    stockType();
	    stockType(newString symbol, double openPrice,

	              double closeProce, double high,

	              double Low, double prevClose,

	             int shares);


	    int operator ==(stockType other);

	    int operator !=(stockType other);

	    int operator <=(stockType other);

	    int operator >=(stockType other);

	    int operator >(stockType other);
	    int operator <(stockType other);

	 

	private:

	    newString stockSymbol;

	    double todayOpenPrice;

	    double todayClosePrice;

	    double todayHigh;

	    double todayLow;

	    double yesterdayClose;

	    double percentChange;

	    int noOfShares;

	};

	 

	//Overload the stream insertion operator <<

	ostream& operator << (ostream& osObject, const stockType& str)
	{

	osObject << str.strPtr;

	 
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



for simplicity, I decided to place that d
