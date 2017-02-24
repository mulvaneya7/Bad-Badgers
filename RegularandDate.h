class Date
{
public:
	//CONSTRUCTOR AND DESTRUCTOR
	Date(int aDay, int aMonth, int aYear);
	Date();
	~Date();

	//MUTATORS
	bool SetDate(int aDay, int aMonth, int aYear);
	//ACCESSORS
	int GetDay()   const;
	int GetMonth() const;
	int GetYear()  const;
	//friend that overloads insertion operator (ostream LHS, date RHS)
	friend ostream & operator<<(ostream & o, const Date & d);

private:
	bool IsValidDate(int aDay, int aMonth, int aYear);
	int month;
	int day;
	int year;
};

//enum to define what the current member is
enum class MemType {
	INACTIVE,
	REGULAR,
	EXECUTIVE
};


class Member
{
public:
//CONSTRUCTOR
Member();
Member(Member & Instance);

//DESTRUCTOR
~Member();

//ACCESSORS
void printPurchaseHistory();
void printOutstandingCharges();
void printTotalPurchases();
void totalSpent();
//MUTATORS
void setName(QString newName);
void setId(int newId);



private:
QString name;		//name of said regularMember
int id;				//id to identify member
float totalSpent;	//total amount spent by member 
Date exDate;		//Expiration date of the member
MemType membership;	//enum declaring what type of member this member is

};
