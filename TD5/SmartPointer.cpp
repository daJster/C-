#include "SmartPointer.hpp"


// Fonctions implémentés dans le .hpp
// namespace enseirb{
  
//   void SmartPointer<DataType>::releasePointer(){
//     *counter = *counter-1;
//     if (*counter==0)
//       {
// 	delete counter;
// 	delete data;
//       }
//     counter=NULL;
//   }
  
//   SmartPointer<DataType>::SmartPointer(DataType *data):data(data),counter(new int(1)){}
  
//   SmartPointer<DataType>::SmartPointer(const SmartPointer<DataType> &p):data(p.data),counter(p.counter){
//     *counter=*counter+1;
//   }
  
//   SmartPointer<DataType>::~SmartPointer(){releasePointer();}
  
//   DataType *SmartPointer<DataType>::operator->(){return data;}
  
//   const DataType *SmartPointer<DataType>::operator->()const {return data;}
  
//   DataType &SmartPointer<DataType>::operator*(){return *data;}
//   template <class DataType>
//   const DataType &SmartPointer<DataType>::operator*()const{return *data;}
  
//   const SmartPointer<DataType> &SmartPointer<DataType>::operator=(const SmartPointer &p){
//     if ((this==&p)||(this->data==p.data)) return *this;
//     releasePointer();
//     counter=p.counter;
//     *counter=*counter+1;
//     data=p.data;
//     return *this;
//   }
  
//   const SmartPointer<DataType> &SmartPointer<DataType>::operator=(DataType *data){
//     releasePointer();
//     counter=new int(1);
//     this->data=data;
//     return *this;
//   }

//   SmartPointer<DataType>::operator DataType *(){return data;}
//   SmartPointer<DataType>::operator const DataType *() const {return data;}    
  
// }
