#include <iostream>
using namespace std;

class ProgrammingLanguage {
public:
    string name;
    ProgrammingLanguage(string langName) : name(langName) {}
    virtual void info() {
        cout << "���� �������������: " << name << endl;
    }
};

class SystemProgramming : public ProgrammingLanguage {
public:
    SystemProgramming() : ProgrammingLanguage("�������� �������������") {}
    void info() override {
        cout << "��������������� ��� ��������� ����������� ������, ��������, ����������.\n";
    }
};

class WebDevelopment : public ProgrammingLanguage {
public:
    WebDevelopment() : ProgrammingLanguage("���-��������") {}
    void info() override {
        cout << "������ ��������� ��������, ��������� ����������, REST API.\n";
    }
};

class MobileDevelopment : public ProgrammingLanguage {
public:
    MobileDevelopment() : ProgrammingLanguage("������� ��������") {}
    void info() override {
        cout << "����������� �� �������� ������� ��� iOS �� Android.\n";
    }
};

class GameDevelopment : public ProgrammingLanguage {
public:
    GameDevelopment() : ProgrammingLanguage("�������� ����") {}
    void info() override {
        cout << "��������������� ��� ��������� �������, �������������� ������� ������.\n";
    }
};

class DataScience : public ProgrammingLanguage {
public:
    DataScience() : ProgrammingLanguage("����� ��� ���") {}
    void info() override {
        cout << "����� �����, ������� �������� �� ������� ��������.\n";
    }
};

class Cpp : public SystemProgramming {
public:
    Cpp() { name = "C++"; }
    void info() override {
        cout << "C++: ������� ���� ��� ������������������ �������, ��������������� � ���������� ������������ �� �����.\n";
    }
};

class Python : public DataScience {
public:
    Python() { name = "Python"; }
    void info() override {
        cout << "Python: ��������� ���� � Data Science, �������� �������� �� �������������.\n";
    }
};

class JavaScript : public WebDevelopment {
public:
    JavaScript() { name = "JavaScript"; }
    void info() override {
        cout << "JavaScript: ������� ���� ��� ��������-�������� �� �������������� �� ���������.\n";
    }
};

class Swift : public MobileDevelopment {
public:
    Swift() { name = "Swift"; }
    void info() override {
        cout << "Swift: ������� ���� ������������� ��� �������� ������� �� iOS.\n";
    }
};

class UnityCSharp : public GameDevelopment {
public:
    UnityCSharp() { name = "C# (Unity)"; }
    void info() override {
        cout << "C# (Unity): ��������������� � �������� ���� � ���������� Unity.\n";
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