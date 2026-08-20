# Arad_DatabaseDispatcher

`_ZN4ARAD10DISPATCHER23Arad_DatabaseDispatcherC1Ev`

`ARAD::DISPATCHER::Arad_DatabaseDispatcher::Arad_DatabaseDispatcher()`

| 类 | 地址 |
|---|---|
| `ARAD::DISPATCHER::Arad_DatabaseDispatcher` | `0x08184c7c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08184c7c  _ZN4ARAD10DISPATCHER23Arad_DatabaseDispatcherC1Ev
#           ARAD::DISPATCHER::Arad_DatabaseDispatcher::Arad_DatabaseDispatcher()
# range [0x08184c7c, 0x08184cbd]
08184c7c +0x00:  push   %ebp
08184c7d +0x01:  mov    %esp,%ebp
08184c7f +0x03:  push   %esi
08184c80 +0x04:  push   %ebx
08184c81 +0x05:  sub    $0x10,%esp
08184c84 +0x08:  mov    0x8(%ebp),%eax
08184c87 +0x0b:  mov    %eax,(%esp)
08184c8a +0x0e:  call   08186c4c <_GLOBAL__I__ZN4ARAD10DISPATCHER23Arad_DatabaseDispatcherC2Ev+0x616>  ; global constructors keyed to ARAD::DISPATCHER::Arad_DatabaseDispatcher::Arad_DatabaseDispatcher()+0x616
08184c8f +0x13:  mov    0x8(%ebp),%eax
08184c92 +0x16:  mov    %eax,(%esp)
08184c95 +0x19:  call   08186cc6 <_GLOBAL__I__ZN4ARAD10DISPATCHER23Arad_DatabaseDispatcherC2Ev+0x690>  ; global constructors keyed to ARAD::DISPATCHER::Arad_DatabaseDispatcher::Arad_DatabaseDispatcher()+0x690
08184c9a +0x1e:  jmp    08184cb7 <+0x3b>
08184c9c +0x20:  mov    %edx,%ebx
08184c9e +0x22:  mov    %eax,%esi
08184ca0 +0x24:  mov    0x8(%ebp),%eax
08184ca3 +0x27:  mov    %eax,(%esp)
08184ca6 +0x2a:  call   08186c38 <_GLOBAL__I__ZN4ARAD10DISPATCHER23Arad_DatabaseDispatcherC2Ev+0x602>  ; global constructors keyed to ARAD::DISPATCHER::Arad_DatabaseDispatcher::Arad_DatabaseDispatcher()+0x602
08184cab +0x2f:  mov    %esi,%eax
08184cad +0x31:  mov    %ebx,%edx
08184caf +0x33:  mov    %eax,(%esp)
08184cb2 +0x36:  call   08ae3750 <_Unwind_Resume>
08184cb7 +0x3b:  add    $0x10,%esp
08184cba +0x3e:  pop    %ebx
08184cbb +0x3f:  pop    %esi
08184cbc +0x40:  pop    %ebp
08184cbd +0x41:  ret
```

## 反编译 C

```c
// ARAD::DISPATCHER::Arad_DatabaseDispatcher::Arad_DatabaseDispatcher @ 0x8184c7c

/* ARAD::DISPATCHER::Arad_DatabaseDispatcher::Arad_DatabaseDispatcher() */

void __thiscall
ARAD::DISPATCHER::Arad_DatabaseDispatcher::Arad_DatabaseDispatcher(Arad_DatabaseDispatcher *this)

{
  std::
  map<ARAD::ENUM_INTERNALPACKET_JPN,ARAD::DISPATCHER::Arad_IDatabaseDispatcher*,std::less<ARAD::ENUM_INTERNALPACKET_JPN>,std::allocator<std::pair<ARAD::ENUM_INTERNALPACKET_JPN_const,ARAD::DISPATCHER::Arad_IDatabaseDispatcher*>>>
  ::map((map<ARAD::ENUM_INTERNALPACKET_JPN,ARAD::DISPATCHER::Arad_IDatabaseDispatcher*,std::less<ARAD::ENUM_INTERNALPACKET_JPN>,std::allocator<std::pair<ARAD::ENUM_INTERNALPACKET_JPN_const,ARAD::DISPATCHER::Arad_IDatabaseDispatcher*>>>
         *)this);
                    /* try { // try from 08184c95 to 08184c99 has its CatchHandler @ 08184c9c */
  std::
  map<ARAD::ENUM_INTERNALPACKET_JPN,ARAD::DISPATCHER::Arad_IDatabaseDispatcher*,std::less<ARAD::ENUM_INTERNALPACKET_JPN>,std::allocator<std::pair<ARAD::ENUM_INTERNALPACKET_JPN_const,ARAD::DISPATCHER::Arad_IDatabaseDispatcher*>>>
  ::clear((map<ARAD::ENUM_INTERNALPACKET_JPN,ARAD::DISPATCHER::Arad_IDatabaseDispatcher*,std::less<ARAD::ENUM_INTERNALPACKET_JPN>,std::allocator<std::pair<ARAD::ENUM_INTERNALPACKET_JPN_const,ARAD::DISPATCHER::Arad_IDatabaseDispatcher*>>>
           *)this);
  return;
}
```
