#include<iostream>

using namespace std;

class Burger{
    public:
    virtual void create() = 0;
    virtual string ingredient() = 0;
};


class Resturant{
    public:
    virtual Burger* prepare() = 0;
    virtual float cost() = 0;
    virtual string addSauce(string) = 0;
};

class VegBurger : public Burger{
    void create() override;
    string ingredient() override;
};

class NonVegBurger : public Burger{
    void create() override;
    string ingredient() override;
};

class VegResturant : public Resturant{
    Burger* prepare() override;
    float cost() override;
    string addSauce(string) override;
};

class NonVegResturant : public Resturant{
    Burger* prepare() override;
    float cost() override;
    string addSauce(string) override;
};
