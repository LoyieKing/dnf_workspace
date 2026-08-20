# ~CNCryptoRc6

`_ZN11CNCryptoRc6D1Ev`

`CNCryptoRc6::~CNCryptoRc6()`

| 类 | 地址 |
|---|---|
| `CNCryptoRc6` | `0x0809bbde` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0809bbde  _ZN11CNCryptoRc6D1Ev
#           CNCryptoRc6::~CNCryptoRc6()
# range [0x0809bbde, 0x0809bc2f]
0809bbde +0x00:  push   %ebp
0809bbdf +0x01:  mov    %esp,%ebp
0809bbe1 +0x03:  sub    $0x18,%esp
0809bbe4 +0x06:  mov    0x8(%ebp),%eax
0809bbe7 +0x09:  movl   $&_ZTV11CNCryptoRc6+0x8,(%eax)
0809bbed +0x0f:  mov    0x8(%ebp),%eax
0809bbf0 +0x12:  mov    0x8(%eax),%eax
0809bbf3 +0x15:  test   %eax,%eax
0809bbf5 +0x17:  je     0809bc0f <+0x31>
0809bbf7 +0x19:  mov    0x8(%ebp),%eax
0809bbfa +0x1c:  mov    0x8(%eax),%eax
0809bbfd +0x1f:  mov    %eax,(%esp)
0809bc00 +0x22:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0809bc05 +0x27:  mov    0x8(%ebp),%eax
0809bc08 +0x2a:  movl   $0x0,0x8(%eax)
0809bc0f +0x31:  mov    0x8(%ebp),%eax
0809bc12 +0x34:  mov    %eax,(%esp)
0809bc15 +0x37:  call   0809df08 <_ZN12ICryptoGraphD1Ev>  ; ICryptoGraph::~ICryptoGraph()
0809bc1a +0x3c:  mov    $0x0,%eax
0809bc1f +0x41:  test   %al,%al
0809bc21 +0x43:  je     0809bc2e <+0x50>
0809bc23 +0x45:  mov    0x8(%ebp),%eax
0809bc26 +0x48:  mov    %eax,(%esp)
0809bc29 +0x4b:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0809bc2e +0x50:  leave
0809bc2f +0x51:  ret
```

## 反编译 C

```c
// CNCryptoRc6::~CNCryptoRc6 @ 0x809bbde

/* WARNING: Removing unreachable block (ram,0x0809bc23) */
/* CNCryptoRc6::~CNCryptoRc6() */

void __thiscall CNCryptoRc6::~CNCryptoRc6(CNCryptoRc6 *this)

{
  *(undefined ***)this = &PTR__CNCryptoRc6_08b13928;
  if (*(int *)(this + 8) != 0) {
    operator_delete(*(void **)(this + 8));
    *(undefined4 *)(this + 8) = 0;
  }
  ICryptoGraph::~ICryptoGraph((ICryptoGraph *)this);
  return;
}
```
