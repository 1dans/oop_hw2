#include <iostream>
using namespace std;

class ProgrammingLanguage {
public:
    string name;
    ProgrammingLanguage(string langName) : name(langName) {}
    virtual void info() {
        cout << "Мова програмування: " << name << endl;
    }
};

class SystemProgramming : public ProgrammingLanguage {
public:
    SystemProgramming() : ProgrammingLanguage("Системне програмування") {}
    void info() override {
        cout << "Використовується для створення операційних систем, драйверів, компіляторів.\n";
    }
};

class WebDevelopment : public ProgrammingLanguage {
public:
    WebDevelopment() : ProgrammingLanguage("Веб-розробка") {}
    void info() override {
        cout << "Включає створення вебсайтів, серверних застосунків, REST API.\n";
    }
};

class MobileDevelopment : public ProgrammingLanguage {
public:
    MobileDevelopment() : ProgrammingLanguage("Мобільна розробка") {}
    void info() override {
        cout << "Зосереджена на розробці додатків для iOS та Android.\n";
    }
};

class GameDevelopment : public ProgrammingLanguage {
public:
    GameDevelopment() : ProgrammingLanguage("Розробка ігор") {}
    void info() override {
        cout << "Використовується для створення відеоігор, використовуючи графічні движки.\n";
    }
};

class DataScience : public ProgrammingLanguage {
public:
    DataScience() : ProgrammingLanguage("Наука про дані") {}
    void info() override {
        cout << "Аналіз даних, машинне навчання та штучний інтелект.\n";
    }
};

class Cpp : public SystemProgramming {
public:
    Cpp() { name = "C++"; }
    void info() override {
        cout << "C++: Потужна мова для високопродуктивних програм, використовується в системному програмуванні та іграх.\n";
    }
};

class Python : public DataScience {
public:
    Python() { name = "Python"; }
    void info() override {
        cout << "Python: Популярна мова у Data Science, штучному інтелекті та автоматизації.\n";
    }
};

class JavaScript : public WebDevelopment {
public:
    JavaScript() { name = "JavaScript"; }
    void info() override {
        cout << "JavaScript: Основна мова для фронтенд-розробки та інтерактивності на вебсайтах.\n";
    }
};

class Swift : public MobileDevelopment {
public:
    Swift() { name = "Swift"; }
    void info() override {
        cout << "Swift: Основна мова програмування для розробки додатків на iOS.\n";
    }
};

class UnityCSharp : public GameDevelopment {
public:
    UnityCSharp() { name = "C# (Unity)"; }
    void info() override {
        cout << "C# (Unity): Використовується у розробці ігор в середовищі Unity.\n";
    }
};

int main() {
	system("chcp 1251 > null");
    Cpp cpp;
    Python python;
    JavaScript js;
    Swift swift;
    UnityCSharp unityCSharp;

    cpp.info();
    python.info();
    js.info();
    swift.info();
    unityCSharp.info();
    return 0;
}