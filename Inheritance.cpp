// reusable code
// Inheritance Mode |  public   private   protected
// public __________|__public___private___protected
// private _________|__*****inaccessible****_______
// protected _______|protected__private___protected

class A
{
private:
    int x = 5;

public:
    int y = 10;

protected:
    int z = 15;
};
class B : private A
{
    int get1()
    {
        return y; // now pvt
    }
    int get2()
    {
        return z; // now pvt
    }
};
class C : public A
{
    int get1()
    {
        return y; // now public
    }
    int get2()
    {
        return z; // now public
    }
};
class D : protected A
{
    int get1()
    {
        return y; // now protected
    }
    int get2()
    {
        return z; // now protected
    }
};