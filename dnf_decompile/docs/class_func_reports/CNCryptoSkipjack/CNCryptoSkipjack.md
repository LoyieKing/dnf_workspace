# CNCryptoSkipjack

`_ZN16CNCryptoSkipjackC1Ev`

`CNCryptoSkipjack::CNCryptoSkipjack()`

| 类 | 地址 |
|---|---|
| `CNCryptoSkipjack` | `0x0809c8ac` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0809c8ac  _ZN16CNCryptoSkipjackC1Ev
#           CNCryptoSkipjack::CNCryptoSkipjack()
# range [0x0809c8ac, 0x0809c949]
0809c8ac +0x00:  push   %ebp
0809c8ad +0x01:  mov    %esp,%ebp
0809c8af +0x03:  push   %esi
0809c8b0 +0x04:  push   %ebx
0809c8b1 +0x05:  sub    $0x20,%esp
0809c8b4 +0x08:  mov    0x8(%ebp),%eax
0809c8b7 +0x0b:  movl   $0xb,0x4(%esp)
0809c8bf +0x13:  mov    %eax,(%esp)
0809c8c2 +0x16:  call   0809def0 <_ZN12ICryptoGraphC1E17CRYPTO_GRAPH_TYPE>  ; ICryptoGraph::ICryptoGraph(CRYPTO_GRAPH_TYPE)
0809c8c7 +0x1b:  mov    0x8(%ebp),%eax
0809c8ca +0x1e:  movl   $&_ZTV16CNCryptoSkipjack+0x8,(%eax)
0809c8d0 +0x24:  mov    0x8(%ebp),%eax
0809c8d3 +0x27:  movl   $0x0,0x8(%eax)
0809c8da +0x2e:  movl   $0x10,(%esp)
0809c8e1 +0x35:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0809c8e6 +0x3a:  mov    %eax,-0xc(%ebp)
0809c8e9 +0x3d:  cmpl   $0x0,-0xc(%ebp)
0809c8ed +0x41:  je     0809c942 <+0x96>
0809c8ef +0x43:  mov    0x8(%ebp),%eax
0809c8f2 +0x46:  mov    -0xc(%ebp),%edx
0809c8f5 +0x49:  mov    %edx,0x8(%eax)
0809c8f8 +0x4c:  movl   $0xa,0x4(%esp)
0809c900 +0x54:  lea    -0x16(%ebp),%eax
0809c903 +0x57:  mov    %eax,(%esp)
0809c906 +0x5a:  call   0809e6b2 <_Z17GenerateRandomKeyPhi>  ; GenerateRandomKey(unsigned char*, int)
0809c90b +0x5f:  movl   $0xa,0x8(%esp)
0809c913 +0x67:  lea    -0x16(%ebp),%eax
0809c916 +0x6a:  mov    %eax,0x4(%esp)
0809c91a +0x6e:  mov    0x8(%ebp),%eax
0809c91d +0x71:  mov    %eax,(%esp)
0809c920 +0x74:  call   0809ca00 <_ZN16CNCryptoSkipjack10InitializeEPKhi>  ; CNCryptoSkipjack::Initialize(unsigned char const*, int)
0809c925 +0x79:  jmp    0809c942 <+0x96>
0809c927 +0x7b:  mov    %edx,%ebx
0809c929 +0x7d:  mov    %eax,%esi
0809c92b +0x7f:  mov    0x8(%ebp),%eax
0809c92e +0x82:  mov    %eax,(%esp)
0809c931 +0x85:  call   0809df08 <_ZN12ICryptoGraphD1Ev>  ; ICryptoGraph::~ICryptoGraph()
0809c936 +0x8a:  mov    %esi,%eax
0809c938 +0x8c:  mov    %ebx,%edx
0809c93a +0x8e:  mov    %eax,(%esp)
0809c93d +0x91:  call   08ae3750 <_Unwind_Resume>
0809c942 +0x96:  add    $0x20,%esp
0809c945 +0x99:  pop    %ebx
0809c946 +0x9a:  pop    %esi
0809c947 +0x9b:  pop    %ebp
0809c948 +0x9c:  ret
0809c949 +0x9d:  nop
```

## 反编译 C

```c
// CNCryptoSkipjack::CNCryptoSkipjack @ 0x809c8ac

/* CNCryptoSkipjack::CNCryptoSkipjack() */

void __thiscall CNCryptoSkipjack::CNCryptoSkipjack(CNCryptoSkipjack *this)

{
  uchar local_1a [10];
  void *local_10;
  
  ICryptoGraph::ICryptoGraph((ICryptoGraph *)this,0xb);
  *(undefined ***)this = &PTR__CNCryptoSkipjack_08b13a48;
  *(undefined4 *)(this + 8) = 0;
                    /* try { // try from 0809c8e1 to 0809c924 has its CatchHandler @ 0809c927 */
  local_10 = operator_new(0x10);
  if (local_10 != (void *)0x0) {
    *(void **)(this + 8) = local_10;
    GenerateRandomKey(local_1a,10);
    Initialize(this,local_1a,10);
  }
  return;
}
```
