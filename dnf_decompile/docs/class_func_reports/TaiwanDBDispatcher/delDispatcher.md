# delDispatcher

`_ZN18TaiwanDBDispatcher13delDispatcherEN18TaiwanInternalPack1TE`

`TaiwanDBDispatcher::delDispatcher(TaiwanInternalPack::T)`

| 类 | 地址 |
|---|---|
| `TaiwanDBDispatcher` | `0x0815a8a0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0815a8a0  _ZN18TaiwanDBDispatcher13delDispatcherEN18TaiwanInternalPack1TE
#           TaiwanDBDispatcher::delDispatcher(TaiwanInternalPack::T)
# range [0x0815a8a0, 0x0815a8f1]
0815a8a0 +0x00:  push   %ebp
0815a8a1 +0x01:  mov    %esp,%ebp
0815a8a3 +0x03:  sub    $0x28,%esp
0815a8a6 +0x06:  mov    0xc(%ebp),%eax
0815a8a9 +0x09:  mov    %eax,0x4(%esp)
0815a8ad +0x0d:  mov    0x8(%ebp),%eax
0815a8b0 +0x10:  mov    %eax,(%esp)
0815a8b3 +0x13:  call   0815a7f6 <_ZN18TaiwanDBDispatcher13getDispatcherEN18TaiwanInternalPack1TE>  ; TaiwanDBDispatcher::getDispatcher(TaiwanInternalPack::T)
0815a8b8 +0x18:  test   %eax,%eax
0815a8ba +0x1a:  setne  %al
0815a8bd +0x1d:  test   %al,%al
0815a8bf +0x1f:  je     0815a8ef <+0x4f>
0815a8c1 +0x21:  mov    0x8(%ebp),%edx
0815a8c4 +0x24:  lea    -0xc(%ebp),%eax
0815a8c7 +0x27:  lea    0xc(%ebp),%ecx
0815a8ca +0x2a:  mov    %ecx,0x8(%esp)
0815a8ce +0x2e:  mov    %edx,0x4(%esp)
0815a8d2 +0x32:  mov    %eax,(%esp)
0815a8d5 +0x35:  call   0815e844 <_GLOBAL__I__ZN18TaiwanDBDispatcherC2Ev+0xab8>  ; global constructors keyed to TaiwanDBDispatcher::TaiwanDBDispatcher()+0xab8
0815a8da +0x3a:  sub    $0x4,%esp
0815a8dd +0x3d:  mov    0x8(%ebp),%eax
0815a8e0 +0x40:  mov    -0xc(%ebp),%edx
0815a8e3 +0x43:  mov    %edx,0x4(%esp)
0815a8e7 +0x47:  mov    %eax,(%esp)
0815a8ea +0x4a:  call   0815e988 <_GLOBAL__I__ZN18TaiwanDBDispatcherC2Ev+0xbfc>  ; global constructors keyed to TaiwanDBDispatcher::TaiwanDBDispatcher()+0xbfc
0815a8ef +0x4f:  leave
0815a8f0 +0x50:  ret
0815a8f1 +0x51:  nop
```

## 反编译 C

```c
// TaiwanDBDispatcher::delDispatcher @ 0x815a8a0

/* TaiwanDBDispatcher::delDispatcher(TaiwanInternalPack::T) */

void __thiscall TaiwanDBDispatcher::delDispatcher(TaiwanDBDispatcher *this,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_10 [3];
  
  iVar1 = getDispatcher(this,param_2);
  if (iVar1 != 0) {
    puVar2 = &param_2;
    std::
    map<TaiwanInternalPack::T,TaiwanInterfaceDBDispatcher*,std::less<TaiwanInternalPack::T>,std::allocator<std::pair<TaiwanInternalPack::T_const,TaiwanInterfaceDBDispatcher*>>>
    ::find((T *)local_10);
    std::
    map<TaiwanInternalPack::T,TaiwanInterfaceDBDispatcher*,std::less<TaiwanInternalPack::T>,std::allocator<std::pair<TaiwanInternalPack::T_const,TaiwanInterfaceDBDispatcher*>>>
    ::erase((map<TaiwanInternalPack::T,TaiwanInterfaceDBDispatcher*,std::less<TaiwanInternalPack::T>,std::allocator<std::pair<TaiwanInternalPack::T_const,TaiwanInterfaceDBDispatcher*>>>
             *)this,local_10[0],puVar2);
  }
  return;
}
```
