#include "order.h"
#include"seller.h"
#include"cart.h"
#include<iostream>
using namespace std;

orderDetail order::addingOrderToStruct(orderProducts)
{
	for (int i = 0; i < orderProducts->capacity()-1; i++)
	{
		orderDetailstr.oridId = getProduct().prod[i].id;
		orderDetailstr.prodName = getProduct().prod[i].name;
		orderDetailstr.prodPrice = getProduct().prod[i].price;
		orderDetailstr.prodQunt = getProduct().prod[i].quantity;
		orderDetailstr.ordSellerId = getProduct().prod[i].seller_id;

	}
	return orderDetailstr;
}


void order::dataToSeller(orderProducts )
{
	for (int i = 0; i <=orderProducts->capacity()-1; i++)
	{
		if (orderDetailstr.ordSellerId==orderSellerObj.sel.id)
		{
			orderSellerObj.sellerOrders->push_back(orderDetailstr);

		}
		else
		{
			cout << "can not found the seller" << endl;
		}
	}
}
product order::getProduct()
{
	return orderProducts;
}