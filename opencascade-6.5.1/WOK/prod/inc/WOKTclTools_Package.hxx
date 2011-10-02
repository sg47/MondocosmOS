// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _WOKTclTools_Package_HeaderFile
#define _WOKTclTools_Package_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Handle_WOKTclTools_Interpretor_HeaderFile
#include <Handle_WOKTclTools_Interpretor.hxx>
#endif
#ifndef _TCollection_AsciiString_HeaderFile
#include <TCollection_AsciiString.hxx>
#endif
#ifndef _Standard_CString_HeaderFile
#include <Standard_CString.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class WOKTclTools_Interpretor;



class WOKTclTools_Package  {
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

  
  Standard_EXPORT   WOKTclTools_Package(const Handle(WOKTclTools_Interpretor)& aninterp,const Standard_CString aname,const Standard_CString aversion);
  
  Standard_EXPORT     Standard_Integer Require(const Standard_Boolean exactversion = Standard_False) ;
  
  Standard_EXPORT     Standard_Integer Provide() ;
  
  Standard_EXPORT     Standard_Integer EvalInitFile(const Standard_Boolean required = Standard_True) ;





protected:





private:



Handle_WOKTclTools_Interpretor myinterp;
TCollection_AsciiString myname;
TCollection_AsciiString myversion;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif