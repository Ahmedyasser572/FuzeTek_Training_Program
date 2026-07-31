
//The system enables: 
// Adding products 
// Adding customers 
// Creating orders 
// Adding products to orders 
// Calcula ng order totals 
// Displaying all stored data
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Product {
public:
    int id;
    string name;
    double price;
    int stock;

    // TODO: Complete constructor
    Product(int i, string n, double p, int s) {
        id = i;
        n = name ;
        p = price; 
        s = stock;
    }

    // TODO: Complete display method
    void display() {
        cout << id << " " << name << " " << price << " " << stock << " " << endl ;
    }
};

class OrderItem {
public:
    int productId;
    int quantity;

    // TODO: Complete constructor
    OrderItem(int pid, int qty) {
        productId = pid ;
        quantity  = qty ;
    }
};

class Customer {
public:
    int id;
    string name;
    string email;
    vector<int> orderIds;

    // TODO: Complete constructor
    Customer(int i, string n, string e) {
        id = i;
        name = n;
        email = e;

    }

    // TODO: Complete display method
    void display() {
        cout << id << " " << name << " " << email << " " << endl ;
    }
};

class Order {
public:
    int id;
    int customerId;
    vector<OrderItem> items;
    double total = 0;

    // TODO: Complete constructor
    Order(int i, int cid) {
        id = i;
        customerId = cid;
    }

    // TODO: Complete calculateTotal
    void calculateTotal(vector<Product>& products) {
        for (int i = 0; i < items.size() ; i++ )
        {
            for (int j = 0 ; j < products.size() ; j++ )
            {
                if (products[j].id == items[i].productId)
                {
                total += products[j].price * items[i].quantity;
                }
            }
        }
    }

    // TODO: Complete display
    void display(vector<Product>& products) {
        for (int i = 0 ; i < items.size(); i ++)
        {
            cout << products[i].id << " " << products[i].name << " " << products[i].price << " " << products[i].stock << endl;  
        }
    }
};

class ECommerceSystem {
public:
    vector<Product> products;
    vector<Customer> customers;
    vector<Order> orders;
    int nextProductId = 1;
    int nextCustomerId = 1;
    int nextOrderId = 1;

    // TODO: Complete addProduct
    void addProduct(string name, double price, int stock) {
       // cout << "please add the product name, price and stock" << endl;
     Product product1(nextProductId++, name  ,price , stock);

    }

    // TODO: Complete addCustomer
    void addCustomer(string name, string email) {
        Customer customer1(nextCustomerId++, name , email);
    }

    // TODO: Complete createOrder
    void createOrder(int customerId) {
        Order order1(nextOrderId++, customerId);
    }

    // TODO: Complete addToOrder
    void addToOrder(int orderId, int productId, int quantity) {
        for (int i = 0 ; i < orders.size(); i++)
        {
            if(order[i].id == orderId)
        }
    }

    void displayAll() {
        cout << "\n=== PRODUCTS ===" << endl;

        cout << "\n=== CUSTOMERS ===" << endl;
        
        cout << "\n=== ORDERS ===" << endl;

    }
};

int main() {
    ECommerceSystem shop;

    // Sample data - don't modify
    shop.addProduct("Laptop", 999.99, 10);
    shop.addProduct("Mouse", 19.99, 50);
    shop.addCustomer("John Doe", "john@example.com");
    shop.addCustomer("Alice Smith", "alice@example.com");

    shop.createOrder(1);
    shop.addToOrder(1, 1, 1);
    shop.addToOrder(1, 2, 2);

    shop.createOrder(2);
    shop.addToOrder(2, 1, 1);

    shop.displayAll();

    return 0;
}