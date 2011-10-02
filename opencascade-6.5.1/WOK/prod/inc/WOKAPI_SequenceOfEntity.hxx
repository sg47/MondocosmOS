// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _WOKAPI_SequenceOfEntity_HeaderFile
#define _WOKAPI_SequenceOfEntity_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TCollection_BaseSequence_HeaderFile
#include <TCollection_BaseSequence.hxx>
#endif
#ifndef _Handle_WOKAPI_SequenceNodeOfSequenceOfEntity_HeaderFile
#include <Handle_WOKAPI_SequenceNodeOfSequenceOfEntity.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class Standard_NoSuchObject;
class Standard_OutOfRange;
class WOKAPI_Entity;
class WOKAPI_SequenceNodeOfSequenceOfEntity;



class WOKAPI_SequenceOfEntity  : public TCollection_BaseSequence {
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

  
      WOKAPI_SequenceOfEntity();
  
  Standard_EXPORT     void Clear() ;
~WOKAPI_SequenceOfEntity()
{
  Clear();
}
  
  Standard_EXPORT    const WOKAPI_SequenceOfEntity& Assign(const WOKAPI_SequenceOfEntity& Other) ;
   const WOKAPI_SequenceOfEntity& operator =(const WOKAPI_SequenceOfEntity& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT     void Append(const WOKAPI_Entity& T) ;
  
        void Append(WOKAPI_SequenceOfEntity& S) ;
  
  Standard_EXPORT     void Prepend(const WOKAPI_Entity& T) ;
  
        void Prepend(WOKAPI_SequenceOfEntity& S) ;
  
        void InsertBefore(const Standard_Integer Index,const WOKAPI_Entity& T) ;
  
        void InsertBefore(const Standard_Integer Index,WOKAPI_SequenceOfEntity& S) ;
  
  Standard_EXPORT     void InsertAfter(const Standard_Integer Index,const WOKAPI_Entity& T) ;
  
        void InsertAfter(const Standard_Integer Index,WOKAPI_SequenceOfEntity& S) ;
  
  Standard_EXPORT    const WOKAPI_Entity& First() const;
  
  Standard_EXPORT    const WOKAPI_Entity& Last() const;
  
        void Split(const Standard_Integer Index,WOKAPI_SequenceOfEntity& Sub) ;
  
  Standard_EXPORT    const WOKAPI_Entity& Value(const Standard_Integer Index) const;
   const WOKAPI_Entity& operator()(const Standard_Integer Index) const
{
  return Value(Index);
}
  
  Standard_EXPORT     void SetValue(const Standard_Integer Index,const WOKAPI_Entity& I) ;
  
  Standard_EXPORT     WOKAPI_Entity& ChangeValue(const Standard_Integer Index) ;
    WOKAPI_Entity& operator()(const Standard_Integer Index) 
{
  return ChangeValue(Index);
}
  
  Standard_EXPORT     void Remove(const Standard_Integer Index) ;
  
  Standard_EXPORT     void Remove(const Standard_Integer FromIndex,const Standard_Integer ToIndex) ;





protected:





private:

  
  Standard_EXPORT   WOKAPI_SequenceOfEntity(const WOKAPI_SequenceOfEntity& Other);




};

#define SeqItem WOKAPI_Entity
#define SeqItem_hxx <WOKAPI_Entity.hxx>
#define TCollection_SequenceNode WOKAPI_SequenceNodeOfSequenceOfEntity
#define TCollection_SequenceNode_hxx <WOKAPI_SequenceNodeOfSequenceOfEntity.hxx>
#define Handle_TCollection_SequenceNode Handle_WOKAPI_SequenceNodeOfSequenceOfEntity
#define TCollection_SequenceNode_Type_() WOKAPI_SequenceNodeOfSequenceOfEntity_Type_()
#define TCollection_Sequence WOKAPI_SequenceOfEntity
#define TCollection_Sequence_hxx <WOKAPI_SequenceOfEntity.hxx>

#include <TCollection_Sequence.lxx>

#undef SeqItem
#undef SeqItem_hxx
#undef TCollection_SequenceNode
#undef TCollection_SequenceNode_hxx
#undef Handle_TCollection_SequenceNode
#undef TCollection_SequenceNode_Type_
#undef TCollection_Sequence
#undef TCollection_Sequence_hxx


// other Inline functions and methods (like "C++: function call" methods)


#endif