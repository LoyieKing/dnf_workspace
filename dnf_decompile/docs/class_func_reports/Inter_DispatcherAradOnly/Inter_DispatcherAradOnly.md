# Inter_DispatcherAradOnly

`_ZN24Inter_DispatcherAradOnlyC1Ev`

`Inter_DispatcherAradOnly::Inter_DispatcherAradOnly()`

| 类 | 地址 |
|---|---|
| `Inter_DispatcherAradOnly` | `0x084e7eb8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084e7eb8  _ZN24Inter_DispatcherAradOnlyC1Ev
#           Inter_DispatcherAradOnly::Inter_DispatcherAradOnly()
# range [0x084e7eb8, 0x084e7f2b]
084e7eb8 +0x00:  push   %ebp
084e7eb9 +0x01:  mov    %esp,%ebp
084e7ebb +0x03:  push   %esi
084e7ebc +0x04:  push   %ebx
084e7ebd +0x05:  sub    $0x10,%esp
084e7ec0 +0x08:  mov    0x8(%ebp),%eax
084e7ec3 +0x0b:  mov    %eax,(%esp)
084e7ec6 +0x0e:  call   084e9b00 <_GLOBAL__I__Z7getUserj+0xab2>  ; global constructors keyed to getUser(unsigned int)+0xab2
084e7ecb +0x13:  mov    0x8(%ebp),%eax
084e7ece +0x16:  movl   $&_ZTV24Inter_DispatcherAradOnly+0x8,(%eax)
084e7ed4 +0x1c:  mov    0x8(%ebp),%eax
084e7ed7 +0x1f:  add    $0x4,%eax
084e7eda +0x22:  mov    %eax,(%esp)
084e7edd +0x25:  call   081984d4 <_ZN4ARAD10DISPATCHER23Arad_InternalDispatcherC1Ev>  ; ARAD::DISPATCHER::Arad_InternalDispatcher::Arad_InternalDispatcher()
084e7ee2 +0x2a:  mov    0x8(%ebp),%eax
084e7ee5 +0x2d:  add    $0x4,%eax
084e7ee8 +0x30:  mov    %eax,(%esp)
084e7eeb +0x33:  call   08198598 <_ZN4ARAD10DISPATCHER23Arad_InternalDispatcher4InitEv>  ; ARAD::DISPATCHER::Arad_InternalDispatcher::Init()
084e7ef0 +0x38:  jmp    084e7f25 <+0x6d>
084e7ef2 +0x3a:  mov    %edx,%ebx
084e7ef4 +0x3c:  mov    %eax,%esi
084e7ef6 +0x3e:  mov    0x8(%ebp),%eax
084e7ef9 +0x41:  add    $0x4,%eax
084e7efc +0x44:  mov    %eax,(%esp)
084e7eff +0x47:  call   08198516 <_ZN4ARAD10DISPATCHER23Arad_InternalDispatcherD1Ev>  ; ARAD::DISPATCHER::Arad_InternalDispatcher::~Arad_InternalDispatcher()
084e7f04 +0x4c:  mov    %esi,%eax
084e7f06 +0x4e:  mov    %ebx,%edx
084e7f08 +0x50:  jmp    084e7f0a <+0x52>
084e7f0a +0x52:  mov    %edx,%ebx
084e7f0c +0x54:  mov    %eax,%esi
084e7f0e +0x56:  mov    0x8(%ebp),%eax
084e7f11 +0x59:  mov    %eax,(%esp)
084e7f14 +0x5c:  call   080e23bc <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x162>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x162
084e7f19 +0x61:  mov    %esi,%eax
084e7f1b +0x63:  mov    %ebx,%edx
084e7f1d +0x65:  mov    %eax,(%esp)
084e7f20 +0x68:  call   08ae3750 <_Unwind_Resume>
084e7f25 +0x6d:  add    $0x10,%esp
084e7f28 +0x70:  pop    %ebx
084e7f29 +0x71:  pop    %esi
084e7f2a +0x72:  pop    %ebp
084e7f2b +0x73:  ret
```

## 反编译 C

```c
// Inter_DispatcherAradOnly::Inter_DispatcherAradOnly @ 0x84e7eb8

/* Inter_DispatcherAradOnly::Inter_DispatcherAradOnly() */

void __thiscall Inter_DispatcherAradOnly::Inter_DispatcherAradOnly(Inter_DispatcherAradOnly *this)

{
  ISigDispatcher::ISigDispatcher((ISigDispatcher *)this);
  *(undefined ***)this = &PTR_dispatch_sig_08c8e410;
                    /* try { // try from 084e7edd to 084e7ee1 has its CatchHandler @ 084e7f0a */
  ARAD::DISPATCHER::Arad_InternalDispatcher::Arad_InternalDispatcher
            ((Arad_InternalDispatcher *)(this + 4));
                    /* try { // try from 084e7eeb to 084e7eef has its CatchHandler @ 084e7ef2 */
  ARAD::DISPATCHER::Arad_InternalDispatcher::Init((Arad_InternalDispatcher *)(this + 4));
  return;
}
```
