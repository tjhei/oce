// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BOPTools_IndexedDataMapOfIntegerState_HeaderFile
#define _BOPTools_IndexedDataMapOfIntegerState_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TCollection_BasicMap_HeaderFile
#include <TCollection_BasicMap.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _BooleanOperations_StateOfShape_HeaderFile
#include <BooleanOperations_StateOfShape.hxx>
#endif
#ifndef _Handle_BOPTools_IndexedDataMapNodeOfIndexedDataMapOfIntegerState_HeaderFile
#include <Handle_BOPTools_IndexedDataMapNodeOfIndexedDataMapOfIntegerState.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_Address_HeaderFile
#include <Standard_Address.hxx>
#endif
class Standard_DomainError;
class Standard_OutOfRange;
class Standard_NoSuchObject;
class TColStd_MapIntegerHasher;
class BOPTools_IndexedDataMapNodeOfIndexedDataMapOfIntegerState;



class BOPTools_IndexedDataMapOfIntegerState  : public TCollection_BasicMap {
public:

  void* operator new(size_t,void* anAddress) 
  {
    return anAddress;
  }
  void* operator new(size_t size) 
  {
    return Standard::Allocate(size); 
  }
  void  operator delete(void *anAddress) 
  {
    if (anAddress) Standard::Free((Standard_Address&)anAddress); 
  }

  
  Standard_EXPORT   BOPTools_IndexedDataMapOfIntegerState(const Standard_Integer NbBuckets = 1);
  
  Standard_EXPORT     BOPTools_IndexedDataMapOfIntegerState& Assign(const BOPTools_IndexedDataMapOfIntegerState& Other) ;
    BOPTools_IndexedDataMapOfIntegerState& operator =(const BOPTools_IndexedDataMapOfIntegerState& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT     void ReSize(const Standard_Integer NbBuckets) ;
  
  Standard_EXPORT     void Clear() ;
~BOPTools_IndexedDataMapOfIntegerState()
{
  Clear();
}
  
  Standard_EXPORT     Standard_Integer Add(const Standard_Integer& K,const BooleanOperations_StateOfShape& I) ;
  
  Standard_EXPORT     void Substitute(const Standard_Integer I,const Standard_Integer& K,const BooleanOperations_StateOfShape& T) ;
  
  Standard_EXPORT     void RemoveLast() ;
  
  Standard_EXPORT     Standard_Boolean Contains(const Standard_Integer& K) const;
  
  Standard_EXPORT    const Standard_Integer& FindKey(const Standard_Integer I) const;
  
  Standard_EXPORT    const BooleanOperations_StateOfShape& FindFromIndex(const Standard_Integer I) const;
   const BooleanOperations_StateOfShape& operator ()(const Standard_Integer I) const
{
  return FindFromIndex(I);
}
  
  Standard_EXPORT     BooleanOperations_StateOfShape& ChangeFromIndex(const Standard_Integer I) ;
    BooleanOperations_StateOfShape& operator ()(const Standard_Integer I) 
{
  return ChangeFromIndex(I);
}
  
  Standard_EXPORT     Standard_Integer FindIndex(const Standard_Integer& K) const;
  
  Standard_EXPORT    const BooleanOperations_StateOfShape& FindFromKey(const Standard_Integer& K) const;
  
  Standard_EXPORT     BooleanOperations_StateOfShape& ChangeFromKey(const Standard_Integer& K) ;
  
  Standard_EXPORT     Standard_Address FindFromKey1(const Standard_Integer& K) const;
  
  Standard_EXPORT     Standard_Address ChangeFromKey1(const Standard_Integer& K) ;





protected:





private:

  
  Standard_EXPORT   BOPTools_IndexedDataMapOfIntegerState(const BOPTools_IndexedDataMapOfIntegerState& Other);




};





// other Inline functions and methods (like "C++: function call" methods)


#endif