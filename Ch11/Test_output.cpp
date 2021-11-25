#include "std_lib_facilities.h"

int longest_ln(vector<string>& lastnames)
{
	int longest_last_name = 0;
	
	for(int i = 0; i < lastnames.size(); i++)
	{
			if(lastnames[i].length() > longest_last_name)
				longest_last_name = lastnames[i].length();
		
	}
	
	return longest_last_name;

}

int longest_fn(vector<string>& firstnames)
{
	int longest_first_name = 0;
	
	for(int i = 0; i < firstnames.size(); i++)
	{
			if(firstnames[i].length() > longest_first_name)
				longest_first_name = firstnames[i].length();
		
	}
	
	return longest_first_name;

}

int longest_mail(vector<string>& allmails)
{
	int longest_email = 0;
	
	for(int i = 0; i < allmails.size(); i++)
	{
			if(allmails[i].length() > longest_email)
				longest_email = allmails[i].length();
		
	}
	
	return longest_email;

}

int longest_tel(vector<string>& tels)
{
	int longest_tel_num = 0;
	
	for(int i = 0; i < tels.size(); i++)
	{
			if(tels[i].length() > longest_tel_num)
				longest_tel_num = tels[i].length();
		
	}
	
	return longest_tel_num;

}


void ctable()
{
	string lname = "Last Name: ";
	string fname = "First Name: ";
	string email = "Email: ";
	string tel = "Tel: ";
	
	int lln, lfn, le, lt;
	
	vector<string> lasts = {"Zeke", "Oláh", "Bazsó", "Szabó", "Mészáros"};
	vector<string> firsts = {"Alex", "Tamás", "Bence", "Dominik", "Dávid"};
	vector<string> tels = {"06209955869", "06303339988", "06206785666", "+36306668736", "06205432143", "06304358867"};
	vector<string> emails = {"alex950@gmail.com", "olah.tomi@gmail.com", "bencebruv@gmail.com", "dominiktherock@gmail.com", "david02@gmail.com"};
	
	lln = longest_ln(lasts);
	le = longest_mail(emails);
	lfn = longest_fn(firsts);
	lt = longest_tel(tels);
	
	for(int i = 0; i < lasts.size(); i++)
	{
		cout << lname << setw(lln) << lasts[i] << setw(2) << '|' << setw(fname.length() + 1) << fname << setw(lfn) << firsts[i] << '\n' << tel << setw(lt) << tels[i] << setw(2) <<'|' << setw(email.length() + 1) << email << setw(le) << emails[i] << "\n\n\n"; 
	}
	
}
void ffs() //float - fixed - scientific :) 
{
	float num = 1234567.89;
	
	cout << defaultfloat << num << '\t' << fixed << num << '\t' << scientific << num << endl;
	
}
int birthyear()
{
	int birth_year = 2001;
	
	cout << birth_year << "\t(decimal)\n" << hex << birth_year << "\t(hexadecimal)\n"<< oct << birth_year << "\t(octal)\n" ;
	
	return birth_year;
}
void myage()
{	
	int birth{birthyear()};
	
	int cyear = 2020;
	
	int age = cyear-birth;
	
	cout <<  "\nAge: " << dec << age << endl;
}
void inputs()
{
	int a,b,c,d = 0;
	cout << "Please type in the integet: 1234 , four times.\n";
	cin >> a >> oct >> b >> hex >> c >> d;
	cout << a << '\t' << b << '\t' << c << '\t' << d << '\n';
}
int main()
try{
	
	ctable();
    void ffs(); //float - fixed - scientific :) 
{
	float num = 1234567.89;
	
	cout << defaultfloat << num << '\t' << fixed << num << '\t' << scientific << num << endl;
	
}
    ctable();

    ffs();
	
	myage();

    inputs();

	return 0;

}
catch(exception& e) {
    cerr << "Error: " << e.what() << '\n';
    return 1;
}
catch(...) {
    cerr << "Something terribad happened..\n";
    return 2;
}