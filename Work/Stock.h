/*
 * Stock.h
 *
 *  Created on: 07-Apr-2015
 *      Author: kishor
 */

#ifndef STOCK_H_
#define STOCK_H_
#include <iostream>
class Stock {
public:
	Stock(const std::string & company, const float qty, const float price);
	Stock();
	void updatePrice(const float price);
	void addQty(const float qty);
	float getQty() const { return m_qty; };
	void printPort() const;
	~Stock() { std::cout << "Destructor called for " << m_company << std::endl;}
	Stock compareLot(const Stock& s);
private:
	std::string m_company;
	float m_qty;
	float m_price;
	float m_val;
	void port_value() { m_val = m_price * m_qty; }
};

#endif /* STOCK_H_ */
