#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"


Base* generate() {
  int choice = std::rand() % 3;
  switch (choice) {
    case 0: return new A();
    case 1: return new B();
    case 2: return new C();
  }
  return nullptr;
}

void identify(Base* p) {
  if (dynamic_cast<A*>(p)) {
    std::cout << "pointer A" << std::endl;
  } else if (dynamic_cast<B*>(p)) {
    std::cout << "pointer B" << std::endl;
  } else if (dynamic_cast<C*>(p)) {
    std::cout << "pointer C" << std::endl;
  }
}

void identify(Base& p) {
  try {
    A& a = dynamic_cast<A&>(p);
    (void)a;
    std::cout << "references A" << std::endl;
  } catch (std::bad_cast& e) {
    try {
      B& b = dynamic_cast<B&>(p);
      (void)b;
      std::cout << "references B" << std::endl;
    } catch (std::bad_cast& e) {
      try {
        C& c = dynamic_cast<C&>(p);
        (void)c;
        std::cout << "references C" << std::endl;
      } catch (std::bad_cast& e) {
        std::cout << "references Unknown" << std::endl;
      }
    }
  }
}

int main() {
  std::srand(std::time(0));
  for (int i = 0; i < 5; ++i) {
    Base* p = generate();
    identify(p);
    identify(*p);
    delete p;
  }
  return 0;
}