// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _WOKMake_SequenceNodeOfSequenceOfStepOption_HeaderFile
#define _WOKMake_SequenceNodeOfSequenceOfStepOption_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_WOKMake_SequenceNodeOfSequenceOfStepOption_HeaderFile
#include <Handle_WOKMake_SequenceNodeOfSequenceOfStepOption.hxx>
#endif

#ifndef _WOKMake_StepOption_HeaderFile
#include <WOKMake_StepOption.hxx>
#endif
#ifndef _TCollection_SeqNode_HeaderFile
#include <TCollection_SeqNode.hxx>
#endif
#ifndef _TCollection_SeqNodePtr_HeaderFile
#include <TCollection_SeqNodePtr.hxx>
#endif
class WOKMake_SequenceOfStepOption;



class WOKMake_SequenceNodeOfSequenceOfStepOption : public TCollection_SeqNode {

public:

  
      WOKMake_SequenceNodeOfSequenceOfStepOption(const WOKMake_StepOption& I,const TCollection_SeqNodePtr& n,const TCollection_SeqNodePtr& p);
  
        WOKMake_StepOption& Value() const;




  DEFINE_STANDARD_RTTI(WOKMake_SequenceNodeOfSequenceOfStepOption)

protected:




private: 


WOKMake_StepOption myValue;


};

#define SeqItem WOKMake_StepOption
#define SeqItem_hxx <WOKMake_StepOption.hxx>
#define TCollection_SequenceNode WOKMake_SequenceNodeOfSequenceOfStepOption
#define TCollection_SequenceNode_hxx <WOKMake_SequenceNodeOfSequenceOfStepOption.hxx>
#define Handle_TCollection_SequenceNode Handle_WOKMake_SequenceNodeOfSequenceOfStepOption
#define TCollection_SequenceNode_Type_() WOKMake_SequenceNodeOfSequenceOfStepOption_Type_()
#define TCollection_Sequence WOKMake_SequenceOfStepOption
#define TCollection_Sequence_hxx <WOKMake_SequenceOfStepOption.hxx>

#include <TCollection_SequenceNode.lxx>

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