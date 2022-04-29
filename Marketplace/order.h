#pragma once
#include <string>
#include <iostream>
#include <vector>
#include "product.h"
#include"seller.h"

using namespace std;

struct CustomerDetails {
	string name;
	string address;
	string phone;
};

struct orderDetail
{
	string prodName;
	int prodQunt;
	int prodPrice;
	int oridId;
	int ordSellerId;
};

class order
{
	CustomerDetails customerDetails;
	vector<product> *orderProducts;
	orderDetail orderDetailstr;

 public:	
	order(string name, string address, string phone, vector<product> products[]) {
		customerDetails.name = name;
		customerDetails.address = address;
		customerDetails.phone = phone;
		orderProducts = products;
	}
	seller orderSellerObj;
	CustomerDetails getDetails() {
		return this->customerDetails;
	}
	product getProduct();
	void dataToSeller(orderProducts);
	void addingOrderToStruct(orderProducts);
};

