// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Extrema_HArray1OfPOnCurv_HeaderFile
#define _Extrema_HArray1OfPOnCurv_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_Extrema_HArray1OfPOnCurv_HeaderFile
#include <Handle_Extrema_HArray1OfPOnCurv.hxx>
#endif

#ifndef _Extrema_Array1OfPOnCurv_HeaderFile
#include <Extrema_Array1OfPOnCurv.hxx>
#endif
#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class Standard_RangeError;
class Standard_DimensionMismatch;
class Standard_OutOfRange;
class Standard_OutOfMemory;
class Extrema_POnCurv;
class Extrema_Array1OfPOnCurv;



class Extrema_HArray1OfPOnCurv : public MMgt_TShared {

public:

  
  Standard_EXPORT   Extrema_HArray1OfPOnCurv(const Standard_Integer Low,const Standard_Integer Up);
  
  Standard_EXPORT   Extrema_HArray1OfPOnCurv(const Standard_Integer Low,const Standard_Integer Up,const Extrema_POnCurv& V);
  
  Standard_EXPORT     void Init(const Extrema_POnCurv& V) ;
  
        Standard_Integer Length() const;
  
        Standard_Integer Lower() const;
  
        Standard_Integer Upper() const;
  
        void SetValue(const Standard_Integer Index,const Extrema_POnCurv& Value) ;
  
       const Extrema_POnCurv& Value(const Standard_Integer Index) const;
  
        Extrema_POnCurv& ChangeValue(const Standard_Integer Index) ;
  
       const Extrema_Array1OfPOnCurv& Array1() const;
  
        Extrema_Array1OfPOnCurv& ChangeArray1() ;




  DEFINE_STANDARD_RTTI(Extrema_HArray1OfPOnCurv)

protected:




private: 


Extrema_Array1OfPOnCurv myArray;


};

#define ItemHArray1 Extrema_POnCurv
#define ItemHArray1_hxx <Extrema_POnCurv.hxx>
#define TheArray1 Extrema_Array1OfPOnCurv
#define TheArray1_hxx <Extrema_Array1OfPOnCurv.hxx>
#define TCollection_HArray1 Extrema_HArray1OfPOnCurv
#define TCollection_HArray1_hxx <Extrema_HArray1OfPOnCurv.hxx>
#define Handle_TCollection_HArray1 Handle_Extrema_HArray1OfPOnCurv
#define TCollection_HArray1_Type_() Extrema_HArray1OfPOnCurv_Type_()

#include <TCollection_HArray1.lxx>

#undef ItemHArray1
#undef ItemHArray1_hxx
#undef TheArray1
#undef TheArray1_hxx
#undef TCollection_HArray1
#undef TCollection_HArray1_hxx
#undef Handle_TCollection_HArray1
#undef TCollection_HArray1_Type_


// other Inline functions and methods (like "C++: function call" methods)


#endif