class Base
{
public:
    Base(int aArg)
    {
        // Constructor code here
    }
};

class Derived : public Base
{
public:
    Derived(int aArg, int bArg) : Base(aArg)
    {
        // Constructor code here
    }
};
