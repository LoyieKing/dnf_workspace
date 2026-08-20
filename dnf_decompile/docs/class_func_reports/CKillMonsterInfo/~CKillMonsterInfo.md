# ~CKillMonsterInfo

`_ZN16CKillMonsterInfoD1Ev`

`CKillMonsterInfo::~CKillMonsterInfo()`

| 类 | 地址 |
|---|---|
| `CKillMonsterInfo` | `0x0854ca72` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0854ca72  _ZN16CKillMonsterInfoD1Ev
#           CKillMonsterInfo::~CKillMonsterInfo()
# range [0x0854ca72, 0x0854cb23]
0854ca72 +0x00:  push   %ebp
0854ca73 +0x01:  mov    %esp,%ebp
0854ca75 +0x03:  push   %esi
0854ca76 +0x04:  push   %ebx
0854ca77 +0x05:  sub    $0x10,%esp
0854ca7a +0x08:  mov    0x8(%ebp),%eax
0854ca7d +0x0b:  movl   $&_ZTV16CKillMonsterInfo+0x8,(%eax)
0854ca83 +0x11:  mov    0x8(%ebp),%eax
0854ca86 +0x14:  add    $0x38,%eax
0854ca89 +0x17:  mov    %eax,(%esp)
0854ca8c +0x1a:  call   0808c5b0 <_GLOBAL__I_hashkey_map+0x4e1>  ; global constructors keyed to hashkey_map+0x4e1
0854ca91 +0x1f:  jmp    0854caab <+0x39>
0854ca93 +0x21:  mov    %edx,%ebx
0854ca95 +0x23:  mov    %eax,%esi
0854ca97 +0x25:  mov    0x8(%ebp),%eax
0854ca9a +0x28:  add    $0x20,%eax
0854ca9d +0x2b:  mov    %eax,(%esp)
0854caa0 +0x2e:  call   0808c5b0 <_GLOBAL__I_hashkey_map+0x4e1>  ; global constructors keyed to hashkey_map+0x4e1
0854caa5 +0x33:  mov    %esi,%eax
0854caa7 +0x35:  mov    %ebx,%edx
0854caa9 +0x37:  jmp    0854cabb <+0x49>
0854caab +0x39:  mov    0x8(%ebp),%eax
0854caae +0x3c:  add    $0x20,%eax
0854cab1 +0x3f:  mov    %eax,(%esp)
0854cab4 +0x42:  call   0808c5b0 <_GLOBAL__I_hashkey_map+0x4e1>  ; global constructors keyed to hashkey_map+0x4e1
0854cab9 +0x47:  jmp    0854cad3 <+0x61>
0854cabb +0x49:  mov    %edx,%ebx
0854cabd +0x4b:  mov    %eax,%esi
0854cabf +0x4d:  mov    0x8(%ebp),%eax
0854cac2 +0x50:  add    $0x8,%eax
0854cac5 +0x53:  mov    %eax,(%esp)
0854cac8 +0x56:  call   0808c5b0 <_GLOBAL__I_hashkey_map+0x4e1>  ; global constructors keyed to hashkey_map+0x4e1
0854cacd +0x5b:  mov    %esi,%eax
0854cacf +0x5d:  mov    %ebx,%edx
0854cad1 +0x5f:  jmp    0854cae3 <+0x71>
0854cad3 +0x61:  mov    0x8(%ebp),%eax
0854cad6 +0x64:  add    $0x8,%eax
0854cad9 +0x67:  mov    %eax,(%esp)
0854cadc +0x6a:  call   0808c5b0 <_GLOBAL__I_hashkey_map+0x4e1>  ; global constructors keyed to hashkey_map+0x4e1
0854cae1 +0x6f:  jmp    0854cafe <+0x8c>
0854cae3 +0x71:  mov    %edx,%ebx
0854cae5 +0x73:  mov    %eax,%esi
0854cae7 +0x75:  mov    0x8(%ebp),%eax
0854caea +0x78:  mov    %eax,(%esp)
0854caed +0x7b:  call   080c8be2 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x3a>  ; global constructors keyed to BestClearTime::BestClearTime()+0x3a
0854caf2 +0x80:  mov    %esi,%eax
0854caf4 +0x82:  mov    %ebx,%edx
0854caf6 +0x84:  mov    %eax,(%esp)
0854caf9 +0x87:  call   08ae3750 <_Unwind_Resume>
0854cafe +0x8c:  mov    0x8(%ebp),%eax
0854cb01 +0x8f:  mov    %eax,(%esp)
0854cb04 +0x92:  call   080c8be2 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x3a>  ; global constructors keyed to BestClearTime::BestClearTime()+0x3a
0854cb09 +0x97:  mov    $0x0,%eax
0854cb0e +0x9c:  test   %al,%al
0854cb10 +0x9e:  je     0854cb1d <+0xab>
0854cb12 +0xa0:  mov    0x8(%ebp),%eax
0854cb15 +0xa3:  mov    %eax,(%esp)
0854cb18 +0xa6:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0854cb1d +0xab:  add    $0x10,%esp
0854cb20 +0xae:  pop    %ebx
0854cb21 +0xaf:  pop    %esi
0854cb22 +0xb0:  pop    %ebp
0854cb23 +0xb1:  ret
```

## 反编译 C

```c
// CKillMonsterInfo::~CKillMonsterInfo @ 0x854ca72

/* WARNING: Removing unreachable block (ram,0x0854cb12) */
/* CKillMonsterInfo::~CKillMonsterInfo() */

void __thiscall CKillMonsterInfo::~CKillMonsterInfo(CKillMonsterInfo *this)

{
  *(undefined ***)this = &PTR_ResetDailyMidnight_08c9ece8;
                    /* try { // try from 0854ca8c to 0854ca90 has its CatchHandler @ 0854ca93 */
  std::
  map<unsigned_int,unsigned_char,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_char>>>
  ::~map((map<unsigned_int,unsigned_char,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_char>>>
          *)(this + 0x38));
                    /* try { // try from 0854cab4 to 0854cab8 has its CatchHandler @ 0854cabb */
  std::
  map<unsigned_int,unsigned_char,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_char>>>
  ::~map((map<unsigned_int,unsigned_char,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_char>>>
          *)(this + 0x20));
                    /* try { // try from 0854cadc to 0854cae0 has its CatchHandler @ 0854cae3 */
  std::
  map<unsigned_int,unsigned_char,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_char>>>
  ::~map((map<unsigned_int,unsigned_char,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_char>>>
          *)(this + 8));
  charac_expand::CData::~CData((CData *)this);
  return;
}
```
