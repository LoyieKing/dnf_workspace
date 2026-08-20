# addDispatcher

`_ZN24TaiwanInternalDispatcher13addDispatcherEN18TaiwanInternalPack1TEP30TaiwanInterfaceInterDispatcher`

`TaiwanInternalDispatcher::addDispatcher(TaiwanInternalPack::T, TaiwanInterfaceInterDispatcher*)`

| 类 | 地址 |
|---|---|
| `TaiwanInternalDispatcher` | `0x081606fe` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081606fe  _ZN24TaiwanInternalDispatcher13addDispatcherEN18TaiwanInternalPack1TEP30TaiwanInterfaceInterDispatcher
#           TaiwanInternalDispatcher::addDispatcher(TaiwanInternalPack::T, TaiwanInterfaceInterDispatcher*)
# range [0x081606fe, 0x08160743]
081606fe +0x00:  push   %ebp
081606ff +0x01:  mov    %esp,%ebp
08160701 +0x03:  sub    $0x18,%esp
08160704 +0x06:  mov    0xc(%ebp),%eax
08160707 +0x09:  mov    %eax,0x4(%esp)
0816070b +0x0d:  mov    0x8(%ebp),%eax
0816070e +0x10:  mov    %eax,(%esp)
08160711 +0x13:  call   0816069a <_ZN24TaiwanInternalDispatcher13getDispatcherEN18TaiwanInternalPack1TE>  ; TaiwanInternalDispatcher::getDispatcher(TaiwanInternalPack::T)
08160716 +0x18:  test   %eax,%eax
08160718 +0x1a:  setne  %al
0816071b +0x1d:  test   %al,%al
0816071d +0x1f:  je     08160726 <+0x28>
0816071f +0x21:  mov    $0x0,%eax
08160724 +0x26:  jmp    08160742 <+0x44>
08160726 +0x28:  mov    0x8(%ebp),%eax
08160729 +0x2b:  lea    0xc(%ebp),%edx
0816072c +0x2e:  mov    %edx,0x4(%esp)
08160730 +0x32:  mov    %eax,(%esp)
08160733 +0x35:  call   081624d6 <_GLOBAL__I__ZN24TaiwanInternalDispatcherC2Ev+0x744>  ; global constructors keyed to TaiwanInternalDispatcher::TaiwanInternalDispatcher()+0x744
08160738 +0x3a:  mov    0x10(%ebp),%edx
0816073b +0x3d:  mov    %edx,(%eax)
0816073d +0x3f:  mov    $0x1,%eax
08160742 +0x44:  leave
08160743 +0x45:  ret
```

## 反编译 C

```c
// TaiwanInternalDispatcher::addDispatcher @ 0x81606fe

/* TaiwanInternalDispatcher::addDispatcher(TaiwanInternalPack::T, TaiwanInterfaceInterDispatcher*)
    */

bool __thiscall
TaiwanInternalDispatcher::addDispatcher
          (TaiwanInternalDispatcher *this,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = getDispatcher(this,param_2);
  if (iVar1 == 0) {
    puVar2 = (undefined4 *)
             std::
             map<TaiwanInternalPack::T,TaiwanInterfaceInterDispatcher*,std::less<TaiwanInternalPack::T>,std::allocator<std::pair<TaiwanInternalPack::T_const,TaiwanInterfaceInterDispatcher*>>>
             ::operator[]((map<TaiwanInternalPack::T,TaiwanInterfaceInterDispatcher*,std::less<TaiwanInternalPack::T>,std::allocator<std::pair<TaiwanInternalPack::T_const,TaiwanInterfaceInterDispatcher*>>>
                           *)this,(T *)&param_2);
    *puVar2 = param_3;
  }
  return iVar1 == 0;
}
```
