/**
 * \file thickeningParameters.cpp
 * \attention This file is automatically generated and should not be in general modified manually
 *
 * \date MMM DD, 20YY
 * \author autoGenerator
 */

#include <vector>
#include <stddef.h>
#include "core/xml/generated/thickeningParameters.h"

/**
 *  Looks extremely unsafe because it depends on the order of static initialization.
 *  Should check standard if this is ok
 *
 *  Also it's not clear why removing "= Reflection()" breaks the code;
 **/

namespace corecvs {
template<>
Reflection BaseReflection<ThickeningParameters>::reflection = Reflection();
template<>
int BaseReflection<ThickeningParameters>::dummy = ThickeningParameters::staticInit();
} // namespace corecvs 

SUPPRESS_OFFSET_WARNING_BEGIN


using namespace corecvs;

int ThickeningParameters::staticInit()
{

    ReflectionNaming &nameing = naming();
    nameing = ReflectionNaming(
        "Thickening Parameters",
        "Thickening Parameters",
        ""
    );

     getReflection()->objectSize = sizeof(ThickeningParameters);
     

    IntField* field0 = new IntField
        (
          ThickeningParameters::POWER_ID,
          offsetof(ThickeningParameters, mPower),
          5000,
          "Power",
          "Power",
          "Power",
          true,
         0,
         9999
        );
    fields().push_back(field0);
    /*  */ 
    ReflectionDirectory &directory = *ReflectionDirectoryHolder::getReflectionDirectory();
    directory[std::string("Thickening Parameters")]= &reflection;
   return 0;
}
int ThickeningParameters::relinkCompositeFields()
{
   return 0;
}

SUPPRESS_OFFSET_WARNING_END


