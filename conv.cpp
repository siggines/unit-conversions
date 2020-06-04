#include <iostream>
#include <string>

using namespace std;

void km_m_convert(float in,char unit){
    	float eq = 1.60934;
	string out;
	if(unit=='m'){out = to_string(in*eq)+" KiloMetres"; cout << "Converting Meters to Kilometers" << endl; }
	if(unit=='k'){out = to_string(in/eq)+" Miles"; cout << "Converting Kilometers to Meters" << endl; }
	cout << out << endl;
}

void inche_cm_convert(float in,char unit){
    	float eq = 2.54;
	string out;
	if(unit=='i'){out = to_string(in*eq)+" cm"; cout << "Converting Inches to cm" << endl; }
	if(unit=='c'){out = to_string(in/eq)+" inches"; cout << "Converting cm to Inches" << endl; }
	cout << out << endl;
}

void feet_metre_convert(float in,char unit){
    	float eq = 0.305;
	string out;
	if(unit=='f'){out = to_string(in*eq)+" metres"; cout << "Converting Feet to Meters" << endl; }
	if(unit=='m'){out = to_string(in/eq)+" feet"; cout << "Converting Meters to Feet" << endl; }
	cout << out << endl;
}

void f_c_convert(float in,char unit){
    	float f_eq = (in*1.8)+32;
	float c_eq = (in-32)/1.8;
	string out;
	if(unit=='c'){out = to_string(f_eq)+" f"; cout << "Converting Celcius to Fahrenheit" << endl; }
	if(unit=='f'){out = to_string(c_eq)+" c"; cout << "Converting Fahrenheit to Celcius" << endl; }
	cout << out << endl;
}

void ounce_ml_convert(float in,char unit){
	float eq = 30;
	string out;
	if(unit=='o'){out = to_string(in*eq)+" ml"; cout << "Converting ounces to ml" << endl; }
	if(unit=='m'){out = to_string(in/eq)+" ounce(s)"; cout << "Converting ml to ounces" << endl; }
	cout << out << endl;
}

void cm_mm_convert(float in,char unit){
	float eq = 0.1;
	string out;
	if(unit=='m'){out = to_string(in*eq)+" cm"; cout << "Converting mm to cm" << endl; }
	if(unit=='c'){out = to_string(in/eq)+" mm"; cout << "Converting cm to mm" << endl; }
	cout << out << endl;
}

void lb_kg_convert(float in,char unit){
	float eq = 0.4535924;
	string out;
	if(unit=='p'){out = to_string(in*eq)+" Kg"; cout << "Converting Pounds to kilograms" << endl; }
	if(unit=='k'){out = to_string(in/eq)+" lb"; cout << "Converting kilograms to Pounds" << endl; }
	cout << out << endl;
}

int main(){
	string unit;
	float value;
	cout << "What unit are you converting?" << endl;
	getline(cin,unit);
	if( unit == "km"||unit=="KM"||unit=="Kilometers"||unit=="kilometers" ){
		cout << "Enter value: ";
		cin >> value;
		km_m_convert(value,'k');
	}
	if( unit == "mile"||unit=="miles"||unit=="Miles"||unit=="MILES" ){
		cout << "Enter value: ";
		cin >> value;
		km_m_convert(value,'m');
	}

	if( unit == "inche"||unit=="inch"||unit=="inches" ){
		cout << "Enter value: ";
		cin >> value;
		inche_cm_convert(value,'i');
	}
	if( unit == "cm"||unit=="Centimetre"||unit=="CM" ){
		cout << "Enter value: ";
		cin >> value;
		inche_cm_convert(value,'c');
	}

	if( unit == "feet"||unit=="Feet"||unit=="Foot" ){
		cout << "Enter value: ";
		cin >> value;
		feet_metre_convert(value,'f');
	}
	if( unit == "Metre"||unit=="Meter"||unit=="m"||unit=="metre"||unit=="meter" ){
		cout << "Enter value: ";
		cin >> value;
		feet_metre_convert(value,'m');
	}

	if( unit == "f"||unit=="Fahreinheit"||unit=="F" ){
		cout << "Enter value: ";
		cin >> value;
		f_c_convert(value,'f');
	}
	if( unit == "c"||unit=="celcius"||unit=="Celcius"||unit=="C" ){
		cout << "Enter value: ";
		cin >> value;
		f_c_convert(value,'c');
	}
	if( unit == "ounce"||unit=="Ounce" ){
		cout << "Enter value: ";
		cin >> value;
		ounce_ml_convert(value,'o');
	}
	if( unit == "ml"||unit=="Ml"||unit=="ML"||unit=="millilitres" ){
		cout << "Enter value: ";
		cin >> value;
		ounce_ml_convert(value,'m');
	}
	if( unit == "mm" ){
		cout << "Enter value: ";
		cin >> value;
		cm_mm_convert(value,'m');
	}
	if( unit == "cm" ){
		cout << "Enter value: ";
		cin >> value;
		cm_mm_convert(value,'c');
	}
	if( unit == "kg" || unit == "kilograms" ){
		cout << "Enter value: ";
		cin >> value;
		lb_kg_convert(value,'k');
	}
	if( unit == "lb" || unit == "pounds" ){
		cout << "Enter value: ";
		cin >> value;
		lb_kg_convert(value,'p');
	}

	return 0;
}
