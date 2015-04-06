/*
 * Stock.cpp
 *
 *  Created on: 07-Apr-2015
 *      Author: kishor
 */

#include "Stock.h"
Stock::Stock() {
	m_company = "No Name";
	m_qty = 0;
	m_price = 0;
	port_value();
}

Stock::Stock(const std::string & company, const float qty, const float price)
{
	m_company = company;
	m_qty = qty;
	m_price = price;
	port_value();
}

void Stock::addQty(float qty) {
	m_qty += qty;
	port_value();
}

void Stock::updatePrice(float price) {
	m_price = price;
	port_value();
}

void Stock::printPort() const {
	std::cout << "Company = " << m_company << std::endl;
	std::cout << "Qty = " << m_qty << std::endl;
	std::cout << "Price = " << m_price << std::endl;
	std::cout << "Value = " << m_val << std::endl;
}

Stock Stock::compareLot(const Stock & s) {
	if (this->getQty() > s.getQty())
	{
		return *this;
	} else {
		return s;
	}
}
