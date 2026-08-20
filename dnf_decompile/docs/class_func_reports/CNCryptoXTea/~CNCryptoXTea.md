# ~CNCryptoXTea

`_ZN12CNCryptoXTeaD1Ev`

`CNCryptoXTea::~CNCryptoXTea()`

| 类 | 地址 |
|---|---|
| `CNCryptoXTea` | `0x0809d96a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0809d96a  _ZN12CNCryptoXTeaD1Ev
#           CNCryptoXTea::~CNCryptoXTea()
# range [0x0809d96a, 0x0809d9bd]
0809d96a +0x00:  push   %ebp
0809d96b +0x01:  mov    %esp,%ebp
0809d96d +0x03:  sub    $0x28,%esp
0809d970 +0x06:  mov    0x8(%ebp),%eax
0809d973 +0x09:  movl   $&_ZTV12CNCryptoXTea+0x8,(%eax)
0809d979 +0x0f:  mov    0x8(%ebp),%eax
0809d97c +0x12:  mov    0x8(%eax),%eax
0809d97f +0x15:  mov    %eax,-0xc(%ebp)
0809d982 +0x18:  cmpl   $0x0,-0xc(%ebp)
0809d986 +0x1c:  je     0809d99d <+0x33>
0809d988 +0x1e:  mov    -0xc(%ebp),%eax
0809d98b +0x21:  mov    %eax,(%esp)
0809d98e +0x24:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0809d993 +0x29:  mov    0x8(%ebp),%eax
0809d996 +0x2c:  movl   $0x0,0x8(%eax)
0809d99d +0x33:  mov    0x8(%ebp),%eax
0809d9a0 +0x36:  mov    %eax,(%esp)
0809d9a3 +0x39:  call   0809df08 <_ZN12ICryptoGraphD1Ev>  ; ICryptoGraph::~ICryptoGraph()
0809d9a8 +0x3e:  mov    $0x0,%eax
0809d9ad +0x43:  test   %al,%al
0809d9af +0x45:  je     0809d9bc <+0x52>
0809d9b1 +0x47:  mov    0x8(%ebp),%eax
0809d9b4 +0x4a:  mov    %eax,(%esp)
0809d9b7 +0x4d:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0809d9bc +0x52:  leave
0809d9bd +0x53:  ret
```

## 反编译 C

```c
// CNCryptoXTea::~CNCryptoXTea @ 0x809d96a

/* WARNING: Removing unreachable block (ram,0x0809d9b1) */
/* CNCryptoXTea::~CNCryptoXTea() */

void __thiscall CNCryptoXTea::~CNCryptoXTea(CNCryptoXTea *this)

{
  *(undefined ***)this = &PTR__CNCryptoXTea_08b13b68;
  if (*(void **)(this + 8) != (void *)0x0) {
    operator_delete(*(void **)(this + 8));
    *(undefined4 *)(this + 8) = 0;
  }
  ICryptoGraph::~ICryptoGraph((ICryptoGraph *)this);
  return;
}
```
