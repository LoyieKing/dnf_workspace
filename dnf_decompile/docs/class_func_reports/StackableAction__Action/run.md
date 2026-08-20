# run

`_ZN15StackableAction6Action3runEiRNS_11input_paramE`

`StackableAction::Action::run(int, StackableAction::input_param&)`

| 类 | 地址 |
|---|---|
| `StackableAction::Action` | `0x0827fa9a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0827fa9a  _ZN15StackableAction6Action3runEiRNS_11input_paramE
#           StackableAction::Action::run(int, StackableAction::input_param&)
# range [0x0827fa9a, 0x0827fb13]
0827fa9a +0x00:  push   %ebp
0827fa9b +0x01:  mov    %esp,%ebp
0827fa9d +0x03:  sub    $0x28,%esp
0827faa0 +0x06:  mov    0x8(%ebp),%eax
0827faa3 +0x09:  lea    0x18(%eax),%ecx
0827faa6 +0x0c:  lea    -0x10(%ebp),%eax
0827faa9 +0x0f:  lea    0xc(%ebp),%edx
0827faac +0x12:  mov    %edx,0x8(%esp)
0827fab0 +0x16:  mov    %ecx,0x4(%esp)
0827fab4 +0x1a:  mov    %eax,(%esp)
0827fab7 +0x1d:  call   082800e2 <_GLOBAL__I__ZN15StackableAction6ActionC2Ev+0x35b>  ; global constructors keyed to StackableAction::Action::Action()+0x35b
0827fabc +0x22:  sub    $0x4,%esp
0827fabf +0x25:  mov    0x8(%ebp),%eax
0827fac2 +0x28:  lea    0x18(%eax),%edx
0827fac5 +0x2b:  lea    -0xc(%ebp),%eax
0827fac8 +0x2e:  mov    %edx,0x4(%esp)
0827facc +0x32:  mov    %eax,(%esp)
0827facf +0x35:  call   0828010e <_GLOBAL__I__ZN15StackableAction6ActionC2Ev+0x387>  ; global constructors keyed to StackableAction::Action::Action()+0x387
0827fad4 +0x3a:  sub    $0x4,%esp
0827fad7 +0x3d:  lea    -0xc(%ebp),%eax
0827fada +0x40:  mov    %eax,0x4(%esp)
0827fade +0x44:  lea    -0x10(%ebp),%eax
0827fae1 +0x47:  mov    %eax,(%esp)
0827fae4 +0x4a:  call   08280134 <_GLOBAL__I__ZN15StackableAction6ActionC2Ev+0x3ad>  ; global constructors keyed to StackableAction::Action::Action()+0x3ad
0827fae9 +0x4f:  test   %al,%al
0827faeb +0x51:  je     0827fb0c <+0x72>
0827faed +0x53:  lea    -0x10(%ebp),%eax
0827faf0 +0x56:  mov    %eax,(%esp)
0827faf3 +0x59:  call   08280148 <_GLOBAL__I__ZN15StackableAction6ActionC2Ev+0x3c1>  ; global constructors keyed to StackableAction::Action::Action()+0x3c1
0827faf8 +0x5e:  lea    0x4(%eax),%edx
0827fafb +0x61:  mov    0x10(%ebp),%eax
0827fafe +0x64:  mov    %eax,0x4(%esp)
0827fb02 +0x68:  mov    %edx,(%esp)
0827fb05 +0x6b:  call   082801a4 <_GLOBAL__I__ZN15StackableAction6ActionC2Ev+0x41d>  ; global constructors keyed to StackableAction::Action::Action()+0x41d
0827fb0a +0x70:  jmp    0827fb11 <+0x77>
0827fb0c +0x72:  mov    $0x0,%eax
0827fb11 +0x77:  leave
0827fb12 +0x78:  ret
0827fb13 +0x79:  nop
```

## 反编译 C

```c
// StackableAction::Action::run @ 0x827fa9a

/* StackableAction::Action::run(int, StackableAction::input_param&) */

undefined4 __thiscall StackableAction::Action::run(Action *this,int param_1,input_param *param_2)

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
