// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _WOKUnix_StackNodeOfStackOfDir_HeaderFile
#define _WOKUnix_StackNodeOfStackOfDir_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_WOKUnix_StackNodeOfStackOfDir_HeaderFile
#include <Handle_WOKUnix_StackNodeOfStackOfDir.hxx>
#endif

#ifndef _WOKUnix_Dir_HeaderFile
#include <WOKUnix_Dir.hxx>
#endif
#ifndef _TCollection_MapNode_HeaderFile
#include <TCollection_MapNode.hxx>
#endif
#ifndef _TCollection_MapNodePtr_HeaderFile
#include <TCollection_MapNodePtr.hxx>
#endif
class WOKUnix_StackOfDir;
class WOKUnix_StackIteratorOfStackOfDir;



class WOKUnix_StackNodeOfStackOfDir : public TCollection_MapNode {

public:

  
      WOKUnix_StackNodeOfStackOfDir(const WOKUnix_Dir& I,const TCollection_MapNodePtr& n);
  
        WOKUnix_Dir& Value() const;




  DEFINE_STANDARD_RTTI(WOKUnix_StackNodeOfStackOfDir)

protected:




private: 


WOKUnix_Dir myValue;


};

#define Item WOKUnix_Dir
#define Item_hxx <WOKUnix_Dir.hxx>
#define TCollection_StackNode WOKUnix_StackNodeOfStackOfDir
#define TCollection_StackNode_hxx <WOKUnix_StackNodeOfStackOfDir.hxx>
#define TCollection_StackIterator WOKUnix_StackIteratorOfStackOfDir
#define TCollection_StackIterator_hxx <WOKUnix_StackIteratorOfStackOfDir.hxx>
#define Handle_TCollection_StackNode Handle_WOKUnix_StackNodeOfStackOfDir
#define TCollection_StackNode_Type_() WOKUnix_StackNodeOfStackOfDir_Type_()
#define TCollection_Stack WOKUnix_StackOfDir
#define TCollection_Stack_hxx <WOKUnix_StackOfDir.hxx>

#include <TCollection_StackNode.lxx>

#undef Item
#undef Item_hxx
#undef TCollection_StackNode
#undef TCollection_StackNode_hxx
#undef TCollection_StackIterator
#undef TCollection_StackIterator_hxx
#undef Handle_TCollection_StackNode
#undef TCollection_StackNode_Type_
#undef TCollection_Stack
#undef TCollection_Stack_hxx


// other Inline functions and methods (like "C++: function call" methods)


#endif