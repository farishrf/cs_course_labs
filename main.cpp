#include <iostream>
using namespace std;

/*
Disclaimer:
    This BMI Calculator code is provided for educational purposes only and is not intended for real-world applications.
    It is part of an ongoing assignment in a Computer Science fundamental course for C++ at the Imam Abdulrahman Bin Faisal University (IAU).
    The code may not adhere to best practices, may lack robust error handling, and should not be used in production environments.
    This code is a student exercise.
    References:
    World Health Organization's (WHO) recommended body weight based on BMI values for adults. It is used for both men and women, age 20 or older.
*/

class BmiCalculator {
public:
    double height,weight,bmi;
    void setHeight(double heightEntered) {
        this->height = heightEntered;
    }
    void setWeight(double weightEntered) {
        this->weight = weightEntered;
    }
    double getBmi() {
        double heightCalc = this->height/100; // converting to meters
        this->bmi = this->weight / (heightCalc * heightCalc);
        return this->bmi;
    }
    string getBmiType() const {
        // Applying arrays, simple yes! but effective
        // We could have used Enums too but keeping it simple for now.
        string categories[] = {
                "Severe Thinness",
                "Moderate Thinness",
                "Mild Thinness",
                "Normal",
                "Overweight",
                "Obese Class 1",
                "Obese Class 2",
                "Obese Class 3"
        };
        if (this->bmi < 16) return categories[0];
        if (this->bmi >= 16 && this->bmi < 17) return categories[1];
        if (this->bmi >= 17 && this->bmi < 18.5) return categories[2];
        if (this->bmi >= 18.5 && this->bmi < 25) return categories[3];
        if (this->bmi >= 25 && this->bmi < 30) return categories[4];
        if (this->bmi >= 30 && this->bmi < 35) return categories[5];
        if (this->bmi >= 35 && this->bmi <= 40) return categories[6];
        if (this->bmi > 40) return categories[7];

        return "Unknown";
    }
};

void helloMessage();
bool getUserInput(BmiCalculator& bmiInstance);

int main() {
    int choice;
    bool continueProgram = true;

    do {
        helloMessage();
        cin >> choice;

        if (choice == 1) {
            BmiCalculator bmiInstance{};

            if(!getUserInput(bmiInstance)) {
                continueProgram = false;
            } else {
                double bmi = bmiInstance.getBmi();
                cout << "Your BMI: " << bmi << endl;
                cout << bmiInstance.getBmiType() << endl;
                continueProgram = false;
            }
        } else if (choice != 0) {
            cout << "You entered a wrong choice: (" << choice << "): \n Please choose between 1 or 0 \n";
        }

    } while (choice != 0 && continueProgram);

    cout << "Have a nice day! \n";
    return 0;
}

bool getUserInput(BmiCalculator& bmiInstance) {
    int age;
    double height, weight;

    cout << "Enter your age (from 20 and older) \n";
    cin >> age;

    if(age < 20) {
        cout << "We cannot provide you with accurate BMI calculations for teenagers, sorry! \n";
        return false;
    }
    cout << "Enter your height in cm: \n";
    cin >> height;

    cout << "Enter your weight in kg: \n";
    cin >> weight;

    if (height <= 0 || weight <= 0) {
        cout << "Error: Invalid height or weight\n";
        return false;
    }

    bmiInstance.setHeight(height);
    bmiInstance.setWeight(weight);
    return true;

}

void helloMessage() {
    cout << "************************** \n";
    cout << "* Welcome to BMI Calculator *\n";
    cout << "* Enter 1 to begin *\n";
    cout << "* Enter 0 to exit *\n";
    cout << "************************** \n";
}
