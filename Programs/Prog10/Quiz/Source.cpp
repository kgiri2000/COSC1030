#include <iostream>

using namespace std;

class FishBowl {
public:
    FishBowl(int num = 1);
    ~FishBowl();
    int addFish(int num);
    int getFish(void) const;
private:
    int myFish;
};

ostream& operator<<(ostream& left, const FishBowl& right) {
    left << "FishBowl(" << right.getFish() << ")";
    return left;
}

FishBowl::FishBowl(int num) {
    if (num >= 1) {
        myFish = num;
    }
    else {
        myFish = 1;
    }
}

FishBowl::~FishBowl() {
    cout << "Emptied FB:" << myFish << endl;
}

int FishBowl::addFish(int num) {
    myFish = myFish + num;
    return myFish;
}

int FishBowl::getFish(void) const {
    return myFish;
}

int main()
{
    FishBowl First;
    cout << "(1) " << First << endl;
    int tmp = First.addFish(6);
    cout << "(2) " << tmp << endl;
    if (First.addFish(8) >= 15) {
        FishBowl Second(2);
        cout << "(3) " << First << " and " << Second << endl;
    }
    else {
        FishBowl Second(0);
        cout << "(3) " << First << " and " << Second << endl;
    }
    cout << "(4) All Done." << endl;

    return 0;
}