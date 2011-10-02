// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _WOKNT_Path_HeaderFile
#define _WOKNT_Path_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_WOKNT_Path_HeaderFile
#include <Handle_WOKNT_Path.hxx>
#endif

#ifndef _Handle_TCollection_HAsciiString_HeaderFile
#include <Handle_TCollection_HAsciiString.hxx>
#endif
#ifndef _WOKNT_TimeStat_HeaderFile
#include <WOKNT_TimeStat.hxx>
#endif
#ifndef _WOKNT_Dword_HeaderFile
#include <WOKNT_Dword.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
#ifndef _Standard_CString_HeaderFile
#include <Standard_CString.hxx>
#endif
#ifndef _WOKNT_Extension_HeaderFile
#include <WOKNT_Extension.hxx>
#endif
class TCollection_HAsciiString;
class OSD_OSDError;



class WOKNT_Path : public MMgt_TShared {

public:

  //! creates a class instance <br>
  Standard_EXPORT   WOKNT_Path();
  //! creates a class instance <br>
  Standard_EXPORT   WOKNT_Path(const Handle(TCollection_HAsciiString)& aPath);
  //! creates a class instance <br>
  Standard_EXPORT   WOKNT_Path(const Handle(TCollection_HAsciiString)& aDir,const Handle(TCollection_HAsciiString)& aName);
  //! creates a class instance <br>
  Standard_EXPORT   WOKNT_Path(const Standard_CString aDir,const Standard_CString aName);
  //! tests whether specified entity exists or not <br>
  Standard_EXPORT     Standard_Boolean Exists() ;
  //! creates a directory <br>
  Standard_EXPORT     Standard_Boolean CreateDirectory(const Standard_Boolean fCreateParents = Standard_False) ;
  //! creates a file <br>
  Standard_EXPORT     Standard_Boolean CreateFile(const Standard_Boolean fCreateParents = Standard_False) ;
  //! removes a directory <br>
  Standard_EXPORT     Standard_Boolean RemoveDirectory(const Standard_Boolean fRemoveChilds = Standard_False) ;
  //! removes a file <br>
  Standard_EXPORT     Standard_Boolean RemoveFile() ;
  //! moves a file/directory to the new location <br>
  Standard_EXPORT     Standard_Boolean MoveTo(const Handle(WOKNT_Path)& aDestPath) ;
  //! returns last modification date of the file <br>
  Standard_EXPORT     WOKNT_TimeStat GetMDate() ;
  //! returns a file extension <br>
  Standard_EXPORT     WOKNT_Extension Extension() const;
  //! returns a base name of full file name <br>
  Standard_EXPORT     Handle_TCollection_HAsciiString BaseName() const;
  //! returns path component of full file name <br>
  Standard_EXPORT     Handle_TCollection_HAsciiString DirName() const;
  //! returns file name ( name.ext ) <br>
  Standard_EXPORT     Handle_TCollection_HAsciiString FileName() const;
  //! returns full name <br>
       const Handle_TCollection_HAsciiString& Name() const;
  //! returns known modification date of path <br>
        WOKNT_TimeStat MDate() ;
  //! resets modification date <br>
        void ResetMDate() ;
  //! compares last modification time of the file <br>
  Standard_EXPORT     Standard_Boolean IsOlder(const Handle(WOKNT_Path)& aName) ;
  //! compares last modification time of the file <br>
  Standard_EXPORT     Standard_Boolean IsNewer(const Handle(WOKNT_Path)& aName) ;
  
  Standard_EXPORT     Standard_Boolean IsDirectory() ;
  //! checks whether 'myPath' is a file or not <br>
  Standard_EXPORT     Standard_Boolean IsFile() ;
  //! checks whether specified file a symbolic link or not <br>
  Standard_EXPORT     Standard_Boolean IsSymLink() ;
  //! reduces Path as much as possible (reads links) <br>
  Standard_EXPORT     Handle_WOKNT_Path ReducedPath() const;
  
  Standard_EXPORT     Standard_Boolean IsSameFile(const Handle(WOKNT_Path)& aPath) const;
  
  Standard_EXPORT     Standard_Boolean IsWriteAble() ;
  
  Standard_EXPORT     Handle_TCollection_HAsciiString ExtensionName() const;




  DEFINE_STANDARD_RTTI(WOKNT_Path)

protected:




private: 

  
        Standard_Boolean CheckAttr() ;
  
  Standard_EXPORT     Standard_Boolean GetAttr() ;

Handle_TCollection_HAsciiString myPath;
WOKNT_TimeStat myDate;
WOKNT_Dword myAttr;
Standard_Boolean myAttrGet;


};


#include <WOKNT_Path.lxx>



// other Inline functions and methods (like "C++: function call" methods)


#endif