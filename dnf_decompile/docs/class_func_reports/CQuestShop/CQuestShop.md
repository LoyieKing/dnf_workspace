# CQuestShop

`_ZN10CQuestShopC1Ev`

`CQuestShop::CQuestShop()`

| 类 | 地址 |
|---|---|
| `CQuestShop` | `0x085eebc8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085eebc8  _ZN10CQuestShopC1Ev
#           CQuestShop::CQuestShop()
# range [0x085eebc8, 0x085eec5f]
085eebc8 +0x00:  push   %ebp
085eebc9 +0x01:  mov    %esp,%ebp
085eebcb +0x03:  push   %esi
085eebcc +0x04:  push   %ebx
085eebcd +0x05:  sub    $0x10,%esp
085eebd0 +0x08:  mov    0x8(%ebp),%eax
085eebd3 +0x0b:  mov    %eax,(%esp)
085eebd6 +0x0e:  call   080c8cba <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x112>  ; global constructors keyed to BestClearTime::BestClearTime()+0x112
085eebdb +0x13:  mov    0x8(%ebp),%eax
085eebde +0x16:  movl   $&_ZTV10CQuestShop+0x8,(%eax)
085eebe4 +0x1c:  mov    0x8(%ebp),%eax
085eebe7 +0x1f:  add    $0x8,%eax
085eebea +0x22:  mov    %eax,(%esp)
085eebed +0x25:  call   083855c8 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x15068>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x15068
085eebf2 +0x2a:  mov    0x8(%ebp),%eax
085eebf5 +0x2d:  add    $0x20,%eax
085eebf8 +0x30:  mov    %eax,(%esp)
085eebfb +0x33:  call   083855c8 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x15068>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x15068
085eec00 +0x38:  mov    0x8(%ebp),%eax
085eec03 +0x3b:  mov    %eax,(%esp)
085eec06 +0x3e:  call   085efd74 <_ZN10CQuestShop6_resetEv>  ; CQuestShop::_reset()
085eec0b +0x43:  jmp    085eec58 <+0x90>
085eec0d +0x45:  mov    %edx,%ebx
085eec0f +0x47:  mov    %eax,%esi
085eec11 +0x49:  mov    0x8(%ebp),%eax
085eec14 +0x4c:  add    $0x20,%eax
085eec17 +0x4f:  mov    %eax,(%esp)
085eec1a +0x52:  call   0837176e <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xb73a>  ; global constructors keyed to CServerEvent::m_nExpRate+0xb73a
085eec1f +0x57:  mov    %esi,%eax
085eec21 +0x59:  mov    %ebx,%edx
085eec23 +0x5b:  jmp    085eec25 <+0x5d>
085eec25 +0x5d:  mov    %edx,%ebx
085eec27 +0x5f:  mov    %eax,%esi
085eec29 +0x61:  mov    0x8(%ebp),%eax
085eec2c +0x64:  add    $0x8,%eax
085eec2f +0x67:  mov    %eax,(%esp)
085eec32 +0x6a:  call   0837176e <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xb73a>  ; global constructors keyed to CServerEvent::m_nExpRate+0xb73a
085eec37 +0x6f:  mov    %esi,%eax
085eec39 +0x71:  mov    %ebx,%edx
085eec3b +0x73:  jmp    085eec3d <+0x75>
085eec3d +0x75:  mov    %edx,%ebx
085eec3f +0x77:  mov    %eax,%esi
085eec41 +0x79:  mov    0x8(%ebp),%eax
085eec44 +0x7c:  mov    %eax,(%esp)
085eec47 +0x7f:  call   080c8be2 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x3a>  ; global constructors keyed to BestClearTime::BestClearTime()+0x3a
085eec4c +0x84:  mov    %esi,%eax
085eec4e +0x86:  mov    %ebx,%edx
085eec50 +0x88:  mov    %eax,(%esp)
085eec53 +0x8b:  call   08ae3750 <_Unwind_Resume>
085eec58 +0x90:  add    $0x10,%esp
085eec5b +0x93:  pop    %ebx
085eec5c +0x94:  pop    %esi
085eec5d +0x95:  pop    %ebp
085eec5e +0x96:  ret
085eec5f +0x97:  nop
```

## 反编译 C

```c
// CQuestShop::CQuestShop @ 0x85eebc8

/* CQuestShop::CQuestShop() */

void __thiscall CQuestShop::CQuestShop(CQuestShop *this)

{
  charac_expand::CData::CData((CData *)this);
  *(undefined ***)this = &PTR_ResetDailyMidnight_08ccffa8;
                    /* try { // try from 085eebed to 085eebf1 has its CatchHandler @ 085eec3d */
  std::
  map<unsigned_char,short,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,short>>>
  ::map((map<unsigned_char,short,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,short>>>
         *)(this + 8));
                    /* try { // try from 085eebfb to 085eebff has its CatchHandler @ 085eec25 */
  std::
  map<unsigned_char,short,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,short>>>
  ::map((map<unsigned_char,short,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,short>>>
         *)(this + 0x20));
                    /* try { // try from 085eec06 to 085eec0a has its CatchHandler @ 085eec0d */
  _reset(this);
  return;
}
```
