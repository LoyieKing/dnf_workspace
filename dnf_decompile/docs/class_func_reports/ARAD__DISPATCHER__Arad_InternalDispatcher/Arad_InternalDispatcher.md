# Arad_InternalDispatcher

`_ZN4ARAD10DISPATCHER23Arad_InternalDispatcherC1Ev`

`ARAD::DISPATCHER::Arad_InternalDispatcher::Arad_InternalDispatcher()`

| 类 | 地址 |
|---|---|
| `ARAD::DISPATCHER::Arad_InternalDispatcher` | `0x081984d4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081984d4  _ZN4ARAD10DISPATCHER23Arad_InternalDispatcherC1Ev
#           ARAD::DISPATCHER::Arad_InternalDispatcher::Arad_InternalDispatcher()
# range [0x081984d4, 0x08198515]
081984d4 +0x00:  push   %ebp
081984d5 +0x01:  mov    %esp,%ebp
081984d7 +0x03:  push   %esi
081984d8 +0x04:  push   %ebx
081984d9 +0x05:  sub    $0x10,%esp
081984dc +0x08:  mov    0x8(%ebp),%eax
081984df +0x0b:  mov    %eax,(%esp)
081984e2 +0x0e:  call   0819a940 <_GLOBAL__I__ZN4ARAD10DISPATCHER23Arad_InternalDispatcherC2Ev+0x626>  ; global constructors keyed to ARAD::DISPATCHER::Arad_InternalDispatcher::Arad_InternalDispatcher()+0x626
081984e7 +0x13:  mov    0x8(%ebp),%eax
081984ea +0x16:  mov    %eax,(%esp)
081984ed +0x19:  call   0819a9ba <_GLOBAL__I__ZN4ARAD10DISPATCHER23Arad_InternalDispatcherC2Ev+0x6a0>  ; global constructors keyed to ARAD::DISPATCHER::Arad_InternalDispatcher::Arad_InternalDispatcher()+0x6a0
081984f2 +0x1e:  jmp    0819850f <+0x3b>
081984f4 +0x20:  mov    %edx,%ebx
081984f6 +0x22:  mov    %eax,%esi
081984f8 +0x24:  mov    0x8(%ebp),%eax
081984fb +0x27:  mov    %eax,(%esp)
081984fe +0x2a:  call   0819a92c <_GLOBAL__I__ZN4ARAD10DISPATCHER23Arad_InternalDispatcherC2Ev+0x612>  ; global constructors keyed to ARAD::DISPATCHER::Arad_InternalDispatcher::Arad_InternalDispatcher()+0x612
08198503 +0x2f:  mov    %esi,%eax
08198505 +0x31:  mov    %ebx,%edx
08198507 +0x33:  mov    %eax,(%esp)
0819850a +0x36:  call   08ae3750 <_Unwind_Resume>
0819850f +0x3b:  add    $0x10,%esp
08198512 +0x3e:  pop    %ebx
08198513 +0x3f:  pop    %esi
08198514 +0x40:  pop    %ebp
08198515 +0x41:  ret
```

## 反编译 C

```c
// ARAD::DISPATCHER::Arad_InternalDispatcher::Arad_InternalDispatcher @ 0x81984d4

/* ARAD::DISPATCHER::Arad_InternalDispatcher::Arad_InternalDispatcher() */

void __thiscall
ARAD::DISPATCHER::Arad_InternalDispatcher::Arad_InternalDispatcher(Arad_InternalDispatcher *this)

{
  std::
  map<ARAD::ENUM_INTERNALPACKET_JPN,ARAD::DISPATCHER::Arad_IInterDispatcher*,std::less<ARAD::ENUM_INTERNALPACKET_JPN>,std::allocator<std::pair<ARAD::ENUM_INTERNALPACKET_JPN_const,ARAD::DISPATCHER::Arad_IInterDispatcher*>>>
  ::map((map<ARAD::ENUM_INTERNALPACKET_JPN,ARAD::DISPATCHER::Arad_IInterDispatcher*,std::less<ARAD::ENUM_INTERNALPACKET_JPN>,std::allocator<std::pair<ARAD::ENUM_INTERNALPACKET_JPN_const,ARAD::DISPATCHER::Arad_IInterDispatcher*>>>
         *)this);
                    /* try { // try from 081984ed to 081984f1 has its CatchHandler @ 081984f4 */
  std::
  map<ARAD::ENUM_INTERNALPACKET_JPN,ARAD::DISPATCHER::Arad_IInterDispatcher*,std::less<ARAD::ENUM_INTERNALPACKET_JPN>,std::allocator<std::pair<ARAD::ENUM_INTERNALPACKET_JPN_const,ARAD::DISPATCHER::Arad_IInterDispatcher*>>>
  ::clear((map<ARAD::ENUM_INTERNALPACKET_JPN,ARAD::DISPATCHER::Arad_IInterDispatcher*,std::less<ARAD::ENUM_INTERNALPACKET_JPN>,std::allocator<std::pair<ARAD::ENUM_INTERNALPACKET_JPN_const,ARAD::DISPATCHER::Arad_IInterDispatcher*>>>
           *)this);
  return;
}
```
