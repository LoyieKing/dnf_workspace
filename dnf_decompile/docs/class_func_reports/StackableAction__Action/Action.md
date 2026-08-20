# Action

`_ZN15StackableAction6ActionC1Ev`

`StackableAction::Action::Action()`

| 类 | 地址 |
|---|---|
| `StackableAction::Action` | `0x0827f6d8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0827f6d8  _ZN15StackableAction6ActionC1Ev
#           StackableAction::Action::Action()
# range [0x0827f6d8, 0x0827f75f]
0827f6d8 +0x00:  push   %ebp
0827f6d9 +0x01:  mov    %esp,%ebp
0827f6db +0x03:  push   %esi
0827f6dc +0x04:  push   %ebx
0827f6dd +0x05:  sub    $0x10,%esp
0827f6e0 +0x08:  mov    0x8(%ebp),%eax
0827f6e3 +0x0b:  mov    %eax,(%esp)
0827f6e6 +0x0e:  call   0827fe98 <_GLOBAL__I__ZN15StackableAction6ActionC2Ev+0x111>  ; global constructors keyed to StackableAction::Action::Action()+0x111
0827f6eb +0x13:  mov    0x8(%ebp),%eax
0827f6ee +0x16:  mov    %eax,(%esp)
0827f6f1 +0x19:  call   0827ff18 <_GLOBAL__I__ZN15StackableAction6ActionC2Ev+0x191>  ; global constructors keyed to StackableAction::Action::Action()+0x191
0827f6f6 +0x1e:  mov    0x8(%ebp),%eax
0827f6f9 +0x21:  add    $0x18,%eax
0827f6fc +0x24:  mov    %eax,(%esp)
0827f6ff +0x27:  call   0827ff18 <_GLOBAL__I__ZN15StackableAction6ActionC2Ev+0x191>  ; global constructors keyed to StackableAction::Action::Action()+0x191
0827f704 +0x2c:  mov    0x8(%ebp),%eax
0827f707 +0x2f:  mov    %eax,(%esp)
0827f70a +0x32:  call   0827f7c8 <_ZN15StackableAction6Action18init_function_typeEv>  ; StackableAction::Action::init_function_type()
0827f70f +0x37:  jmp    0827f759 <+0x81>
0827f711 +0x39:  mov    %edx,%ebx
0827f713 +0x3b:  mov    %eax,%esi
0827f715 +0x3d:  mov    0x8(%ebp),%eax
0827f718 +0x40:  add    $0x18,%eax
0827f71b +0x43:  mov    %eax,(%esp)
0827f71e +0x46:  call   0827fea4 <_GLOBAL__I__ZN15StackableAction6ActionC2Ev+0x11d>  ; global constructors keyed to StackableAction::Action::Action()+0x11d
0827f723 +0x4b:  mov    %esi,%eax
0827f725 +0x4d:  mov    %ebx,%edx
0827f727 +0x4f:  jmp    0827f729 <+0x51>
0827f729 +0x51:  mov    %edx,%ebx
0827f72b +0x53:  mov    %eax,%esi
0827f72d +0x55:  mov    0x8(%ebp),%eax
0827f730 +0x58:  mov    %eax,(%esp)
0827f733 +0x5b:  call   0827fea4 <_GLOBAL__I__ZN15StackableAction6ActionC2Ev+0x11d>  ; global constructors keyed to StackableAction::Action::Action()+0x11d
0827f738 +0x60:  mov    %esi,%eax
0827f73a +0x62:  mov    %ebx,%edx
0827f73c +0x64:  jmp    0827f73e <+0x66>
0827f73e +0x66:  mov    %edx,%ebx
0827f740 +0x68:  mov    %eax,%esi
0827f742 +0x6a:  mov    0x8(%ebp),%eax
0827f745 +0x6d:  mov    %eax,(%esp)
0827f748 +0x70:  call   0827fe9e <_GLOBAL__I__ZN15StackableAction6ActionC2Ev+0x117>  ; global constructors keyed to StackableAction::Action::Action()+0x117
0827f74d +0x75:  mov    %esi,%eax
0827f74f +0x77:  mov    %ebx,%edx
0827f751 +0x79:  mov    %eax,(%esp)
0827f754 +0x7c:  call   08ae3750 <_Unwind_Resume>
0827f759 +0x81:  add    $0x10,%esp
0827f75c +0x84:  pop    %ebx
0827f75d +0x85:  pop    %esi
0827f75e +0x86:  pop    %ebp
0827f75f +0x87:  ret
```

## 反编译 C

```c
// StackableAction::Action::Action @ 0x827f6d8

/* StackableAction::Action::Action() */

void __thiscall StackableAction::Action::Action(Action *this)

{
  boost::noncopyable_::noncopyable::noncopyable((noncopyable *)this);
                    /* try { // try from 0827f6f1 to 0827f6f5 has its CatchHandler @ 0827f73e */
  std::
  map<int,boost::function<int(StackableAction::input_param&)>,std::less<int>,std::allocator<std::pair<int_const,boost::function<int(StackableAction::input_param&)>>>>
  ::map((map<int,boost::function<int(StackableAction::input_param&)>,std::less<int>,std::allocator<std::pair<int_const,boost::function<int(StackableAction::input_param&)>>>>
         *)this);
                    /* try { // try from 0827f6ff to 0827f703 has its CatchHandler @ 0827f729 */
  std::
  map<int,boost::function<int(StackableAction::input_param&)>,std::less<int>,std::allocator<std::pair<int_const,boost::function<int(StackableAction::input_param&)>>>>
  ::map((map<int,boost::function<int(StackableAction::input_param&)>,std::less<int>,std::allocator<std::pair<int_const,boost::function<int(StackableAction::input_param&)>>>>
         *)(this + 0x18));
                    /* try { // try from 0827f70a to 0827f70e has its CatchHandler @ 0827f711 */
  init_function_type();
  return;
}
```
