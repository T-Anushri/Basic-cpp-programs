#include<iostream>
#include<vector>
using namespace std;
class Product{
	public:
		string Name,Description,Category;
		double Price;
		int Quantity;
		int id;
	Product(string N,string D,string C,double P,int Q,int i)
	{
		Name=N;
		Description=D;
		Category=C;
		Price=P;
		Quantity=Q;
		id=i;
	}
	void display()
	{
		cout << "Product ID: "<< id << endl;
        cout << "Name: " << Name << endl;
        cout << "Description: " << Description << endl;
        cout << "Price: $" << Price << std::endl;
        cout << "Quantity: " << Quantity << std::endl;
        cout << "Category: " << Category << std::endl;
        cout << "------------------------" << std::endl;
    }
};
class Inventory{
	public:
		vector<Product>products;
		void addProduct(Product &product)
		{
			products.push_back(product);
            cout<<"Product added successfully. Product ID: "<<product.id<<endl;
		}
		void displayAllProducts()
		{
        	cout<<"Inventory Products:"<<endl<<endl;
        	for (int i=0;i<products.size();i++) 
			{
            	products[i].display();
            }
        }
};
int main()
{
    Inventory inventory;
    string name,desc,cat;
    double price;
.    int qty;
    for(int i=0;i<2;i++)
    {
	    cout<<"Enter Product Name: ";
	    getline(cin,name);
	    cout<<"Enter Product Description: ";
	    getline(cin,desc);
	    cout<<"Enter Product Price: ";
	    cin>>price;
	    cout<<"Enter Product Quantity: ";
	    cin>>qty;
	    cin.ignore(); 
	    cout<<"Enter Product Category: ";
	    getline(cin,cat);
	    Product newProduct(name,desc,cat,price,qty,i);
	    inventory.addProduct(newProduct);
	    inventory.displayAllProducts();
	}	
    return 0;
}
