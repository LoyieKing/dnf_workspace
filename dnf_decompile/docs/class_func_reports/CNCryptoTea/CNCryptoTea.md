# CNCryptoTea

`_ZN11CNCryptoTeaC1Ev`

`CNCryptoTea::CNCryptoTea()`

| 类 | 地址 |
|---|---|
| `CNCryptoTea` | `0x0809ce50` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0809ce50  _ZN11CNCryptoTeaC1Ev
#           CNCryptoTea::CNCryptoTea()
# range [0x0809ce50, 0x0809cf75]
0809ce50 +0x000:  push   %ebp
0809ce51 +0x001:  mov    %esp,%ebp
0809ce53 +0x003:  push   %edi
0809ce54 +0x004:  push   %esi
0809ce55 +0x005:  push   %ebx
0809ce56 +0x006:  sub    $0xac,%esp
0809ce5c +0x00c:  mov    0x8(%ebp),%eax
0809ce5f +0x00f:  movl   $0x5,0x4(%esp)
0809ce67 +0x017:  mov    %eax,(%esp)
0809ce6a +0x01a:  call   0809def0 <_ZN12ICryptoGraphC1E17CRYPTO_GRAPH_TYPE>  ; ICryptoGraph::ICryptoGraph(CRYPTO_GRAPH_TYPE)
0809ce6f +0x01f:  mov    0x8(%ebp),%eax
0809ce72 +0x022:  movl   $&_ZTV11CNCryptoTea+0x8,(%eax)
0809ce78 +0x028:  mov    0x8(%ebp),%eax
0809ce7b +0x02b:  movl   $0x0,0x8(%eax)
0809ce82 +0x032:  movl   $0x48,(%esp)
0809ce89 +0x039:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0809ce8e +0x03e:  mov    %eax,%ebx
0809ce90 +0x040:  mov    %ebx,%eax
0809ce92 +0x042:  mov    %eax,(%esp)
0809ce95 +0x045:  call   080c32f4 <_ZN4CTEAC1Ev>  ; CTEA::CTEA()
0809ce9a +0x04a:  jmp    0809ceb1 <+0x61>
0809ce9c +0x04c:  mov    %edx,%esi
0809ce9e +0x04e:  mov    %eax,%edi
0809cea0 +0x050:  mov    %ebx,(%esp)
0809cea3 +0x053:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0809cea8 +0x058:  mov    %edi,%eax
0809ceaa +0x05a:  mov    %esi,%edx
0809ceac +0x05c:  jmp    0809cf4f <+0xff>
0809ceb1 +0x061:  mov    %ebx,%edx
0809ceb3 +0x063:  mov    0x8(%ebp),%eax
0809ceb6 +0x066:  mov    %edx,0x8(%eax)
0809ceb9 +0x069:  mov    0x8(%ebp),%eax
0809cebc +0x06c:  mov    0x8(%eax),%eax
0809cebf +0x06f:  test   %eax,%eax
0809cec1 +0x071:  je     0809cf6a <+0x11a>
0809cec7 +0x077:  movl   $0x80,0x4(%esp)
0809cecf +0x07f:  lea    -0x98(%ebp),%eax
0809ced5 +0x085:  mov    %eax,(%esp)
0809ced8 +0x088:  call   0809e473 <_Z20GenerateRandomStringPci>  ; GenerateRandomString(char*, int)
0809cedd +0x08d:  mov    0x8(%ebp),%eax
0809cee0 +0x090:  mov    0x8(%eax),%eax
0809cee3 +0x093:  movl   $0x0,0x14(%esp)
0809ceeb +0x09b:  movl   $0x0,0x10(%esp)
0809cef3 +0x0a3:  movl   $&_ZN4CTEA9sm_chain0E,0xc(%esp)
0809cefb +0x0ab:  movl   $0x80,0x8(%esp)
0809cf03 +0x0b3:  lea    -0x98(%ebp),%edx
0809cf09 +0x0b9:  mov    %edx,0x4(%esp)
0809cf0d +0x0bd:  mov    %eax,(%esp)
0809cf10 +0x0c0:  call   080c339c <_ZN4CTEA10InitializeEPKciS1_ii>  ; CTEA::Initialize(char const*, int, char const*, int, int)
0809cf15 +0x0c5:  cmp    $0x6fffffff,%eax
0809cf1a +0x0ca:  setne  %al
0809cf1d +0x0cd:  test   %al,%al
0809cf1f +0x0cf:  je     0809cf6a <+0x11a>
0809cf21 +0x0d1:  mov    0x8(%ebp),%eax
0809cf24 +0x0d4:  mov    0x8(%eax),%eax
0809cf27 +0x0d7:  test   %eax,%eax
0809cf29 +0x0d9:  je     0809cf43 <+0xf3>
0809cf2b +0x0db:  mov    0x8(%ebp),%eax
0809cf2e +0x0de:  mov    0x8(%eax),%eax
0809cf31 +0x0e1:  mov    (%eax),%eax
0809cf33 +0x0e3:  add    $0x4,%eax
0809cf36 +0x0e6:  mov    (%eax),%edx
0809cf38 +0x0e8:  mov    0x8(%ebp),%eax
0809cf3b +0x0eb:  mov    0x8(%eax),%eax
0809cf3e +0x0ee:  mov    %eax,(%esp)
0809cf41 +0x0f1:  call   *%edx
0809cf43 +0x0f3:  mov    0x8(%ebp),%eax
0809cf46 +0x0f6:  movl   $0x0,0x8(%eax)
0809cf4d +0x0fd:  jmp    0809cf6a <+0x11a>
0809cf4f +0x0ff:  mov    %edx,%ebx
0809cf51 +0x101:  mov    %eax,%esi
0809cf53 +0x103:  mov    0x8(%ebp),%eax
0809cf56 +0x106:  mov    %eax,(%esp)
0809cf59 +0x109:  call   0809df08 <_ZN12ICryptoGraphD1Ev>  ; ICryptoGraph::~ICryptoGraph()
0809cf5e +0x10e:  mov    %esi,%eax
0809cf60 +0x110:  mov    %ebx,%edx
0809cf62 +0x112:  mov    %eax,(%esp)
0809cf65 +0x115:  call   08ae3750 <_Unwind_Resume>
0809cf6a +0x11a:  add    $0xac,%esp
0809cf70 +0x120:  pop    %ebx
0809cf71 +0x121:  pop    %esi
0809cf72 +0x122:  pop    %edi
0809cf73 +0x123:  pop    %ebp
0809cf74 +0x124:  ret
0809cf75 +0x125:  nop
```

## 反编译 C

```c
// CNCryptoTea::CNCryptoTea @ 0x809ce50

/* CNCryptoTea::CNCryptoTea() */

void __thiscall CNCryptoTea::CNCryptoTea(CNCryptoTea *this)

{
  CTEA *this_00;
  int iVar1;
  char local_9c [140];
  
  ICryptoGraph::ICryptoGraph((ICryptoGraph *)this,5);
  *(undefined ***)this = &PTR__CNCryptoTea_08b13aa8;
  *(undefined4 *)(this + 8) = 0;
                    /* try { // try from 0809ce89 to 0809ce8d has its CatchHandler @ 0809cf4f */
  this_00 = operator_new(0x48);
                    /* try { // try from 0809ce95 to 0809ce99 has its CatchHandler @ 0809ce9c */
  CTEA::CTEA(this_00);
  *(CTEA **)(this + 8) = this_00;
  if (*(int *)(this + 8) != 0) {
                    /* try { // try from 0809ced8 to 0809cf42 has its CatchHandler @ 0809cf4f */
    GenerateRandomString(local_9c,0x80);
    iVar1 = CTEA::Initialize(*(CTEA **)(this + 8),local_9c,0x80,"",0,0);
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
