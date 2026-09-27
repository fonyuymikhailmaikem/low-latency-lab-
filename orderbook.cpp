// Order Book - Low Latency Lab
// Built on phone in Cameroon by fonyuyumikhailmaikem
#include <iostream>
#include <map>

struct OrderBook {
    std::map<int, int> bids;
    std::map<int, int, std::greater<int>> asks;

    void add_bid(int price, int qty) { bids[price] += qty; }
    void add_ask(int price, int qty) { asks[price] += qty; }

    void print() {
        std::cout << "BIDS:\n";
        for(auto& [p,q] : bids) std::cout << p << " x " << q << "\n";
        std::cout << "ASKS:\n";
        for(auto& [p,q] : asks) std::cout << p << " x " << q << "\n";
    }
};

int main() {
    OrderBook ob;
    ob.add_bid(100, 10);
    ob.add_bid(99, 5);
    ob.add_ask(101, 7);
    ob.print();
    return 0;
}