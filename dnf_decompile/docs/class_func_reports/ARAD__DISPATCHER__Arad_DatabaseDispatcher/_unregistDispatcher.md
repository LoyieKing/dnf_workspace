# _unregistDispatcher

`_ZN4ARAD10DISPATCHER23Arad_DatabaseDispatcher19_unregistDispatcherENS_23ENUM_INTERNALPACKET_JPNE`

`ARAD::DISPATCHER::Arad_DatabaseDispatcher::_unregistDispatcher(ARAD::ENUM_INTERNALPACKET_JPN)`

| 类 | 地址 |
|---|---|
| `ARAD::DISPATCHER::Arad_DatabaseDispatcher` | `0x0818518a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0818518a  _ZN4ARAD10DISPATCHER23Arad_DatabaseDispatcher19_unregistDispatcherENS_23ENUM_INTERNALPACKET_JPNE
#           ARAD::DISPATCHER::Arad_DatabaseDispatcher::_unregistDispatcher(ARAD::ENUM_INTERNALPACKET_JPN)
# range [0x0818518a, 0x081851db]
0818518a +0x00:  push   %ebp
0818518b +0x01:  mov    %esp,%ebp
0818518d +0x03:  sub    $0x28,%esp
08185190 +0x06:  mov    0xc(%ebp),%eax
08185193 +0x09:  mov    %eax,0x4(%esp)
08185197 +0x0d:  mov    0x8(%ebp),%eax
0818519a +0x10:  mov    %eax,(%esp)
0818519d +0x13:  call   081850e0 <_ZN4ARAD10DISPATCHER23Arad_DatabaseDispatcher13GetDispatcherENS_23ENUM_INTERNALPACKET_JPNE>  ; ARAD::DISPATCHER::Arad_DatabaseDispatcher::GetDispatcher(ARAD::ENUM_INTERNALPACKET_JPN)
081851a2 +0x18:  test   %eax,%eax
081851a4 +0x1a:  setne  %al
081851a7 +0x1d:  test   %al,%al
081851a9 +0x1f:  je     081851d9 <+0x4f>
081851ab +0x21:  mov    0x8(%ebp),%edx
081851ae +0x24:  lea    -0xc(%ebp),%eax
081851b1 +0x27:  lea    0xc(%ebp),%ecx
081851b4 +0x2a:  mov    %ecx,0x8(%esp)
081851b8 +0x2e:  mov    %edx,0x4(%esp)
081851bc +0x32:  mov    %eax,(%esp)
081851bf +0x35:  call   08186d76 <_GLOBAL__I__ZN4ARAD10DISPATCHER23Arad_DatabaseDispatcherC2Ev+0x740>  ; global constructors keyed to ARAD::DISPATCHER::Arad_DatabaseDispatcher::Arad_DatabaseDispatcher()+0x740
081851c4 +0x3a:  sub    $0x4,%esp
081851c7 +0x3d:  mov    0x8(%ebp),%eax
081851ca +0x40:  mov    -0xc(%ebp),%edx
081851cd +0x43:  mov    %edx,0x4(%esp)
081851d1 +0x47:  mov    %eax,(%esp)
081851d4 +0x4a:  call   08186eba <_GLOBAL__I__ZN4ARAD10DISPATCHER23Arad_DatabaseDispatcherC2Ev+0x884>  ; global constructors keyed to ARAD::DISPATCHER::Arad_DatabaseDispatcher::Arad_DatabaseDispatcher()+0x884
081851d9 +0x4f:  leave
081851da +0x50:  ret
081851db +0x51:  nop
```

## 反编译 C

```c
// ARAD::DISPATCHER::Arad_DatabaseDispatcher::_unregistDispatcher @ 0x818518a

/* ARAD::DISPATCHER::Arad_DatabaseDispatcher::_unregistDispatcher(ARAD::ENUM_INTERNALPACKET_JPN) */

void __thiscall
ARAD::DISPATCHER::Arad_DatabaseDispatcher::_unregistDispatcher
          (Arad_DatabaseDispatcher *this,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_10 [3];
  
  iVar1 = GetDispatcher(this,param_2);
  if (iVar1 != 0) {
    puVar2 = &param_2;
    std::
    map<ARAD::ENUM_INTERNALPACKET_JPN,ARAD::DISPATCHER::Arad_IDatabaseDispatcher*,std::less<ARAD::ENUM_INTERNALPACKET_JPN>,std::allocator<std::pair<ARAD::ENUM_INTERNALPACKET_JPN_const,ARAD::DISPATCHER::Arad_IDatabaseDispatcher*>>>
    ::find((ENUM_INTERNALPACKET_JPN *)local_10);
    std::
    map<ARAD::ENUM_INTERNALPACKET_JPN,ARAD::DISPATCHER::Arad_IDatabaseDispatcher*,std::less<ARAD::ENUM_INTERNALPACKET_JPN>,std::allocator<std::pair<ARAD::ENUM_INTERNALPACKET_JPN_const,ARAD::DISPATCHER::Arad_IDatabaseDispatcher*>>>
    ::erase((map<ARAD::ENUM_INTERNALPACKET_JPN,ARAD::DISPATCHER::Arad_IDatabaseDispatcher*,std::less<ARAD::ENUM_INTERNALPACKET_JPN>,std::allocator<std::pair<ARAD::ENUM_INTERNALPACKET_JPN_const,ARAD::DISPATCHER::Arad_IDatabaseDispatcher*>>>
             *)this,local_10[0],puVar2);
  }
  return;
}
```
