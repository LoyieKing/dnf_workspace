# check

`_ZN15StackableAction6Action5checkEiRNS_11input_paramE`

`StackableAction::Action::check(int, StackableAction::input_param&)`

| 类 | 地址 |
|---|---|
| `StackableAction::Action` | `0x0827fa26` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0827fa26  _ZN15StackableAction6Action5checkEiRNS_11input_paramE
#           StackableAction::Action::check(int, StackableAction::input_param&)
# range [0x0827fa26, 0x0827fa99]
0827fa26 +0x00:  push   %ebp
0827fa27 +0x01:  mov    %esp,%ebp
0827fa29 +0x03:  sub    $0x28,%esp
0827fa2c +0x06:  mov    0x8(%ebp),%edx
0827fa2f +0x09:  lea    -0x10(%ebp),%eax
0827fa32 +0x0c:  lea    0xc(%ebp),%ecx
0827fa35 +0x0f:  mov    %ecx,0x8(%esp)
0827fa39 +0x13:  mov    %edx,0x4(%esp)
0827fa3d +0x17:  mov    %eax,(%esp)
0827fa40 +0x1a:  call   082800e2 <_GLOBAL__I__ZN15StackableAction6ActionC2Ev+0x35b>  ; global constructors keyed to StackableAction::Action::Action()+0x35b
0827fa45 +0x1f:  sub    $0x4,%esp
0827fa48 +0x22:  mov    0x8(%ebp),%edx
0827fa4b +0x25:  lea    -0xc(%ebp),%eax
0827fa4e +0x28:  mov    %edx,0x4(%esp)
0827fa52 +0x2c:  mov    %eax,(%esp)
0827fa55 +0x2f:  call   0828010e <_GLOBAL__I__ZN15StackableAction6ActionC2Ev+0x387>  ; global constructors keyed to StackableAction::Action::Action()+0x387
0827fa5a +0x34:  sub    $0x4,%esp
0827fa5d +0x37:  lea    -0xc(%ebp),%eax
0827fa60 +0x3a:  mov    %eax,0x4(%esp)
0827fa64 +0x3e:  lea    -0x10(%ebp),%eax
0827fa67 +0x41:  mov    %eax,(%esp)
0827fa6a +0x44:  call   08280134 <_GLOBAL__I__ZN15StackableAction6ActionC2Ev+0x3ad>  ; global constructors keyed to StackableAction::Action::Action()+0x3ad
0827fa6f +0x49:  test   %al,%al
0827fa71 +0x4b:  je     0827fa92 <+0x6c>
0827fa73 +0x4d:  lea    -0x10(%ebp),%eax
0827fa76 +0x50:  mov    %eax,(%esp)
0827fa79 +0x53:  call   08280148 <_GLOBAL__I__ZN15StackableAction6ActionC2Ev+0x3c1>  ; global constructors keyed to StackableAction::Action::Action()+0x3c1
0827fa7e +0x58:  lea    0x4(%eax),%edx
0827fa81 +0x5b:  mov    0x10(%ebp),%eax
0827fa84 +0x5e:  mov    %eax,0x4(%esp)
0827fa88 +0x62:  mov    %edx,(%esp)
0827fa8b +0x65:  call   082801a4 <_GLOBAL__I__ZN15StackableAction6ActionC2Ev+0x41d>  ; global constructors keyed to StackableAction::Action::Action()+0x41d
0827fa90 +0x6a:  jmp    0827fa97 <+0x71>
0827fa92 +0x6c:  mov    $0x0,%eax
0827fa97 +0x71:  leave
0827fa98 +0x72:  ret
0827fa99 +0x73:  nop
```

## 反编译 C

```c
// StackableAction::Action::check @ 0x827fa26

/* StackableAction::Action::check(int, StackableAction::input_param&) */

undefined4 __thiscall StackableAction::Action::check(Action *this,int param_1,input_param *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  _Rb_tree_iterator<std::pair<int_const,boost::function<int(StackableAction::input_param&)>>>
  local_14 [4];
  map<int,boost::function<int(StackableAction::input_param&)>,std::less<int>,std::allocator<std::pair<int_const,boost::function<int(StackableAction::input_param&)>>>>
  local_10 [12];
  
  std::
  map<int,boost::function<int(StackableAction::input_param&)>,std::less<int>,std::allocator<std::pair<int_const,boost::function<int(StackableAction::input_param&)>>>>
  ::find((int *)local_14);
  std::
  map<int,boost::function<int(StackableAction::input_param&)>,std::less<int>,std::allocator<std::pair<int_const,boost::function<int(StackableAction::input_param&)>>>>
  ::end(local_10);
  cVar1 = std::
          _Rb_tree_iterator<std::pair<int_const,boost::function<int(StackableAction::input_param&)>>>
          ::operator!=(local_14,(_Rb_tree_iterator *)local_10);
  if (cVar1 == '\0') {
    uVar3 = 0;
  }
  else {
    iVar2 = std::
            _Rb_tree_iterator<std::pair<int_const,boost::function<int(StackableAction::input_param&)>>>
            ::operator->(local_14);
    uVar3 = boost::function1<int,StackableAction::input_param&>::operator()
                      ((function1<int,StackableAction::input_param&> *)(iVar2 + 4),param_2);
  }
  return uVar3;
}
```
