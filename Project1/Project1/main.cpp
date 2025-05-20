#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

class User {
	string userName, passWord, fullName;
	int userID;

	virtual void showMenu();
	virtual void login();
};

class Patient : User {
private:
	string phoneNumber;
	vector<Appointment> appointments;

	void checkIn();
	void viewAppointments();


};

class Admin : User {
	vector<Patient*> patientList;
	vector<Appointment> schedule;

	void viewAllAppointments();
	void endAppointment();
	void editAppointment();
	void registerPatient();
};

class Appointment {
	int appointmentID, patientID;
	string date, time;
	bool checkedIn;

	void markCheckedIn();
	void displayDetails();
};