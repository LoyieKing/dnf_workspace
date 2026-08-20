# ~CQuestShop

`_ZN10CQuestShopD1Ev`

`CQuestShop::~CQuestShop()`

| 类 | 地址 |
|---|---|
| `CQuestShop` | `0x085eec60` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085eec60  _ZN10CQuestShopD1Ev
#           CQuestShop::~CQuestShop()
# range [0x085eec60, 0x085eece9]
085eec60 +0x00:  push   %ebp
085eec61 +0x01:  mov    %esp,%ebp
085eec63 +0x03:  push   %esi
085eec64 +0x04:  push   %ebx
085eec65 +0x05:  sub    $0x10,%esp
085eec68 +0x08:  mov    0x8(%ebp),%eax
085eec6b +0x0b:  movl   $&_ZTV10CQuestShop+0x8,(%eax)
085eec71 +0x11:  mov    0x8(%ebp),%eax
085eec74 +0x14:  add    $0x20,%eax
085eec77 +0x17:  mov    %eax,(%esp)
085eec7a +0x1a:  call   0837176e <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xb73a>  ; global constructors keyed to CServerEvent::m_nExpRate+0xb73a
085eec7f +0x1f:  jmp    085eec99 <+0x39>
085eec81 +0x21:  mov    %edx,%ebx
085eec83 +0x23:  mov    %eax,%esi
085eec85 +0x25:  mov    0x8(%ebp),%eax
085eec88 +0x28:  add    $0x8,%eax
085eec8b +0x2b:  mov    %eax,(%esp)
085eec8e +0x2e:  call   0837176e <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xb73a>  ; global constructors keyed to CServerEvent::m_nExpRate+0xb73a
085eec93 +0x33:  mov    %esi,%eax
085eec95 +0x35:  mov    %ebx,%edx
085eec97 +0x37:  jmp    085eeca9 <+0x49>
085eec99 +0x39:  mov    0x8(%ebp),%eax
085eec9c +0x3c:  add    $0x8,%eax
085eec9f +0x3f:  mov    %eax,(%esp)
085eeca2 +0x42:  call   0837176e <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xb73a>  ; global constructors keyed to CServerEvent::m_nExpRate+0xb73a
085eeca7 +0x47:  jmp    085eecc4 <+0x64>
085eeca9 +0x49:  mov    %edx,%ebx
085eecab +0x4b:  mov    %eax,%esi
085eecad +0x4d:  mov    0x8(%ebp),%eax
085eecb0 +0x50:  mov    %eax,(%esp)
085eecb3 +0x53:  call   080c8be2 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x3a>  ; global constructors keyed to BestClearTime::BestClearTime()+0x3a
085eecb8 +0x58:  mov    %esi,%eax
085eecba +0x5a:  mov    %ebx,%edx
085eecbc +0x5c:  mov    %eax,(%esp)
085eecbf +0x5f:  call   08ae3750 <_Unwind_Resume>
085eecc4 +0x64:  mov    0x8(%ebp),%eax
085eecc7 +0x67:  mov    %eax,(%esp)
085eecca +0x6a:  call   080c8be2 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x3a>  ; global constructors keyed to BestClearTime::BestClearTime()+0x3a
085eeccf +0x6f:  mov    $0x0,%eax
085eecd4 +0x74:  test   %al,%al
085eecd6 +0x76:  je     085eece3 <+0x83>
085eecd8 +0x78:  mov    0x8(%ebp),%eax
085eecdb +0x7b:  mov    %eax,(%esp)
085eecde +0x7e:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
085eece3 +0x83:  add    $0x10,%esp
085eece6 +0x86:  pop    %ebx
085eece7 +0x87:  pop    %esi
085eece8 +0x88:  pop    %ebp
085eece9 +0x89:  ret
```

## 反编译 C

```c
// CQuestShop::~CQuestShop @ 0x85eec60

/* WARNING: Removing unreachable block (ram,0x085eecd8) */
/* CQuestShop::~CQuestShop() */

void __thiscall CQuestShop::~CQuestShop(CQuestShop *this)

{
  *(undefined ***)this = &PTR_ResetDailyMidnight_08ccffa8;
                    /* try { // try from 085eec7a to 085eec7e has its CatchHandler @ 085eec81 */
  std::
  map<unsigned_char,short,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,short>>>
  ::~map((map<unsigned_char,short,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,short>>>
          *)(this + 0x20));
                    /* try { // try from 085eeca2 to 085eeca6 has its CatchHandler @ 085eeca9 */
  std::
  map<unsigned_char,short,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,short>>>
  ::~map((map<unsigned_char,short,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,short>>>
          *)(this + 8));
  charac_expand::CData::~CData((CData *)this);
  return;
}
```
