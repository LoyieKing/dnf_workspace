# CNCryptoKasumi

`_ZN14CNCryptoKasumiC1Ev`

`CNCryptoKasumi::CNCryptoKasumi()`

| 类 | 地址 |
|---|---|
| `CNCryptoKasumi` | `0x0809a4b0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0809a4b0  _ZN14CNCryptoKasumiC1Ev
#           CNCryptoKasumi::CNCryptoKasumi()
# range [0x0809a4b0, 0x0809a54d]
0809a4b0 +0x00:  push   %ebp
0809a4b1 +0x01:  mov    %esp,%ebp
0809a4b3 +0x03:  push   %esi
0809a4b4 +0x04:  push   %ebx
0809a4b5 +0x05:  sub    $0x30,%esp
0809a4b8 +0x08:  mov    0x8(%ebp),%eax
0809a4bb +0x0b:  movl   $0x6,0x4(%esp)
0809a4c3 +0x13:  mov    %eax,(%esp)
0809a4c6 +0x16:  call   0809def0 <_ZN12ICryptoGraphC1E17CRYPTO_GRAPH_TYPE>  ; ICryptoGraph::ICryptoGraph(CRYPTO_GRAPH_TYPE)
0809a4cb +0x1b:  mov    0x8(%ebp),%eax
0809a4ce +0x1e:  movl   $&_ZTV14CNCryptoKasumi+0x8,(%eax)
0809a4d4 +0x24:  mov    0x8(%ebp),%eax
0809a4d7 +0x27:  movl   $0x0,0x8(%eax)
0809a4de +0x2e:  movl   $0x100,(%esp)
0809a4e5 +0x35:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0809a4ea +0x3a:  mov    %eax,-0xc(%ebp)
0809a4ed +0x3d:  cmpl   $0x0,-0xc(%ebp)
0809a4f1 +0x41:  je     0809a546 <+0x96>
0809a4f3 +0x43:  mov    0x8(%ebp),%eax
0809a4f6 +0x46:  mov    -0xc(%ebp),%edx
0809a4f9 +0x49:  mov    %edx,0x8(%eax)
0809a4fc +0x4c:  movl   $0x10,0x4(%esp)
0809a504 +0x54:  lea    -0x1c(%ebp),%eax
0809a507 +0x57:  mov    %eax,(%esp)
0809a50a +0x5a:  call   0809e6b2 <_Z17GenerateRandomKeyPhi>  ; GenerateRandomKey(unsigned char*, int)
0809a50f +0x5f:  movl   $0x10,0x8(%esp)
0809a517 +0x67:  lea    -0x1c(%ebp),%eax
0809a51a +0x6a:  mov    %eax,0x4(%esp)
0809a51e +0x6e:  mov    0x8(%ebp),%eax
0809a521 +0x71:  mov    %eax,(%esp)
0809a524 +0x74:  call   0809a604 <_ZN14CNCryptoKasumi10InitializeEPKhi>  ; CNCryptoKasumi::Initialize(unsigned char const*, int)
0809a529 +0x79:  jmp    0809a546 <+0x96>
0809a52b +0x7b:  mov    %edx,%ebx
0809a52d +0x7d:  mov    %eax,%esi
0809a52f +0x7f:  mov    0x8(%ebp),%eax
0809a532 +0x82:  mov    %eax,(%esp)
0809a535 +0x85:  call   0809df08 <_ZN12ICryptoGraphD1Ev>  ; ICryptoGraph::~ICryptoGraph()
0809a53a +0x8a:  mov    %esi,%eax
0809a53c +0x8c:  mov    %ebx,%edx
0809a53e +0x8e:  mov    %eax,(%esp)
0809a541 +0x91:  call   08ae3750 <_Unwind_Resume>
0809a546 +0x96:  add    $0x30,%esp
0809a549 +0x99:  pop    %ebx
0809a54a +0x9a:  pop    %esi
0809a54b +0x9b:  pop    %ebp
0809a54c +0x9c:  ret
0809a54d +0x9d:  nop
```

## 反编译 C

```c
// CNCryptoKasumi::CNCryptoKasumi @ 0x809a4b0

/* CNCryptoKasumi::CNCryptoKasumi() */

void __thiscall CNCryptoKasumi::CNCryptoKasumi(CNCryptoKasumi *this)

{
  uchar local_20 [16];
  void *local_10;
  
  ICryptoGraph::ICryptoGraph((ICryptoGraph *)this,6);
  *(undefined ***)this = &PTR__CNCryptoKasumi_08b137a8;
  *(undefined4 *)(this + 8) = 0;
                    /* try { // try from 0809a4e5 to 0809a528 has its CatchHandler @ 0809a52b */
  local_10 = operator_new(0x100);
  if (local_10 != (void *)0x0) {
    *(void **)(this + 8) = local_10;
    GenerateRandomKey(local_20,0x10);
    Initialize(this,local_20,0x10);
  }
  return;
}
```
