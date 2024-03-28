#include<iostream>

int main(){
  // Declareing pointer and references
  double double_value{102.34};
  double& ref_double_value{double_value};
  double* p_double_value{&double_value};

  std::cout<<"double_Value : "<<double_value<<std::endl;
  std::cout<<"Ref_double_value : "<<ref_double_value<<std::endl;
  std::cout<<"p_double_value : "<<p_double_value<<std::endl;
  std::cout<<"*p_double_value : "<<*p_double_value<<std::endl;

  std::cout<<"*******************************************************"<<std::endl<<std::endl;

  *p_double_value = 11.23;

  std::cout<<"double_Value : "<<double_value<<std::endl;
  std::cout<<"Ref_double_value : "<<ref_double_value<<std::endl;
  std::cout<<"p_double_value : "<<p_double_value<<std::endl;
  std::cout<<"*p_double_value : "<<*p_double_value<<std::endl;

  std::cout<<"*******************************************************"<<std::endl<<std::endl;

  ref_double_value = 23.76;

  std::cout<<"double_Value : "<<double_value<<std::endl;
  std::cout<<"Ref_double_value : "<<ref_double_value<<std::endl;
  std::cout<<"p_double_value : "<<p_double_value<<std::endl;
  std::cout<<"*p_double_value : "<<*p_double_value<<std::endl;

  std::cout<<"*******************************************************"<<std::endl<<std::endl;

  // making the reference reference something else
  
  double some_other_double {78.54};
  ref_double_value = some_other_double;

  std::cout<<"double_Value : "<<double_value<<std::endl;
  std::cout<<"Ref_double_value : "<<ref_double_value<<std::endl;
  std::cout<<"p_double_value : "<<p_double_value<<std::endl;
  std::cout<<"*p_double_value : "<<*p_double_value<<std::endl;

  std::cout<<"*******************************************************"<<std::endl<<std::endl;

  // make the pointer point to something else

  p_double_value = &some_other_double;

  std::cout<<"double_Value : "<<double_value<<std::endl;
  std::cout<<"Ref_double_value : "<<ref_double_value<<std::endl;
  std::cout<<"&double_value : "<<&double_value<<std::endl;
  std::cout<<"&Ref_double_value : "<<&ref_double_value<<std::endl;
  std::cout<<"p_double_value : "<<p_double_value<<std::endl;
  std::cout<<"*p_double_value : "<<*p_double_value<<std::endl;


  std::cout<<"*******************************************************"<<std::endl<<std::endl;

  *p_double_value = 555.55;
  std::cout<<"double_Value : "<<double_value<<std::endl;
  std::cout<<"Ref_double_value : "<<ref_double_value<<std::endl;
  std::cout<<"&double_value : "<<&double_value<<std::endl;    // the original pointer is living here
  std::cout<<"&Ref_double_value : "<<&ref_double_value<<std::endl;
  std::cout<<"p_double_value : "<<p_double_value<<std::endl;  // but the pointer is pointing something else
  std::cout<<"*p_double_value : "<<*p_double_value<<std::endl;


  return 0;
}