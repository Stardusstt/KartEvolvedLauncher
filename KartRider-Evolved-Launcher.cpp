#include <iostream>
#include <Windows.h>
using namespace std ;
int main () {
	int choice ; 
	
	cout << endl << " v1.0	By stardusstt" << endl << endl  ;
	system("pause");
	cout << endl ;
	cout << " Start PPServer " << endl << endl ;
	system("start PPServer.exe");
	Sleep(2000);
	cout << " Start KartRider Evolved " << endl << endl ;
	system("start kartrider.exe");
	system("pause");
	system("cls");
	
	while(1){
		
		
		cout << endl ;
		cout << " 1 (Restart All)  2 (Restart Kartrider)  3 (Close)  4 (Exit) : " ;
		cin >> choice ;
		cout << endl ;
			
		if ( choice == 1 ){
		    cout << " Start PPServer " << endl << endl ;
			system("start PPServer.exe");
			Sleep(2000);
		    cout << " Start KartRider Evolved " << endl << endl ;
			system("start kartrider.exe");
			system("pause");
			system("cls");
			continue ;
			
		}
		
		if ( choice == 2 ){
		    system("taskkill /f /im AdBalloonExt.exe");
			cout << endl << " Start KartRider Evolved " << endl << endl ;
			system("start kartrider.exe");
			system("pause");
			system("cls");
			continue ;
			
		}
		
		if ( choice == 3 ){
		    cout << endl << " Close KartRider Evolved " << endl  ;
			system("taskkill /f /im kartrider.exe");
			Sleep(500);
			cout << endl << " Close PPServer " << endl  ;
			system("taskkill /f /im PPServer.exe");
			Sleep(500);
			cout << endl << " Close AdBalloonExt " << endl   ;
			system("taskkill /f /im AdBalloonExt.exe");
			cout << endl ;
			system("pause");
			system("cls");
			continue ;
			
		}
		
		if ( choice == 4 ){
		    break ;
		    
		}
		    
	}
	
	
	
	return 0 ;
} 
