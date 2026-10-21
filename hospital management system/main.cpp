
#include <iostream>
#include <string>
using namespace std;

// BASE CLASS
class Person {
protected:
    string name;
    int id;
    string contact;

public:
    Person() {
        name = "";
        id = 0;
        contact = "";
    }

    void getInfo() {
        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter ID: ";
        cin >> id;

        cout << "Enter Contact: ";
        cin >> contact;
    }

    virtual void display() {
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
        cout << "Contact: " << contact << endl;
    }
};

// PATIENT CLASS
class Patient : public Person {
private:
    int age;
    string disease;

public:
    Patient() {
        age = 0;
        disease = "";
    }

    void inputPatient() {
        getInfo();

        cout << "Enter Age: ";
        cin >> age;

        cout << "Enter Disease: ";
        cin >> disease;
    }

    void display() override {
        Person::display();
        cout << "Age: " << age << endl;
        cout << "Disease: " << disease << endl;
    }
};

// DOCTOR CLASS
class Doctor : public Person {
private:
    string specialization;
    double fee;

public:
    Doctor() {
        specialization = "";
        fee = 0;
    }

    void inputDoctor() {
        getInfo();

        cout << "Enter Specialization: ";
        cin >> specialization;

        cout << "Enter Consultation Fee: ";
        cin >> fee;
    }

    double getFee() {
        return fee;
    }

    void display() override {
        Person::display();
        cout << "Specialization: " << specialization << endl;
        cout << "Consultation Fee: " << fee << endl;
    }
};

// STAFF CLASS
class Staff : public Person {
private:
    string designation;
    double salary;

public:
    Staff() {
        designation = "";
        salary = 0;
    }

    void inputStaff() {
        getInfo();

        cout << "Enter Designation: ";
        cin >> designation;

        cout << "Enter Salary: ";
        cin >> salary;
    }

    void display() override {
        Person::display();
        cout << "Designation: " << designation << endl;
        cout << "Salary: " << salary << endl;
    }
};

// APPOINTMENT CLASS
class Appointment {
private:
    int patientID;
    int doctorID;
    string date;
    bool booked;

public:
    Appointment() {
        patientID = 0;
        doctorID = 0;
        date = "";
        booked = false;
    }

    void book(int pID, int dID) {
        patientID = pID;
        doctorID = dID;

        cout << "Enter Appointment Date (DD-MM-YYYY): ";
        cin >> date;

        booked = true;
        cout << "Appointment Booked Successfully!" << endl;
    }

    void display() {
        if (booked) {
            cout << "Patient ID: " << patientID << endl;
            cout << "Doctor ID: " << doctorID << endl;
            cout << "Appointment Date: " << date << endl;
            cout << "Status: Booked" << endl;
            cout << "--------------------------" << endl;
        }
    }

    bool isBooked() {
        return booked;
    }
};

// BILL CLASS
class Bill {
private:
    double consultationFee;
    double medicineCharges;
    double roomCharges;
    double total;

public:
    Bill() {
        consultationFee = 0;
        medicineCharges = 0;
        roomCharges = 0;
        total = 0;
    }

    void generateBill() {
        cout << "Enter Consultation Fee: ";
        cin >> consultationFee;

        cout << "Enter Medicine Charges: ";
        cin >> medicineCharges;

        cout << "Enter Room Charges: ";
        cin >> roomCharges;

        total = consultationFee + medicineCharges + roomCharges;

        cout << "\n======= HOSPITAL BILL =======" << endl;
        cout << "Consultation Fee: " << consultationFee << endl;
        cout << "Medicine Charges: " << medicineCharges << endl;
        cout << "Room Charges: " << roomCharges << endl;
        cout << "Total Bill: " << total << endl;
        cout << "=============================" << endl;
    }
};

// MAIN FUNCTION
int main() {
    Patient patients[50];
    Doctor doctors[20];
    Staff staffMembers[20];
    Appointment appointments[50];
    Bill bill;

    int patientCount = 0;
    int doctorCount = 0;
    int staffCount = 0;
    int appointmentCount = 0;
    int choice;

    while (true) {
        cout << "\n================================" << endl;
        cout << "   HOSPITAL MANAGEMENT SYSTEM" << endl;
        cout << "================================" << endl;
        cout << "1. Add Patient" << endl;
        cout << "2. Show Patients" << endl;
        cout << "3. Add Doctor" << endl;
        cout << "4. Show Doctors" << endl;
        cout << "5. Add Staff" << endl;
        cout << "6. Show Staff" << endl;
        cout << "7. Book Appointment" << endl;
        cout << "8. Show Appointments" << endl;
        cout << "9. Generate Bill" << endl;
        cout << "0. Exit" << endl;
        cout << "Enter Choice: ";
        cin >> choice;

        // EXIT
        if (choice == 0) {
            cout << "Hospital Management System Closed." << endl;
            break;
        }

        // ADD PATIENT
        else if (choice == 1) {
            if (patientCount < 50) {
                patients[patientCount].inputPatient();
                patientCount++;
                cout << "Patient Added Successfully!" << endl;
            } else {
                cout << "Patient Record Limit Reached!" << endl;
            }
        }

        // SHOW PATIENTS
        else if (choice == 2) {
            if (patientCount == 0) {
                cout << "No Patient Records Found." << endl;
            }

            for (int i = 0; i < patientCount; i++) {
                cout << "\n--- Patient "
                     << i + 1 << " ---" << endl;
                patients[i].display();
            }
        }

        // ADD DOCTOR
        else if (choice == 3) {
            if (doctorCount < 20) {
                doctors[doctorCount].inputDoctor();
                doctorCount++;
                cout << "Doctor Added Successfully!" << endl;
            } else {
                cout << "Doctor Record Limit Reached!" << endl;
            }
        }

        // SHOW DOCTORS
        else if (choice == 4) {
            if (doctorCount == 0) {
                cout << "No Doctor Records Found." << endl;
            }

            for (int i = 0; i < doctorCount; i++) {
                cout << "\n--- Doctor "
                     << i + 1 << " ---" << endl;
                doctors[i].display();
            }
        }

        // ADD STAFF
        else if (choice == 5) {
            if (staffCount < 20) {
                staffMembers[staffCount].inputStaff();
                staffCount++;
                cout << "Staff Added Successfully!" << endl;
            } else {
                cout << "Staff Record Limit Reached!" << endl;
            }
        }

        // SHOW STAFF
        else if (choice == 6) {
            if (staffCount == 0) {
                cout << "No Staff Records Found." << endl;
            }

            for (int i = 0; i < staffCount; i++) {
                cout << "\n--- Staff Member "
                     << i + 1 << " ---" << endl;
                staffMembers[i].display();
            }
        }

        // BOOK APPOINTMENT
        else if (choice == 7) {
            if (patientCount == 0 || doctorCount == 0) {
                cout << "Add at least one patient and "
                     << "one doctor first." << endl;
            } else if (appointmentCount >= 50) {
                cout << "Appointment Limit Reached!" << endl;
            } else {
                int p, d;

                cout << "Select Patient Number (1-"
                     << patientCount << "): ";
                cin >> p;

                cout << "Select Doctor Number (1-"
                     << doctorCount << "): ";
                cin >> d;

                if (p >= 1 && p <= patientCount &&
                    d >= 1 && d <= doctorCount) {
                    appointments[appointmentCount].book(
                        p, d
                    );
                    appointmentCount++;
                } else {
                    cout << "Invalid Patient or Doctor Number!"
                         << endl;
                }
            }
        }

        // SHOW APPOINTMENTS
        else if (choice == 8) {
            bool found = false;

            for (int i = 0; i < appointmentCount; i++) {
                if (appointments[i].isBooked()) {
                    appointments[i].display();
                    found = true;
                }
            }

            if (!found) {
                cout << "No Appointments Found." << endl;
            }
        }

        // GENERATE BILL
        else if (choice == 9) {
            bill.generateBill();
        }

        // INVALID CHOICE
        else {
            cout << "Invalid Choice! Try Again." << endl;
        }
    }

    return 0;
}
  