set(polymorphism-src
  Animal.cpp
  Cat.cpp
  Dog.cpp
  Horse.cpp
  LinkedList.cpp
  Pig.cpp
  main.cpp
)

set(polymorphism-header
  Animal.h
  Cat.h
  Dog.h
  Horse.h
  LinkedList.h
  Pig.h
)

add_executable(polymorphism
  ${polymorphism-src}
  ${polymorphism-header}
)
