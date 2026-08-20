# CNCryptoNoekeon

`_ZN15CNCryptoNoekeonC1Ev`

`CNCryptoNoekeon::CNCryptoNoekeon()`

| 类 | 地址 |
|---|---|
| `CNCryptoNoekeon` | `0x0809b59c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0809b59c  _ZN15CNCryptoNoekeonC1Ev
#           CNCryptoNoekeon::CNCryptoNoekeon()
# range [0x0809b59c, 0x0809b639]
0809b59c +0x00:  push   %ebp
0809b59d +0x01:  mov    %esp,%ebp
0809b59f +0x03:  push   %esi
0809b5a0 +0x04:  push   %ebx
0809b5a1 +0x05:  sub    $0x30,%esp
0809b5a4 +0x08:  mov    0x8(%ebp),%eax
0809b5a7 +0x0b:  movl   $0x8,0x4(%esp)
0809b5af +0x13:  mov    %eax,(%esp)
0809b5b2 +0x16:  call   0809def0 <_ZN12ICryptoGraphC1E17CRYPTO_GRAPH_TYPE>  ; ICryptoGraph::ICryptoGraph(CRYPTO_GRAPH_TYPE)
0809b5b7 +0x1b:  mov    0x8(%ebp),%eax
0809b5ba +0x1e:  movl   $&_ZTV15CNCryptoNoekeon+0x8,(%eax)
0809b5c0 +0x24:  mov    0x8(%ebp),%eax
0809b5c3 +0x27:  movl   $0x0,0x8(%eax)
0809b5ca +0x2e:  movl   $0x20,(%esp)
0809b5d1 +0x35:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0809b5d6 +0x3a:  mov    %eax,-0xc(%ebp)
0809b5d9 +0x3d:  cmpl   $0x0,-0xc(%ebp)
0809b5dd +0x41:  je     0809b632 <+0x96>
0809b5df +0x43:  mov    0x8(%ebp),%eax
0809b5e2 +0x46:  mov    -0xc(%ebp),%edx
0809b5e5 +0x49:  mov    %edx,0x8(%eax)
0809b5e8 +0x4c:  movl   $0x10,0x4(%esp)
0809b5f0 +0x54:  lea    -0x1c(%ebp),%eax
0809b5f3 +0x57:  mov    %eax,(%esp)
0809b5f6 +0x5a:  call   0809e6b2 <_Z17GenerateRandomKeyPhi>  ; GenerateRandomKey(unsigned char*, int)
0809b5fb +0x5f:  movl   $0x10,0x8(%esp)
0809b603 +0x67:  lea    -0x1c(%ebp),%eax
0809b606 +0x6a:  mov    %eax,0x4(%esp)
0809b60a +0x6e:  mov    0x8(%ebp),%eax
0809b60d +0x71:  mov    %eax,(%esp)
0809b610 +0x74:  call   0809b6f0 <_ZN15CNCryptoNoekeon10InitializeEPKhi>  ; CNCryptoNoekeon::Initialize(unsigned char const*, int)
0809b615 +0x79:  jmp    0809b632 <+0x96>
0809b617 +0x7b:  mov    %edx,%ebx
0809b619 +0x7d:  mov    %eax,%esi
0809b61b +0x7f:  mov    0x8(%ebp),%eax
0809b61e +0x82:  mov    %eax,(%esp)
0809b621 +0x85:  call   0809df08 <_ZN12ICryptoGraphD1Ev>  ; ICryptoGraph::~ICryptoGraph()
0809b626 +0x8a:  mov    %esi,%eax
0809b628 +0x8c:  mov    %ebx,%edx
0809b62a +0x8e:  mov    %eax,(%esp)
0809b62d +0x91:  call   08ae3750 <_Unwind_Resume>
0809b632 +0x96:  add    $0x30,%esp
0809b635 +0x99:  pop    %ebx
0809b636 +0x9a:  pop    %esi
0809b637 +0x9b:  pop    %ebp
0809b638 +0x9c:  ret
0809b639 +0x9d:  nop
```

## 反编译 C

```c
// CNCryptoNoekeon::CNCryptoNoekeon @ 0x809b59c

/* CNCryptoNoekeon::CNCryptoNoekeon() */

void __thiscall CNCryptoNoekeon::CNCryptoNoekeon(CNCryptoNoekeon *this)

{
  uchar local_20 [16];
  void *local_10;
  
  ICryptoGraph::ICryptoGraph((ICryptoGraph *)this,8);
  *(undefined ***)this = &PTR__CNCryptoNoekeon_08b138c8;
  *(undefined4 *)(this + 8) = 0;
                    /* try { // try from 0809b5d1 to 0809b614 has its CatchHandler @ 0809b617 */
  local_10 = operator_new(0x20);
  if (local_10 != (void *)0x0) {
    *(void **)(this + 8) = local_10;
    GenerateRandomKey(local_20,0x10);
    Initialize(this,local_20,0x10);
  }
  return;
}
```
