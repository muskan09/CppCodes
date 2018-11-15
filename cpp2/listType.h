#ifndef H_listType
002
	#define H_listType
003
	 
004
	#include <iostream>
005
	#include <cassert>
006
	  
007
	using namespace std;
008
	 
009
	template <class elemType>
010
	class listType
011
	{
012
	public:
013
	     
014
	    int getLength() const;
015
	 
016
	 
017
	    int getMaxSize() const;
018
	 
019
	 
020
	    void sort(); 
021
	 
022
	 
023
	    void print() const;
024
	 
025
	 
026
	    void insertAt(const elemType& item, int position);
027
	 
028
	 
029
	    listType(string, double, double, double, double, double, int);
030
	 
031
	 
032
	    ~listType();
033
	 
034
	 
035
	protected:
036
	    int maxSize; 
037
	    int length;   
038
	    elemType *list;
039
	};
040
	 
041
	template <class elemType>
042
	bool listType<elemType>::isEmpty() const
043
	{
044
	    return (length == 0);
045
	}
046
	 
047
	template <class elemType>
048
	bool listType<elemType>::isFull() const
049
	{
050
	    return (length == maxSize);
051
	}
052
	 
053
	template <class elemType>
054
	int listType<elemType>::getLength() const
055
	{
056
	    return length;
057
	}
058
	 
059
	template <class elemType>
060
	int listType<elemType>::getMaxSize() const
061
	{
062
	    return maxSize;
063
	}
064
	 
065
	    //Constructor; the default array size is 50
066
	template <class elemType>
067
	listType<elemType>::listType(string, double, double, double, double, double, int)
068
	{
069
	    maxSize = listSize;
070
	    length = 0;
071
	    list = new elemType[maxSize];
072
	}
073
	 
074
	template <class elemType>
075
	listType<elemType>::~listType()  //destructor
076
	{
077
	    delete [] list;
078
	}
079
	 
080
	template <class elemType>
081
	void listType<elemType>::sort()   //selection sort
082
	{
083
	    int i, j;
084
	    int min;
085
	    elemType temp;
086
	 
087
	    for (i = 0; i < length; i++)
088
	    {
089
	        min = i;
090
	        for (j = i + 1; j < length; ++j)
091
	            if (list[j] < list[min])
092
	                min = j;
093
	 
094
	        temp = list[i];
095
	        list[i] = list[min];
096
	        list[min] = temp;
097
	    }//end for
098
	}//end sort
099
	 
100
	template <class elemType>
101
	void listType<elemType>::print() const
102
	{
103
	    int i;
104
	    for (i = 0; i < length; ++i)
105
	        cout << list[i] << " ";
106
	    cout << endl;
107
	}//end print
108
	 
109
	 
110
	template <class elemType>
111
	void listType<elemType>::insertAt(const elemType& item,
112
	                                  int position)
113
	{
114
	    assert(position >= 0 && position < maxSize);
115
	    list[position] = item;
116
	    length++;
117
	}
118
	 
119
	#endif


Is This A Good Question/Topic? 0

    +


