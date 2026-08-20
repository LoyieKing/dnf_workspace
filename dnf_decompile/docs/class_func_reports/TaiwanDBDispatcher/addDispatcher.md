# addDispatcher

`_ZN18TaiwanDBDispatcher13addDispatcherEN18TaiwanInternalPack1TEP27TaiwanInterfaceDBDispatcher`

`TaiwanDBDispatcher::addDispatcher(TaiwanInternalPack::T, TaiwanInterfaceDBDispatcher*)`

| 类 | 地址 |
|---|---|
| `TaiwanDBDispatcher` | `0x0815a85a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0815a85a  _ZN18TaiwanDBDispatcher13addDispatcherEN18TaiwanInternalPack1TEP27TaiwanInterfaceDBDispatcher
#           TaiwanDBDispatcher::addDispatcher(TaiwanInternalPack::T, TaiwanInterfaceDBDispatcher*)
# range [0x0815a85a, 0x0815a89f]
0815a85a +0x00:  push   %ebp
0815a85b +0x01:  mov    %esp,%ebp
0815a85d +0x03:  sub    $0x18,%esp
0815a860 +0x06:  mov    0xc(%ebp),%eax
0815a863 +0x09:  mov    %eax,0x4(%esp)
0815a867 +0x0d:  mov    0x8(%ebp),%eax
0815a86a +0x10:  mov    %eax,(%esp)
0815a86d +0x13:  call   0815a7f6 <_ZN18TaiwanDBDispatcher13getDispatcherEN18TaiwanInternalPack1TE>  ; TaiwanDBDispatcher::getDispatcher(TaiwanInternalPack::T)
0815a872 +0x18:  test   %eax,%eax
0815a874 +0x1a:  setne  %al
0815a877 +0x1d:  test   %al,%al
0815a879 +0x1f:  je     0815a882 <+0x28>
0815a87b +0x21:  mov    $0x0,%eax
0815a880 +0x26:  jmp    0815a89e <+0x44>
0815a882 +0x28:  mov    0x8(%ebp),%eax
0815a885 +0x2b:  lea    0xc(%ebp),%edx
0815a888 +0x2e:  mov    %edx,0x4(%esp)
0815a88c +0x32:  mov    %eax,(%esp)
0815a88f +0x35:  call   0815e892 <_GLOBAL__I__ZN18TaiwanDBDispatcherC2Ev+0xb06>  ; global constructors keyed to TaiwanDBDispatcher::TaiwanDBDispatcher()+0xb06
0815a894 +0x3a:  mov    0x10(%ebp),%edx
0815a897 +0x3d:  mov    %edx,(%eax)
0815a899 +0x3f:  mov    $0x1,%eax
0815a89e +0x44:  leave
0815a89f +0x45:  ret
```

## 反编译 C

```c
// TaiwanDBDispatcher::addDispatcher @ 0x815a85a

/* TaiwanDBDispatcher::addDispatcher(TaiwanInternalPack::T, TaiwanInterfaceDBDispatcher*) */

bool __thiscall
TaiwanDBDispatcher::addDispatcher(TaiwanDBDispatcher *this,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = getDispatcher(this,param_2);
  if (iVar1 == 0) {
    puVar2 = (undefined4 *)
             std::
             map<TaiwanInternalPack::T,TaiwanInterfaceDBDispatcher*,std::less<TaiwanInternalPack::T>,std::allocator<std::pair<TaiwanInternalPack::T_const,TaiwanInterfaceDBDispatcher*>>>
             ::operator[]((map<TaiwanInternalPack::T,TaiwanInterfaceDBDispatcher*,std::less<TaiwanInternalPack::T>,std::allocator<std::pair<TaiwanInternalPack::T_const,TaiwanInterfaceDBDispatcher*>>>
                           *)this,(T *)&param_2);
    *puVar2 = param_3;
  }
  return iVar1 == 0;
}
```
