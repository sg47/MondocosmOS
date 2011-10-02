// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _MS_Pointer_HeaderFile
#define _MS_Pointer_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_MS_Pointer_HeaderFile
#include <Handle_MS_Pointer.hxx>
#endif

#ifndef _Handle_TCollection_HAsciiString_HeaderFile
#include <Handle_TCollection_HAsciiString.hxx>
#endif
#ifndef _MS_NatType_HeaderFile
#include <MS_NatType.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class TCollection_HAsciiString;


//! Description of the "Pointer" type (Method or Class pointers). <br>
class MS_Pointer : public MS_NatType {

public:

  
  Standard_EXPORT   MS_Pointer(const Handle(TCollection_HAsciiString)& aName,const Handle(TCollection_HAsciiString)& aPackage,const Handle(TCollection_HAsciiString)& aContainer,const Standard_Boolean aPrivate);
  //! Sets the type of the pointer. <br>
  Standard_EXPORT     void Type(const Handle(TCollection_HAsciiString)& aType,const Handle(TCollection_HAsciiString)& aPackage) ;
  //! Returns the type of the pointer. <br>
  Standard_EXPORT    const Handle_TCollection_HAsciiString& Type() const;




  DEFINE_STANDARD_RTTI(MS_Pointer)

protected:




private: 


Handle_TCollection_HAsciiString myType;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif