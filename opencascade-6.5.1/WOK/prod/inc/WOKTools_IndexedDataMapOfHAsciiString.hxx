// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _WOKTools_IndexedDataMapOfHAsciiString_HeaderFile
#define _WOKTools_IndexedDataMapOfHAsciiString_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _WOKTools_BasicMap_HeaderFile
#include <WOKTools_BasicMap.hxx>
#endif
#ifndef _Handle_TCollection_HAsciiString_HeaderFile
#include <Handle_TCollection_HAsciiString.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
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
class TCollection_HAsciiString;
class TCollection_AsciiString;
class WOKTools_HAsciiStringHasher;



class WOKTools_IndexedDataMapOfHAsciiString  : public WOKTools_BasicMap {
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

  
  Standard_EXPORT   WOKTools_IndexedDataMapOfHAsciiString(const Standard_Integer NbBuckets = 1);
  
  Standard_EXPORT     WOKTools_IndexedDataMapOfHAsciiString& Assign(const WOKTools_IndexedDataMapOfHAsciiString& Other) ;
    WOKTools_IndexedDataMapOfHAsciiString& operator =(const WOKTools_IndexedDataMapOfHAsciiString& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT     void ReSize(const Standard_Integer NbBuckets) ;
  
  Standard_EXPORT     void Clear() ;
~WOKTools_IndexedDataMapOfHAsciiString()
{
  Clear();
}
  
  Standard_EXPORT     Standard_Integer Add(const Handle(TCollection_HAsciiString)& K,const TCollection_AsciiString& I) ;
  
  Standard_EXPORT     void Substitute(const Standard_Integer I,const Handle(TCollection_HAsciiString)& K,const TCollection_AsciiString& T) ;
  
  Standard_EXPORT     void RemoveLast() ;
  
  Standard_EXPORT     Standard_Boolean Contains(const Handle(TCollection_HAsciiString)& K) const;
  
  Standard_EXPORT    const Handle_TCollection_HAsciiString& FindKey(const Standard_Integer I) const;
  
  Standard_EXPORT    const TCollection_AsciiString& FindFromIndex(const Standard_Integer I) const;
   const TCollection_AsciiString& operator ()(const Standard_Integer I) const
{
  return FindFromIndex(I);
}
  
  Standard_EXPORT     TCollection_AsciiString& ChangeFromIndex(const Standard_Integer I) ;
    TCollection_AsciiString& operator ()(const Standard_Integer I) 
{
  return ChangeFromIndex(I);
}
  
  Standard_EXPORT     Standard_Integer FindIndex(const Handle(TCollection_HAsciiString)& K) const;
  
  Standard_EXPORT    const TCollection_AsciiString& FindFromKey(const Handle(TCollection_HAsciiString)& K) const;
  
  Standard_EXPORT     TCollection_AsciiString& ChangeFromKey(const Handle(TCollection_HAsciiString)& K) ;





protected:





private:

  
  Standard_EXPORT   WOKTools_IndexedDataMapOfHAsciiString(const WOKTools_IndexedDataMapOfHAsciiString& Other);
  
  Standard_EXPORT     Standard_Address FindNodeFromIndex(const Standard_Integer I) const;




};





// other Inline functions and methods (like "C++: function call" methods)


#endif