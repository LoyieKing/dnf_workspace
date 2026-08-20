# CNCryptoRijndael

`_ZN16CNCryptoRijndaelC1Ev`

`CNCryptoRijndael::CNCryptoRijndael()`

| 类 | 地址 |
|---|---|
| `CNCryptoRijndael` | `0x0809bf08` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0809bf08  _ZN16CNCryptoRijndaelC1Ev
#           CNCryptoRijndael::CNCryptoRijndael()
# range [0x0809bf08, 0x0809c03d]
0809bf08 +0x000:  push   %ebp
0809bf09 +0x001:  mov    %esp,%ebp
0809bf0b +0x003:  push   %edi
0809bf0c +0x004:  push   %esi
0809bf0d +0x005:  push   %ebx
0809bf0e +0x006:  sub    $0xac,%esp
0809bf14 +0x00c:  mov    0x8(%ebp),%eax
0809bf17 +0x00f:  movl   $0x1,0x4(%esp)
0809bf1f +0x017:  mov    %eax,(%esp)
0809bf22 +0x01a:  call   0809def0 <_ZN12ICryptoGraphC1E17CRYPTO_GRAPH_TYPE>  ; ICryptoGraph::ICryptoGraph(CRYPTO_GRAPH_TYPE)
0809bf27 +0x01f:  mov    0x8(%ebp),%eax
0809bf2a +0x022:  movl   $&_ZTV16CNCryptoRijndael+0x8,(%eax)
0809bf30 +0x028:  mov    0x8(%ebp),%eax
0809bf33 +0x02b:  movl   $0x0,0x8(%eax)
0809bf3a +0x032:  movl   $0x47c,(%esp)
0809bf41 +0x039:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0809bf46 +0x03e:  mov    %eax,%ebx
0809bf48 +0x040:  mov    %ebx,%eax
0809bf4a +0x042:  mov    %eax,(%esp)
0809bf4d +0x045:  call   080b60ac <_ZN9CRijndaelC1Ev>  ; CRijndael::CRijndael()
0809bf52 +0x04a:  jmp    0809bf69 <+0x61>
0809bf54 +0x04c:  mov    %edx,%esi
0809bf56 +0x04e:  mov    %eax,%edi
0809bf58 +0x050:  mov    %ebx,(%esp)
0809bf5b +0x053:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0809bf60 +0x058:  mov    %edi,%eax
0809bf62 +0x05a:  mov    %esi,%edx
0809bf64 +0x05c:  jmp    0809c017 <+0x10f>
0809bf69 +0x061:  mov    %ebx,%edx
0809bf6b +0x063:  mov    0x8(%ebp),%eax
0809bf6e +0x066:  mov    %edx,0x8(%eax)
0809bf71 +0x069:  mov    0x8(%ebp),%eax
0809bf74 +0x06c:  mov    0x8(%eax),%eax
0809bf77 +0x06f:  test   %eax,%eax
0809bf79 +0x071:  je     0809c032 <+0x12a>
0809bf7f +0x077:  movl   $0x80,0x4(%esp)
0809bf87 +0x07f:  lea    -0x98(%ebp),%eax
0809bf8d +0x085:  mov    %eax,(%esp)
0809bf90 +0x088:  call   0809e473 <_Z20GenerateRandomStringPci>  ; GenerateRandomString(char*, int)
0809bf95 +0x08d:  mov    0x8(%ebp),%eax
0809bf98 +0x090:  mov    0x8(%eax),%eax
0809bf9b +0x093:  movl   $0x0,0x1c(%esp)
0809bfa3 +0x09b:  movl   $0x0,0x18(%esp)
0809bfab +0x0a3:  movl   $0x10,0x14(%esp)
0809bfb3 +0x0ab:  movl   $0x10,0x10(%esp)
0809bfbb +0x0b3:  movl   $&_ZN9CRijndael9sm_chain0E,0xc(%esp)
0809bfc3 +0x0bb:  movl   $0x80,0x8(%esp)
0809bfcb +0x0c3:  lea    -0x98(%ebp),%edx
0809bfd1 +0x0c9:  mov    %edx,0x4(%esp)
0809bfd5 +0x0cd:  mov    %eax,(%esp)
0809bfd8 +0x0d0:  call   080b6220 <_ZN9CRijndael10InitializeEPKciS1_iiii>  ; CRijndael::Initialize(char const*, int, char const*, int, int, int, int)
0809bfdd +0x0d5:  cmp    $0x6fffffff,%eax
0809bfe2 +0x0da:  setne  %al
0809bfe5 +0x0dd:  test   %al,%al
0809bfe7 +0x0df:  je     0809c032 <+0x12a>
0809bfe9 +0x0e1:  mov    0x8(%ebp),%eax
0809bfec +0x0e4:  mov    0x8(%eax),%eax
0809bfef +0x0e7:  test   %eax,%eax
0809bff1 +0x0e9:  je     0809c00b <+0x103>
0809bff3 +0x0eb:  mov    0x8(%ebp),%eax
0809bff6 +0x0ee:  mov    0x8(%eax),%eax
0809bff9 +0x0f1:  mov    (%eax),%eax
0809bffb +0x0f3:  add    $0x4,%eax
0809bffe +0x0f6:  mov    (%eax),%edx
0809c000 +0x0f8:  mov    0x8(%ebp),%eax
0809c003 +0x0fb:  mov    0x8(%eax),%eax
0809c006 +0x0fe:  mov    %eax,(%esp)
0809c009 +0x101:  call   *%edx
0809c00b +0x103:  mov    0x8(%ebp),%eax
0809c00e +0x106:  movl   $0x0,0x8(%eax)
0809c015 +0x10d:  jmp    0809c032 <+0x12a>
0809c017 +0x10f:  mov    %edx,%ebx
0809c019 +0x111:  mov    %eax,%esi
0809c01b +0x113:  mov    0x8(%ebp),%eax
0809c01e +0x116:  mov    %eax,(%esp)
0809c021 +0x119:  call   0809df08 <_ZN12ICryptoGraphD1Ev>  ; ICryptoGraph::~ICryptoGraph()
0809c026 +0x11e:  mov    %esi,%eax
0809c028 +0x120:  mov    %ebx,%edx
0809c02a +0x122:  mov    %eax,(%esp)
0809c02d +0x125:  call   08ae3750 <_Unwind_Resume>
0809c032 +0x12a:  add    $0xac,%esp
0809c038 +0x130:  pop    %ebx
0809c039 +0x131:  pop    %esi
0809c03a +0x132:  pop    %edi
0809c03b +0x133:  pop    %ebp
0809c03c +0x134:  ret
0809c03d +0x135:  nop
```

## 反编译 C

```c
// CNCryptoRijndael::CNCryptoRijndael @ 0x809bf08

/* CNCryptoRijndael::CNCryptoRijndael() */

void __thiscall CNCryptoRijndael::CNCryptoRijndael(CNCryptoRijndael *this)

{
  CRijndael *this_00;
  int iVar1;
  char local_9c [140];
  
  ICryptoGraph::ICryptoGraph((ICryptoGraph *)this,1);
  *(undefined ***)this = &PTR__CNCryptoRijndael_08b13988;
  *(undefined4 *)(this + 8) = 0;
                    /* try { // try from 0809bf41 to 0809bf45 has its CatchHandler @ 0809c017 */
  this_00 = operator_new(0x47c);
                    /* try { // try from 0809bf4d to 0809bf51 has its CatchHandler @ 0809bf54 */
  CRijndael::CRijndael(this_00);
  *(CRijndael **)(this + 8) = this_00;
  if (*(int *)(this + 8) != 0) {
                    /* try { // try from 0809bf90 to 0809c00a has its CatchHandler @ 0809c017 */
    GenerateRandomString(local_9c,0x80);
    iVar1 = CRijndael::Initialize
                      (*(CRijndael **)(this + 8),local_9c,0x80,CRijndael::sm_chain0,0x10,0x10,0,0);
    if (iVar1 != 0x6fffffff) {
      if (*(int *)(this + 8) != 0) {
        (**(code **)(**(int **)(this + 8) + 4))(*(undefined4 *)(this + 8));
      }
      *(undefined4 *)(this + 8) = 0;
    }
  }
  return;
}
```
