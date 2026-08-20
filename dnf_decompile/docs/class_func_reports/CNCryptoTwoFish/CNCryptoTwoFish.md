# CNCryptoTwoFish

`_ZN15CNCryptoTwoFishC1Ev`

`CNCryptoTwoFish::CNCryptoTwoFish()`

| 类 | 地址 |
|---|---|
| `CNCryptoTwoFish` | `0x0809d328` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0809d328  _ZN15CNCryptoTwoFishC1Ev
#           CNCryptoTwoFish::CNCryptoTwoFish()
# range [0x0809d328, 0x0809d3c5]
0809d328 +0x00:  push   %ebp
0809d329 +0x01:  mov    %esp,%ebp
0809d32b +0x03:  push   %esi
0809d32c +0x04:  push   %ebx
0809d32d +0x05:  sub    $0x40,%esp
0809d330 +0x08:  mov    0x8(%ebp),%eax
0809d333 +0x0b:  movl   $0x4,0x4(%esp)
0809d33b +0x13:  mov    %eax,(%esp)
0809d33e +0x16:  call   0809def0 <_ZN12ICryptoGraphC1E17CRYPTO_GRAPH_TYPE>  ; ICryptoGraph::ICryptoGraph(CRYPTO_GRAPH_TYPE)
0809d343 +0x1b:  mov    0x8(%ebp),%eax
0809d346 +0x1e:  movl   $&_ZTV15CNCryptoTwoFish+0x8,(%eax)
0809d34c +0x24:  mov    0x8(%ebp),%eax
0809d34f +0x27:  movl   $0x0,0x8(%eax)
0809d356 +0x2e:  movl   $0x10a0,(%esp)
0809d35d +0x35:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0809d362 +0x3a:  mov    %eax,-0xc(%ebp)
0809d365 +0x3d:  cmpl   $0x0,-0xc(%ebp)
0809d369 +0x41:  je     0809d3be <+0x96>
0809d36b +0x43:  mov    0x8(%ebp),%eax
0809d36e +0x46:  mov    -0xc(%ebp),%edx
0809d371 +0x49:  mov    %edx,0x8(%eax)
0809d374 +0x4c:  movl   $0x20,0x4(%esp)
0809d37c +0x54:  lea    -0x2c(%ebp),%eax
0809d37f +0x57:  mov    %eax,(%esp)
0809d382 +0x5a:  call   0809e6b2 <_Z17GenerateRandomKeyPhi>  ; GenerateRandomKey(unsigned char*, int)
0809d387 +0x5f:  movl   $0x20,0x8(%esp)
0809d38f +0x67:  lea    -0x2c(%ebp),%eax
0809d392 +0x6a:  mov    %eax,0x4(%esp)
0809d396 +0x6e:  mov    0x8(%ebp),%eax
0809d399 +0x71:  mov    %eax,(%esp)
0809d39c +0x74:  call   0809d47c <_ZN15CNCryptoTwoFish10InitializeEPKhi>  ; CNCryptoTwoFish::Initialize(unsigned char const*, int)
0809d3a1 +0x79:  jmp    0809d3be <+0x96>
0809d3a3 +0x7b:  mov    %edx,%ebx
0809d3a5 +0x7d:  mov    %eax,%esi
0809d3a7 +0x7f:  mov    0x8(%ebp),%eax
0809d3aa +0x82:  mov    %eax,(%esp)
0809d3ad +0x85:  call   0809df08 <_ZN12ICryptoGraphD1Ev>  ; ICryptoGraph::~ICryptoGraph()
0809d3b2 +0x8a:  mov    %esi,%eax
0809d3b4 +0x8c:  mov    %ebx,%edx
0809d3b6 +0x8e:  mov    %eax,(%esp)
0809d3b9 +0x91:  call   08ae3750 <_Unwind_Resume>
0809d3be +0x96:  add    $0x40,%esp
0809d3c1 +0x99:  pop    %ebx
0809d3c2 +0x9a:  pop    %esi
0809d3c3 +0x9b:  pop    %ebp
0809d3c4 +0x9c:  ret
0809d3c5 +0x9d:  nop
```

## 反编译 C

```c
// CNCryptoTwoFish::CNCryptoTwoFish @ 0x809d328

/* CNCryptoTwoFish::CNCryptoTwoFish() */

void __thiscall CNCryptoTwoFish::CNCryptoTwoFish(CNCryptoTwoFish *this)

{
  uchar local_30 [32];
  void *local_10;
  
  ICryptoGraph::ICryptoGraph((ICryptoGraph *)this,4);
  *(undefined ***)this = &PTR__CNCryptoTwoFish_08b13b08;
  *(undefined4 *)(this + 8) = 0;
                    /* try { // try from 0809d35d to 0809d3a0 has its CatchHandler @ 0809d3a3 */
  local_10 = operator_new(0x10a0);
  if (local_10 != (void *)0x0) {
    *(void **)(this + 8) = local_10;
    GenerateRandomKey(local_30,0x20);
    Initialize(this,local_30,0x20);
  }
  return;
}
```
