// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PDataXtd_Position_HeaderFile
#define _PDataXtd_Position_HeaderFile

#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Handle_PDataXtd_Position_HeaderFile
#include <Handle_PDataXtd_Position.hxx>
#endif

#ifndef _gp_Pnt_HeaderFile
#include <gp_Pnt.hxx>
#endif
#ifndef _PDF_Attribute_HeaderFile
#include <PDF_Attribute.hxx>
#endif
class gp_Pnt;


class PDataXtd_Position : public PDF_Attribute {

public:

  
  Standard_EXPORT   PDataXtd_Position();
  
        gp_Pnt GetPosition() const;
  
        void SetPosition(const gp_Pnt& aPosition) ;

PDataXtd_Position(const Storage_stCONSTclCOM& a) : PDF_Attribute(a)
{
  
}
    const gp_Pnt& _CSFDB_GetPDataXtd_PositionmyPosition() const { return myPosition; }



  DEFINE_STANDARD_RTTI(PDataXtd_Position)

protected:




private: 


gp_Pnt myPosition;


};


#include <PDataXtd_Position.lxx>



// other Inline functions and methods (like "C++: function call" methods)


#endif
