# ~CNCryptoSkipjack

`_ZN16CNCryptoSkipjackD1Ev`

`CNCryptoSkipjack::~CNCryptoSkipjack()`

| 类 | 地址 |
|---|---|
| `CNCryptoSkipjack` | `0x0809c94a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0809c94a  _ZN16CNCryptoSkipjackD1Ev
#           CNCryptoSkipjack::~CNCryptoSkipjack()
# range [0x0809c94a, 0x0809c99d]
0809c94a +0x00:  push   %ebp
0809c94b +0x01:  mov    %esp,%ebp
0809c94d +0x03:  sub    $0x28,%esp
0809c950 +0x06:  mov    0x8(%ebp),%eax
0809c953 +0x09:  movl   $&_ZTV16CNCryptoSkipjack+0x8,(%eax)
0809c959 +0x0f:  mov    0x8(%ebp),%eax
0809c95c +0x12:  mov    0x8(%eax),%eax
0809c95f +0x15:  mov    %eax,-0xc(%ebp)
0809c962 +0x18:  cmpl   $0x0,-0xc(%ebp)
0809c966 +0x1c:  je     0809c97d <+0x33>
0809c968 +0x1e:  mov    -0xc(%ebp),%eax
0809c96b +0x21:  mov    %eax,(%esp)
0809c96e +0x24:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0809c973 +0x29:  mov    0x8(%ebp),%eax
0809c976 +0x2c:  movl   $0x0,0x8(%eax)
0809c97d +0x33:  mov    0x8(%ebp),%eax
0809c980 +0x36:  mov    %eax,(%esp)
0809c983 +0x39:  call   0809df08 <_ZN12ICryptoGraphD1Ev>  ; ICryptoGraph::~ICryptoGraph()
0809c988 +0x3e:  mov    $0x0,%eax
0809c98d +0x43:  test   %al,%al
0809c98f +0x45:  je     0809c99c <+0x52>
0809c991 +0x47:  mov    0x8(%ebp),%eax
0809c994 +0x4a:  mov    %eax,(%esp)
0809c997 +0x4d:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0809c99c +0x52:  leave
0809c99d +0x53:  ret
```

## 反编译 C

```c
// CNCryptoSkipjack::~CNCryptoSkipjack @ 0x809c94a

/* WARNING: Removing unreachable block (ram,0x0809c991) */
/* CNCryptoSkipjack::~CNCryptoSkipjack() */

void __thiscall CNCryptoSkipjack::~CNCryptoSkipjack(CNCryptoSkipjack *this)

{
  *(undefined ***)this = &PTR__CNCryptoSkipjack_08b13a48;
  if (*(void **)(this + 8) != (void *)0x0) {
    operator_delete(*(void **)(this + 8));
    *(undefined4 *)(this + 8) = 0;
  }
  ICryptoGraph::~ICryptoGraph((ICryptoGraph *)this);
  return;
}
```
