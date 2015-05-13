#include "CplusPlusExe.h"

#ifndef SALES_DATA_H
#define SALES_DATA_H

struct  Sales_data
{
	///operate member
	std::string isbn() const { return bookNo; }
	Sales_data& combine(const Sales_data&);
	double avg_price() const;
	///data member
	std::string bookNo;
	unsigned unit_sold = 0;
	double revenue = 0.0;
};

Sales_data add(const Sales_data&, const Sales_data&);
std::ostream &print(std::ostream&, const Sales_data&);
std::istream &read(std::istream&, Sales_data&);


Sales_data& Sales_data::combine(const Sales_data& rhs)
{
	unit_sold += rhs.unit_sold;
	revenue += rhs.revenue;
	
	return *this;
}

double Sales_data::avg_price() const
{
	return revenue / unit_sold;
}

Sales_data add(const Sales_data& lhs, const Sales_data& rhs)
{
	Sales_data sum = lhs;
	sum.combine(rhs);
	
	return sum;
}

std::ostream &print(std::ostream &os, const Sales_data &item)
{
	os << item.isbn() << " " << item.unit_sold << " " << item.revenue << " " << item.avg_price();
	
	return os;
}

std::istream &read(std::istream &is, Sales_data &item)
{
	double price = 0;
	is >> item.bookNo >> item.unit_sold >> price;
	item.revenue = price * item.unit_sold;

	return is;
}

#endif