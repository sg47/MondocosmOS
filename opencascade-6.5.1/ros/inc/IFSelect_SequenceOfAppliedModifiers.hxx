// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IFSelect_SequenceOfAppliedModifiers_HeaderFile
#define _IFSelect_SequenceOfAppliedModifiers_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TCollection_BaseSequence_HeaderFile
#include <TCollection_BaseSequence.hxx>
#endif
#ifndef _Handle_IFSelect_AppliedModifiers_HeaderFile
#include <Handle_IFSelect_AppliedModifiers.hxx>
#endif
#ifndef _Handle_IFSelect_SequenceNodeOfSequenceOfAppliedModifiers_HeaderFile
#include <Handle_IFSelect_SequenceNodeOfSequenceOfAppliedModifiers.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class Standard_NoSuchObject;
class Standard_OutOfRange;
class IFSelect_AppliedModifiers;
class IFSelect_SequenceNodeOfSequenceOfAppliedModifiers;



class IFSelect_SequenceOfAppliedModifiers  : public TCollection_BaseSequence {
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

  
      IFSelect_SequenceOfAppliedModifiers();
  
  Standard_EXPORT     void Clear() ;
~IFSelect_SequenceOfAppliedModifiers()
{
  Clear();
}
  
  Standard_EXPORT    const IFSelect_SequenceOfAppliedModifiers& Assign(const IFSelect_SequenceOfAppliedModifiers& Other) ;
   const IFSelect_SequenceOfAppliedModifiers& operator =(const IFSelect_SequenceOfAppliedModifiers& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT     void Append(const Handle(IFSelect_AppliedModifiers)& T) ;
  
        void Append(IFSelect_SequenceOfAppliedModifiers& S) ;
  
  Standard_EXPORT     void Prepend(const Handle(IFSelect_AppliedModifiers)& T) ;
  
        void Prepend(IFSelect_SequenceOfAppliedModifiers& S) ;
  
        void InsertBefore(const Standard_Integer Index,const Handle(IFSelect_AppliedModifiers)& T) ;
  
        void InsertBefore(const Standard_Integer Index,IFSelect_SequenceOfAppliedModifiers& S) ;
  
  Standard_EXPORT     void InsertAfter(const Standard_Integer Index,const Handle(IFSelect_AppliedModifiers)& T) ;
  
        void InsertAfter(const Standard_Integer Index,IFSelect_SequenceOfAppliedModifiers& S) ;
  
  Standard_EXPORT    const Handle_IFSelect_AppliedModifiers& First() const;
  
  Standard_EXPORT    const Handle_IFSelect_AppliedModifiers& Last() const;
  
        void Split(const Standard_Integer Index,IFSelect_SequenceOfAppliedModifiers& Sub) ;
  
  Standard_EXPORT    const Handle_IFSelect_AppliedModifiers& Value(const Standard_Integer Index) const;
   const Handle_IFSelect_AppliedModifiers& operator()(const Standard_Integer Index) const
{
  return Value(Index);
}
  
  Standard_EXPORT     void SetValue(const Standard_Integer Index,const Handle(IFSelect_AppliedModifiers)& I) ;
  
  Standard_EXPORT     Handle_IFSelect_AppliedModifiers& ChangeValue(const Standard_Integer Index) ;
    Handle_IFSelect_AppliedModifiers& operator()(const Standard_Integer Index) 
{
  return ChangeValue(Index);
}
  
  Standard_EXPORT     void Remove(const Standard_Integer Index) ;
  
  Standard_EXPORT     void Remove(const Standard_Integer FromIndex,const Standard_Integer ToIndex) ;





protected:





private:

  
  Standard_EXPORT   IFSelect_SequenceOfAppliedModifiers(const IFSelect_SequenceOfAppliedModifiers& Other);




};

#define SeqItem Handle_IFSelect_AppliedModifiers
#define SeqItem_hxx <IFSelect_AppliedModifiers.hxx>
#define TCollection_SequenceNode IFSelect_SequenceNodeOfSequenceOfAppliedModifiers
#define TCollection_SequenceNode_hxx <IFSelect_SequenceNodeOfSequenceOfAppliedModifiers.hxx>
#define Handle_TCollection_SequenceNode Handle_IFSelect_SequenceNodeOfSequenceOfAppliedModifiers
#define TCollection_SequenceNode_Type_() IFSelect_SequenceNodeOfSequenceOfAppliedModifiers_Type_()
#define TCollection_Sequence IFSelect_SequenceOfAppliedModifiers
#define TCollection_Sequence_hxx <IFSelect_SequenceOfAppliedModifiers.hxx>

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