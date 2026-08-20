# CNCryptoCast5

`_ZN13CNCryptoCast5C1Ev`

`CNCryptoCast5::CNCryptoCast5()`

| 类 | 地址 |
|---|---|
| `CNCryptoCast5` | `0x08099f0c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08099f0c  _ZN13CNCryptoCast5C1Ev
#           CNCryptoCast5::CNCryptoCast5()
# range [0x08099f0c, 0x08099fa9]
08099f0c +0x00:  push   %ebp
08099f0d +0x01:  mov    %esp,%ebp
08099f0f +0x03:  push   %esi
08099f10 +0x04:  push   %ebx
08099f11 +0x05:  sub    $0x30,%esp
08099f14 +0x08:  mov    0x8(%ebp),%eax
08099f17 +0x0b:  movl   $0xa,0x4(%esp)
08099f1f +0x13:  mov    %eax,(%esp)
08099f22 +0x16:  call   0809def0 <_ZN12ICryptoGraphC1E17CRYPTO_GRAPH_TYPE>  ; ICryptoGraph::ICryptoGraph(CRYPTO_GRAPH_TYPE)
08099f27 +0x1b:  mov    0x8(%ebp),%eax
08099f2a +0x1e:  movl   $&_ZTV13CNCryptoCast5+0x8,(%eax)
08099f30 +0x24:  mov    0x8(%ebp),%eax
08099f33 +0x27:  movl   $0x0,0x8(%eax)
08099f3a +0x2e:  movl   $0x84,(%esp)
08099f41 +0x35:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08099f46 +0x3a:  mov    %eax,-0xc(%ebp)
08099f49 +0x3d:  cmpl   $0x0,-0xc(%ebp)
08099f4d +0x41:  je     08099fa2 <+0x96>
08099f4f +0x43:  mov    0x8(%ebp),%eax
08099f52 +0x46:  mov    -0xc(%ebp),%edx
08099f55 +0x49:  mov    %edx,0x8(%eax)
08099f58 +0x4c:  movl   $0x10,0x4(%esp)
08099f60 +0x54:  lea    -0x1c(%ebp),%eax
08099f63 +0x57:  mov    %eax,(%esp)
08099f66 +0x5a:  call   0809e6b2 <_Z17GenerateRandomKeyPhi>  ; GenerateRandomKey(unsigned char*, int)
08099f6b +0x5f:  movl   $0x10,0x8(%esp)
08099f73 +0x67:  lea    -0x1c(%ebp),%eax
08099f76 +0x6a:  mov    %eax,0x4(%esp)
08099f7a +0x6e:  mov    0x8(%ebp),%eax
08099f7d +0x71:  mov    %eax,(%esp)
08099f80 +0x74:  call   0809a060 <_ZN13CNCryptoCast510InitializeEPKhi>  ; CNCryptoCast5::Initialize(unsigned char const*, int)
08099f85 +0x79:  jmp    08099fa2 <+0x96>
08099f87 +0x7b:  mov    %edx,%ebx
08099f89 +0x7d:  mov    %eax,%esi
08099f8b +0x7f:  mov    0x8(%ebp),%eax
08099f8e +0x82:  mov    %eax,(%esp)
08099f91 +0x85:  call   0809df08 <_ZN12ICryptoGraphD1Ev>  ; ICryptoGraph::~ICryptoGraph()
08099f96 +0x8a:  mov    %esi,%eax
08099f98 +0x8c:  mov    %ebx,%edx
08099f9a +0x8e:  mov    %eax,(%esp)
08099f9d +0x91:  call   08ae3750 <_Unwind_Resume>
08099fa2 +0x96:  add    $0x30,%esp
08099fa5 +0x99:  pop    %ebx
08099fa6 +0x9a:  pop    %esi
08099fa7 +0x9b:  pop    %ebp
08099fa8 +0x9c:  ret
08099fa9 +0x9d:  nop
```

## 反编译 C

```c
// CNCryptoCast5::CNCryptoCast5 @ 0x8099f0c

/* CNCryptoCast5::CNCryptoCast5() */

void __thiscall CNCryptoCast5::CNCryptoCast5(CNCryptoCast5 *this)

{
  uchar local_20 [16];
  void *local_10;
  
  ICryptoGraph::ICryptoGraph((ICryptoGraph *)this,10);
  *(undefined ***)this = &PTR__CNCryptoCast5_08b13748;
  *(undefined4 *)(this + 8) = 0;
                    /* try { // try from 08099f41 to 08099f84 has its CatchHandler @ 08099f87 */
  local_10 = operator_new(0x84);
  if (local_10 != (void *)0x0) {
    *(void **)(this + 8) = local_10;
    GenerateRandomKey(local_20,0x10);
    Initialize(this,local_20,0x10);
  }
  return;
}
```
