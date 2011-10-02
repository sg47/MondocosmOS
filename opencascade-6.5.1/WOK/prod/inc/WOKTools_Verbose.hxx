// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _WOKTools_Verbose_HeaderFile
#define _WOKTools_Verbose_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _WOKTools_Message_HeaderFile
#include <WOKTools_Message.hxx>
#endif
#ifndef _Standard_CString_HeaderFile
#include <Standard_CString.hxx>
#endif
#ifndef _Standard_Character_HeaderFile
#include <Standard_Character.hxx>
#endif


//! Verbose Information messages <br>
class WOKTools_Verbose  : public WOKTools_Message {
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

  
  Standard_EXPORT   WOKTools_Verbose(const Standard_CString aclass = "WOK_VERBOSE");
  
  Standard_EXPORT     WOKTools_Verbose& LocalSwitcher(const Standard_CString aswitch) const;
    WOKTools_Verbose& operator ()(const Standard_CString aswitch) const
{
  return LocalSwitcher(aswitch);
}
  
  Standard_EXPORT   virtual  Standard_Character Code() const;





protected:





private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif