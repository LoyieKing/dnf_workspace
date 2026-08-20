# CBingo

`_ZN6CBingoC1Ev`

`CBingo::CBingo()`

| 类 | 地址 |
|---|---|
| `CBingo` | `0x080ca82c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080ca82c  _ZN6CBingoC1Ev
#           CBingo::CBingo()
# range [0x080ca82c, 0x080ca8eb]
080ca82c +0x00:  push   %ebp
080ca82d +0x01:  mov    %esp,%ebp
080ca82f +0x03:  push   %edi
080ca830 +0x04:  push   %esi
080ca831 +0x05:  push   %ebx
080ca832 +0x06:  sub    $0x2c,%esp
080ca835 +0x09:  mov    0x8(%ebp),%eax
080ca838 +0x0c:  mov    %eax,(%esp)
080ca83b +0x0f:  call   0808e1ac <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x1c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x1c
080ca840 +0x14:  movl   $0x0,(%esp)
080ca847 +0x1b:  call   0807d750 <_init+0x48>
080ca84c +0x20:  mov    %eax,-0x1c(%ebp)
080ca84f +0x23:  lea    -0x1c(%ebp),%esi
080ca852 +0x26:  movl   $0x9c8,(%esp)
080ca859 +0x2d:  call   08724450 <_Znwj>  ; operator new(unsigned int)
080ca85e +0x32:  mov    %eax,%ebx
080ca860 +0x34:  mov    %ebx,%eax
080ca862 +0x36:  mov    %esi,0x4(%esp)
080ca866 +0x3a:  mov    %eax,(%esp)
080ca869 +0x3d:  call   080cba2a <_GLOBAL__I__ZN10BingoEventC2Ev+0x877>  ; global constructors keyed to BingoEvent::BingoEvent()+0x877
080ca86e +0x42:  jmp    080ca882 <+0x56>
080ca870 +0x44:  mov    %edx,%esi
080ca872 +0x46:  mov    %eax,%edi
080ca874 +0x48:  mov    %ebx,(%esp)
080ca877 +0x4b:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
080ca87c +0x50:  mov    %edi,%eax
080ca87e +0x52:  mov    %esi,%edx
080ca880 +0x54:  jmp    080ca8d5 <+0xa9>
080ca882 +0x56:  mov    %ebx,%eax
080ca884 +0x58:  mov    0x8(%ebp),%edx
080ca887 +0x5b:  add    $0x10,%edx
080ca88a +0x5e:  mov    %eax,0x4(%esp)
080ca88e +0x62:  mov    %edx,(%esp)
080ca891 +0x65:  call   080ce8e8 <_GLOBAL__I__ZN10BingoEventC2Ev+0x3735>  ; global constructors keyed to BingoEvent::BingoEvent()+0x3735
080ca896 +0x6a:  mov    0x8(%ebp),%eax
080ca899 +0x6d:  mov    %eax,(%esp)
080ca89c +0x70:  call   08096b6e <_GLOBAL__I_g_maxTotalDefenseRate+0x15e>  ; global constructors keyed to g_maxTotalDefenseRate+0x15e
080ca8a1 +0x75:  mov    0x8(%ebp),%eax
080ca8a4 +0x78:  movl   $0x0,0xc(%eax)
080ca8ab +0x7f:  mov    0x8(%ebp),%eax
080ca8ae +0x82:  movl   $0x0,0x18(%eax)
080ca8b5 +0x89:  add    $0x2c,%esp
080ca8b8 +0x8c:  pop    %ebx
080ca8b9 +0x8d:  pop    %esi
080ca8ba +0x8e:  pop    %edi
080ca8bb +0x8f:  pop    %ebp
080ca8bc +0x90:  ret
080ca8bd +0x91:  mov    %edx,%ebx
080ca8bf +0x93:  mov    %eax,%esi
080ca8c1 +0x95:  mov    0x8(%ebp),%eax
080ca8c4 +0x98:  add    $0x10,%eax
080ca8c7 +0x9b:  mov    %eax,(%esp)
080ca8ca +0x9e:  call   080ccf4a <_GLOBAL__I__ZN10BingoEventC2Ev+0x1d97>  ; global constructors keyed to BingoEvent::BingoEvent()+0x1d97
080ca8cf +0xa3:  mov    %esi,%eax
080ca8d1 +0xa5:  mov    %ebx,%edx
080ca8d3 +0xa7:  jmp    080ca8d5 <+0xa9>
080ca8d5 +0xa9:  mov    %edx,%ebx
080ca8d7 +0xab:  mov    %eax,%esi
080ca8d9 +0xad:  mov    0x8(%ebp),%eax
080ca8dc +0xb0:  mov    %eax,(%esp)
080ca8df +0xb3:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
080ca8e4 +0xb8:  mov    %esi,%eax
080ca8e6 +0xba:  mov    %ebx,%edx
080ca8e8 +0xbc:  mov    %eax,(%esp)
080ca8eb +0xbf:  call   08ae3750 <_Unwind_Resume>
```

## 反编译 C

```c
// CBingo::CBingo @ 0x80ca82c

/* CBingo::CBingo() */

void __thiscall CBingo::CBingo(CBingo *this)

{
  CMTRand *this_00;
  ulong local_20 [4];
  
  std::vector<int,std::allocator<int>>::vector((vector<int,std::allocator<int>> *)this);
  local_20[0] = time((time_t *)0x0);
                    /* try { // try from 080ca859 to 080ca85d has its CatchHandler @ 080ca8d5 */
  this_00 = operator_new(0x9c8);
                    /* try { // try from 080ca869 to 080ca86d has its CatchHandler @ 080ca870 */
  CMTRand::CMTRand(this_00,local_20);
                    /* try { // try from 080ca891 to 080ca895 has its CatchHandler @ 080ca8d5 */
  boost::shared_ptr<CMTRand>::shared_ptr<CMTRand>((shared_ptr<CMTRand> *)(this + 0x10),this_00);
                    /* try { // try from 080ca89c to 080ca8a0 has its CatchHandler @ 080ca8bd */
  std::vector<int,std::allocator<int>>::clear((vector<int,std::allocator<int>> *)this);
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  return;
}
```
