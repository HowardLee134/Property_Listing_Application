//  main.cpp
//  Property Listing Application
//  Created by Howard Lee on 4/18/22.
//
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include<fstream>

using namespace std;

//create a vector to storage the data
struct Property_Info{
    string Str_num;
    string Str_name;
    string Str_city;
    string Str_state;
    string Str_zipcode;
    string Pro_bedroom;
    string Pro_bathroom;
    string Pro_type;
    string Pro_footage;
    string Pro_price;

    //check if the input is a number
    bool IsdigitAll(string str){
        for (int i = 0; i<str.size(); i++)
        {
            if (!isdigit(str.at(i))){
                return false;
            }
        }
        return true;
    }

    //check if the input is alphabetic characters
    bool Isalpha(string str){
        for (int i = 0; i<str.size(); i++){
            if (!isalpha(str.at(i)) && !isspace(str.at(i))){
                return false;
            }
        }
        return true;
    }

    // create a property listing
    // create street number (need to be a positive bnumber)
    string Street_Number(){
        getline(cin, this->Str_num);
        while (! IsdigitAll(this->Str_num)){
            cout << "Invalid street number: It must be a positive number. "<<endl;
            cout << "Enter the street number: ";
            getline(cin, this->Str_num);
        }
        cout << "The street number you entered is: ";
        return this->Str_num;
    }

    //create street name
    string Street_Name(){
        getline(cin, this->Str_name);
        cout << "The street name you entered is: ";
        return this->Str_name;
    }

    //create city (need to be alphabetic characters)
    string Street_city(){
        getline(cin, this->Str_city);// ask professor how to add whitespace
        while(!Isalpha(this->Str_city)){
            cout <<  "Invalid city: It must only include alphabetic characters and whitespaces. "<<endl;
            cout <<  "Enter the street city: ";
            getline(cin, this->Str_city);
        }
        cout << "The city you entered is: ";
        return this->Str_city;
    }

    //create state(need to be CA, NV, AZ, OR, WA.)
    string Street_state(){
        getline(cin, this->Str_state);
            while(this->Str_state != "CA" && this->Str_state!= "NV" && this->Str_state != "AZ" && this->Str_state != "OR" && this->Str_state != "WA"){
                cout << "Invalid state: It can only be CA, NV, AZ, OR, WA. " <<endl;
                cout <<  "Enter the  state: ";
                getline(cin, this->Str_state);
        }
        cout << "The state you entered is: ";
        return this->Str_state;
    }

    //create zipcode
    string Street_zipcde(){
        getline(cin, this->Str_zipcode);
        
        while (! IsdigitAll(this->Str_zipcode) || this->Str_zipcode.size()!=5){
            cout << "Invalid zipcode: It must be a five-digit number*.  "<<endl;
            cout << "Enter the zipcode: ";
            getline(cin, this->Str_zipcode);
        }
        cout << "The zipcode you entered is:";
            return this->Str_zipcode;
    }

    //create how many bedrooms
    string Street_bedroom(){
        getline(cin, this->Pro_bedroom);
        while (! IsdigitAll(this->Pro_bedroom)){
            cout << "Invalid number of bedrooms: It must be a positive number. "<<endl;
            cout << "Enter the street number: ";
            getline(cin, this->Pro_bedroom);
        }
      
        cout << "The bedrooms number you entered is: ";
        return this->Pro_bedroom;
    }

    //create how many bathrooms
    string Street_bathroom(){
        getline(cin, this->Pro_bathroom);
        while (! IsdigitAll(this->Pro_bathroom)){
            cout << "Invalid number of bathroom: It must be a positive number. "<<endl;
            cout << "Enter the street number: ";
            getline(cin, this->Pro_bathroom);
        }
        
        cout << "The bathrooms number you entered is: ";
        return this->Pro_bathroom;
    }

    //create the property types
    string Street_property_type(){
        cout <<"1 for Single family house "<<endl;
        cout <<"2 for Townhouse "<<endl;
        cout <<"3 for Condo "<<endl;
        getline(cin, this->Pro_type);
        while(this->Pro_type != "1" && this->Pro_type != "2" && this->Pro_type != "3"){
            cout << "Invalid property type: It must be 1, 2, or 3." <<endl;
            cout <<"1 for Single family house "<<endl;
            cout <<"2 for Townhouse "<<endl;
            cout <<"3 for Condo "<<endl;
            getline(cin, this->Pro_type);
        }
        if(this->Pro_type == "1"){
            this->Pro_type = "Single family house";
        }
        else if ( this->Pro_type == "2"){
            this->Pro_type = "Townhouse";
        }
        else if (this->Pro_type == "3"){
            this->Pro_type = "Condo";
        }
        
        cout << "The house type you entered is: " ;
        return this->Pro_type;
    }

    //create the property footage
    string Street_property_footage(){
        getline(cin, Pro_footage);
        while (! IsdigitAll(this->Pro_footage)){
            cout << "Invalid square footage: It must be a positive number. "<<endl;
            cout << "Enter the square footage: ";
            getline(cin, this->Pro_footage);
        }
        cout <<"The square footage you entered is: ";
        return this->Pro_footage;
    }

    //create the asking price for the property
    string Street_asking_price(){
        getline(cin, this->Pro_price);
        while (! IsdigitAll(this->Pro_price)){
            cout << "Invalid price: It must be a positive number. "<<endl;
            cout << "Enter the asking price: ";
            getline(cin, this->Pro_price);
        }
        cout <<"The price you entered is: $";
        return this->Pro_price;
    }

    // create a property listing
void Create_Perporty(){
        cout << "Enter the street number:" << this->Street_Number()<< endl;
        cout << "Enter the street name:" << this->Street_Name()<<endl;
        cout << "Enter the street city:" << this->Street_city()<<endl;
        cout << "Enter the state:"<< this->Street_state()<<endl;
        cout << "Enter the zipcode:" << this->Street_zipcde()<<endl;
        cout << "Enter number of bedrooms:" << this->Street_bedroom()<<endl;
        cout << "Enter number of bathroom:" << this->Street_bathroom()<<endl;
        cout <<"Enter the property type. Press:" <<endl<< this->Street_property_type() <<endl;
        cout <<"Enter the square footage: " << this->Street_property_footage() <<endl;
        cout <<"Enter the asking price: "<< this->Street_asking_price()<<endl;
        cout <<"Property listing is created successfully: "<<endl;
        cout << this->Str_num <<" "<< this->Str_name<< " "<< this->Str_city<<" "<< this->Str_state<<" "<<this->Str_zipcode<<" "<<this->Pro_bedroom <<" ";
        cout << this->Pro_bedroom <<" "<< this->Pro_type <<" "<< this->Pro_footage <<" " <<"$"<< this->Pro_price <<endl;
        
    }
    
};

//check if the input is a number
bool IsdigitAll(string str){
    for (int i = 0; i<str.size(); i++)
    {
        if (!isdigit(str.at(i))){
            return false;
        }
    }
    return true;
}

//check if the input is alphabetic characters
bool Isalpha(string str){
    for (int i = 0; i<str.size(); i++){
        if (!isalpha(str.at(i)) && !isspace(str.at(i))){
            return false;
        }
    }
    return true;
}

// print all the property detail
void Print_Perporty(vector<Property_Info> result){
    for(unsigned int i=0; i< result.size(); i++){
    cout << result[i].Str_num <<" ";
    cout << result[i].Str_name<<" ";
    cout << result[i].Str_city<<" ";
    cout << result[i].Str_state<<" ";
    cout << result[i].Str_zipcode<<" ";
    cout << result[i].Pro_bedroom<<" ";
    cout << result[i].Pro_bathroom<<" ";
    cout << result[i].Pro_type<<" ";
    cout << result[i].Pro_footage<<" ";
    cout <<"$"<<result[i].Pro_price<<" ";
    cout <<endl;
    }
}


// the funtion of search the property that user create
void Search_Perporty(vector<Property_Info> result){
    string option;
    string userinput;
    cout <<"Search Menu. Press: "<<endl;
    cout <<"    1 to search in a city"<<endl;
    cout <<"    2 to search in a state "<<endl;
    cout <<"    3 to search in a zipcode"<<endl;
    cout <<"    4 to search all properties with prices less than a threshold"<<endl;
    getline(cin, option);
    while(option != "1" && option != "2" && option != "3" && option != "4"){
        cout << "Enter the Wrong commend. It could only be 1,2,3,4." <<endl;
        cout << "Your enter: ";
        getline(cin, option);
    }
    if(option =="1"){
        cout << "PLease enter the City: ";
        getline(cin, userinput);
        while(! Isalpha(userinput)){
            cout << "Please only enter alpha!"<<endl;
            cout << "PLease enter the City: "<<endl;
            getline(cin, userinput);
        }
        int count =0;
        for(unsigned int i=0; i< result.size(); i++){
            if(userinput == result[i].Str_city){
                count ++;
                cout << result[i].Str_num <<" ";
                cout << result[i].Str_name<<" ";
                cout << result[i].Str_city<<" ";
                cout << result[i].Str_state<<" ";
                cout << result[i].Str_zipcode<<" ";
                cout << result[i].Pro_bedroom<<" ";
                cout << result[i].Pro_bathroom<<" ";
                cout << result[i].Pro_type<<" ";
                cout << result[i].Pro_footage<<" ";
                cout <<"$"<<result[i].Pro_price<<" ";
                cout <<endl;

            }
        }
        if(count ==0){
            cout << "No matching properties."<<endl;;
            }
    }
    
    if(option =="2"){
        cout << "PLease enter the state: ";
        getline(cin, userinput);
        while(! Isalpha(userinput)){
            cout << "Please only enter alpha!"<<endl;
            cout << "PLease enter the state: "<<endl;
            getline(cin, userinput);
        }
        int count =0;
        for(unsigned int i=0; i< result.size(); i++){
            if(userinput == result[i].Str_state){
                count ++;
                cout << result[i].Str_num <<" ";
                cout << result[i].Str_name<<" ";
                cout << result[i].Str_city<<" ";
                cout << result[i].Str_state<<" ";
                cout << result[i].Str_zipcode<<" ";
                cout << result[i].Pro_bedroom<<" ";
                cout << result[i].Pro_bathroom<<" ";
                cout << result[i].Pro_type<<" ";
                cout << result[i].Pro_footage<<" ";
                cout <<"$"<<result[i].Pro_price<<" ";
                cout <<endl;

            }
        }
        if(count ==0){
            cout << "No matching properties."<<endl;;
            }
    }
    
    if(option =="3"){
        cout << "PLease enter the zipcode: ";
        getline(cin, userinput);
        while(! IsdigitAll(userinput)){
            cout << "Please only enter number!"<<endl;
            cout << "PLease enter the state: "<<endl;
            getline(cin, userinput);
        }
        int count =0;
        for(unsigned int i=0; i< result.size(); i++){
            long long int Int_userinput = stoi(userinput);
            long long int Int_Str_zipcode = stoi(result[i].Str_zipcode);
            if( Int_userinput == Int_Str_zipcode){
                count ++;
                cout << result[i].Str_num <<" ";
                cout << result[i].Str_name<<" ";
                cout << result[i].Str_city<<" ";
                cout << result[i].Str_state<<" ";
                cout << result[i].Str_zipcode<<" ";
                cout << result[i].Pro_bedroom<<" ";
                cout << result[i].Pro_bathroom<<" ";
                cout << result[i].Pro_type<<" ";
                cout << result[i].Pro_footage<<" ";
                cout <<"$"<<result[i].Pro_price<<" ";
                cout <<endl;

            }
        }
        if(count ==0){
            cout << "No matching properties."<<endl;;
            }
}
    
    if(option =="4"){
        cout << "PLease enter the price(need to be number): ";
        getline(cin, userinput);
        while(! IsdigitAll(userinput)){
            cout << "Please only enter number!"<<endl;
            cout << "PLease enter the price(need to be number):"<<endl;
            getline(cin, userinput);
        }
        int count =0;
        for(unsigned int i=0; i< result.size(); i++){
            //convert string into int
            long long int Int_userinput = stoi(userinput);
            long long int Int_Pro_price = stoi(result[i].Pro_price);
            
            if( Int_Pro_price < Int_userinput){
                count ++;
                cout << result[i].Str_num <<" ";
                cout << result[i].Str_name<<" ";
                cout << result[i].Str_city<<" ";
                cout << result[i].Str_state<<" ";
                cout << result[i].Str_zipcode<<" ";
                cout << result[i].Pro_bedroom<<" ";
                cout << result[i].Pro_bathroom<<" ";
                cout << result[i].Pro_type<<" ";
                cout << result[i].Pro_footage<<" ";
                cout <<"$"<<result[i].Pro_price<<" ";
                cout <<endl;

                }
            }
        if(count ==0){
            cout << "No matching properties."<<endl;
            }
        }
}


void PrintMenu(vector<Property_Info> result){
    string option;
    cout <<"Main Menu. Press: "<<endl;
    cout <<"    c/C to create a property listing"<<endl;
    cout <<"    p/P to print all property listings"<<endl;
    cout <<"    s/S to search all property listings"<<endl;
    cout <<"    r/R to storage all property listings"<<endl;
    cout <<"    e/E to exit"<<endl;
    getline(cin, option);
    while(option != "c" && option != "C" && option != "p" && option != "P" && option != "s" && option != "S" && option != "r" && option != "R" && option != "e" && option != "E" ){
        cout << "Enter the Wrong commend."<<endl;
        cout << "Your enter: ";
        getline(cin, option);
    }
        // press e/E to exit
        if(option == "e" || option == "E"){
            return;
        }
        
        // press c/C to create property listing
        if(option == "c" || option == "C"){
            Property_Info * info = new Property_Info;
            info->Create_Perporty();
            result.push_back(*info);
            cout << endl;
        }
        // press p/P to print all the property listing
        if(option == "p" || option == "P"){
            cout << "All your properties: "<<endl;
                Print_Perporty(result);
        }
    
        // press s/S to search all the property listing.
        if(option == "s" || option == "S"){
            Search_Perporty(result);
        }
    
        // storage the data
        if(option == "r" || option == "R"){
            ofstream myfile;
            myfile.open("051_project_data.txt");//write mode
            for (unsigned int i=0; i< result.size(); i++ ){
                if (myfile.is_open()){
                    myfile << result[i].Str_num<<endl;
                    myfile << result[i].Str_name<<endl;
                    myfile << result[i].Str_city<<endl;
                    myfile << result[i].Str_state<<endl;
                    myfile << result[i].Str_zipcode<<endl;
                    myfile << result[i].Pro_bedroom<<endl;
                    myfile << result[i].Pro_bathroom<<endl;
                    myfile << result[i].Pro_type<<endl;
                    myfile << result[i].Pro_footage<<endl;
                    myfile <<"$"<<result[i].Pro_price<<endl;
                    
                }
            }
            myfile.close();
            cout << "Property listings are recorded."<<endl; ;
        }
    
    PrintMenu(vector<Property_Info> (result));
}
   
int main(){
    vector<Property_Info> result;
    PrintMenu(result);
    return 0;
    
}
