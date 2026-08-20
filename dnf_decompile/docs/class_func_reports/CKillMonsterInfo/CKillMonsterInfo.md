# CKillMonsterInfo

`_ZN16CKillMonsterInfoC1Ev`

`CKillMonsterInfo::CKillMonsterInfo()`

| 类 | 地址 |
|---|---|
| `CKillMonsterInfo` | `0x0854c9b4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0854c9b4  _ZN16CKillMonsterInfoC1Ev
#           CKillMonsterInfo::CKillMonsterInfo()
# range [0x0854c9b4, 0x0854ca71]
0854c9b4 +0x00:  push   %ebp
0854c9b5 +0x01:  mov    %esp,%ebp
0854c9b7 +0x03:  push   %esi
0854c9b8 +0x04:  push   %ebx
0854c9b9 +0x05:  sub    $0x10,%esp
0854c9bc +0x08:  mov    0x8(%ebp),%eax
0854c9bf +0x0b:  mov    %eax,(%esp)
0854c9c2 +0x0e:  call   080c8cba <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x112>  ; global constructors keyed to BestClearTime::BestClearTime()+0x112
0854c9c7 +0x13:  mov    0x8(%ebp),%eax
0854c9ca +0x16:  movl   $&_ZTV16CKillMonsterInfo+0x8,(%eax)
0854c9d0 +0x1c:  mov    0x8(%ebp),%eax
0854c9d3 +0x1f:  add    $0x8,%eax
0854c9d6 +0x22:  mov    %eax,(%esp)
0854c9d9 +0x25:  call   0808c368 <_GLOBAL__I_hashkey_map+0x299>  ; global constructors keyed to hashkey_map+0x299
0854c9de +0x2a:  mov    0x8(%ebp),%eax
0854c9e1 +0x2d:  add    $0x20,%eax
0854c9e4 +0x30:  mov    %eax,(%esp)
0854c9e7 +0x33:  call   0808c368 <_GLOBAL__I_hashkey_map+0x299>  ; global constructors keyed to hashkey_map+0x299
0854c9ec +0x38:  mov    0x8(%ebp),%eax
0854c9ef +0x3b:  add    $0x38,%eax
0854c9f2 +0x3e:  mov    %eax,(%esp)
0854c9f5 +0x41:  call   0808c368 <_GLOBAL__I_hashkey_map+0x299>  ; global constructors keyed to hashkey_map+0x299
0854c9fa +0x46:  mov    0x8(%ebp),%eax
0854c9fd +0x49:  mov    %eax,(%esp)
0854ca00 +0x4c:  call   0854d0b8 <_ZN16CKillMonsterInfo6_resetEv>  ; CKillMonsterInfo::_reset()
0854ca05 +0x51:  jmp    0854ca6a <+0xb6>
0854ca07 +0x53:  mov    %edx,%ebx
0854ca09 +0x55:  mov    %eax,%esi
0854ca0b +0x57:  mov    0x8(%ebp),%eax
0854ca0e +0x5a:  add    $0x38,%eax
0854ca11 +0x5d:  mov    %eax,(%esp)
0854ca14 +0x60:  call   0808c5b0 <_GLOBAL__I_hashkey_map+0x4e1>  ; global constructors keyed to hashkey_map+0x4e1
0854ca19 +0x65:  mov    %esi,%eax
0854ca1b +0x67:  mov    %ebx,%edx
0854ca1d +0x69:  jmp    0854ca1f <+0x6b>
0854ca1f +0x6b:  mov    %edx,%ebx
0854ca21 +0x6d:  mov    %eax,%esi
0854ca23 +0x6f:  mov    0x8(%ebp),%eax
0854ca26 +0x72:  add    $0x20,%eax
0854ca29 +0x75:  mov    %eax,(%esp)
0854ca2c +0x78:  call   0808c5b0 <_GLOBAL__I_hashkey_map+0x4e1>  ; global constructors keyed to hashkey_map+0x4e1
0854ca31 +0x7d:  mov    %esi,%eax
0854ca33 +0x7f:  mov    %ebx,%edx
0854ca35 +0x81:  jmp    0854ca37 <+0x83>
0854ca37 +0x83:  mov    %edx,%ebx
0854ca39 +0x85:  mov    %eax,%esi
0854ca3b +0x87:  mov    0x8(%ebp),%eax
0854ca3e +0x8a:  add    $0x8,%eax
0854ca41 +0x8d:  mov    %eax,(%esp)
0854ca44 +0x90:  call   0808c5b0 <_GLOBAL__I_hashkey_map+0x4e1>  ; global constructors keyed to hashkey_map+0x4e1
0854ca49 +0x95:  mov    %esi,%eax
0854ca4b +0x97:  mov    %ebx,%edx
0854ca4d +0x99:  jmp    0854ca4f <+0x9b>
0854ca4f +0x9b:  mov    %edx,%ebx
0854ca51 +0x9d:  mov    %eax,%esi
0854ca53 +0x9f:  mov    0x8(%ebp),%eax
0854ca56 +0xa2:  mov    %eax,(%esp)
0854ca59 +0xa5:  call   080c8be2 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x3a>  ; global constructors keyed to BestClearTime::BestClearTime()+0x3a
0854ca5e +0xaa:  mov    %esi,%eax
0854ca60 +0xac:  mov    %ebx,%edx
0854ca62 +0xae:  mov    %eax,(%esp)
0854ca65 +0xb1:  call   08ae3750 <_Unwind_Resume>
0854ca6a +0xb6:  add    $0x10,%esp
0854ca6d +0xb9:  pop    %ebx
0854ca6e +0xba:  pop    %esi
0854ca6f +0xbb:  pop    %ebp
0854ca70 +0xbc:  ret
0854ca71 +0xbd:  nop
```

## 反编译 C

```c
// CKillMonsterInfo::CKillMonsterInfo @ 0x854c9b4

/* CKillMonsterInfo::CKillMonsterInfo() */

void __thiscall CKillMonsterInfo::CKillMonsterInfo(CKillMonsterInfo *this)

{
  charac_expand::CData::CData((CData *)this);
  *(undefined ***)this = &PTR_ResetDailyMidnight_08c9ece8;
                    /* try { // try from 0854c9d9 to 0854c9dd has its CatchHandler @ 0854ca4f */
  std::
  map<unsigned_int,unsigned_char,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_char>>>
  ::map((map<unsigned_int,unsigned_char,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_char>>>
         *)(this + 8));
                    /* try { // try from 0854c9e7 to 0854c9eb has its CatchHandler @ 0854ca37 */
  std::
  map<unsigned_int,unsigned_char,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_char>>>
  ::map((map<unsigned_int,unsigned_char,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_char>>>
         *)(this + 0x20));
                    /* try { // try from 0854c9f5 to 0854c9f9 has its CatchHandler @ 0854ca1f */
  std::
  map<unsigned_int,unsigned_char,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_char>>>
  ::map((map<unsigned_int,unsigned_char,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_char>>>
         *)(this + 0x38));
                    /* try { // try from 0854ca00 to 0854ca04 has its CatchHandler @ 0854ca07 */
  _reset(this);
  return;
}
```
