// This file was generated based on C:/Users/Shumcom/AppData/Local/Fusetools/Packages/Fuse.Reactive.Expressions/1.4.0/MathFunctions.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.UnaryFl-dfc153fb.h>
namespace g{namespace Fuse{namespace Reactive{struct Acos;}}}
namespace g{namespace Fuse{namespace Reactive{struct Expression;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public sealed class Acos :249
// {
::g::Fuse::Reactive::UnaryOperator_type* Acos_typeof();
void Acos__ctor_3_fn(Acos* __this, ::g::Fuse::Reactive::Expression* operand);
void Acos__New1_fn(::g::Fuse::Reactive::Expression* operand, Acos** __retval);

struct Acos : ::g::Fuse::Reactive::UnaryFloatOperator
{
    void ctor_3(::g::Fuse::Reactive::Expression* operand);
    static Acos* New1(::g::Fuse::Reactive::Expression* operand);
};
// }

}}} // ::g::Fuse::Reactive
