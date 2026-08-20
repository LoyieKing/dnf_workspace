# ~Arad_EventPeriodDataManager

`_ZN4ARAD27Arad_EventPeriodDataManagerD1Ev`

`ARAD::Arad_EventPeriodDataManager::~Arad_EventPeriodDataManager()`

| 类 | 地址 |
|---|---|
| `ARAD::Arad_EventPeriodDataManager` | `0x08195536` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08195536  _ZN4ARAD27Arad_EventPeriodDataManagerD1Ev
#           ARAD::Arad_EventPeriodDataManager::~Arad_EventPeriodDataManager()
# range [0x08195536, 0x08195631]
08195536 +0x00:  push   %ebp
08195537 +0x01:  mov    %esp,%ebp
08195539 +0x03:  push   %esi
0819553a +0x04:  push   %ebx
0819553b +0x05:  sub    $0x10,%esp
0819553e +0x08:  mov    0x8(%ebp),%eax
08195541 +0x0b:  movl   $&_ZTVN4ARAD27Arad_EventPeriodDataManagerE+0x8,(%eax)
08195547 +0x11:  mov    0x8(%ebp),%eax
0819554a +0x14:  mov    %eax,(%esp)
0819554d +0x17:  call   08195670 <_ZN4ARAD27Arad_EventPeriodDataManager15clearScriptDataEv>  ; ARAD::Arad_EventPeriodDataManager::clearScriptData()
08195552 +0x1c:  jmp    0819556c <+0x36>
08195554 +0x1e:  mov    %edx,%ebx
08195556 +0x20:  mov    %eax,%esi
08195558 +0x22:  mov    0x8(%ebp),%eax
0819555b +0x25:  add    $0x3c,%eax
0819555e +0x28:  mov    %eax,(%esp)
08195561 +0x2b:  call   08195df4 <_GLOBAL__I__ZN4ARAD17FnRewardInterfaceclEimsj+0x1b4>  ; global constructors keyed to ARAD::FnRewardInterface::operator()(int, unsigned long, short, unsigned int)+0x1b4
08195566 +0x30:  mov    %esi,%eax
08195568 +0x32:  mov    %ebx,%edx
0819556a +0x34:  jmp    0819557c <+0x46>
0819556c +0x36:  mov    0x8(%ebp),%eax
0819556f +0x39:  add    $0x3c,%eax
08195572 +0x3c:  mov    %eax,(%esp)
08195575 +0x3f:  call   08195df4 <_GLOBAL__I__ZN4ARAD17FnRewardInterfaceclEimsj+0x1b4>  ; global constructors keyed to ARAD::FnRewardInterface::operator()(int, unsigned long, short, unsigned int)+0x1b4
0819557a +0x44:  jmp    081955aa <+0x74>
0819557c +0x46:  mov    %edx,%ebx
0819557e +0x48:  mov    %eax,%esi
08195580 +0x4a:  mov    0x8(%ebp),%eax
08195583 +0x4d:  add    $0x24,%eax
08195586 +0x50:  mov    %eax,(%esp)
08195589 +0x53:  call   080cb42e <_GLOBAL__I__ZN10BingoEventC2Ev+0x27b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x27b
0819558e +0x58:  mov    %esi,%eax
08195590 +0x5a:  mov    %ebx,%edx
08195592 +0x5c:  mov    %edx,%ebx
08195594 +0x5e:  mov    %eax,%esi
08195596 +0x60:  mov    0x8(%ebp),%eax
08195599 +0x63:  add    $0x18,%eax
0819559c +0x66:  mov    %eax,(%esp)
0819559f +0x69:  call   08195e8e <_GLOBAL__I__ZN4ARAD17FnRewardInterfaceclEimsj+0x24e>  ; global constructors keyed to ARAD::FnRewardInterface::operator()(int, unsigned long, short, unsigned int)+0x24e
081955a4 +0x6e:  mov    %esi,%eax
081955a6 +0x70:  mov    %ebx,%edx
081955a8 +0x72:  jmp    081955c8 <+0x92>
081955aa +0x74:  mov    0x8(%ebp),%eax
081955ad +0x77:  add    $0x24,%eax
081955b0 +0x7a:  mov    %eax,(%esp)
081955b3 +0x7d:  call   080cb42e <_GLOBAL__I__ZN10BingoEventC2Ev+0x27b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x27b
081955b8 +0x82:  mov    0x8(%ebp),%eax
081955bb +0x85:  add    $0x18,%eax
081955be +0x88:  mov    %eax,(%esp)
081955c1 +0x8b:  call   08195e8e <_GLOBAL__I__ZN4ARAD17FnRewardInterfaceclEimsj+0x24e>  ; global constructors keyed to ARAD::FnRewardInterface::operator()(int, unsigned long, short, unsigned int)+0x24e
081955c6 +0x90:  jmp    081955e0 <+0xaa>
081955c8 +0x92:  mov    %edx,%ebx
081955ca +0x94:  mov    %eax,%esi
081955cc +0x96:  mov    0x8(%ebp),%eax
081955cf +0x99:  add    $0xc,%eax
081955d2 +0x9c:  mov    %eax,(%esp)
081955d5 +0x9f:  call   08195e1c <_GLOBAL__I__ZN4ARAD17FnRewardInterfaceclEimsj+0x1dc>  ; global constructors keyed to ARAD::FnRewardInterface::operator()(int, unsigned long, short, unsigned int)+0x1dc
081955da +0xa4:  mov    %esi,%eax
081955dc +0xa6:  mov    %ebx,%edx
081955de +0xa8:  jmp    081955f0 <+0xba>
081955e0 +0xaa:  mov    0x8(%ebp),%eax
081955e3 +0xad:  add    $0xc,%eax
081955e6 +0xb0:  mov    %eax,(%esp)
081955e9 +0xb3:  call   08195e1c <_GLOBAL__I__ZN4ARAD17FnRewardInterfaceclEimsj+0x1dc>  ; global constructors keyed to ARAD::FnRewardInterface::operator()(int, unsigned long, short, unsigned int)+0x1dc
081955ee +0xb8:  jmp    0819560b <+0xd5>
081955f0 +0xba:  mov    %edx,%ebx
081955f2 +0xbc:  mov    %eax,%esi
081955f4 +0xbe:  mov    0x8(%ebp),%eax
081955f7 +0xc1:  mov    %eax,(%esp)
081955fa +0xc4:  call   08195c82 <_GLOBAL__I__ZN4ARAD17FnRewardInterfaceclEimsj+0x42>  ; global constructors keyed to ARAD::FnRewardInterface::operator()(int, unsigned long, short, unsigned int)+0x42
081955ff +0xc9:  mov    %esi,%eax
08195601 +0xcb:  mov    %ebx,%edx
08195603 +0xcd:  mov    %eax,(%esp)
08195606 +0xd0:  call   08ae3750 <_Unwind_Resume>
0819560b +0xd5:  mov    0x8(%ebp),%eax
0819560e +0xd8:  mov    %eax,(%esp)
08195611 +0xdb:  call   08195c82 <_GLOBAL__I__ZN4ARAD17FnRewardInterfaceclEimsj+0x42>  ; global constructors keyed to ARAD::FnRewardInterface::operator()(int, unsigned long, short, unsigned int)+0x42
08195616 +0xe0:  mov    $0x0,%eax
0819561b +0xe5:  test   %al,%al
0819561d +0xe7:  je     0819562a <+0xf4>
0819561f +0xe9:  mov    0x8(%ebp),%eax
08195622 +0xec:  mov    %eax,(%esp)
08195625 +0xef:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0819562a +0xf4:  add    $0x10,%esp
0819562d +0xf7:  pop    %ebx
0819562e +0xf8:  pop    %esi
0819562f +0xf9:  pop    %ebp
08195630 +0xfa:  ret
08195631 +0xfb:  nop
```

## 反编译 C

```c
// ARAD::Arad_EventPeriodDataManager::~Arad_EventPeriodDataManager @ 0x8195536

/* WARNING: Removing unreachable block (ram,0x0819561f) */
/* ARAD::Arad_EventPeriodDataManager::~Arad_EventPeriodDataManager() */

void __thiscall
ARAD::Arad_EventPeriodDataManager::~Arad_EventPeriodDataManager(Arad_EventPeriodDataManager *this)

{
  *(undefined ***)this = &PTR__Arad_EventPeriodDataManager_08b9ca40;
                    /* try { // try from 0819554d to 08195551 has its CatchHandler @ 08195554 */
  clearScriptData(this);
                    /* try { // try from 08195575 to 08195579 has its CatchHandler @ 0819557c */
  std::list<ARAD::EventRewardItemArad,std::allocator<ARAD::EventRewardItemArad>>::~list
            ((list<ARAD::EventRewardItemArad,std::allocator<ARAD::EventRewardItemArad>> *)
             (this + 0x3c));
  Mutex::~Mutex((Mutex *)(this + 0x24));
                    /* try { // try from 081955c1 to 081955c5 has its CatchHandler @ 081955c8 */
  std::vector<ARAD::SCRIPT::SRewardPeriodData,std::allocator<ARAD::SCRIPT::SRewardPeriodData>>::
  ~vector((vector<ARAD::SCRIPT::SRewardPeriodData,std::allocator<ARAD::SCRIPT::SRewardPeriodData>> *
          )(this + 0x18));
                    /* try { // try from 081955e9 to 081955ed has its CatchHandler @ 081955f0 */
  std::vector<ARAD::SCRIPT::SEventPeriodData,std::allocator<ARAD::SCRIPT::SEventPeriodData>>::
  ~vector((vector<ARAD::SCRIPT::SEventPeriodData,std::allocator<ARAD::SCRIPT::SEventPeriodData>> *)
          (this + 0xc));
  Arad_InterfaceGameScript::~Arad_InterfaceGameScript((Arad_InterfaceGameScript *)this);
  return;
}
```
