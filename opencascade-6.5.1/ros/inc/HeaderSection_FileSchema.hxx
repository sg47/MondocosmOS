// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _HeaderSection_FileSchema_HeaderFile
#define _HeaderSection_FileSchema_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_HeaderSection_FileSchema_HeaderFile
#include <Handle_HeaderSection_FileSchema.hxx>
#endif

#ifndef _Handle_Interface_HArray1OfHAsciiString_HeaderFile
#include <Handle_Interface_HArray1OfHAsciiString.hxx>
#endif
#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
#ifndef _Handle_TCollection_HAsciiString_HeaderFile
#include <Handle_TCollection_HAsciiString.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class Interface_HArray1OfHAsciiString;
class TCollection_HAsciiString;



class HeaderSection_FileSchema : public MMgt_TShared {

public:

  //! Returns a FileSchema <br>
  Standard_EXPORT   HeaderSection_FileSchema();
  
  Standard_EXPORT     void Init(const Handle(Interface_HArray1OfHAsciiString)& aSchemaIdentifiers) ;
  
  Standard_EXPORT     void SetSchemaIdentifiers(const Handle(Interface_HArray1OfHAsciiString)& aSchemaIdentifiers) ;
  
  Standard_EXPORT     Handle_Interface_HArray1OfHAsciiString SchemaIdentifiers() const;
  
  Standard_EXPORT     Handle_TCollection_HAsciiString SchemaIdentifiersValue(const Standard_Integer num) const;
  
  Standard_EXPORT     Standard_Integer NbSchemaIdentifiers() const;




  DEFINE_STANDARD_RTTI(HeaderSection_FileSchema)

protected:




private: 


Handle_Interface_HArray1OfHAsciiString schemaIdentifiers;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif