#include<iostream>
#include<string>

struct sinh_vien
{
  std::string name;
  int age;
};
typedef sinh_vien sv;

void nhap(sv &s) {
  std::cout << "Nhap ten: ";
  std::cin >> s.name;
  std::cout << "Nhap tuoi: ";
  std::cin >> s.age;
}

void xuat(sv s) {
  std::cout << "\nTen: " << s.name;
  std::cout << "\nTuoi: " << s.age;
}

int main() {
  sv s;
  nhap(s);
  xuat(s);
}
