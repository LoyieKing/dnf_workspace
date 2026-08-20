# delDispatcher

`_ZN24TaiwanInternalDispatcher13delDispatcherEN18TaiwanInternalPack1TE`

`TaiwanInternalDispatcher::delDispatcher(TaiwanInternalPack::T)`

| 类 | 地址 |
|---|---|
| `TaiwanInternalDispatcher` | `0x08160744` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08160744  _ZN24TaiwanInternalDispatcher13delDispatcherEN18TaiwanInternalPack1TE
#           TaiwanInternalDispatcher::delDispatcher(TaiwanInternalPack::T)
# range [0x08160744, 0x08160795]
08160744 +0x00:  push   %ebp
08160745 +0x01:  mov    %esp,%ebp
08160747 +0x03:  sub    $0x28,%esp
0816074a +0x06:  mov    0xc(%ebp),%eax
0816074d +0x09:  mov    %eax,0x4(%esp)
08160751 +0x0d:  mov    0x8(%ebp),%eax
08160754 +0x10:  mov    %eax,(%esp)
08160757 +0x13:  call   0816069a <_ZN24TaiwanInternalDispatcher13getDispatcherEN18TaiwanInternalPack1TE>  ; TaiwanInternalDispatcher::getDispatcher(TaiwanInternalPack::T)
0816075c +0x18:  test   %eax,%eax
0816075e +0x1a:  setne  %al
08160761 +0x1d:  test   %al,%al
08160763 +0x1f:  je     08160793 <+0x4f>
08160765 +0x21:  mov    0x8(%ebp),%edx
08160768 +0x24:  lea    -0xc(%ebp),%eax
0816076b +0x27:  lea    0xc(%ebp),%ecx
0816076e +0x2a:  mov    %ecx,0x8(%esp)
08160772 +0x2e:  mov    %edx,0x4(%esp)
08160776 +0x32:  mov    %eax,(%esp)
08160779 +0x35:  call   08162488 <_GLOBAL__I__ZN24TaiwanInternalDispatcherC2Ev+0x6f6>  ; global constructors keyed to TaiwanInternalDispatcher::TaiwanInternalDispatcher()+0x6f6
0816077e +0x3a:  sub    $0x4,%esp
08160781 +0x3d:  mov    0x8(%ebp),%eax
08160784 +0x40:  mov    -0xc(%ebp),%edx
08160787 +0x43:  mov    %edx,0x4(%esp)
0816078b +0x47:  mov    %eax,(%esp)
0816078e +0x4a:  call   081625cc <_GLOBAL__I__ZN24TaiwanInternalDispatcherC2Ev+0x83a>  ; global constructors keyed to TaiwanInternalDispatcher::TaiwanInternalDispatcher()+0x83a
08160793 +0x4f:  leave
08160794 +0x50:  ret
08160795 +0x51:  nop
```

## 反编译 C

```c
// TaiwanInternalDispatcher::delDispatcher @ 0x8160744

/* TaiwanInternalDispatcher::delDispatcher(TaiwanInternalPack::T) */

void __thiscall
TaiwanInternalDispatcher::delDispatcher(TaiwanInternalDispatcher *this,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_10 [3];
  
  iVar1 = getDispatcher(this,param_2);
  if (iVar1 != 0) {
    puVar2 = &param_2;
    std::
    map<TaiwanInternalPack::T,TaiwanInterfaceInterDispatcher*,std::less<TaiwanInternalPack::T>,std::allocator<std::pair<TaiwanInternalPack::T_const,TaiwanInterfaceInterDispatcher*>>>
    ::find((T *)local_10);
    std::
    map<TaiwanInternalPack::T,TaiwanInterfaceInterDispatcher*,std::less<TaiwanInternalPack::T>,std::allocator<std::pair<TaiwanInternalPack::T_const,TaiwanInterfaceInterDispatcher*>>>
    ::erase((map<TaiwanInternalPack::T,TaiwanInterfaceInterDispatcher*,std::less<TaiwanInternalPack::T>,std::allocator<std::pair<TaiwanInternalPack::T_const,TaiwanInterfaceInterDispatcher*>>>
             *)this,local_10[0],puVar2);
  }
  return;
}
```
