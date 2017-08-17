#include "lib.h"
void fpt();
void poe();
void info();
void sgp();
void groups();
void periods();
void types();
void wlcm();
void mm();
void main()
{
	SetConsoleTitle(TEXT("Periodic Table"));	
	wlcm();
	mm();

}
void wlcm()
{
	system("color 6F");
	{
	system("cls");
	cout<<setw(10)<<"\n\n\n\n\n\n\n\n ||------------------------------------------------------------------------||";
	cout<<setw(10)<<"\n ||      IN THE NAME OF ALLAH WHO IS MOST GRACIOUS AND MERCIFULL           ||";
	cout<<setw(10)<<"\n ||------------------------------------------------------------------------||";
	Sleep(6000);
	//_getch();
    system("cls");
	}

//	                                  ||||||||||||||||||||Welcome Screen|||||||||||||||||
	system("color 3E");
	{
	system("cls");
	
	cout<<"\n>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>";
	cout<<"\n\\\\        //\\\\        // ||```` ||     |`````) |````| |```````|``````|   |`````";
	cout<<"\n \\\\      //  \\\\      //  ||     ||     |       |    | |       |      |   | ";
	cout<<"\n  \\\\    //    \\\\    //   ||==== ||     |       |    | |       |      |   |=====";
	cout<<"\n   \\\\  //      \\\\  //    ||     ||     |       |    | |       |      |   |";
	cout<<"\n    \\\\//        \\\\//     ||____ ||____ |_____) |____| |       |      |   |_____";
	cout<<"\n<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<";
	cout<<"\n\n\n \t\t\t\t Prepared BY ";
	cout<<"\n\n   \t\t\t\t\t    MUHAMMAD HANNAN SULTAN";
	cout<<"\n     \t\t\t\t\t    KOMAL SADIQ";
	Sleep(6000);
	//_getch();
    system("cls");
	}


}
void mm()
{

	//                                     ||||||||||||||||||||| Start Menu|||||||||||||||||||
	char choice;
	string element;
	system("cls");
	
	
	while(1)
	{
	system ("color 2F");
	system("cls");
	cout<<"\t"<<" //------------------**************----------------\\\\"<<endl;
	cout<<"\t"<<"||		     Periodic Table                 ||"<<endl;
	cout<<"\t"<<" \\\\------------------**************-----------------//"<<endl;
	
	cout<<endl;
	cout<<endl;
	cout<<"Select an option "<<endl<<endl;
	cout<<"F==>"<<"  "<<"Full Periodic Table"<<endl;
	cout<<"S==>"<<"  "<<"Specify Group / Period"<<endl;
	cout<<"P==>"<<"  "<<"Properties of an Element"<<endl;
	cout<<"T==>"<<"  "<<"Types"<<endl;
	cout<<"I==>"<<"  "<<"Information about Periodic Table"<<endl;
	cout<<"E==>"<<"  "<<"Exit"<<endl;

	choice=getche();
	choice=toupper(choice);
	switch(choice)
	{
	case 'F':
		fpt();
		break;
	case 'S':
	case 's':
		sgp();
		break;
	case 'P':
		poe();
		break;
	case 'T':
	case 't':
		types();
		break;
	case 'I':
		info();
		break;
	case 'E':                //                ||||||||||||||||||| EXIT SCREEN||||||||||||||||||||||
	case 'e':
		system("cls");
		system("color 6F");
	cout<<"\n ````||```` ||    ||       //\\\\       ||\\\\      ||   ||   //  ||      ||";
	cout<<"\n     ||     ||    ||      //  \\\\      || \\\\     ||   ||  //   ||      ||";
	cout<<"\n     ||     ||    ||     //    \\\\     ||  \\\\    ||   || //    ||      ||";
	cout<<"\n     ||     ||____||    //______\\\\    ||   \\\\   ||   ||//     ||      ||";
	cout<<"\n     ||     ||    ||   //        \\\\   ||    \\\\  ||   ||\\\\     ||      ||";
	cout<<"\n     ||     ||    ||  //          \\\\  ||     \\\\ ||   || \\\\    ||      ||";
	cout<<"\n     ||     ||    || //            \\\\ ||      \\\\||   ||  \\\\   ||======||";
	cout<<"\n\n\n\n\n\n \t\t\t\t FOR UISNG ";
	cout<<"\n\n\n\t"<<" //------------------**************----------------\\\\"<<endl;
	cout<<"\t"<<"||		     Periodic Table                 ||"<<endl;
	cout<<"\t"<<" \\\\------------------**************-----------------//"<<endl;
		Sleep(5000);
		exit(0);
	default:
		system("cls");
		cout<<"Incorrect input \n";
		cout<<"Press any key to continue........";
		getch();
	}

	}

	_getch();

}
void fpt()
{
	system("cls");
	system("color 1A");
	string fpt[10][25]={{"\n"," ","  ","1 ","  2 "," 3","   4 ","  5 ","  6 ","  7 ","  8 ","  9 ","  10","  11","  12 ","  13 "," 14 "," 15 "," 16 "," 17 "," 18 "},
	{"\n\n","1","  ","H","\t","\t","\t","\t","   ","  ","  ","  ","  ","","  ","  ","\t","\t","\t ","     "," He"},
	{"\n\n","2","  ","Li"," BE","\t","\t","\t","\t","   ","  ","  ","  ",""," "," B  "," C  "," N  "," O  "," F  "," Ne"},
	{"\n\n","3","  ","Na"," Mg","\t","\t","\t","\t","  ","  ","  ","  ","","  "," Al "," Si "," P  "," S  "," Cl "," Ar"},
	{"\n\n","4","  ","K "," Ca","  Sc","  Ti","  V ","  Cr","  Mn","  Fe","  Co","  Ni","  Cu","  Zn  "," Ga "," Ge "," As "," Se "," Br "," Kr"},
	{"\n\n","5","  ","Rb"," Sr","  Y ","  Zr","  Nb","  Mo","  Tc","  Ru","  Rh","  Pd","  Ag","  Cd  "," In "," Sn "," Sb "," Te "," I  "," Xe"},
	{"\n\n","6","  ","Cs"," Ba","  * ","  Hf","  Ta","  W ","  Re","  Os","  Ir","  Pt","  Au","  Hg  "," Ti "," Pb "," Bi "," Po "," At "," Rn"},
	{"\n\n","7","  ","Fr"," Ra","  **","  Rf","  Db","  Sg","  Bh","  Hs","  Mt","  Ds","  Rg","  UUb "," Uut"," Uuq"," Uup"," Uuh"," Uus"," Uuo"},
	{"\n\n\n"," ","  ","   ","  ","  * ","  La","  Ce","  Pr","  Nd","  Pm","  Sm","  Eu","  Gd","  Tb  "," Dy "," Ho "," Er "," Tm "," Yb "," Lu "},
	{"\n\n"," ","  ","   ","  ","  **","  Ac","  Th","  Pa","  U ","  Np","  Pu","  Am","  Cm","  Bk  "," Cf "," Es "," Fm "," Md "," No "," Lr "}};

	for(int i=0;i<10;i++)
	{
		for(int j=0;j<25;j++)
		{
			cout<<fpt[i][j];
		}
	}
	getch();
	
}
void poe()
{
	string element;
	system("cls");
		system("color 0C");
		cout<<"Enter the \n Symbol \n Full Name \n Atomic Number \n to show its properties \n";
		cin>>element;
		if((element=="H")||(element=="hydrogen")||(element=="1")||(element=="Hydrogen"))
	{
											//Hydregen
	cout<<"symbol            :H"<<endl;
	cout<<"fullname          :hydrogen"<<endl;
	cout<<"atomic number     :1"<<endl;
	cout<<"atomic mass       :1.00794"<<endl;
	cout<<"state             :gas"<<endl;
	cout<<"melting point     :14.05 K"<<endl;
	cout<<"boiling point     :20.271 K"<<endl;
	cout<<"electronegativity :2.200"<<endl;

	}
	else if((element=="He")||(element=="helium")||(element=="2")||(element=="Helium"))
	{
											//Helium
	cout<<"symbol            :He"<<endl;
	cout<<"fullname          :helium"<<endl;
	cout<<"atomic number     :2"<<endl;
	cout<<"atomic mass       :4.002602"<<endl;
	cout<<"state             :gas"<<endl;
	cout<<"melting point     :0.950 K"<<endl;
	cout<<"boiling point     :4.220 K"<<endl;
	cout<<"electronegativity :none"<<endl;
	}
	else if((element=="Li")||(element=="lithium")||(element=="3")||(element=="Lithium"))
	{
											//Lithium
	cout<<"symbol            :Li"<<endl;
	cout<<"fullname          :Lithium"<<endl;
	cout<<"atomic number     :3"<<endl;
	cout<<"atomic mass       :6.941"<<endl;
	cout<<"state             :solid"<<endl;
	cout<<"melting point     :453.65  K"<<endl;
	cout<<"boiling point     :1615.15 K"<<endl;
	cout<<"electronegativity :0.980"<<endl;
	}
	else if((element=="Be")||(element=="beryllium")||(element=="4")||(element=="Beryllium"))
	{
											//Beryllium
	cout<<"symbol            :Be"<<endl;
	cout<<"fullname          :Beryllium"<<endl;
	cout<<"atomic number     :4"<<endl;
	cout<<"atomic mass       :9.012182"<<endl;
	cout<<"state             :solid"<<endl;
	cout<<"melting point     :1560.15 K"<<endl;
	cout<<"boiling point     :2741.15 K"<<endl;
	cout<<"electronegativity :1.570"<<endl;
	}
	else if((element=="B")||(element=="boron")||(element=="5")||(element=="Boron"))
	{
											//Boron
	cout<<"symbol            :B"<<endl;
	cout<<"fullname          :Boron"<<endl;
	cout<<"atomic number     :5"<<endl;
	cout<<"atomic mass       :10.811"<<endl;
	cout<<"state             :solid"<<endl;
	cout<<"melting point     :2350.15 K"<<endl;
	cout<<"boiling point     :4273.15 K"<<endl;
	cout<<"electronegativity :2.040"<<endl;
	}
	else if((element=="C")||(element=="carbon")||(element=="6")||(element=="Carbon"))
	{
												//Carbon
	cout<<"symbol            :C"<<endl;
	cout<<"fullname          :carbon"<<endl;
	cout<<"atomic number     :6"<<endl;
	cout<<"atomic mass       :12.0107"<<endl;
	cout<<"state             :solid"<<endl;
	cout<<"melting point     :4098.15 K"<<endl;
	cout<<"boiling point     :sublimes"<<endl;
	cout<<"electronegativity :2.550"<<endl;
	}
	else if((element=="N")||(element=="nitrogen")||(element=="7")||(element=="Nitrogen"))
	{
												//Nitrogen
	cout<<"symbol            :N"<<endl;
	cout<<"fullname          :Nitrgen"<<endl;
	cout<<"atomic number     :7"<<endl;
	cout<<"atomic mass       :14.007"<<endl;
	cout<<"state             :gas"<<endl;
	cout<<"melting point     :63.15 K"<<endl;
	cout<<"boiling point     :77.355 K"<<endl;
	cout<<"electronegativity :3.04"<<endl;
	}
	else if((element=="O")||(element=="oxygen")||(element=="8")||(element=="Oxygen"))
	{
												//Oxygen
	cout<<"symbol            :O"<<endl;
	cout<<"fullname          :Oxygen"<<endl;
	cout<<"atomic number     :8"<<endl;
	cout<<"atomic mass       :15.9994"<<endl;
	cout<<"state             :gas"<<endl;
	cout<<"melting point     :54.36 K"<<endl;
	cout<<"boiling point     :90.188 K"<<endl;
	cout<<"electronegativity :3.440"<<endl;
	}
	else if((element=="F")||(element=="fluorine")||(element=="9")||(element=="Fluorine"))
	{
												//Fluorine
	cout<<"symbol            :F"<<endl;
	cout<<"fullname          :Fluorine"<<endl;
	cout<<"atomic number     :9"<<endl;
	cout<<"atomic mass       :18.9984032"<<endl;
	cout<<"state             :gas"<<endl;
	cout<<"melting point     :53.48 K"<<endl;
	cout<<"boiling point     :85.04 K"<<endl;
	cout<<"electronegativity :3.980"<<endl;
	}
	else if((element=="Ne")||(element=="neon")||(element=="10")||(element=="Neon"))
	{
												//Neon
	cout<<"symbol            :Ne"<<endl;
	cout<<"fullname          :Neon"<<endl;
	cout<<"atomic number     :10"<<endl;
	cout<<"atomic mass       :20.1797"<<endl;
	cout<<"state             :gas"<<endl;
	cout<<"melting point     :24.56 K"<<endl;
	cout<<"boiling point     :27.097 K"<<endl;
	cout<<"electronegativity :none"<<endl;
	}
	else if((element=="Na")||(element=="sodium")||(element=="11")||(element=="Sodium"))
	{
												//Sodium
	cout<<"symbol            :Na"<<endl;
	cout<<"fullname          :Sodium"<<endl;
	cout<<"atomic number     :11"<<endl;
	cout<<"atomic mass       :22.98976928"<<endl;
	cout<<"state             :solid"<<endl;
	cout<<"melting point     :370.944 K"<<endl;
	cout<<"boiling point     :1156.09 K"<<endl;
	cout<<"electronegativity :0.93"<<endl;
	}
	else if((element=="Mg")||(element=="megnesium")||(element=="12")||(element=="Magnesium"))
	{
												//Megnesium
	cout<<"symbol            :Mg"<<endl;
	cout<<"fullname          :Megnesium"<<endl;
	cout<<"atomic number     :12"<<endl;
	cout<<"atomic mass       :24.3050"<<endl;
	cout<<"state             :solid"<<endl;
	cout<<"melting point     :923.15 K"<<endl;
	cout<<"boiling point     :1363.15 K"<<endl;
	cout<<"electronegativity :1.310"<<endl;
	}
	else if((element=="Al")||(element=="aluminium")||(element=="13")||(element=="Aluminium"))
	{
												//Aluminium
	cout<<"symbol            :Al"<<endl;
	cout<<"fullname          :Aluminium"<<endl;
	cout<<"atomic number     :13"<<endl;
	cout<<"atomic mass       :26.9815386"<<endl;
	cout<<"state             :solid"<<endl;
	cout<<"melting point     :933.473 K"<<endl;
	cout<<"boiling point     :2792.15 K"<<endl;
	cout<<"electronegativity :1.610"<<endl;
	}
	else if((element=="Si")||(element=="silicon")||(element=="14")||(element=="Silicon"))
	{
												//Silicon
	cout<<"symbol            :Si"<<endl;
	cout<<"fullname          :Silicon"<<endl;
	cout<<"atomic number     :14"<<endl;
	cout<<"atomic mass       :28.0855"<<endl;
	cout<<"state             :solid"<<endl;
	cout<<"melting point     :1687.15 K"<<endl;
	cout<<"boiling point     :3538.15 K"<<endl;
	cout<<"electronegativity :1.900"<<endl;
	}
	else if((element=="P")||(element=="phosphorus")||(element=="15")||(element=="Phosphorus"))
	{
												//Phosphorus
	cout<<"symbol            :P"<<endl;
	cout<<"fullname          :Phosphorus"<<endl;
	cout<<"atomic number     :15"<<endl;
	cout<<"atomic mass       :30.973762"<<endl;
	cout<<"state             :solid"<<endl;
	cout<<"melting point     :317.3  K"<<endl;
	cout<<"boiling point     :553.65 K"<<endl;
	cout<<"electronegativity :2.190"<<endl;
	}
	else if((element=="S")||(element=="sulphur")||(element=="16")||(element=="Sulphur"))
	{
												//Sulphur
	cout<<"symbol            :S"<<endl;
	cout<<"fullname          :Sulphur"<<endl;
	cout<<"atomic number     :16"<<endl;
	cout<<"atomic mass       :32.065"<<endl;
	cout<<"state             :solid"<<endl;
	cout<<"melting point     :388.36 K"<<endl;
	cout<<"boiling point     :717.76 K"<<endl;
	cout<<"electronegativity :2.580"<<endl;
	}
	else if((element=="Cl")||(element=="chlorine")||(element=="17")||(element=="Chlorine"))
	{
												//Chlorine
	cout<<"symbol            :Cl"<<endl;
	cout<<"fullname          :Chlorine"<<endl;
	cout<<"atomic number     :17"<<endl;
	cout<<"atomic mass       :35.453"<<endl;
	cout<<"state             :gas"<<endl;
	cout<<"melting point     :171.65 K"<<endl;
	cout<<"boiling point     :239.11 K"<<endl;
	cout<<"electronegativity :3.160"<<endl;
	}
	else if((element=="Ar")||(element=="argon")||(element=="18")||(element=="Argon"))
	{
												//Argon
	cout<<"symbol            :Ar"<<endl;
	cout<<"fullname          :Argon"<<endl;
	cout<<"atomic number     :18"<<endl;
	cout<<"atomic mass       :39.948"<<endl;
	cout<<"state             :gas"<<endl;
	cout<<"melting point     :83.79 K"<<endl;
	cout<<"boiling point     :87.3  K"<<endl;
	cout<<"electronegativity :none"<<endl;
	}
	else if((element=="K")||(element=="potassium")||(element=="19")||(element=="Potassium"))
	{
												//Potassium
	cout<<"symbol            :K"<<endl;
	cout<<"fullname          :Potassium"<<endl;
	cout<<"atomic number     :19"<<endl;
	cout<<"atomic mass       :39.0983"<<endl;
	cout<<"state             :solid"<<endl;
	cout<<"melting point     :336.65 K"<<endl;
	cout<<"boiling point     :1032.15 K"<<endl;
	cout<<"electronegativity :0.820"<<endl;
	}
	else if((element=="Ca")||(element=="calcium")||(element=="20")||(element=="Calcium"))
	{
												//Calcium
	cout<<"symbol            :Ca"<<endl;
	cout<<"fullname          :Calcium"<<endl;
	cout<<"atomic number     :20"<<endl;
	cout<<"atomic mass       :40.078"<<endl;
	cout<<"state             :solid"<<endl;
	cout<<"melting point     :1115.15 K"<<endl;
	cout<<"boiling point     :1757.15 K"<<endl;
	cout<<"electronegativity :1.000"<<endl;                          
	}
	else if((element=="Sc")||(element=="scandium")||(element=="21")||(element=="Scandium"))
	{
												//Scandium
	cout<<"symbol            :Sc"<<endl;
	cout<<"fullname          :Scandium"<<endl;
	cout<<"atomic number     :21"<<endl;
	cout<<"atomic mass       :44.955912"<<endl;
	cout<<"state             :solid"<<endl;
	cout<<"melting point     :1814.15 K"<<endl;
	cout<<"boiling point     :3109.15 K"<<endl;
	cout<<"electronegativity :1.360"<<endl;
	}
	else if((element=="Ti")||(element=="titanium")||(element=="22")||(element=="Titanium"))
	{
												//Titanium
	cout<<"symbol            :Ti"<<endl;
	cout<<"fullname          :Titanium"<<endl;
	cout<<"atomic number     :22"<<endl;
	cout<<"atomic mass       :47.867"<<endl;
	cout<<"state             :solid"<<endl;
	cout<<"melting point     :1943.15 K"<<endl;
	cout<<"boiling point     :3560.15 K"<<endl;
	cout<<"electronegativity :1.540"<<endl;
	}
	else if((element=="V")||(element=="vanadium")||(element=="23")||(element=="Vanadium"))
	{
												//Vanadium
	cout<<"symbol            :V"<<endl;
	cout<<"fullname          :Vanadium"<<endl;
	cout<<"atomic number     :23"<<endl;
	cout<<"atomic mass       :50.9415"<<endl;
	cout<<"state             :solid"<<endl;
	cout<<"melting point     :2183.15 K"<<endl;
	cout<<"boiling point     :3680.15 K"<<endl;
	cout<<"electronegativity :1.630"<<endl;
	}
	else if((element=="Cr")||(element=="chromium")||(element=="24")||(element=="Chromium"))
	{
												//Chromium
	cout<<"symbol            :Cr"<<endl;
	cout<<"fullname          :Chromium"<<endl;
	cout<<"atomic number     :24"<<endl;
	cout<<"atomic mass       :51.9961"<<endl;
	cout<<"state             :solid"<<endl;
	cout<<"melting point     :2180.15 K"<<endl;
	cout<<"boiling point     :2944.15 K"<<endl;
	cout<<"electronegativity :1.660"<<endl;
	}
	else if((element=="Mn")||(element=="mangnese")||(element=="25")||(element=="Mangnese"))
	{
												//Mangnese
	cout<<"symbol            :Mn"<<endl;
	cout<<"fullname          :Mangnese"<<endl;
	cout<<"atomic number     :25"<<endl;
	cout<<"atomic mass       :54.938045"<<endl;
	cout<<"state             :solid"<<endl;
	cout<<"melting point     :1519.15 K"<<endl;
	cout<<"boiling point     :2334.15 K"<<endl;
	cout<<"electronegativity :1.550"<<endl;
	}
	else if((element=="Fe")||(element=="iron")||(element=="26")||(element=="Iron"))
	{
												//Iron
	cout<<"symbol            :Fe"<<endl;
	cout<<"fullname          :Iron"<<endl;
	cout<<"atomic number     :26"<<endl;
	cout<<"atomic mass       :55.845"<<endl;
	cout<<"state             :solid"<<endl;
	cout<<"melting point     :1811.15 K"<<endl;
	cout<<"boiling point     :3134.15 K"<<endl;
	cout<<"electronegativity :1.830"<<endl;
	}
	else if((element=="Co")||(element=="cobalt")||(element=="27")||(element=="Cobalt"))
	{
												//Cobalt
	cout<<"symbol            :Co"<<endl;
	cout<<"fullname          :Cobalt"<<endl;
	cout<<"atomic number     :27"<<endl;
	cout<<"atomic mass       :58.933195"<<endl;
	cout<<"state             :solid"<<endl;
	cout<<"melting point     :1768.15 K"<<endl;
	cout<<"boiling point     :3200.15 K"<<endl;
	cout<<"electronegativity :1.880"<<endl;
	}
	else if((element=="Ni")||(element=="nickle")||(element=="28")||(element=="Nickle"))
	{
												//Nickle
	cout<<"symbol            :Ni"<<endl;
	cout<<"fullname          :Nickle"<<endl;
	cout<<"atomic number     :28"<<endl;
	cout<<"atomic mass       :58.6934"<<endl;
	cout<<"state             :solid"<<endl;
	cout<<"melting point     :1728.15 K"<<endl;
	cout<<"boiling point     :3186.15 K"<<endl;
	cout<<"electronegativity :1.910"<<endl;
	}
	else if((element=="Cu")||(element=="copper")||(element=="29")||(element=="Copper"))
	{
												//Copper
	cout<<"symbol            :Cu"<<endl;
	cout<<"fullname          :Copper"<<endl;
	cout<<"atomic number     :29"<<endl;
	cout<<"atomic mass       :63.546"<<endl;
	cout<<"state             :solid"<<endl;
	cout<<"melting point     :1357.77 K"<<endl;
	cout<<"boiling point     :2835.15 K"<<endl;
	cout<<"electronegativity :1.900"<<endl;
	}
	else if((element=="Zn")||(element=="zinc")||(element=="30")||(element=="Zinc"))
	{
												//Zinc
	cout<<"symbol            :Zn"<<endl;
	cout<<"fullname          :Zinc"<<endl;
	cout<<"atomic number     :30"<<endl;
	cout<<"atomic mass       :65.409"<<endl;
	cout<<"state             :solid"<<endl;
	cout<<"melting point     :692.68  K"<<endl;
	cout<<"boiling point     :1180.15 K"<<endl;
	cout<<"electronegativity :1.656"<<endl;
	}
	else if((element=="Ga")||(element=="galium")||(element=="31")||(element=="Galium"))
	{
												//Galium
	cout<<"symbol            :Ga"<<endl;
	cout<<"fullname          :Galium"<<endl;
	cout<<"atomic number     :31"<<endl;
	cout<<"atomic mass       :69.723"<<endl;
	cout<<"state             :solid"<<endl;
	cout<<"melting point     :302.915 K"<<endl;
	cout<<"boiling point     :2502.15 K"<<endl;
	cout<<"electronegativity :1.810"<<endl;
	}
	else if((element=="Ge")||(element=="germanium")||(element=="32")||(element=="Germanium"))
	{
												//Germanium
	cout<<"symbol            :Ge"<<endl;
	cout<<"fullname          :Germanium"<<endl;
	cout<<"atomic number     :32"<<endl;
	cout<<"atomic mass       :72.64"<<endl;
	cout<<"state             :solid"<<endl;
	cout<<"melting point     :1211.4  K"<<endl;
	cout<<"boiling point     :3106.15 K"<<endl;
	cout<<"electronegativity :2.010"<<endl;
	}
	else if((element=="As")||(element=="arsenic")||(element=="33")||(element=="Arsenic"))
	{
												//Arsenic
	cout<<"symbol            :As"<<endl;
	cout<<"fullname          :Arsenic"<<endl;
	cout<<"atomic number     :33"<<endl;
	cout<<"atomic mass       :74.92160"<<endl;
	cout<<"state             :solid"<<endl;
	cout<<"melting point     :889.15 K"<<endl;
	cout<<"boiling point     :sublimes"<<endl;
	cout<<"electronegativity :2.180"<<endl;
	}
	else if((element=="Se")||(element=="selenium")||(element=="34")||(element=="Selenium"))
	{
												//Selenium
	cout<<"symbol            :Se"<<endl;
	cout<<"fullname          :Selenium"<<endl;
	cout<<"atomic number     :34"<<endl;
	cout<<"atomic mass       :78.96"<<endl;
	cout<<"state             :solid"<<endl;
	cout<<"melting point     :493.15 K"<<endl;
	cout<<"boiling point     :958.15 K"<<endl;
	cout<<"electronegativity :2.550"<<endl;
	}
	else if((element=="Br")||(element=="bromine")||(element=="35")||(element=="Bromine"))
	{
												//Bromine
	cout<<"symbol            :Br"<<endl;
	cout<<"fullname          :Bromine"<<endl;
	cout<<"atomic number     :35"<<endl;
	cout<<"atomic mass       :79.904"<<endl;
	cout<<"state             :liquid"<<endl;
	cout<<"melting point     :265.95 K"<<endl;
	cout<<"boiling point     :331.95 K"<<endl;
	cout<<"electronegativity :2.960"<<endl;
	}
	else if((element=="Kr")||(element=="krypton")||(element=="36")||(element=="Krypton"))
	{
												//Krypton
	cout<<"symbol            :Kr"<<endl;
	cout<<"fullname          :Krypton"<<endl;
	cout<<"atomic number     :36"<<endl;
	cout<<"atomic mass       :83.798"<<endl;
	cout<<"state             :gas"<<endl;
	cout<<"melting point     :115.79  K"<<endl;
	cout<<"boiling point     :119.735 K"<<endl;
	cout<<"electronegativity :none"<<endl;
	}
	else if((element=="Rb")||(element=="rubidium")||(element=="37")||(element=="Rubidium"))
	{
												//Rubidium
	cout<<"symbol            :Rb"<<endl;
	cout<<"fullname          :Rubidium"<<endl;
	cout<<"atomic number     :37"<<endl;
	cout<<"atomic mass       :85.4678"<<endl;
	cout<<"state             :solid"<<endl;
	cout<<"melting point     :312.45 K"<<endl;
	cout<<"boiling point     :961.15 K"<<endl;
	cout<<"electronegativity :0.820"<<endl;
	}
	else if((element=="Sr")||(element=="strontium")||(element=="38")||(element=="Strontium"))
	{
												//Strontium
	cout<<"symbol            :Sr"<<endl;
	cout<<"fullname          :Strontium"<<endl;
	cout<<"atomic number     :38"<<endl;
	cout<<"atomic mass       :87.62"<<endl;
	cout<<"state             :solid"<<endl;
	cout<<"melting point     :1050.15 K"<<endl;
	cout<<"boiling point     :1650.15 K"<<endl;
	cout<<"electronegativity :0.950"<<endl;
	}
	else if((element=="Y")||(element=="yttrium")||(element=="39")||(element=="Yttrium"))
	{
												//Yttrium
	cout<<"symbol            :Y"<<endl;
	cout<<"fullname          :Yttrium"<<endl;
	cout<<"atomic number     :39"<<endl;
	cout<<"atomic mass       :88.90585"<<endl;
	cout<<"state             :solid"<<endl;
	cout<<"melting point     :1795.15 K"<<endl;
	cout<<"boiling point     :3618.15 K"<<endl;
	cout<<"electronegativity :1.220"<<endl;
	}
	else if((element=="Zr")||(element=="zirconium")||(element=="40")||(element=="Zirconium"))
	{
												//zirconium
	cout<<"symbol            :Zr"<<endl;
	cout<<"fullname          :Zirconium"<<endl;
	cout<<"atomic number     :40"<<endl;
	cout<<"atomic mass       :91.224"<<endl;
	cout<<"state             :solid"<<endl;
	cout<<"melting point     :2127.15 K"<<endl;
	cout<<"boiling point     :4679.15 K"<<endl;
	cout<<"electronegativity :"<<endl;
	}
	else if((element=="Nb")||(element=="nibonium")||(element=="41")||(element=="Nibonium"))
	{
												//Niobium
	cout<<"symbol            :Nb"<<endl;
	cout<<"fullname          :Nibonium"<<endl;
	cout<<"atomic number     :41"<<endl;
	cout<<"atomic mass       :92.90638"<<endl;
	cout<<"state             :solid"<<endl;
	cout<<"melting point     :2750.15 K"<<endl;
	cout<<"boiling point     :5017.15 K"<<endl;
	cout<<"electronegativity :1.600"<<endl;
	}
	else if((element=="Mo")||(element=="molybdenum")||(element=="42")||(element=="Molybdenum"))
	{
												//Molybdenum
	cout<<"symbol            :Mo"<<endl;
	cout<<"fullname          :Molybdenum"<<endl;
	cout<<"atomic number     :42"<<endl;
	cout<<"atomic mass       :95.94"<<endl;
	cout<<"state             :solid"<<endl;
	cout<<"melting point     :2895.15 K"<<endl;
	cout<<"boiling point     :4912.15 K"<<endl;
	cout<<"electronegativity :2.160"<<endl;
	}
	else if((element=="Tc")||(element=="technetium")||(element=="43")||(element=="Technetium"))
	{
												//Technetium
	cout<<"symbol            :Tc"<<endl;
	cout<<"fullname          :Technetium"<<endl;
	cout<<"atomic number     :43"<<endl;
	cout<<"atomic mass       :98.90638"<<endl;
	cout<<"state             :solid"<<endl;
	cout<<"melting point     :2430.15 K"<<endl;
	cout<<"boiling point     :4538.15 K"<<endl;
	cout<<"electronegativity :1.900"<<endl;
	}
	else if((element=="Ru")||(element=="ruthunium")||(element=="44")||(element=="Ruthunium"))
	{
												//Ruthenium
	cout<<"symbol            :Ru"<<endl;
	cout<<"fullname          :Ruthunium"<<endl;
	cout<<"atomic number     :44"<<endl;
	cout<<"atomic mass       :101.07"<<endl;
	cout<<"state             :solid"<<endl;
	cout<<"melting point     :2606.15 K"<<endl;
	cout<<"boiling point     :4420.15 K"<<endl;
	cout<<"electronegativity :2.200"<<endl;
	}
	else if((element=="Rh")||(element=="rhodium")||(element=="45")||(element=="Rhodium"))
	{
												//Rhodium
	cout<<"symbol            :Rh"<<endl;
	cout<<"fullname          :Rhodium"<<endl;
	cout<<"atomic number     :45"<<endl;
	cout<<"atomic mass       :102.90550"<<endl;
	cout<<"state             :solid"<<endl;
	cout<<"melting point     :2237.15 K"<<endl;
	cout<<"boiling point     :3968.15 K"<<endl;
	cout<<"electronegativity :2.280"<<endl;
	}
	else if((element=="Pd")||(element=="palladium")||(element=="46")||(element=="Palladium"))
	{
												//Palladium
	cout<<"symbol            :Pd"<<endl;
	cout<<"fullname          :Palladium"<<endl;
	cout<<"atomic number     :46"<<endl;
	cout<<"atomic mass       :106.42"<<endl;
	cout<<"state             :solid"<<endl;
	cout<<"melting point     :1827.15 K"<<endl;
	cout<<"boiling point     :3236,15 K"<<endl;
	cout<<"electronegativity :2.200"<<endl;
	}
	else if((element=="Ag")||(element=="silver")||(element=="47")||(element=="Silver"))
	{
												//Silver
	cout<<"symbol            :Ag"<<endl;
	cout<<"fullname          :Silver"<<endl;
	cout<<"atomic number     :47"<<endl;
	cout<<"atomic mass       :107.8682"<<endl;
	cout<<"state             :solid"<<endl;
	cout<<"melting point     :1234.93 K"<<endl;
	cout<<"boiling point     :2435.15 K"<<endl;
	cout<<"electronegativity :1.930"<<endl;
	}
	else if((element=="Cd")||(element=="cadmium")||(element=="48")||(element=="Cadmium"))
	{
												//Cadmium
	cout<<"symbol            :Cd"<<endl;
	cout<<"fullname          :Cadmium"<<endl;
	cout<<"atomic number     :48"<<endl;
	cout<<"atomic mass       :112.411"<<endl;
	cout<<"state             :solid"<<endl;
	cout<<"melting point     :594.219 K"<<endl;
	cout<<"boiling point     :1040.15 K"<<endl;
	cout<<"electronegativity :1.690"<<endl;
	}
	else if((element=="In")||(element=="indium")||(element=="49")||(element=="Indium"))
	{
												//Indium
	cout<<"symbol            :In"<<endl;
	cout<<"fullname          :Indium"<<endl;
	cout<<"atomic number     :49"<<endl;
	cout<<"atomic mass       :114.818"<<endl;
	cout<<"state             :solid"<<endl;
	cout<<"melting point     :429.75  K"<<endl;
	cout<<"boiling point     :2345.15 K"<<endl;
	cout<<"electronegativity :1.780"<<endl;
	}
	else if((element=="Sn")||(element=="tin")||(element=="50")||(element=="Tin"))
	{
												//Tin
	cout<<"symbol            :Sn"<<endl;
	cout<<"fullname          :Tin"<<endl;
	cout<<"atomic number     :50"<<endl;
	cout<<"atomic mass       :118.710"<<endl;
	cout<<"state             :solid"<<endl;
	cout<<"melting point     :505.08  K"<<endl;
	cout<<"boiling point     :2859.15 K"<<endl;
	cout<<"electronegativity :1.960"<<endl;
	}
	else if((element=="Sb")||(element=="antimony")||(element=="51")||(element=="Antimony"))
	{
												//Antimony
	cout<<"symbol            :Sb"<<endl;
	cout<<"fullname          :Antimony"<<endl;
	cout<<"atomic number     :51"<<endl;
	cout<<"atomic mass       :121.760"<<endl;
	cout<<"state             :solid"<<endl;
	cout<<"melting point     :903.78  K"<<endl;
	cout<<"boiling point     :1860.15 K"<<endl;
	cout<<"electronegativity :2.050"<<endl;
	}
	else if((element=="Te")||(element=="tellutrium")||(element=="52")||(element=="Tellutrium"))
	{
												//Tellurium
	cout<<"symbol            :Te"<<endl;
	cout<<"fullname          :Tellutrium"<<endl;
	cout<<"atomic number     :52"<<endl;
	cout<<"atomic mass       :127.60"<<endl;
	cout<<"state             :solid"<<endl;
	cout<<"melting point     :722.66  K"<<endl;
	cout<<"boiling point     :1261.15 K"<<endl;
	cout<<"electronegativity :2.100"<<endl;
	}
	else if((element=="I")||(element=="iodine")||(element=="53")||(element=="Iodine"))
	{
												//Iodine
	cout<<"symbol            :I"<<endl;
	cout<<"fullname          :Iodine"<<endl;
	cout<<"atomic number     :53"<<endl;
	cout<<"atomic mass       :126.90447"<<endl;
	cout<<"state             :solid"<<endl;
	cout<<"melting point     :386.85 K"<<endl;
	cout<<"boiling point     :457.55 K"<<endl;
	cout<<"electronegativity :2.660"<<endl;
	}
	else if((element=="Xe")||(element=="xenon")||(element=="54")||(element=="Xenon"))
	{
												//Xenon
	cout<<"symbol            :Xe"<<endl;
	cout<<"fullname          :Xenon"<<endl;
	cout<<"atomic number     :54"<<endl;
	cout<<"atomic mass       :131.293"<<endl;
	cout<<"state             :gas"<<endl;
	cout<<"melting point     :161.41  K"<<endl;
	cout<<"boiling point     :165.051 K"<<endl;
	cout<<"electronegativity :none"<<endl;
	}
	else if((element=="Cs")||(element=="cesium")||(element=="55")||(element=="Cesium"))
	{
												//cesium
	cout<<"symbol            :Cs"<<endl;
	cout<<"fullname          :Cesium"<<endl;
	cout<<"atomic number     :55"<<endl;
	cout<<"atomic mass       :132.9054519"<<endl;
	cout<<"state             :solid"<<endl;
	cout<<"melting point     :301.65 K"<<endl;
	cout<<"boiling point     :944.15 K"<<endl;
	cout<<"electronegativity :0.790"<<endl;
	}
	else if((element=="Ba")||(element=="barium")||(element=="56")||(element=="Barium"))
	{
	cout<<"symbol            :Ba"<<endl;
	cout<<"fullname          :Barium"<<endl;
	cout<<"atomic number     :56"<<endl;
	cout<<"atomic mass       :137.327"<<endl;
	cout<<"state             :solid"<<endl;
	cout<<"melting point     :1000.15 K"<<endl;
	cout<<"boiling point     :2118.15 K"<<endl;
	cout<<"electronegativity :0.890"<<endl;
	}
	else if((element=="La")||(element=="lanthanum")||(element=="57")||(element=="Lanthanum"))
	{
	cout<<"symbol            :La"<<endl;
	cout<<"fullname          :Lanthanum"<<endl;
	cout<<"atomic number     :57"<<endl;
	cout<<"atomic mass       :138.905"<<endl;
	cout<<"state             :solid"<<endl;
	cout<<"melting point     :1193 K"<<endl;
	cout<<"boiling point     :3743 K"<<endl;
	cout<<"electronegativity :1.10"<<endl;
	}
	else if((element=="Ce")||(element=="cerium")||(element=="58")||(element=="Cerium"))
	{
	cout<<"symbol            :Ce"<<endl;
	cout<<"fullname          :Cerium"<<endl;
	cout<<"atomic number     :58"<<endl;
	cout<<"atomic mass       :140.116"<<endl;
	cout<<"state             :solid"<<endl;
	cout<<"melting point     :1068 K"<<endl;
	cout<<"boiling point     :3633 K"<<endl;
	cout<<"electronegativity :1.12"<<endl;
	}
	else if((element=="Pr")||(element=="praseodymium")||(element=="59")||(element=="Praseodymium"))
	{
	cout<<"symbol            :Pr"<<endl;
	cout<<"fullname          :praseodymium"<<endl;
	cout<<"atomic number     :59"<<endl;
	cout<<"atomic mass       :140.90765"<<endl;
	cout<<"state             :solid"<<endl;
	cout<<"melting point     :1208 K"<<endl;
	cout<<"boiling point     :3563 K "<<endl;
	cout<<"electronegativity :1.13"<<endl;
	}
	else if((element=="Nd")||(element=="neodymium")||(element=="60")||(element=="Neodymium"))
	{
	cout<<"symbol            :Nd"<<endl;
	cout<<"fullname          :Neodymium"<<endl;
	cout<<"atomic number     :60"<<endl;
	cout<<"atomic mass       :144.242"<<endl;
	cout<<"state             :solid"<<endl;
	cout<<"melting point     :1297 K"<<endl;
	cout<<"boiling point     :3373 K"<<endl;
	cout<<"electronegativity :1.14"<<endl;
	}
	else if((element=="Pm")||(element=="promethium")||(element=="61")||(element=="Promethium"))
	{
	cout<<"symbol            :Pm"<<endl;
	cout<<"fullname          :Promethium"<<endl;
	cout<<"atomic number     :61"<<endl;
	cout<<"atomic mass       :145"<<endl;
	cout<<"state             :solid"<<endl;
	cout<<"melting point     :1373 K"<<endl;
	cout<<"boiling point     :3273 K "<<endl;
	cout<<"electronegativity :None"<<endl;
	}
	else if((element=="Sm")||(element=="samarium")||(element=="62")||(element=="Samarium"))
	{
	cout<<"symbol            :Sm"<<endl;
	cout<<"fullname          :Samarium"<<endl;
	cout<<"atomic number     :62"<<endl;
	cout<<"atomic mass       :150.36"<<endl;
	cout<<"state             :solid"<<endl;
	cout<<"melting point     :1345 K"<<endl;
	cout<<"boiling point     :2076 K"<<endl;
	cout<<"electronegativity :1.17"<<endl;
	}
	else if((element=="Eu")||(element=="europium")||(element=="63")||(element=="Europium"))
	{
	cout<<"symbol            :Eu"<<endl;
	cout<<"fullname          :europium"<<endl;
	cout<<"atomic number     :63"<<endl;
	cout<<"atomic mass       :151.964"<<endl;
	cout<<"state             :solid"<<endl;
	cout<<"melting point     :1099 K"<<endl;
	cout<<"boiling point     :1800 K"<<endl;
	cout<<"electronegativity :None"<<endl;
	}
	else if((element=="Gd")||(element=="gadolinium")||(element=="64")||(element=="Gadolinium"))
	{
	cout<<"symbol            :Gd"<<endl;
	cout<<"fullname          :Gadolinium"<<endl;
	cout<<"atomic number     :64"<<endl;
	cout<<"atomic mass       :157.25"<<endl;
	cout<<"state             :solid"<<endl;
	cout<<"melting point     :1585 K"<<endl;
	cout<<"boiling point     :3523 K "<<endl;
	cout<<"electronegativity :1.20"<<endl;
	}
	else if((element=="Tb")||(element=="terbium")||(element=="65")||(element=="Terbium"))
	{
	cout<<"symbol            :Tb"<<endl;
	cout<<"fullname          :Terbium"<<endl;
	cout<<"atomic number     :65"<<endl;
	cout<<"atomic mass       :158.92535"<<endl;
	cout<<"state             :solid"<<endl;
	cout<<"melting point     :1629 K"<<endl;
	cout<<"boiling point     :3503 K"<<endl;
	cout<<"electronegativity :None"<<endl;
	}
	else if((element=="Dy")||(element=="Dysprosium")||(element=="66")||(element=="desprosium"))
	{
	cout<<"symbol            :Dy"<<endl;
	cout<<"fullname          :Dysprosium"<<endl;
	cout<<"atomic number     :66"<<endl;
	cout<<"atomic mass       :162.500"<<endl;
	cout<<"state             :solid"<<endl;
	cout<<"melting point     :1680 K"<<endl;
	cout<<"boiling point     :2840 K"<<endl;
	cout<<"electronegativity :1.22"<<endl;
	}
	else if((element=="Ho")||(element=="holmium")||(element=="67")||(element=="Holmium"))
	{
	cout<<"symbol            :Ho"<<endl;
	cout<<"fullname          :holmium"<<endl;
	cout<<"atomic number     :67"<<endl;
	cout<<"atomic mass       :164.93032"<<endl;
	cout<<"state             :solid"<<endl;
	cout<<"melting point     :1734 K"<<endl;
	cout<<"boiling point     :2993 K"<<endl;
	cout<<"electronegativity :1.23"<<endl;
	}
	else if((element=="Er")||(element=="erbium")||(element=="68")||(element=="Erbium"))
	{
	cout<<"symbol            :Er"<<endl;
	cout<<"fullname          :Erbium"<<endl;
	cout<<"atomic number     :68"<<endl;
	cout<<"atomic mass       :167.259"<<endl;
	cout<<"state             :solid"<<endl;
	cout<<"melting point     :1802 K"<<endl;
	cout<<"boiling point     :3141 K"<<endl;
	cout<<"electronegativity :1.24"<<endl;
	}
	else if((element=="Tm")||(element=="thulium")||(element=="69")||(element=="Thulium"))
	{
	cout<<"symbol            :Tm"<<endl;
	cout<<"fullname          :Thulium"<<endl;
	cout<<"atomic number     :69"<<endl;
	cout<<"atomic mass       :168.93421"<<endl;
	cout<<"state             :solid"<<endl;
	cout<<"melting point     :1818 K"<<endl;
	cout<<"boiling point     :2223 K"<<endl;
	cout<<"electronegativity :1.25"<<endl;
	}
	else if((element=="Yb")||(element=="ytterbium")||(element=="70")||(element=="Ytterbium"))
	{
	cout<<"symbol            :Yb"<<endl;
	cout<<"fullname          :Ytterbium"<<endl;
	cout<<"atomic number     :70"<<endl;
	cout<<"atomic mass       :173.054"<<endl;
	cout<<"state             :solid"<<endl;
	cout<<"melting point     :1097 K"<<endl;
	cout<<"boiling point     :1469 K"<<endl;
	cout<<"electronegativity :None"<<endl;
	}
	else if((element=="Lu")||(element=="lutatium")||(element=="71")||(element=="lutatium"))
	{
	cout<<"symbol            :Lu"<<endl;
	cout<<"fullname          :lutatium"<<endl;
	cout<<"atomic number     :71"<<endl;
	cout<<"atomic mass       :174.9688"<<endl;
	cout<<"state             :solid"<<endl;
	cout<<"melting point     :1925 K"<<endl;
	cout<<"boiling point     :3675 K"<<endl;
	cout<<"electronegativity :1.27"<<endl;
	}
	else if((element=="Hf")||(element=="hafnium")||(element=="72")||(element=="Hafnium"))
	{
	cout<<"symbol            :Hf"<<endl;
	cout<<"fullname          :Hafnium"<<endl;
	cout<<"atomic number     :72"<<endl;
	cout<<"atomic mass       :178.49"<<endl;
	cout<<"state             :solid"<<endl;
	cout<<"melting point     :2506 K"<<endl;
	cout<<"boiling point     :4876 K"<<endl;
	cout<<"electronegativity :1.3"<<endl;
	}
	else if((element=="Ta")||(element=="tantalum")||(element=="73")||(element=="Tantalum"))
	{
	cout<<"symbol            :Ta"<<endl;
	cout<<"fullname          :Tantalum"<<endl;
	cout<<"atomic number     :73"<<endl;
	cout<<"atomic mass       :180.94788"<<endl;
	cout<<"state             :solid"<<endl;
	cout<<"melting point     :3290 K"<<endl;
	cout<<"boiling point     :5731 K"<<endl;
	cout<<"electronegativity :None"<<endl;
	}
	else if((element=="W")||(element=="wolfram")||(element=="74")||(element=="Wolfram")||(element=="tungsten")||(element=="Tungsten"))
	{
	cout<<"symbol            :W"<<endl;
	cout<<"fullname          :Wolfram or Tungsten"<<endl;
	cout<<"atomic number     :74"<<endl;
	cout<<"atomic mass       :183.84"<<endl;
	cout<<"state             :solid"<<endl;
	cout<<"melting point     :3695 K"<<endl;
	cout<<"boiling point     :5828 K"<<endl;
	cout<<"electronegativity :2.36"<<endl;
	}
	else if((element=="Re")||(element=="rhenium")||(element=="75")||(element=="Rhenium"))
	{
	cout<<"symbol            :Re"<<endl;
	cout<<"fullname          :Rhenium"<<endl;
	cout<<"atomic number     :75"<<endl;
	cout<<"atomic mass       :186.207"<<endl;
	cout<<"state             :solid"<<endl;
	cout<<"melting point     :3459 K"<<endl;
	cout<<"boiling point     :5869 K"<<endl;
	cout<<"electronegativity :1.9"<<endl;
	}
	else if((element=="Os")||(element=="osmium")||(element=="76")||(element=="Osmium"))
	{
	cout<<"symbol            :Os"<<endl;
	cout<<"fullname          :Osmium"<<endl;
	cout<<"atomic number     :76"<<endl;
	cout<<"atomic mass       :190.23"<<endl;
	cout<<"state             :solid"<<endl;
	cout<<"melting point     :3306 K"<<endl;
	cout<<"boiling point     :5285 K"<<endl;
	cout<<"electronegativity :2.2"<<endl;
	}
	else if((element=="Ir")||(element=="iridium")||(element=="77")||(element=="Iridium"))
	{
	cout<<"symbol            :Ir"<<endl;
	cout<<"fullname          :Iridium"<<endl;
	cout<<"atomic number     :77"<<endl;
	cout<<"atomic mass       :192.22"<<endl;
	cout<<"state             :solid"<<endl;
	cout<<"melting point     :273.90 K"<<endl;
	cout<<"boiling point     :4701.0 K"<<endl;
	cout<<"electronegativity :2.20"<<endl;
	}
	else if((element=="Pt")||(element=="platinum")||(element=="78")||(element=="Platinum"))
	{
	cout<<"symbol            :Pt"<<endl;
	cout<<"fullname          :Platinum"<<endl;
	cout<<"atomic number     :78"<<endl;
	cout<<"atomic mass       :195.08"<<endl;
	cout<<"state             :solid"<<endl;
	cout<<"melting point     :2041.41 K"<<endl;
	cout<<"boiling point     :4098    K  "<<endl;
	cout<<"electronegativity :2.28"<<endl;
	}
	else if((element=="Au")||(element=="gold")||(element=="79")||(element=="Gold"))
	{
	cout<<"symbol            :Au"<<endl;
	cout<<"fullname          :Gold"<<endl;
	cout<<"atomic number     :79"<<endl;
	cout<<"atomic mass       :196.97"<<endl;
	cout<<"state             :solid"<<endl;
	cout<<"melting point     :1337.33 K"<<endl;
	cout<<"boiling point     :3129.00 K"<<endl;
	cout<<"electronegativity :2.54"<<endl;
	}
	else if((element=="Hg")||(element=="murcury")||(element=="80")||(element=="Murcury"))
	{
	cout<<"symbol            :Hg"<<endl;
	cout<<"fullname          :Mrcury"<<endl;
	cout<<"atomic number     :80"<<endl;
	cout<<"atomic mass       :200.59"<<endl;
	cout<<"state             :Liquid"<<endl;
	cout<<"melting point     :234.32 K"<<endl;
	cout<<"boiling point     :629.88 K"<<endl;
	cout<<"electronegativity :2.00"<<endl;
	}
	else if((element=="Tl")||(element=="thllium")||(element=="81")||(element=="Thallium"))
	{
	cout<<"symbol            :Tl"<<endl;
	cout<<"fullname          :Thallium"<<endl;
	cout<<"atomic number     :81"<<endl;
	cout<<"atomic mass       :204.38"<<endl;
	cout<<"state             :solid"<<endl;
	cout<<"melting point     :577 K"<<endl;
	cout<<"boiling point     :1746"<<endl;
	cout<<"electronegativity :1.62"<<endl;
	}
	else if((element=="Pb")||(element=="lead")||(element=="82")||(element=="Lead"))
	{
	cout<<"symbol            :Pb"<<endl;
	cout<<"fullname          :lead"<<endl;
	cout<<"atomic number     :82"<<endl;
	cout<<"atomic mass       :207.38"<<endl;
	cout<<"state             :solid"<<endl;
	cout<<"melting point     :600.61 K"<<endl;
	cout<<"boiling point     :2022.0 K"<<endl;
	cout<<"electronegativity :2.33"<<endl;
	}
	else if((element=="Bi")||(element=="bismuth")||(element=="83")||(element=="Bismuth"))
	{
	cout<<"symbol            :Bi"<<endl;
	cout<<"fullname          :Bismuth"<<endl;
	cout<<"atomic number     :83"<<endl;
	cout<<"atomic mass       :208.98"<<endl;
	cout<<"state             :solid"<<endl;
	cout<<"melting point     :544.4 K"<<endl;
	cout<<"boiling point     :1837  K"<<endl;
	cout<<"electronegativity :2.02"<<endl;
	}
	else if((element=="Po")||(element=="polonium")||(element=="84")||(element=="Polonium"))
	{
	cout<<"symbol            :Po"<<endl;
	cout<<"fullname          :Polonium"<<endl;
	cout<<"atomic number     :84"<<endl;
	cout<<"atomic mass       :208.98"<<endl;
	cout<<"state             :solid"<<endl;
	cout<<"melting point     :527.0 K"<<endl;
	cout<<"boiling point     :1235  K"<<endl;
	cout<<"electronegativity :2.0"<<endl;
	}
	else if((element=="At")||(element=="astatine")||(element=="85")||(element=="Astatine"))
	{
	cout<<"symbol            :As"<<endl;
	cout<<"fullname          :Astatine"<<endl;
	cout<<"atomic number     :85"<<endl;
	cout<<"atomic mass       :209.99"<<endl;
	cout<<"state             :solid"<<endl;
	cout<<"melting point     :575 K"<<endl;
	cout<<"boiling point     :503 K"<<endl;
	cout<<"electronegativity :2.2"<<endl;
	}
	else if((element=="Rn")||(element=="radon")||(element=="86")||(element=="Radon"))
	{
	cout<<"symbol            :Rn"<<endl;
	cout<<"fullname          :Radon"<<endl;
	cout<<"atomic number     :86"<<endl;
	cout<<"atomic mass       :222.22"<<endl;
	cout<<"state             :solid"<<endl;
	cout<<"melting point     :202.0 K"<<endl;
	cout<<"boiling point     :211.3 K"<<endl;
	cout<<"electronegativity :None"<<endl;
	}
	else if((element=="Fr")||(element=="francium")||(element=="87")||(element=="Francium"))
	{
	cout<<"symbol            :Fr"<<endl;
	cout<<"fullname          :Francium"<<endl;
	cout<<"atomic number     :87"<<endl;
	cout<<"atomic mass       :223.02"<<endl;
	cout<<"state             :solid"<<endl;
	cout<<"melting point     :300 K"<<endl;
	cout<<"boiling point     :871 K"<<endl;
	cout<<"electronegativity :0.7"<<endl;
	}
	else if((element=="Ra")||(element=="radium")||(element=="88")||(element=="Radium"))
	{
	cout<<"symbol            :Ra"<<endl;
	cout<<"fullname          :Radium"<<endl;
	cout<<"atomic number     :88"<<endl;
	cout<<"atomic mass       :226.03"<<endl;
	cout<<"state             :solid"<<endl;
	cout<<"melting point     :973  K"<<endl;
	cout<<"boiling point     :2010 K"<<endl;
	cout<<"electronegativity :0.9"<<endl;
	}
	else if((element=="Ae")||(element=="actinium")||(element=="89")||(element=="Actinium"))
	{
	cout<<"symbol            :Ae"<<endl;
	cout<<"fullname          :Actinium"<<endl;
	cout<<"atomic number     :89"<<endl;
	cout<<"atomic mass       :227.03"<<endl;
	cout<<"state             :solid"<<endl;
	cout<<"melting point     :1323 K"<<endl;
	cout<<"boiling point     :3573 K"<<endl;
	cout<<"electronegativity :1.1"<<endl;
	}
	else if((element=="Th")||(element=="thorium")||(element=="90")||(element=="Thorium"))
	{
	//Thorium
	cout<<"symbol            :Th"<<endl;
	cout<<"fullname          :Thorium"<<endl;
	cout<<"atomic number     :90"<<endl;
	cout<<"atomic mass       :232.04"<<endl;
	cout<<"state             :solid"<<endl;
	cout<<"melting point     :2115 K"<<endl;
	cout<<"boiling point     :5093 K"<<endl;
	cout<<"electronegativity :1.3"<<endl;
	}
	else if((element=="Pa")||(element=="protactinium")||(element=="91")||(element=="Protactinium"))
	{
	cout<<"symbol            :Pa"<<endl;
	cout<<"fullname          :Protactinium"<<endl;
	cout<<"atomic number     :91"<<endl;
	cout<<"atomic mass       :231.04"<<endl;
	cout<<"state             :solid"<<endl;
	cout<<"melting point     :1841 K"<<endl;
	cout<<"boiling point     :4300 K"<<endl;
	cout<<"electronegativity :1.5"<<endl;
	}
	else if((element=="U")||(element=="uranium")||(element=="92")||(element=="Uranium"))
	{
	cout<<"symbol            :U"<<endl;
	cout<<"fullname          :Uranium"<<endl;
	cout<<"atomic number     :92"<<endl;
	cout<<"atomic mass       :238.03"<<endl;
	cout<<"state             :solid"<<endl;
	cout<<"melting point     :1405.3 K"<<endl;
	cout<<"boiling point     :4200.0 K"<<endl;
	cout<<"electronegativity :1.38"<<endl;
	}
	else if((element=="Np")||(element=="neptunium")||(element=="93")||(element=="Neptunium"))
	{
	cout<<"symbol            :Np"<<endl;
	cout<<"fullname          :Neptunium"<<endl;
	cout<<"atomic number     :93"<<endl;
	cout<<"atomic mass       :237.05"<<endl;
	cout<<"state             :solid"<<endl;
	cout<<"melting point     :910  K"<<endl;
	cout<<"boiling point     :4300 K"<<endl;
	cout<<"electronegativity :1.36"<<endl;
	}
	else if((element=="Pu")||(element=="plutonium")||(element=="94")||(element=="Plutonium"))
	{
	cout<<"symbol            :Pu"<<endl;
	cout<<"fullname          :Plutonium"<<endl;
	cout<<"atomic number     :94"<<endl;
	cout<<"atomic mass       :244.06"<<endl;
	cout<<"state             :solid"<<endl;
	cout<<"melting point     :912.5 K"<<endl;
	cout<<"boiling point     :3503  K"<<endl;
	cout<<"electronegativity :1.28"<<endl;
	}
	else if((element=="Am")||(element=="amercium")||(element=="95")||(element=="Amercium"))
	{
	cout<<"symbol            :Am"<<endl;
	cout<<"fullname          :Amercium"<<endl;
	cout<<"atomic number     :95"<<endl;
	cout<<"atomic mass       :243.06"<<endl;
	cout<<"state             :solid"<<endl;
	cout<<"melting point     :1449 K"<<endl;
	cout<<"boiling point     :2880 K"<<endl;
	cout<<"electronegativity :1.3"<<endl;
	}
	else if((element=="Cm")||(element=="curium")||(element=="96")||(element=="Curium"))
	{
	cout<<"symbol            :Cm"<<endl;
	cout<<"fullname          :Curium"<<endl;
	cout<<"atomic number     :96"<<endl;
	cout<<"atomic mass       :247.07"<<endl;
	cout<<"state             :solid"<<endl;
	cout<<"melting point     :1613 K"<<endl;
	cout<<"boiling point     :3383 K"<<endl;
	cout<<"electronegativity :1.3"<<endl;
	}
	else if((element=="Bk")||(element=="berkelium")||(element=="97")||(element=="Berkelium"))
	{
	cout<<"symbol            :Bk"<<endl;
	cout<<"fullname          :Berkelium"<<endl;
	cout<<"atomic number     :97"<<endl;
	cout<<"atomic mass       :247.07"<<endl;
	cout<<"state             :solid"<<endl;
	cout<<"melting point     :1259 K"<<endl;
	cout<<"boiling point     :None"<<endl;
	cout<<"electronegativity :1.3"<<endl;
	}
	else if((element=="Cf")||(element=="californium")||(element=="98")||(element=="Californium"))
	{
	cout<<"symbol            :Cf"<<endl;
	cout<<"fullname          :Californium"<<endl;
	cout<<"atomic number     :98"<<endl;
	cout<<"atomic mass       :251.08"<<endl;
	cout<<"state             :solid"<<endl;
	cout<<"melting point     :1173 K"<<endl;
	cout<<"boiling point     :None"<<endl;
	cout<<"electronegativity :1.3"<<endl;
	}
	else if((element=="Es")||(element=="einstenium")||(element=="99")||(element=="einstenium"))
	{
	cout<<"symbol            :Es"<<endl;
	cout<<"fullname          :Einstenium"<<endl;
	cout<<"atomic number     :99"<<endl;
	cout<<"atomic mass       :252.08"<<endl;
	cout<<"state             :solid"<<endl;
	cout<<"melting point     :1133 K"<<endl;
	cout<<"boiling point     :None"<<endl;
	cout<<"electronegativity :1.3"<<endl;
	}
	else if((element=="Fm")||(element=="fermium")||(element=="100")||(element=="Fermium"))
	{
	cout<<"symbol            :Fm"<<endl;
	cout<<"fullname          :Fermium"<<endl;
	cout<<"atomic number     :100"<<endl;
	cout<<"atomic mass       :257.10"<<endl;
	cout<<"state             :solid"<<endl;
	cout<<"melting point     :1800 K"<<endl;
	cout<<"boiling point     :None"<<endl;
	cout<<"electronegativity :1.3"<<endl;
	}
	else if((element=="Md")||(element=="mendelevium")||(element=="101")||(element=="Mendelevium"))
	{
	cout<<"symbol            :Md"<<endl;
	cout<<"fullname          :Mendelevium"<<endl;
	cout<<"atomic number     :101"<<endl;
	cout<<"atomic mass       :258.10"<<endl;
	cout<<"state             :solid"<<endl;
	cout<<"melting point     :1100 K"<<endl;
	cout<<"boiling point     :None"<<endl;
	cout<<"electronegativity :1.3"<<endl;
	}
	else if((element=="No")||(element=="nobelium")||(element=="102")||(element=="Nobelium"))
	{
	cout<<"symbol            :No"<<endl;
	cout<<"fullname          :Nobelium"<<endl;
	cout<<"atomic number     :102"<<endl;
	cout<<"atomic mass       :259.10"<<endl;
	cout<<"state             :solid"<<endl;
	cout<<"melting point     :1100 K"<<endl;
	cout<<"boiling point     :None"<<endl;
	cout<<"electronegativity :1.3"<<endl;
	}
	else if((element=="Lr")||(element=="lawrencium")||(element=="103")||(element=="Lawrencium"))
	{
	cout<<"symbol            :Lr"<<endl;
	cout<<"fullname          :Lawrencium"<<endl;
	cout<<"atomic number     :103"<<endl;
	cout<<"atomic mass       :262.11"<<endl;
	cout<<"state             :solid"<<endl;
	cout<<"melting point     :262.11 K"<<endl;
	cout<<"boiling point     :None"<<endl;
	cout<<"electronegativity :None"<<endl;
	}
	else if((element=="Rf")||(element=="rutherfordium")||(element=="104")||(element=="Ruthurfordium"))
	{
	cout<<"symbol            :Rf"<<endl;
	cout<<"fullname          :Ruthurfordium"<<endl;
	cout<<"atomic number     :104"<<endl;
	cout<<"atomic mass       :265.12"<<endl;
	cout<<"state             :solid"<<endl;
	cout<<"melting point     :None"<<endl;
	cout<<"boiling point     :None"<<endl;
	cout<<"electronegativity :None"<<endl;
	}
	else if((element=="Db")||(element=="dubnium")||(element=="105")||(element=="Dubnium"))
	{
	cout<<"symbol            :Db"<<endl;
	cout<<"fullname          :Dubnium"<<endl;
	cout<<"atomic number     :105"<<endl;
	cout<<"atomic mass       :268.13"<<endl;
	cout<<"state             :solid"<<endl;
	cout<<"melting point     :None"<<endl;
	cout<<"boiling point     :None"<<endl;
	cout<<"electronegativity :None"<<endl;
	}
	else if((element=="Sg")||(element=="seaborgium")||(element=="106")||(element=="Seaborgium"))
	{
	cout<<"symbol            :Sg"<<endl;
	cout<<"fullname          :Seaborgium"<<endl;
	cout<<"atomic number     :106"<<endl;
	cout<<"atomic mass       :271.13"<<endl;
	cout<<"state             :solid"<<endl;
	cout<<"melting point     :None"<<endl;
	cout<<"boiling point     :None"<<endl;
	cout<<"electronegativity :None"<<endl;
	}
	else if((element=="Bh")||(element=="bohrium")||(element=="107")||(element=="Bohrium"))
	{
	cout<<"symbol            :Bh"<<endl;
	cout<<"fullname          :Bohrium"<<endl;
	cout<<"atomic number     :107"<<endl;
	cout<<"atomic mass       :270"<<endl;
	cout<<"state             :solid"<<endl;
	cout<<"melting point     :None"<<endl;
	cout<<"boiling point     :None"<<endl;
	cout<<"electronegativity :None"<<endl;
	}
	else if((element=="Hs")||(element=="hussium")||(element=="108")||(element=="Hussium"))
	{
	cout<<"symbol            :Hs"<<endl;
	cout<<"fullname          :Hassium"<<endl;
	cout<<"atomic number     :108"<<endl;
	cout<<"atomic mass       :277.15"<<endl;
	cout<<"state             :solid"<<endl;
	cout<<"melting point     :None"<<endl;
	cout<<"boiling point     :None"<<endl;
	cout<<"electronegativity :None"<<endl;
	}
	else if((element=="Mt")||(element=="meitnerium")||(element=="109")||(element=="Meitnerium"))
	{

	cout<<"symbol            :Mt"<<endl;
	cout<<"fullname          :Meitnerium"<<endl;
	cout<<"atomic number     :109"<<endl;
	cout<<"atomic mass       :276.15"<<endl;
	cout<<"state             :solid"<<endl;
	cout<<"melting point     :None"<<endl;
	cout<<"boiling point     :None"<<endl;
	cout<<"electronegativity :None"<<endl;
	}
	else if((element=="Ds")||(element=="darmstadtium")||(element=="110")||(element=="Darmstadtium"))
	{
	cout<<"symbol            :Ds"<<endl;
	cout<<"fullname          :Darmstadtium"<<endl;
	cout<<"atomic number     :110"<<endl;
	cout<<"atomic mass       :281.16"<<endl;
	cout<<"state             :solid"<<endl;
	cout<<"melting point     :None"<<endl;
	cout<<"boiling point     :None"<<endl;
	cout<<"electronegativity :None"<<endl;
	}
	else if((element=="Rg")||(element=="roentgenium")||(element=="111")||(element=="Roentgenium"))
	{
	cout<<"symbol            :Rg"<<endl;
	cout<<"fullname          :Roentgenium"<<endl;
	cout<<"atomic number     :111"<<endl;
	cout<<"atomic mass       :280.16"<<endl;
	cout<<"state             :solid"<<endl;
	cout<<"melting point     :None"<<endl;
	cout<<"boiling point     :None"<<endl;
	cout<<"electronegativity :None"<<endl;
	}
	else if((element=="Cn")||(element=="copernicium")||(element=="112")||(element=="Copernicium"))
	{
	cout<<"symbol            :Cn"<<endl;
	cout<<"fullname          :Copernicium"<<endl;
	cout<<"atomic number     :112"<<endl;
	cout<<"atomic mass       :285.17"<<endl;
	cout<<"state             :solid"<<endl;
	cout<<"melting point     :None"<<endl;
	cout<<"boiling point     :None"<<endl;
	cout<<"electronegativity :None"<<endl;
	}
	else if((element=="Uut")||(element=="ununtrium")||(element=="113")||(element=="Ununtrium"))
	{
	cout<<"symbol            :Uut"<<endl;
	cout<<"fullname          :Ununtrium"<<endl;
	cout<<"atomic number     :113"<<endl;
	cout<<"atomic mass       :284.18"<<endl;
	cout<<"state             :solid"<<endl;
	cout<<"melting point     :None"<<endl;
	cout<<"boiling point     :None"<<endl;
	cout<<"electronegativity :None"<<endl;}
	else if((element=="Fl")||(element=="flerovium")||(element=="114")||(element=="Flerovium"))
	{
	cout<<"symbol            :Fl"<<endl;
	cout<<"fullname          :Flerovium"<<endl;
	cout<<"atomic number     :114"<<endl;
	cout<<"atomic mass       :289.19"<<endl;
	cout<<"state             :solid"<<endl;
	cout<<"melting point     :None"<<endl;
	cout<<"boiling point     :None"<<endl;
	cout<<"electronegativity :None"<<endl;
	}
	else if((element=="Uup")||(element=="ununpentium")||(element=="115")||(element=="Ununpentium"))
	{
	cout<<"symbol            :Uup"<<endl;
	cout<<"fullname          :Unupentium"<<endl;
	cout<<"atomic number     :115"<<endl;
	cout<<"atomic mass       :288.14"<<endl;
	cout<<"state             :solid"<<endl;
	cout<<"melting point     :None"<<endl;
	cout<<"boiling point     :None"<<endl;
	cout<<"electronegativity :None"<<endl;
	}
	else if((element=="Lv")||(element=="livermorium")||(element=="116")||(element=="Livermorium"))
	{
	cout<<"symbol            :Lv"<<endl;
	cout<<"fullname          :Livermorium"<<endl;
	cout<<"atomic number     :116"<<endl;
	cout<<"atomic mass       :293"<<endl;
	cout<<"state             :solid"<<endl;
	cout<<"melting point     :None"<<endl;
	cout<<"boiling point     :None"<<endl;
	cout<<"electronegativity :None"<<endl;
	}
	else if((element=="Uus")||(element=="ununseptium")||(element=="117")||(element=="Ununseptium"))
	{
	cout<<"symbol            :Uus"<<endl;
	cout<<"fullname          :Ununseptium"<<endl;
	cout<<"atomic number     :117"<<endl;
	cout<<"atomic mass       :294"<<endl;
	cout<<"state             :solid"<<endl;
	cout<<"melting point     :None"<<endl;
	cout<<"boiling point     :None"<<endl;
	cout<<"electronegativity :None"<<endl;}
	else if((element=="Uuo")||(element=="ununoctium")||(element=="118")||(element=="Ununoctium"))
	{
	cout<<"symbol            :Uuo"<<endl;
	cout<<"fullname          :Ununoctium"<<endl;
	cout<<"atomic number     :118"<<endl;
	cout<<"atomic mass       :294"<<endl;
	cout<<"state             :solid"<<endl;
	cout<<"melting point     :None"<<endl;
	cout<<"boiling point     :None"<<endl;
	cout<<"electronegativity :None"<<endl;
	}
	else 
	{
	
	cout<<" ELEMENT IS NOT FOUNT "<<endl;

	}
	getch();
	}
void info()
	{
	system("cls");
	system("color F");
	cout<<dark_yellow<<"\n	//------------------------Introduction---------------------------\\\\ \n\n";
	cout<<white<<"The develoment of Periodic Table is one of the most significant achievement \n\n on the history of Chemical Science. \n\n";
	cout<<dark_yellow<<"'Periodic Table provides a basic framework to study the periodic behavior of \n Physical and Chemical properties of elements as well as their compounds'\n \n \n";
	cout<<dark_yellow<<"\n	//------------------------History---------------------------------\\\\ \n\n";
	cout<<white<<"The early history of ideas leading up to the periodic classification of  \n elements is fascinating.\n\n"; 
	cout<<"Those who made memorable contributions in this field are AL-Razi,Dobereiner, \n Newland and Mendleev.\n\n";
	cout<<dark_yellow<<"Al-Razi's classification "<<white<<" was base on the 'physical and chemical propertied \n of substances'.\n\n";
	cout<<dark_yellow<<"Dobereiner, a German chemist "<<white<<"in 1829, arranged then known elements in groups \n called 'Triads',"; 
	cout<<"as each contained three elements with similar properties\n\n";
	cout<<dark_yellow<<"Newland,"<<white<<" who was an English chemist,in 1864, classified 62 elements with \n similar properties.\n\n";
	cout<<"He noticed that 'eight element had some properties in common with the \n first one'.";
	cout<<"This Principle was known as Law of Octaves.\n\n";
	cout<<dark_yellow<<"\n	//------------------Modren Periodic Table-------------------------\\\\ \n\n";
	cout<<white<<"In Modren Periodic Table all the elements are arranged in asceding order of \n\n ";
	cout<<"their atomic numbers. \n\n";
	cout<<"Essential feature Of Periodic Table \n\n";
	cout<<dark_yellow<<"Groups:"<<white<<" Elements with similar properties are placed in vertical columns called \n\n Groups.";
	cout<<"Their are 18 Groups in Modren Periodic Table \n\n";
	cout<<dark_yellow<<"Periods:"<<white<<" The Horizontal rows of Periodic table was known as Periods. \n\n";
	cout<<"There are 7 periods in Modren Periodic Table \n\n";
	cout<<"There are" <<dark_yellow<<" 118 elements"<<white<<" in Modren Periodic Table ";
	getch();
	}
void sgp()
{
	start:
	system("cls");
	char choice;
	cout<<endl;
	cout<<"Enter 'G' for Groups Or 'P' for Period \n ";
	cout<<endl;
	cin>>choice;
	switch(choice)
	{
	case 'G':
	case 'g':
		groups();
		break;
	case 'P':
	case 'p':
		periods();
		break;
	default:
		goto start;
	}

	_getch();
}
void groups()
{
	start:
	system("cls");
	string fpt[10][25]={{"\n"," ","  ","1 ","  2 "," 3","   4 ","  5 ","  6 ","  7 ","  8 ","  9 ","  10","  11","  12 ","  13 "," 14 "," 15 "," 16 "," 17 "," 18 "},
	{"\n\n","1","  ","H","\t","\t","\t","\t","   ","  ","  ","  ","  ","","  ","  ","\t","\t","\t ","     "," He"},
	{"\n\n","2","  ","Li"," BE","\t","\t","\t","\t","   ","  ","  ","  ",""," "," B  "," C  "," N  "," O  "," F  "," Ne"},
	{"\n\n","3","  ","Na"," Mg","\t","\t","\t","\t","  ","  ","  ","  ","","  "," Al "," Si "," P  "," S  "," Cl "," Ar"},
	{"\n\n","4","  ","K "," Ca","  Sc","  Ti","  V ","  Cr","  Mn","  Fe","  Co","  Ni","  Cu","  Zn  "," Ga "," Ge "," As "," Se "," Br "," Kr"},
	{"\n\n","5","  ","Rb"," Sr","  Y ","  Zr","  Nb","  Mo","  Tc","  Ru","  Rh","  Pd","  Ag","  Cd  "," In "," Sn "," Sb "," Te "," I  "," Xe"},
	{"\n\n","6","  ","Cs"," Ba","  * ","  Hf","  Ta","  W ","  Re","  Os","  Ir","  Pt","  Au","  Hg  "," Ti "," Pb "," Bi "," Po "," At "," Rn"},
	{"\n\n","7","  ","Fr"," Ra","  **","  Rf","  Db","  Sg","  Bh","  Hs","  Mt","  Ds","  Rg","  UUb "," Uut"," Uuq"," Uup"," Uuh"," Uus"," Uuo"},
	{"\n\n\n"," ","  ","   ","  ","  * ","  La","  Ce","  Pr","  Nd","  Pm","  Sm","  Eu","  Gd","  Tb  "," Dy "," Ho "," Er "," Tm "," Yb "," Lu "},
	{"\n\n"," ","  ","   ","  ","  **","  Ac","  Th","  Pa","  U ","  Np","  Pu","  Am","  Cm","  Bk  "," Cf "," Es "," Fm "," Md "," No "," Lr "}};

	int choice;
	cout<<"Enter the Number of Group";
	cout<<endl;
	cin>>choice;

	switch (choice)
	{
	case 1:
		for(int i=0;i<10;i++)
			for(int j=3;j<=3;j++)
				cout<<fpt[i][j];
		break;
	case 2:
		for(int i=0;i<10;i++)
			for(int j=4;j<=4;j++)
				cout<<fpt[i][j];
		break;
	case 3:
		for(int i=0;i<10;i++)
			for(int j=5;j<=5;j++)
				cout<<fpt[i][j];
		break;
	case 4:
		for(int i=0;i<10;i++)
			for(int j=6;j<=6;j++)
				cout<<fpt[i][j];
		break;
	case 5:
		for(int i=0;i<10;i++)
			for(int j=7;j<=7;j++)
				cout<<fpt[i][j];
		break;
	case 6:
		for(int i=0;i<10;i++)
			for(int j=8;j<=8;j++)
				cout<<fpt[i][j];
		break;
	case 7:
		for(int i=0;i<10;i++)
			for(int j=9;j<=9;j++)
				cout<<fpt[i][j];
		break;
	case 8:
		for(int i=0;i<10;i++)
			for(int j=10;j<=10;j++)
				cout<<fpt[i][j];
		break;
	case 9:
		for(int i=0;i<10;i++)
			for(int j=11;j<=11;j++)
				cout<<fpt[i][j];
		break;
	case 10:
		for(int i=0;i<10;i++)
			for(int j=12;j<=12;j++)
				cout<<fpt[i][j];
		break;
	case 11:
		for(int i=0;i<10;i++)
			for(int j=13;j<=13;j++)
				cout<<fpt[i][j];
		break;
	case 12:
		for(int i=0;i<10;i++)
			for(int j=14;j<=14;j++)
				cout<<fpt[i][j];
		break;
	case 13:
		for(int i=0;i<10;i++)
			for(int j=15;j<=15;j++)
				cout<<fpt[i][j];
		break;
	case 14:
		for(int i=0;i<10;i++)
			for(int j=16;j<=16;j++)
				cout<<fpt[i][j];
		break;
	case 15:
		for(int i=0;i<10;i++)
			for(int j=17;j<=17;j++)
				cout<<fpt[i][j];
		break;
	case 16:
		for(int i=0;i<10;i++)
			for(int j=18;j<=18;j++)
				cout<<fpt[i][j];
		break;
	case 17:
		for(int i=0;i<10;i++)
			for(int j=19;j<=19;j++)
				cout<<fpt[i][j];
		break;
	case 18:
		for(int i=0;i<10;i++)
			for(int j=20;j<=20;j++)
				cout<<fpt[i][j];
		break;
	default:
		goto start;
	}


	//_getch();
}
void periods()
{
	start:
	system("cls");
	string fpt[10][25]={{"\n"," ","  ","1 ","  2 "," 3","   4 ","  5 ","  6 ","  7 ","  8 ","  9 ","  10","  11","  12 ","  13 "," 14 "," 15 "," 16 "," 17 "," 18 "},
	{"\n\n","1","  ","H","\t","\t","\t","\t","   ","  ","  ","  ","  ","","  ","  ","\t","\t","\t ","     "," He"},
	{"\n\n","2","  ","Li"," BE","\t","\t","\t","\t","   ","  ","  ","  ",""," "," B  "," C  "," N  "," O  "," F  "," Ne"},
	{"\n\n","3","  ","Na"," Mg","\t","\t","\t","\t","  ","  ","  ","  ","","  "," Al "," Si "," P  "," S  "," Cl "," Ar"},
	{"\n\n","4","  ","K "," Ca","  Sc","  Ti","  V ","  Cr","  Mn","  Fe","  Co","  Ni","  Cu","  Zn  "," Ga "," Ge "," As "," Se "," Br "," Kr"},
	{"\n\n","5","  ","Rb"," Sr","  Y ","  Zr","  Nb","  Mo","  Tc","  Ru","  Rh","  Pd","  Ag","  Cd  "," In "," Sn "," Sb "," Te "," I  "," Xe"},
	{"\n\n","6","  ","Cs"," Ba","  * ","  Hf","  Ta","  W ","  Re","  Os","  Ir","  Pt","  Au","  Hg  "," Ti "," Pb "," Bi "," Po "," At "," Rn"},
	{"\n\n","7","  ","Fr"," Ra","  **","  Rf","  Db","  Sg","  Bh","  Hs","  Mt","  Ds","  Rg","  UUb "," Uut"," Uuq"," Uup"," Uuh"," Uus"," Uuo"},
	{"\n\n\n"," ","  ","   ","  ","  * ","  La","  Ce","  Pr","  Nd","  Pm","  Sm","  Eu","  Gd","  Tb  "," Dy "," Ho "," Er "," Tm "," Yb "," Lu "},
	{"\n\n"," ","  ","   ","  ","  **","  Ac","  Th","  Pa","  U ","  Np","  Pu","  Am","  Cm","  Bk  "," Cf "," Es "," Fm "," Md "," No "," Lr "}};

		int choice;
	cout<<"Enter the Number of Period";
	cout<<endl;
	cin>>choice;

	switch (choice)
	{
	case 1:
		for(int i=1;i<=1;i++)
		{
			for(int j=0;j<25;j++)
			{
				cout<<fpt[i][j];
			}
		}
		break;
	case 2:
		for(int i=2;i<=2;i++)
		{
			for(int j=0;j<25;j++)
			{
				cout<<fpt[i][j];
			}
		}
		break;
	case 3:
		for(int i=3;i<=3;i++)
		{
			for(int j=0;j<25;j++)
			{
				cout<<fpt[i][j];
			}
		}
		break;
	case 4:
		for(int i=4;i<=4;i++)
		{
			for(int j=0;j<25;j++)
			{
				cout<<fpt[i][j];
			}
		}
		break;
	case 5:
		for(int i=5;i<=5;i++)
		{
			for(int j=0;j<25;j++)
			{
				cout<<fpt[i][j];
			}
		}
		break;
	case 6:
		for(int i=6;i<9;i++)
		{
			for(int j=0;j<25;j++)
			{
				cout<<fpt[i][j];
			}
		}
		break;
	case 7:
		for(int i=7;i<10;i++)
		{
			for(int j=0;j<25;j++)
			{
				cout<<fpt[i][j];
			}
		}
		break;
	default:
		goto start;
	}
	//getch();
}
void types()
{
	system("cls");
	string fpt[10][25]={{"\n"," ","  ","1 ","  2 "," 3","   4 ","  5 ","  6 ","  7 ","  8 ","  9 ","  10","  11","  12 ","  13 "," 14 "," 15 "," 16 "," 17 "," 18 "},
	{"\n\n","1","  ","H","\t","\t","\t","\t","   ","  ","  ","  ","  ","","  ","  ","\t","\t","\t ","     "," He"},
	{"\n\n","2","  ","Li"," BE","\t","\t","\t","\t","   ","  ","  ","  ",""," "," B  "," C  "," N  "," O  "," F  "," Ne"},
	{"\n\n","3","  ","Na"," Mg","\t","\t","\t","\t","  ","  ","  ","  ","","  "," Al "," Si "," P  "," S  "," Cl "," Ar"},
	{"\n\n","4","  ","K "," Ca","  Sc","  Ti","  V ","  Cr","  Mn","  Fe","  Co","  Ni","  Cu","  Zn  "," Ga "," Ge "," As "," Se "," Br "," Kr"},
	{"\n\n","5","  ","Rb"," Sr","  Y ","  Zr","  Nb","  Mo","  Tc","  Ru","  Rh","  Pd","  Ag","  Cd  "," In "," Sn "," Sb "," Te "," I  "," Xe"},
	{"\n\n","6","  ","Cs"," Ba","  * ","  Hf","  Ta","  W ","  Re","  Os","  Ir","  Pt","  Au","  Hg  "," Ti "," Pb "," Bi "," Po "," At "," Rn"},
	{"\n\n","7","  ","Fr"," Ra","  **","  Rf","  Db","  Sg","  Bh","  Hs","  Mt","  Ds","  Rg","  UUb "," Uut"," Uuq"," Uup"," Uuh"," Uus"," Uuo"},
	{"\n\n\n"," ","  ","   ","  ","  * ","  La","  Ce","  Pr","  Nd","  Pm","  Sm","  Eu","  Gd","  Tb  "," Dy "," Ho "," Er "," Tm "," Yb "," Lu "},
	{"\n\n"," ","  ","   ","  ","  **","  Ac","  Th","  Pa","  U ","  Np","  Pu","  Am","  Cm","  Bk  "," Cf "," Es "," Fm "," Md "," No "," Lr "}};
	start:
	system("cls");
	char choice;
	cout<<"A ==> Alkali  Metals";
	cout<<"\nE ==> Alkaline Earth Metals";
	cout<<"\nT ==> Transition Metals (D-Block)";
	cout<<"\nN ==> Noble Gases";
	cout<<"\nL ==> Lanthanides";
	cout<<"\nC ==> Actanides";
	cout<<endl;
	cin>>choice;

	switch (choice)
	{
	case 'A':
	case 'a':
		cout<<endl;
	for(int i=1;i<10;i++)
	{
			for(int j=3;j<=3;j++)
			{
				cout<<fpt[i][j];
				cout<<endl;
			}
			cout<<endl;
	}
	break;
	case 'E':
	case 'e':
		for(int i=1;i<10;i++)
			for(int j=4;j<=4;j++)
				cout<<fpt[i][j];
		break;
	case 'T':
	case 't':
		for(int i=1;i<8;i++)
	{
			for(int j=5;j<=13;j++)
			{
				cout<<fpt[i][j];
				//cout<<endl;
			}
		cout<<endl;
	}
		break;
	case 'N':
	case 'n':
		for(int i=1;i<10;i++)
			for(int j=20;j<=20;j++)
				cout<<fpt[i][j];
		break;
	case 'L':
	case 'l':
	for(int i=8;i<=8;i++)
		for(int j=0;j<=25;j++)
			cout<<fpt[i][j];
		break;
	case 'C':
	case 'c':
	for(int i=9;i<=9;i++)
			for(int j=0;j<=25;j++)
				cout<<fpt[i][j];
		break;
	default:
		cout<<"InValid Selection ";
		cout<<"\n    Retry....!!!!!";
		goto start;
		//getch();
	}
	//_getch();
}
