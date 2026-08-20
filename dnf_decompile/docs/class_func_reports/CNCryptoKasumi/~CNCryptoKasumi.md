# ~CNCryptoKasumi

`_ZN14CNCryptoKasumiD1Ev`

`CNCryptoKasumi::~CNCryptoKasumi()`

| 类 | 地址 |
|---|---|
| `CNCryptoKasumi` | `0x0809a54e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0809a54e  _ZN14CNCryptoKasumiD1Ev
#           CNCryptoKasumi::~CNCryptoKasumi()
# range [0x0809a54e, 0x0809a5a1]
0809a54e +0x00:  push   %ebp
0809a54f +0x01:  mov    %esp,%ebp
0809a551 +0x03:  sub    $0x28,%esp
0809a554 +0x06:  mov    0x8(%ebp),%eax
0809a557 +0x09:  movl   $&_ZTV14CNCryptoKasumi+0x8,(%eax)
0809a55d +0x0f:  mov    0x8(%ebp),%eax
0809a560 +0x12:  mov    0x8(%eax),%eax
0809a563 +0x15:  mov    %eax,-0xc(%ebp)
0809a566 +0x18:  cmpl   $0x0,-0xc(%ebp)
0809a56a +0x1c:  je     0809a581 <+0x33>
0809a56c +0x1e:  mov    -0xc(%ebp),%eax
0809a56f +0x21:  mov    %eax,(%esp)
0809a572 +0x24:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0809a577 +0x29:  mov    0x8(%ebp),%eax
0809a57a +0x2c:  movl   $0x0,0x8(%eax)
0809a581 +0x33:  mov    0x8(%ebp),%eax
0809a584 +0x36:  mov    %eax,(%esp)
0809a587 +0x39:  call   0809df08 <_ZN12ICryptoGraphD1Ev>  ; ICryptoGraph::~ICryptoGraph()
0809a58c +0x3e:  mov    $0x0,%eax
0809a591 +0x43:  test   %al,%al
0809a593 +0x45:  je     0809a5a0 <+0x52>
0809a595 +0x47:  mov    0x8(%ebp),%eax
0809a598 +0x4a:  mov    %eax,(%esp)
0809a59b +0x4d:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0809a5a0 +0x52:  leave
0809a5a1 +0x53:  ret
```

## 反编译 C

```c
// CNCryptoKasumi::~CNCryptoKasumi @ 0x809a54e

/* WARNING: Removing unreachable block (ram,0x0809a595) */
/* CNCryptoKasumi::~CNCryptoKasumi() */

void __thiscall CNCryptoKasumi::~CNCryptoKasumi(CNCryptoKasumi *this)

{
  *(undefined ***)this = &PTR__CNCryptoKasumi_08b137a8;
  if (*(void **)(this + 8) != (void *)0x0) {
    operator_delete(*(void **)(this + 8));
    *(undefined4 *)(this + 8) = 0;
  }
  ICryptoGraph::~ICryptoGraph((ICryptoGraph *)this);
  return;
}
```
