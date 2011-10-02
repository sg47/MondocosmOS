// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _WOKTools_StringValue_HeaderFile
#define _WOKTools_StringValue_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_WOKTools_StringValue_HeaderFile
#include <Handle_WOKTools_StringValue.hxx>
#endif

#ifndef _Handle_TCollection_HAsciiString_HeaderFile
#include <Handle_TCollection_HAsciiString.hxx>
#endif
#ifndef _WOKTools_ReturnValue_HeaderFile
#include <WOKTools_ReturnValue.hxx>
#endif
class TCollection_HAsciiString;



class WOKTools_StringValue : public WOKTools_ReturnValue {

public:

  
  Standard_EXPORT   WOKTools_StringValue(const Handle(TCollection_HAsciiString)& astr);
  
  Standard_EXPORT     Handle_TCollection_HAsciiString Value() const;
  
  Standard_EXPORT     void SetValue(const Handle(TCollection_HAsciiString)& avalue) ;




  DEFINE_STANDARD_RTTI(WOKTools_StringValue)

protected:




private: 


Handle_TCollection_HAsciiString myvalue;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif