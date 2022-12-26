import datetime


def calculate_age(year):
    return datetime.date.today().year - year


class Person:

    def __init__(self, name, gender, age):
        self.name = name
        self.age = age
        self.gender = gender

    def get_name(self):
        return self.name

    def set_name(self, new_name):
        self.name = new_name

    def describe(self):
        if self.gender == 'male':
            print(f"hi name is {self.name} and his age is {self.age}")
        elif self.gender == 'female':
            print(f"her name is {self.name} and her age is {self.age}")

    def is_old(self, num):
        if self.age <= num:
            print(f'{self.name} is not old')


x = input("enter name")
y = input("male or female")
c = int(input("enter birth date"))
z = calculate_age(c)
person = Person(x, y, z)
person.is_old(50)
person.describe()
