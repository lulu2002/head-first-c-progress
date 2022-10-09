#include "stdio.h"

struct exercise {
    const char *description;
    float hours;
};

struct meal {
    const char *ingredients;
    float weightLbs;
};

struct preferences {
    struct meal meal;
    struct exercise exercise;
};

struct fish {
    const char *name;
    const char *species;
    int teeth;
    int age;
    struct preferences care;
};

void label(struct fish fish) {
    struct preferences preferences = fish.care;

    printf("Name: %s\n", fish.name);
    printf("Species: %s\n", fish.species);
    printf("%i years old, %i teeth\n", fish.age, fish.teeth);
    printf("Feed with %s lbs of %2.2f and allow to %s for %2.2f hours",
           preferences.meal.ingredients,
           preferences.meal.weightLbs,
           preferences.exercise.description,
           preferences.exercise.hours);
}

int main() {
    struct fish snappy = {
            "Snappy",
            "Piranha",
            69,
            4,
            {
                    {"Meat", 0.2},
                    {"swim in the jacuzzi", 7.5}
            }
    };

    label(snappy);
}