# getDispatcher

`_ZN18TaiwanDBDispatcher13getDispatcherEN18TaiwanInternalPack1TE`

`TaiwanDBDispatcher::getDispatcher(TaiwanInternalPack::T)`

| 类 | 地址 |
|---|---|
| `TaiwanDBDispatcher` | `0x0815a7f6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0815a7f6  _ZN18TaiwanDBDispatcher13getDispatcherEN18TaiwanInternalPack1TE
#           TaiwanDBDispatcher::getDispatcher(TaiwanInternalPack::T)
# range [0x0815a7f6, 0x0815a859]
0815a7f6 +0x00:  push   %ebp
0815a7f7 +0x01:  mov    %esp,%ebp
0815a7f9 +0x03:  sub    $0x28,%esp
0815a7fc +0x06:  mov    0x8(%ebp),%edx
0815a7ff +0x09:  lea    -0x10(%ebp),%eax
0815a802 +0x0c:  lea    0xc(%ebp),%ecx
0815a805 +0x0f:  mov    %ecx,0x8(%esp)
0815a809 +0x13:  mov    %edx,0x4(%esp)
0815a80d +0x17:  mov    %eax,(%esp)
0815a810 +0x1a:  call   0815e844 <_GLOBAL__I__ZN18TaiwanDBDispatcherC2Ev+0xab8>  ; global constructors keyed to TaiwanDBDispatcher::TaiwanDBDispatcher()+0xab8
0815a815 +0x1f:  sub    $0x4,%esp
0815a818 +0x22:  mov    0x8(%ebp),%edx
0815a81b +0x25:  lea    -0xc(%ebp),%eax
0815a81e +0x28:  mov    %edx,0x4(%esp)
0815a822 +0x2c:  mov    %eax,(%esp)
0815a825 +0x2f:  call   0815e7ce <_GLOBAL__I__ZN18TaiwanDBDispatcherC2Ev+0xa42>  ; global constructors keyed to TaiwanDBDispatcher::TaiwanDBDispatcher()+0xa42
0815a82a +0x34:  sub    $0x4,%esp
0815a82d +0x37:  lea    -0xc(%ebp),%eax
0815a830 +0x3a:  mov    %eax,0x4(%esp)
0815a834 +0x3e:  lea    -0x10(%ebp),%eax
0815a837 +0x41:  mov    %eax,(%esp)
0815a83a +0x44:  call   0815e870 <_GLOBAL__I__ZN18TaiwanDBDispatcherC2Ev+0xae4>  ; global constructors keyed to TaiwanDBDispatcher::TaiwanDBDispatcher()+0xae4
0815a83f +0x49:  test   %al,%al
0815a841 +0x4b:  je     0815a853 <+0x5d>
0815a843 +0x4d:  lea    -0x10(%ebp),%eax
0815a846 +0x50:  mov    %eax,(%esp)
0815a849 +0x53:  call   0815e884 <_GLOBAL__I__ZN18TaiwanDBDispatcherC2Ev+0xaf8>  ; global constructors keyed to TaiwanDBDispatcher::TaiwanDBDispatcher()+0xaf8
0815a84e +0x58:  mov    0x4(%eax),%eax
0815a851 +0x5b:  jmp    0815a858 <+0x62>
0815a853 +0x5d:  mov    $0x0,%eax
0815a858 +0x62:  leave
0815a859 +0x63:  ret
```

## 反编译 C

```c
// TaiwanDBDispatcher::getDispatcher @ 0x815a7f6

/* TaiwanDBDispatcher::getDispatcher(TaiwanInternalPack::T) */

undefined4 TaiwanDBDispatcher::getDispatcher(void)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  _Rb_tree_iterator<std::pair<TaiwanInternalPack::T_const,TaiwanInterfaceDBDispatcher*>>
  local_14 [4];
  map<TaiwanInternalPack::T,TaiwanInterfaceDBDispatcher*,std::less<TaiwanInternalPack::T>,std::allocator<std::pair<TaiwanInternalPack::T_const,TaiwanInterfaceDBDispatcher*>>>
  local_10 [12];
  
  std::
  map<TaiwanInternalPack::T,TaiwanInterfaceDBDispatcher*,std::less<TaiwanInternalPack::T>,std::allocator<std::pair<TaiwanInternalPack::T_const,TaiwanInterfaceDBDispatcher*>>>
  ::find(local_14);
  std::
  map<TaiwanInternalPack::T,TaiwanInterfaceDBDispatcher*,std::less<TaiwanInternalPack::T>,std::allocator<std::pair<TaiwanInternalPack::T_const,TaiwanInterfaceDBDispatcher*>>>
  ::end(local_10);
  cVar1 = std::
          _Rb_tree_iterator<std::pair<TaiwanInternalPack::T_const,TaiwanInterfaceDBDispatcher*>>::
          operator!=(local_14,(_Rb_tree_iterator *)local_10);
  if (cVar1 == '\0') {
    uVar3 = 0;
  }
  else {
    iVar2 = std::
            _Rb_tree_iterator<std::pair<TaiwanInternalPack::T_const,TaiwanInterfaceDBDispatcher*>>::
            operator->(local_14);
    uVar3 = *(undefined4 *)(iVar2 + 4);
  }
  return uVar3;
}
```
