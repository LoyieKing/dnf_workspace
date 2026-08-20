# ~Action

`_ZN15StackableAction6ActionD1Ev`

`StackableAction::Action::~Action()`

| 类 | 地址 |
|---|---|
| `StackableAction::Action` | `0x0827f760` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0827f760  _ZN15StackableAction6ActionD1Ev
#           StackableAction::Action::~Action()
# range [0x0827f760, 0x0827f7c7]
0827f760 +0x00:  push   %ebp
0827f761 +0x01:  mov    %esp,%ebp
0827f763 +0x03:  push   %esi
0827f764 +0x04:  push   %ebx
0827f765 +0x05:  sub    $0x10,%esp
0827f768 +0x08:  mov    0x8(%ebp),%eax
0827f76b +0x0b:  add    $0x18,%eax
0827f76e +0x0e:  mov    %eax,(%esp)
0827f771 +0x11:  call   0827fea4 <_GLOBAL__I__ZN15StackableAction6ActionC2Ev+0x11d>  ; global constructors keyed to StackableAction::Action::Action()+0x11d
0827f776 +0x16:  jmp    0827f78d <+0x2d>
0827f778 +0x18:  mov    %edx,%ebx
0827f77a +0x1a:  mov    %eax,%esi
0827f77c +0x1c:  mov    0x8(%ebp),%eax
0827f77f +0x1f:  mov    %eax,(%esp)
0827f782 +0x22:  call   0827fea4 <_GLOBAL__I__ZN15StackableAction6ActionC2Ev+0x11d>  ; global constructors keyed to StackableAction::Action::Action()+0x11d
0827f787 +0x27:  mov    %esi,%eax
0827f789 +0x29:  mov    %ebx,%edx
0827f78b +0x2b:  jmp    0827f79a <+0x3a>
0827f78d +0x2d:  mov    0x8(%ebp),%eax
0827f790 +0x30:  mov    %eax,(%esp)
0827f793 +0x33:  call   0827fea4 <_GLOBAL__I__ZN15StackableAction6ActionC2Ev+0x11d>  ; global constructors keyed to StackableAction::Action::Action()+0x11d
0827f798 +0x38:  jmp    0827f7b5 <+0x55>
0827f79a +0x3a:  mov    %edx,%ebx
0827f79c +0x3c:  mov    %eax,%esi
0827f79e +0x3e:  mov    0x8(%ebp),%eax
0827f7a1 +0x41:  mov    %eax,(%esp)
0827f7a4 +0x44:  call   0827fe9e <_GLOBAL__I__ZN15StackableAction6ActionC2Ev+0x117>  ; global constructors keyed to StackableAction::Action::Action()+0x117
0827f7a9 +0x49:  mov    %esi,%eax
0827f7ab +0x4b:  mov    %ebx,%edx
0827f7ad +0x4d:  mov    %eax,(%esp)
0827f7b0 +0x50:  call   08ae3750 <_Unwind_Resume>
0827f7b5 +0x55:  mov    0x8(%ebp),%eax
0827f7b8 +0x58:  mov    %eax,(%esp)
0827f7bb +0x5b:  call   0827fe9e <_GLOBAL__I__ZN15StackableAction6ActionC2Ev+0x117>  ; global constructors keyed to StackableAction::Action::Action()+0x117
0827f7c0 +0x60:  add    $0x10,%esp
0827f7c3 +0x63:  pop    %ebx
0827f7c4 +0x64:  pop    %esi
0827f7c5 +0x65:  pop    %ebp
0827f7c6 +0x66:  ret
0827f7c7 +0x67:  nop
```

## 反编译 C

```c
// StackableAction::Action::~Action @ 0x827f760

/* StackableAction::Action::~Action() */

void __thiscall StackableAction::Action::~Action(Action *this)

{
                    /* try { // try from 0827f771 to 0827f775 has its CatchHandler @ 0827f778 */
  std::
  map<int,boost::function<int(StackableAction::input_param&)>,std::less<int>,std::allocator<std::pair<int_const,boost::function<int(StackableAction::input_param&)>>>>
  ::~map((map<int,boost::function<int(StackableAction::input_param&)>,std::less<int>,std::allocator<std::pair<int_const,boost::function<int(StackableAction::input_param&)>>>>
          *)(this + 0x18));
                    /* try { // try from 0827f793 to 0827f797 has its CatchHandler @ 0827f79a */
  std::
  map<int,boost::function<int(StackableAction::input_param&)>,std::less<int>,std::allocator<std::pair<int_const,boost::function<int(StackableAction::input_param&)>>>>
  ::~map((map<int,boost::function<int(StackableAction::input_param&)>,std::less<int>,std::allocator<std::pair<int_const,boost::function<int(StackableAction::input_param&)>>>>
          *)this);
  boost::noncopyable_::noncopyable::~noncopyable((noncopyable *)this);
  return;
}
```
