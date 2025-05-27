#include "../include/Base.hpp"

#include "../include/A.hpp"
#include "../include/B.hpp"
#include "../include/C.hpp"

// orthodox cannonical form
Base::Base() {}

Base::Base(const Base &src) { (void)src; }

Base &Base::operator=(const Base &src) {
  (void)src;
  return *this;
}

Base::~Base() {}

// functions
static Base *abase() { return new A(); }

static Base *bbase() { return new B(); }

static Base *cbase() { return new C(); }

Base *Base::generate() {
  int r = rand();
  int tour = 0;

  for (int i = 0; i < r; i++) {
    tour++;
    if (tour >= 3) tour = 0;
  }

  Base *(*construtor[3])() = {
      abase,
      bbase,
      cbase,
  };

  return construtor[tour]();
}

void Base::identify(Base *p) {
  if (dynamic_cast<A *>(p))
    std::cout << "type A" << std::endl;
  else if (dynamic_cast<B *>(p))
    std::cout << "type B" << std::endl;
  else if (dynamic_cast<C *>(p))
    std::cout << "type C" << std::endl;
}

void Base::identify(Base &p) {
  if (dynamic_cast<A *>(&p))
    std::cout << "type A" << std::endl;
  else if (dynamic_cast<B *>(&p))
    std::cout << "type B" << std::endl;
  else if (dynamic_cast<C *>(&p))
    std::cout << "type C" << std::endl;
}