#include <iostream>
using namespace std;

int main() {
    int temperature;

    cout << "Enter the temperature in Celsius: ";
    cin >> temperature;

    if (temperature >= 40) {
        cout << "It's extremely hot! Stay indoors because it could be dangerous to your health.";
    }
    else if (temperature >= 30 && temperature <= 39) {
        cout << "It's hot outside. Drink plenty of water to stay hydrated.";
    }
    else if (temperature >= 20 && temperature <= 29) {
        cout << "The weather is pleasant and suitable for outdoor activities.";
    }
    else {  // temperature < 20
        cout << "It's cool outside. Wear warm clothes to stay comfortable.";
    }

    return 0;
}

