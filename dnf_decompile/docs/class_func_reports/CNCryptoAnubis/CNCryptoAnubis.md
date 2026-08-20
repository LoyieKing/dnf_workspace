# CNCryptoAnubis

`_ZN14CNCryptoAnubisC1Ev`

`CNCryptoAnubis::CNCryptoAnubis()`

| 类 | 地址 |
|---|---|
| `CNCryptoAnubis` | `0x08099264` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08099264  _ZN14CNCryptoAnubisC1Ev
#           CNCryptoAnubis::CNCryptoAnubis()
# range [0x08099264, 0x08099301]
08099264 +0x00:  push   %ebp
08099265 +0x01:  mov    %esp,%ebp
08099267 +0x03:  push   %esi
08099268 +0x04:  push   %ebx
08099269 +0x05:  sub    $0x30,%esp
0809926c +0x08:  mov    0x8(%ebp),%eax
0809926f +0x0b:  movl   $0xd,0x4(%esp)
08099277 +0x13:  mov    %eax,(%esp)
0809927a +0x16:  call   0809def0 <_ZN12ICryptoGraphC1E17CRYPTO_GRAPH_TYPE>  ; ICryptoGraph::ICryptoGraph(CRYPTO_GRAPH_TYPE)
0809927f +0x1b:  mov    0x8(%ebp),%eax
08099282 +0x1e:  movl   $&_ZTV14CNCryptoAnubis+0x8,(%eax)
08099288 +0x24:  mov    0x8(%ebp),%eax
0809928b +0x27:  movl   $0x0,0x8(%eax)
08099292 +0x2e:  movl   $0x268,(%esp)
08099299 +0x35:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0809929e +0x3a:  mov    %eax,-0xc(%ebp)
080992a1 +0x3d:  cmpl   $0x0,-0xc(%ebp)
080992a5 +0x41:  je     080992fa <+0x96>
080992a7 +0x43:  mov    0x8(%ebp),%eax
080992aa +0x46:  mov    -0xc(%ebp),%edx
080992ad +0x49:  mov    %edx,0x8(%eax)
080992b0 +0x4c:  movl   $0x10,0x4(%esp)
080992b8 +0x54:  lea    -0x1c(%ebp),%eax
080992bb +0x57:  mov    %eax,(%esp)
080992be +0x5a:  call   0809e6b2 <_Z17GenerateRandomKeyPhi>  ; GenerateRandomKey(unsigned char*, int)
080992c3 +0x5f:  movl   $0x10,0x8(%esp)
080992cb +0x67:  lea    -0x1c(%ebp),%eax
080992ce +0x6a:  mov    %eax,0x4(%esp)
080992d2 +0x6e:  mov    0x8(%ebp),%eax
080992d5 +0x71:  mov    %eax,(%esp)
080992d8 +0x74:  call   080993bc <_ZN14CNCryptoAnubis10InitializeEPKhi>  ; CNCryptoAnubis::Initialize(unsigned char const*, int)
080992dd +0x79:  jmp    080992fa <+0x96>
080992df +0x7b:  mov    %edx,%ebx
080992e1 +0x7d:  mov    %eax,%esi
080992e3 +0x7f:  mov    0x8(%ebp),%eax
080992e6 +0x82:  mov    %eax,(%esp)
080992e9 +0x85:  call   0809df08 <_ZN12ICryptoGraphD1Ev>  ; ICryptoGraph::~ICryptoGraph()
080992ee +0x8a:  mov    %esi,%eax
080992f0 +0x8c:  mov    %ebx,%edx
080992f2 +0x8e:  mov    %eax,(%esp)
080992f5 +0x91:  call   08ae3750 <_Unwind_Resume>
080992fa +0x96:  add    $0x30,%esp
080992fd +0x99:  pop    %ebx
080992fe +0x9a:  pop    %esi
080992ff +0x9b:  pop    %ebp
08099300 +0x9c:  ret
08099301 +0x9d:  nop
```

## 反编译 C

```c
// CNCryptoAnubis::CNCryptoAnubis @ 0x8099264

/* CNCryptoAnubis::CNCryptoAnubis() */

void __thiscall CNCryptoAnubis::CNCryptoAnubis(CNCryptoAnubis *this)

{
  uchar local_20 [16];
  void *local_10;
  
  ICryptoGraph::ICryptoGraph((ICryptoGraph *)this,0xd);
  *(undefined ***)this = &PTR__CNCryptoAnubis_08b13688;
  *(undefined4 *)(this + 8) = 0;
                    /* try { // try from 08099299 to 080992dc has its CatchHandler @ 080992df */
  local_10 = operator_new(0x268);
  if (local_10 != (void *)0x0) {
    *(void **)(this + 8) = local_10;
    GenerateRandomKey(local_20,0x10);
    Initialize(this,local_20,0x10);
  }
  return;
}
```
