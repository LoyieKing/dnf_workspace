# CNCryptoXTea

`_ZN12CNCryptoXTeaC1Ev`

`CNCryptoXTea::CNCryptoXTea()`

| 类 | 地址 |
|---|---|
| `CNCryptoXTea` | `0x0809d8cc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0809d8cc  _ZN12CNCryptoXTeaC1Ev
#           CNCryptoXTea::CNCryptoXTea()
# range [0x0809d8cc, 0x0809d969]
0809d8cc +0x00:  push   %ebp
0809d8cd +0x01:  mov    %esp,%ebp
0809d8cf +0x03:  push   %esi
0809d8d0 +0x04:  push   %ebx
0809d8d1 +0x05:  sub    $0x30,%esp
0809d8d4 +0x08:  mov    0x8(%ebp),%eax
0809d8d7 +0x0b:  movl   $0x7,0x4(%esp)
0809d8df +0x13:  mov    %eax,(%esp)
0809d8e2 +0x16:  call   0809def0 <_ZN12ICryptoGraphC1E17CRYPTO_GRAPH_TYPE>  ; ICryptoGraph::ICryptoGraph(CRYPTO_GRAPH_TYPE)
0809d8e7 +0x1b:  mov    0x8(%ebp),%eax
0809d8ea +0x1e:  movl   $&_ZTV12CNCryptoXTea+0x8,(%eax)
0809d8f0 +0x24:  mov    0x8(%ebp),%eax
0809d8f3 +0x27:  movl   $0x0,0x8(%eax)
0809d8fa +0x2e:  movl   $0x100,(%esp)
0809d901 +0x35:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0809d906 +0x3a:  mov    %eax,-0xc(%ebp)
0809d909 +0x3d:  cmpl   $0x0,-0xc(%ebp)
0809d90d +0x41:  je     0809d962 <+0x96>
0809d90f +0x43:  mov    0x8(%ebp),%eax
0809d912 +0x46:  mov    -0xc(%ebp),%edx
0809d915 +0x49:  mov    %edx,0x8(%eax)
0809d918 +0x4c:  movl   $0x10,0x4(%esp)
0809d920 +0x54:  lea    -0x1c(%ebp),%eax
0809d923 +0x57:  mov    %eax,(%esp)
0809d926 +0x5a:  call   0809e6b2 <_Z17GenerateRandomKeyPhi>  ; GenerateRandomKey(unsigned char*, int)
0809d92b +0x5f:  movl   $0x10,0x8(%esp)
0809d933 +0x67:  lea    -0x1c(%ebp),%eax
0809d936 +0x6a:  mov    %eax,0x4(%esp)
0809d93a +0x6e:  mov    0x8(%ebp),%eax
0809d93d +0x71:  mov    %eax,(%esp)
0809d940 +0x74:  call   0809da20 <_ZN12CNCryptoXTea10InitializeEPKhi>  ; CNCryptoXTea::Initialize(unsigned char const*, int)
0809d945 +0x79:  jmp    0809d962 <+0x96>
0809d947 +0x7b:  mov    %edx,%ebx
0809d949 +0x7d:  mov    %eax,%esi
0809d94b +0x7f:  mov    0x8(%ebp),%eax
0809d94e +0x82:  mov    %eax,(%esp)
0809d951 +0x85:  call   0809df08 <_ZN12ICryptoGraphD1Ev>  ; ICryptoGraph::~ICryptoGraph()
0809d956 +0x8a:  mov    %esi,%eax
0809d958 +0x8c:  mov    %ebx,%edx
0809d95a +0x8e:  mov    %eax,(%esp)
0809d95d +0x91:  call   08ae3750 <_Unwind_Resume>
0809d962 +0x96:  add    $0x30,%esp
0809d965 +0x99:  pop    %ebx
0809d966 +0x9a:  pop    %esi
0809d967 +0x9b:  pop    %ebp
0809d968 +0x9c:  ret
0809d969 +0x9d:  nop
```

## 反编译 C

```c
// CNCryptoXTea::CNCryptoXTea @ 0x809d8cc

/* CNCryptoXTea::CNCryptoXTea() */

void __thiscall CNCryptoXTea::CNCryptoXTea(CNCryptoXTea *this)

{
  uchar local_20 [16];
  void *local_10;
  
  ICryptoGraph::ICryptoGraph((ICryptoGraph *)this,7);
  *(undefined ***)this = &PTR__CNCryptoXTea_08b13b68;
  *(undefined4 *)(this + 8) = 0;
                    /* try { // try from 0809d901 to 0809d944 has its CatchHandler @ 0809d947 */
  local_10 = operator_new(0x100);
  if (local_10 != (void *)0x0) {
    *(void **)(this + 8) = local_10;
    GenerateRandomKey(local_20,0x10);
    Initialize(this,local_20,0x10);
  }
  return;
}
```
