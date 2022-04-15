#include<iostream>
#include<string>

struct sinh_vien
{
  std::string name;
  int age;
  std::string address;
};
typedef sinh_vien sv;

void nhap(sv &s) {
  std::cout << "Nhap ten: ";
  std::cin >> s.name;
  std::cout << "Nhap tuoi: ";
  std::cin >> s.age;
  std::cout << "Nhap dia chi: ";
  std::cin >> s.address;
}

void xuat(sv s) {
  std::cout << "\nTen: " << s.name;
  std::cout << "\nTuoi: " << s.age;
  std::cout << "\nDia chi: " << s.address;
}

int main() {
  sv s;
  nhap(s);
  xuat(s);
}
