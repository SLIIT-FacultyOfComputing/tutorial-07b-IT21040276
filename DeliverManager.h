class DeliveryManager : public Person // Inheritance
{
private:
    int DMID;
    string DMName;

public:
    DeliveryManager();
    DeliveryManager(int DMID,string DMName);
    void displayDeliveryManagerDetails(Details *d); //Dependency
    ~DeliveryManager();
};


