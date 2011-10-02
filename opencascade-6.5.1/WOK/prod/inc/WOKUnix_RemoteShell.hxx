// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _WOKUnix_RemoteShell_HeaderFile
#define _WOKUnix_RemoteShell_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_WOKUnix_RemoteShell_HeaderFile
#include <Handle_WOKUnix_RemoteShell.hxx>
#endif

#ifndef _Handle_TCollection_HAsciiString_HeaderFile
#include <Handle_TCollection_HAsciiString.hxx>
#endif
#ifndef _WOKUnix_Shell_HeaderFile
#include <WOKUnix_Shell.hxx>
#endif
#ifndef _WOKUnix_ShellMode_HeaderFile
#include <WOKUnix_ShellMode.hxx>
#endif
#ifndef _WOKUnix_PopenOutputMode_HeaderFile
#include <WOKUnix_PopenOutputMode.hxx>
#endif
#ifndef _WOKUnix_PopenBufferMode_HeaderFile
#include <WOKUnix_PopenBufferMode.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class TCollection_HAsciiString;
class TCollection_AsciiString;



class WOKUnix_RemoteShell : public WOKUnix_Shell {

public:

  
  Standard_EXPORT   WOKUnix_RemoteShell(const Handle(TCollection_HAsciiString)& ahost,const TCollection_AsciiString& apath,const WOKUnix_ShellMode amode = WOKUnix_AsynchronousMode,const WOKUnix_PopenOutputMode outmode = WOKUnix_POPEN_MIX_OUT_ERR,const WOKUnix_PopenBufferMode bufmode = WOKUnix_POPEN_BUFFERED);
  
  Standard_EXPORT   virtual  Standard_Integer SyncAndStatus() ;
  
  Standard_EXPORT     void SetUser(const Handle(TCollection_HAsciiString)& auser) ;
  
  Standard_EXPORT     Handle_TCollection_HAsciiString User() const;
  
  Standard_EXPORT     void SetPassword(const Handle(TCollection_HAsciiString)& auser) ;
  
  Standard_EXPORT     Handle_TCollection_HAsciiString Password() const;




  DEFINE_STANDARD_RTTI(WOKUnix_RemoteShell)

protected:




private: 


Handle_TCollection_HAsciiString myuser;
Handle_TCollection_HAsciiString mypassword;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif