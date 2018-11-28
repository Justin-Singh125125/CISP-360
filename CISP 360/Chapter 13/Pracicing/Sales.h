#ifndef SALES_H
#define SALES_H

class Sale
{
	private:
		double itemCost;
		double taxRate;
	public:
		//a constructor
		Sale (double cost, double rate)
		{
			itemCost = cost; 
			taxRate = rate;
		}
		double getItemCost()const
		{
			return itemCost;
		}
		double getTaxRate() const
		{
			return taxRate;
		}
		double getTax()const
		{
			return (itemCost * taxRate);
			
		}
		double getTotal()const
		{
			return (itemCost + getTax());
		}
};

#endif
