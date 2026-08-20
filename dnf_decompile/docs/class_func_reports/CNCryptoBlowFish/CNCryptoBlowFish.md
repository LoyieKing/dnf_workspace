# CNCryptoBlowFish

`_ZN16CNCryptoBlowFishC1Ev`

`CNCryptoBlowFish::CNCryptoBlowFish()`

| 类 | 地址 |
|---|---|
| `CNCryptoBlowFish` | `0x0809980c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0809980c  _ZN16CNCryptoBlowFishC1Ev
#           CNCryptoBlowFish::CNCryptoBlowFish()
# range [0x0809980c, 0x080998f7]
0809980c +0x00:  push   %ebp
0809980d +0x01:  mov    %esp,%ebp
0809980f +0x03:  push   %edi
08099810 +0x04:  push   %esi
08099811 +0x05:  push   %ebx
08099812 +0x06:  sub    $0x5c,%esp
08099815 +0x09:  mov    0x8(%ebp),%eax
08099818 +0x0c:  movl   $0x2,0x4(%esp)
08099820 +0x14:  mov    %eax,(%esp)
08099823 +0x17:  call   0809def0 <_ZN12ICryptoGraphC1E17CRYPTO_GRAPH_TYPE>  ; ICryptoGraph::ICryptoGraph(CRYPTO_GRAPH_TYPE)
08099828 +0x1c:  mov    0x8(%ebp),%eax
0809982b +0x1f:  movl   $&_ZTV16CNCryptoBlowFish+0x8,(%eax)
08099831 +0x25:  mov    0x8(%ebp),%eax
08099834 +0x28:  movl   $0x0,0x8(%eax)
0809983b +0x2f:  mov    0x8(%ebp),%eax
0809983e +0x32:  movl   $0x0,0xc(%eax)
08099845 +0x39:  movl   $0x38,0x4(%esp)
0809984d +0x41:  lea    -0x58(%ebp),%eax
08099850 +0x44:  mov    %eax,(%esp)
08099853 +0x47:  call   0809e6b2 <_Z17GenerateRandomKeyPhi>  ; GenerateRandomKey(unsigned char*, int)
08099858 +0x4c:  movl   $0x0,0x8(%esp)
08099860 +0x54:  movl   $0x0,0x4(%esp)
08099868 +0x5c:  lea    -0x20(%ebp),%eax
0809986b +0x5f:  mov    %eax,(%esp)
0809986e +0x62:  call   08099ef6 <_ZNK16CNCryptoBlowFish12GetBlockSizeEv+0xa>  ; CNCryptoBlowFish::GetBlockSize() const+0xa
08099873 +0x67:  lea    -0x20(%ebp),%esi
08099876 +0x6a:  movl   $0x1058,(%esp)
0809987d +0x71:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08099882 +0x76:  mov    %eax,%ebx
08099884 +0x78:  mov    %ebx,%eax
08099886 +0x7a:  mov    %esi,0xc(%esp)
0809988a +0x7e:  movl   $0x38,0x8(%esp)
08099892 +0x86:  lea    -0x58(%ebp),%edx
08099895 +0x89:  mov    %edx,0x4(%esp)
08099899 +0x8d:  mov    %eax,(%esp)
0809989c +0x90:  call   080a956c <_ZN9CBlowFishC1EPhjRK6SBlock>  ; CBlowFish::CBlowFish(unsigned char*, unsigned int, SBlock const&)
080998a1 +0x95:  jmp    080998b5 <+0xa9>
080998a3 +0x97:  mov    %edx,%esi
080998a5 +0x99:  mov    %eax,%edi
080998a7 +0x9b:  mov    %ebx,(%esp)
080998aa +0x9e:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
080998af +0xa3:  mov    %edi,%eax
080998b1 +0xa5:  mov    %esi,%edx
080998b3 +0xa7:  jmp    080998d5 <+0xc9>
080998b5 +0xa9:  mov    %ebx,%edx
080998b7 +0xab:  mov    0x8(%ebp),%eax
080998ba +0xae:  mov    %edx,0x8(%eax)
080998bd +0xb1:  mov    0x8(%ebp),%eax
080998c0 +0xb4:  mov    0x8(%eax),%eax
080998c3 +0xb7:  test   %eax,%eax
080998c5 +0xb9:  jne    080998f0 <+0xe4>
080998c7 +0xbb:  movl   $0x7000000d,(%esp)
080998ce +0xc2:  call   0809e45c <_Z19NCryptoSetLastErrorj>  ; NCryptoSetLastError(unsigned int)
080998d3 +0xc7:  jmp    080998f0 <+0xe4>
080998d5 +0xc9:  mov    %edx,%ebx
080998d7 +0xcb:  mov    %eax,%esi
080998d9 +0xcd:  mov    0x8(%ebp),%eax
080998dc +0xd0:  mov    %eax,(%esp)
080998df +0xd3:  call   0809df08 <_ZN12ICryptoGraphD1Ev>  ; ICryptoGraph::~ICryptoGraph()
080998e4 +0xd8:  mov    %esi,%eax
080998e6 +0xda:  mov    %ebx,%edx
080998e8 +0xdc:  mov    %eax,(%esp)
080998eb +0xdf:  call   08ae3750 <_Unwind_Resume>
080998f0 +0xe4:  add    $0x5c,%esp
080998f3 +0xe7:  pop    %ebx
080998f4 +0xe8:  pop    %esi
080998f5 +0xe9:  pop    %edi
080998f6 +0xea:  pop    %ebp
080998f7 +0xeb:  ret
```

## 反编译 C

```c
// CNCryptoBlowFish::CNCryptoBlowFish @ 0x809980c

/* CNCryptoBlowFish::CNCryptoBlowFish() */

void __thiscall CNCryptoBlowFish::CNCryptoBlowFish(CNCryptoBlowFish *this)

{
  CBlowFish *this_00;
  uchar local_5c [56];
  SBlock local_24 [20];
  
  ICryptoGraph::ICryptoGraph((ICryptoGraph *)this,2);
  *(undefined ***)this = &PTR__CNCryptoBlowFish_08b136e8;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
                    /* try { // try from 08099853 to 08099881 has its CatchHandler @ 080998d5 */
  GenerateRandomKey(local_5c,0x38);
  SBlock::SBlock(local_24,0,0);
  this_00 = operator_new(0x1058);
                    /* try { // try from 0809989c to 080998a0 has its CatchHandler @ 080998a3 */
  CBlowFish::CBlowFish(this_00,local_5c,0x38,local_24);
  *(CBlowFish **)(this + 8) = this_00;
  if (*(int *)(this + 8) == 0) {
                    /* try { // try from 080998ce to 080998d2 has its CatchHandler @ 080998d5 */
    NCryptoSetLastError(0x7000000d);
  }
  return;
}
```
