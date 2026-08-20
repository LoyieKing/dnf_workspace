# ~Arad_DatabaseDispatcher

`_ZN4ARAD10DISPATCHER23Arad_DatabaseDispatcherD1Ev`

`ARAD::DISPATCHER::Arad_DatabaseDispatcher::~Arad_DatabaseDispatcher()`

| 类 | 地址 |
|---|---|
| `ARAD::DISPATCHER::Arad_DatabaseDispatcher` | `0x08184cbe` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08184cbe  _ZN4ARAD10DISPATCHER23Arad_DatabaseDispatcherD1Ev
#           ARAD::DISPATCHER::Arad_DatabaseDispatcher::~Arad_DatabaseDispatcher()
# range [0x08184cbe, 0x08184d3b]
08184cbe +0x00:  push   %ebp
08184cbf +0x01:  mov    %esp,%ebp
08184cc1 +0x03:  push   %esi
08184cc2 +0x04:  push   %ebx
08184cc3 +0x05:  sub    $0x20,%esp
08184cc6 +0x08:  mov    0x8(%ebp),%edx
08184cc9 +0x0b:  lea    -0x10(%ebp),%eax
08184ccc +0x0e:  mov    %edx,0x4(%esp)
08184cd0 +0x12:  mov    %eax,(%esp)
08184cd3 +0x15:  call   08186d00 <_GLOBAL__I__ZN4ARAD10DISPATCHER23Arad_DatabaseDispatcherC2Ev+0x6ca>  ; global constructors keyed to ARAD::DISPATCHER::Arad_DatabaseDispatcher::Arad_DatabaseDispatcher()+0x6ca
08184cd8 +0x1a:  sub    $0x4,%esp
08184cdb +0x1d:  mov    0x8(%ebp),%edx
08184cde +0x20:  lea    -0xc(%ebp),%eax
08184ce1 +0x23:  mov    %edx,0x4(%esp)
08184ce5 +0x27:  mov    %eax,(%esp)
08184ce8 +0x2a:  call   08186cda <_GLOBAL__I__ZN4ARAD10DISPATCHER23Arad_DatabaseDispatcherC2Ev+0x6a4>  ; global constructors keyed to ARAD::DISPATCHER::Arad_DatabaseDispatcher::Arad_DatabaseDispatcher()+0x6a4
08184ced +0x2f:  sub    $0x4,%esp
08184cf0 +0x32:  lea    -0x11(%ebp),%eax
08184cf3 +0x35:  mov    %bl,0xc(%esp)
08184cf7 +0x39:  mov    -0x10(%ebp),%edx
08184cfa +0x3c:  mov    %edx,0x8(%esp)
08184cfe +0x40:  mov    -0xc(%ebp),%edx
08184d01 +0x43:  mov    %edx,0x4(%esp)
08184d05 +0x47:  mov    %eax,(%esp)
08184d08 +0x4a:  call   08186d25 <_GLOBAL__I__ZN4ARAD10DISPATCHER23Arad_DatabaseDispatcherC2Ev+0x6ef>  ; global constructors keyed to ARAD::DISPATCHER::Arad_DatabaseDispatcher::Arad_DatabaseDispatcher()+0x6ef
08184d0d +0x4f:  sub    $0x4,%esp
08184d10 +0x52:  mov    0x8(%ebp),%eax
08184d13 +0x55:  mov    %eax,(%esp)
08184d16 +0x58:  call   08186c38 <_GLOBAL__I__ZN4ARAD10DISPATCHER23Arad_DatabaseDispatcherC2Ev+0x602>  ; global constructors keyed to ARAD::DISPATCHER::Arad_DatabaseDispatcher::Arad_DatabaseDispatcher()+0x602
08184d1b +0x5d:  lea    -0x8(%ebp),%esp
08184d1e +0x60:  add    $0x0,%esp
08184d21 +0x63:  pop    %ebx
08184d22 +0x64:  pop    %esi
08184d23 +0x65:  pop    %ebp
08184d24 +0x66:  ret
08184d25 +0x67:  mov    %edx,%ebx
08184d27 +0x69:  mov    %eax,%esi
08184d29 +0x6b:  mov    0x8(%ebp),%eax
08184d2c +0x6e:  mov    %eax,(%esp)
08184d2f +0x71:  call   08186c38 <_GLOBAL__I__ZN4ARAD10DISPATCHER23Arad_DatabaseDispatcherC2Ev+0x602>  ; global constructors keyed to ARAD::DISPATCHER::Arad_DatabaseDispatcher::Arad_DatabaseDispatcher()+0x602
08184d34 +0x76:  mov    %esi,%eax
08184d36 +0x78:  mov    %ebx,%edx
08184d38 +0x7a:  mov    %eax,(%esp)
08184d3b +0x7d:  call   08ae3750 <_Unwind_Resume>
```

## 反编译 C

```c
// ARAD::DISPATCHER::Arad_DatabaseDispatcher::~Arad_DatabaseDispatcher @ 0x8184cbe

/* ARAD::DISPATCHER::Arad_DatabaseDispatcher::~Arad_DatabaseDispatcher() */

void __thiscall
ARAD::DISPATCHER::Arad_DatabaseDispatcher::~Arad_DatabaseDispatcher(Arad_DatabaseDispatcher *this)

{
  undefined1 local_15;
  undefined4 local_14;
  undefined4 local_10;
  
                    /* try { // try from 08184cd3 to 08184d0c has its CatchHandler @ 08184d25 */
  std::
  map<ARAD::ENUM_INTERNALPACKET_JPN,ARAD::DISPATCHER::Arad_IDatabaseDispatcher*,std::less<ARAD::ENUM_INTERNALPACKET_JPN>,std::allocator<std::pair<ARAD::ENUM_INTERNALPACKET_JPN_const,ARAD::DISPATCHER::Arad_IDatabaseDispatcher*>>>
  ::end((map<ARAD::ENUM_INTERNALPACKET_JPN,ARAD::DISPATCHER::Arad_IDatabaseDispatcher*,std::less<ARAD::ENUM_INTERNALPACKET_JPN>,std::allocator<std::pair<ARAD::ENUM_INTERNALPACKET_JPN_const,ARAD::DISPATCHER::Arad_IDatabaseDispatcher*>>>
         *)&local_14);
  std::
  map<ARAD::ENUM_INTERNALPACKET_JPN,ARAD::DISPATCHER::Arad_IDatabaseDispatcher*,std::less<ARAD::ENUM_INTERNALPACKET_JPN>,std::allocator<std::pair<ARAD::ENUM_INTERNALPACKET_JPN_const,ARAD::DISPATCHER::Arad_IDatabaseDispatcher*>>>
  ::begin((map<ARAD::ENUM_INTERNALPACKET_JPN,ARAD::DISPATCHER::Arad_IDatabaseDispatcher*,std::less<ARAD::ENUM_INTERNALPACKET_JPN>,std::allocator<std::pair<ARAD::ENUM_INTERNALPACKET_JPN_const,ARAD::DISPATCHER::Arad_IDatabaseDispatcher*>>>
           *)&local_10);
  std::
  for_each<std::_Rb_tree_iterator<std::pair<ARAD::ENUM_INTERNALPACKET_JPN_const,ARAD::DISPATCHER::Arad_IDatabaseDispatcher*>>,ARAD::DISPATCHER::Arad_DatabaseDispatcher::DeleteDispatcher>
            (&local_15,local_10,local_14);
  std::
  map<ARAD::ENUM_INTERNALPACKET_JPN,ARAD::DISPATCHER::Arad_IDatabaseDispatcher*,std::less<ARAD::ENUM_INTERNALPACKET_JPN>,std::allocator<std::pair<ARAD::ENUM_INTERNALPACKET_JPN_const,ARAD::DISPATCHER::Arad_IDatabaseDispatcher*>>>
  ::~map((map<ARAD::ENUM_INTERNALPACKET_JPN,ARAD::DISPATCHER::Arad_IDatabaseDispatcher*,std::less<ARAD::ENUM_INTERNALPACKET_JPN>,std::allocator<std::pair<ARAD::ENUM_INTERNALPACKET_JPN_const,ARAD::DISPATCHER::Arad_IDatabaseDispatcher*>>>
          *)this);
  return;
}
```
