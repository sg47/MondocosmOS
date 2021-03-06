// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IGESGeom_Boundary_HeaderFile
#define _IGESGeom_Boundary_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_IGESGeom_Boundary_HeaderFile
#include <Handle_IGESGeom_Boundary.hxx>
#endif

#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Handle_IGESData_IGESEntity_HeaderFile
#include <Handle_IGESData_IGESEntity.hxx>
#endif
#ifndef _Handle_IGESData_HArray1OfIGESEntity_HeaderFile
#include <Handle_IGESData_HArray1OfIGESEntity.hxx>
#endif
#ifndef _Handle_TColStd_HArray1OfInteger_HeaderFile
#include <Handle_TColStd_HArray1OfInteger.hxx>
#endif
#ifndef _Handle_IGESBasic_HArray1OfHArray1OfIGESEntity_HeaderFile
#include <Handle_IGESBasic_HArray1OfHArray1OfIGESEntity.hxx>
#endif
#ifndef _IGESData_IGESEntity_HeaderFile
#include <IGESData_IGESEntity.hxx>
#endif
class IGESData_IGESEntity;
class IGESData_HArray1OfIGESEntity;
class TColStd_HArray1OfInteger;
class IGESBasic_HArray1OfHArray1OfIGESEntity;
class Standard_DimensionMismatch;
class Standard_OutOfRange;


//! defines IGESBoundary, Type <141> Form <0> <br>
//!          in package IGESGeom <br>
//!          A boundary entity identifies a surface boundary consisting <br>
//!          of a set of curves lying on the surface <br>
class IGESGeom_Boundary : public IGESData_IGESEntity {

public:

  
  Standard_EXPORT   IGESGeom_Boundary();
  //! This method is used to set the fields of the class <br>
//!           Boundary <br>
//!       - aType              : Type of bounded surface representation <br>
//!       - aPreference        : Preferred representation of <br>
//!                              Trimming Curve <br>
//!       - aSurface           : Untrimmed surface to be bounded <br>
//!       - allModelCurves     : Model Space Curves <br>
//!       - allSenses          : Orientation flags of all Model Space <br>
//!                              Curves <br>
//!       - allParameterCurves : Parameter Space Curves <br>
//! raises exception if allSenses, allModelCurves and <br>
//! allParameterCurves do not have same dimensions <br>
  Standard_EXPORT     void Init(const Standard_Integer aType,const Standard_Integer aPreference,const Handle(IGESData_IGESEntity)& aSurface,const Handle(IGESData_HArray1OfIGESEntity)& allModelCurves,const Handle(TColStd_HArray1OfInteger)& allSenses,const Handle(IGESBasic_HArray1OfHArray1OfIGESEntity)& allParameterCurves) ;
  //! returns type of bounded surface representation <br>
//! 0 = Boundary entities may only reference model space trimming <br>
//!     curves. Associated surface representation may be parametric <br>
//! 1 = Boundary entities must reference model space curves and <br>
//!     associated parameter space curve collections. Associated <br>
//!     surface must be a parametric representation <br>
  Standard_EXPORT     Standard_Integer BoundaryType() const;
  //! returns preferred representation of trimming curves <br>
//! 0 = Unspecified <br>
//! 1 = Model space <br>
//! 2 = Parameter space <br>
//! 3 = Representations are of equal preference <br>
  Standard_EXPORT     Standard_Integer PreferenceType() const;
  //! returns the surface to be bounded <br>
  Standard_EXPORT     Handle_IGESData_IGESEntity Surface() const;
  //! returns the number of model space curves <br>
  Standard_EXPORT     Standard_Integer NbModelSpaceCurves() const;
  //! returns Model Space Curve <br>
//! raises exception if Index <= 0 or Index > NbModelSpaceCurves() <br>
  Standard_EXPORT     Handle_IGESData_IGESEntity ModelSpaceCurve(const Standard_Integer Index) const;
  //! returns the sense of a particular model space curve <br>
//! 1 = model curve direction does not need reversal <br>
//! 2 = model curve direction needs to be reversed <br>
//! raises exception if Index <= 0 or Index > NbModelSpaceCurves() <br>
  Standard_EXPORT     Standard_Integer Sense(const Standard_Integer Index) const;
  //! returns the number of parameter curves associated with one <br>
//! model space curve referred to by Index <br>
//! raises exception if Index <= 0 or Index > NbModelSpaceCurves() <br>
  Standard_EXPORT     Standard_Integer NbParameterCurves(const Standard_Integer Index) const;
  //! returns an array of parameter space curves associated with <br>
//! a model space curve referred to by the Index <br>
//! raises exception if Index <= 0 or Index > NbModelSpaceCurves() <br>
  Standard_EXPORT     Handle_IGESData_HArray1OfIGESEntity ParameterCurves(const Standard_Integer Index) const;
  //! returns an individual parameter curve <br>
//! raises exception if Index or Num is out of range <br>
  Standard_EXPORT     Handle_IGESData_IGESEntity ParameterCurve(const Standard_Integer Index,const Standard_Integer Num) const;




  DEFINE_STANDARD_RTTI(IGESGeom_Boundary)

protected:




private: 


Standard_Integer theType;
Standard_Integer thePreference;
Handle_IGESData_IGESEntity theSurface;
Handle_IGESData_HArray1OfIGESEntity theModelCurves;
Handle_TColStd_HArray1OfInteger theSenses;
Handle_IGESBasic_HArray1OfHArray1OfIGESEntity theParameterCurves;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
