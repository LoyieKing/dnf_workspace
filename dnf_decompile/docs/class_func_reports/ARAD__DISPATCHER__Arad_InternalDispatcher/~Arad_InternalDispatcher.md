# ~Arad_InternalDispatcher

`_ZN4ARAD10DISPATCHER23Arad_InternalDispatcherD1Ev`

`ARAD::DISPATCHER::Arad_InternalDispatcher::~Arad_InternalDispatcher()`

| 类 | 地址 |
|---|---|
| `ARAD::DISPATCHER::Arad_InternalDispatcher` | `0x08198516` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08198516  _ZN4ARAD10DISPATCHER23Arad_InternalDispatcherD1Ev
#           ARAD::DISPATCHER::Arad_InternalDispatcher::~Arad_InternalDispatcher()
# range [0x08198516, 0x08198593]
08198516 +0x00:  push   %ebp
08198517 +0x01:  mov    %esp,%ebp
08198519 +0x03:  push   %esi
0819851a +0x04:  push   %ebx
0819851b +0x05:  sub    $0x20,%esp
0819851e +0x08:  mov    0x8(%ebp),%edx
08198521 +0x0b:  lea    -0x10(%ebp),%eax
08198524 +0x0e:  mov    %edx,0x4(%esp)
08198528 +0x12:  mov    %eax,(%esp)
0819852b +0x15:  call   0819a9f4 <_GLOBAL__I__ZN4ARAD10DISPATCHER23Arad_InternalDispatcherC2Ev+0x6da>  ; global constructors keyed to ARAD::DISPATCHER::Arad_InternalDispatcher::Arad_InternalDispatcher()+0x6da
08198530 +0x1a:  sub    $0x4,%esp
08198533 +0x1d:  mov    0x8(%ebp),%edx
08198536 +0x20:  lea    -0xc(%ebp),%eax
08198539 +0x23:  mov    %edx,0x4(%esp)
0819853d +0x27:  mov    %eax,(%esp)
08198540 +0x2a:  call   0819a9ce <_GLOBAL__I__ZN4ARAD10DISPATCHER23Arad_InternalDispatcherC2Ev+0x6b4>  ; global constructors keyed to ARAD::DISPATCHER::Arad_InternalDispatcher::Arad_InternalDispatcher()+0x6b4
08198545 +0x2f:  sub    $0x4,%esp
08198548 +0x32:  lea    -0x11(%ebp),%eax
0819854b +0x35:  mov    %bl,0xc(%esp)
0819854f +0x39:  mov    -0x10(%ebp),%edx
08198552 +0x3c:  mov    %edx,0x8(%esp)
08198556 +0x40:  mov    -0xc(%ebp),%edx
08198559 +0x43:  mov    %edx,0x4(%esp)
0819855d +0x47:  mov    %eax,(%esp)
08198560 +0x4a:  call   0819aa19 <_GLOBAL__I__ZN4ARAD10DISPATCHER23Arad_InternalDispatcherC2Ev+0x6ff>  ; global constructors keyed to ARAD::DISPATCHER::Arad_InternalDispatcher::Arad_InternalDispatcher()+0x6ff
08198565 +0x4f:  sub    $0x4,%esp
08198568 +0x52:  mov    0x8(%ebp),%eax
0819856b +0x55:  mov    %eax,(%esp)
0819856e +0x58:  call   0819a92c <_GLOBAL__I__ZN4ARAD10DISPATCHER23Arad_InternalDispatcherC2Ev+0x612>  ; global constructors keyed to ARAD::DISPATCHER::Arad_InternalDispatcher::Arad_InternalDispatcher()+0x612
08198573 +0x5d:  lea    -0x8(%ebp),%esp
08198576 +0x60:  add    $0x0,%esp
08198579 +0x63:  pop    %ebx
0819857a +0x64:  pop    %esi
0819857b +0x65:  pop    %ebp
0819857c +0x66:  ret
0819857d +0x67:  mov    %edx,%ebx
0819857f +0x69:  mov    %eax,%esi
08198581 +0x6b:  mov    0x8(%ebp),%eax
08198584 +0x6e:  mov    %eax,(%esp)
08198587 +0x71:  call   0819a92c <_GLOBAL__I__ZN4ARAD10DISPATCHER23Arad_InternalDispatcherC2Ev+0x612>  ; global constructors keyed to ARAD::DISPATCHER::Arad_InternalDispatcher::Arad_InternalDispatcher()+0x612
0819858c +0x76:  mov    %esi,%eax
0819858e +0x78:  mov    %ebx,%edx
08198590 +0x7a:  mov    %eax,(%esp)
08198593 +0x7d:  call   08ae3750 <_Unwind_Resume>
```

## 反编译 C

```c
// ARAD::DISPATCHER::Arad_InternalDispatcher::~Arad_InternalDispatcher @ 0x8198516

/* ARAD::DISPATCHER::Arad_InternalDispatcher::~Arad_InternalDispatcher() */

void __thiscall
ARAD::DISPATCHER::Arad_InternalDispatcher::~Arad_InternalDispatcher(Arad_InternalDispatcher *this)

{
  undefined1 local_15;
  undefined4 local_14;
  undefined4 local_10;
  
                    /* try { // try from 0819852b to 08198564 has its CatchHandler @ 0819857d */
  std::
  map<ARAD::ENUM_INTERNALPACKET_JPN,ARAD::DISPATCHER::Arad_IInterDispatcher*,std::less<ARAD::ENUM_INTERNALPACKET_JPN>,std::allocator<std::pair<ARAD::ENUM_INTERNALPACKET_JPN_const,ARAD::DISPATCHER::Arad_IInterDispatcher*>>>
  ::end((map<ARAD::ENUM_INTERNALPACKET_JPN,ARAD::DISPATCHER::Arad_IInterDispatcher*,std::less<ARAD::ENUM_INTERNALPACKET_JPN>,std::allocator<std::pair<ARAD::ENUM_INTERNALPACKET_JPN_const,ARAD::DISPATCHER::Arad_IInterDispatcher*>>>
         *)&local_14);
  std::
  map<ARAD::ENUM_INTERNALPACKET_JPN,ARAD::DISPATCHER::Arad_IInterDispatcher*,std::less<ARAD::ENUM_INTERNALPACKET_JPN>,std::allocator<std::pair<ARAD::ENUM_INTERNALPACKET_JPN_const,ARAD::DISPATCHER::Arad_IInterDispatcher*>>>
  ::begin((map<ARAD::ENUM_INTERNALPACKET_JPN,ARAD::DISPATCHER::Arad_IInterDispatcher*,std::less<ARAD::ENUM_INTERNALPACKET_JPN>,std::allocator<std::pair<ARAD::ENUM_INTERNALPACKET_JPN_const,ARAD::DISPATCHER::Arad_IInterDispatcher*>>>
           *)&local_10);
  std::
  for_each<std::_Rb_tree_iterator<std::pair<ARAD::ENUM_INTERNALPACKET_JPN_const,ARAD::DISPATCHER::Arad_IInterDispatcher*>>,ARAD::DISPATCHER::Arad_InternalDispatcher::DeleteDispatcher>
            (&local_15,local_10,local_14);
  std::
  map<ARAD::ENUM_INTERNALPACKET_JPN,ARAD::DISPATCHER::Arad_IInterDispatcher*,std::less<ARAD::ENUM_INTERNALPACKET_JPN>,std::allocator<std::pair<ARAD::ENUM_INTERNALPACKET_JPN_const,ARAD::DISPATCHER::Arad_IInterDispatcher*>>>
  ::~map((map<ARAD::ENUM_INTERNALPACKET_JPN,ARAD::DISPATCHER::Arad_IInterDispatcher*,std::less<ARAD::ENUM_INTERNALPACKET_JPN>,std::allocator<std::pair<ARAD::ENUM_INTERNALPACKET_JPN_const,ARAD::DISPATCHER::Arad_IInterDispatcher*>>>
          *)this);
  return;
}
```
