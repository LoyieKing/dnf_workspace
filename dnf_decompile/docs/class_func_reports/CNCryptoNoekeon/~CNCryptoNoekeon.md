# ~CNCryptoNoekeon

`_ZN15CNCryptoNoekeonD1Ev`

`CNCryptoNoekeon::~CNCryptoNoekeon()`

| 类 | 地址 |
|---|---|
| `CNCryptoNoekeon` | `0x0809b63a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0809b63a  _ZN15CNCryptoNoekeonD1Ev
#           CNCryptoNoekeon::~CNCryptoNoekeon()
# range [0x0809b63a, 0x0809b68d]
0809b63a +0x00:  push   %ebp
0809b63b +0x01:  mov    %esp,%ebp
0809b63d +0x03:  sub    $0x28,%esp
0809b640 +0x06:  mov    0x8(%ebp),%eax
0809b643 +0x09:  movl   $&_ZTV15CNCryptoNoekeon+0x8,(%eax)
0809b649 +0x0f:  mov    0x8(%ebp),%eax
0809b64c +0x12:  mov    0x8(%eax),%eax
0809b64f +0x15:  mov    %eax,-0xc(%ebp)
0809b652 +0x18:  cmpl   $0x0,-0xc(%ebp)
0809b656 +0x1c:  je     0809b66d <+0x33>
0809b658 +0x1e:  mov    -0xc(%ebp),%eax
0809b65b +0x21:  mov    %eax,(%esp)
0809b65e +0x24:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0809b663 +0x29:  mov    0x8(%ebp),%eax
0809b666 +0x2c:  movl   $0x0,0x8(%eax)
0809b66d +0x33:  mov    0x8(%ebp),%eax
0809b670 +0x36:  mov    %eax,(%esp)
0809b673 +0x39:  call   0809df08 <_ZN12ICryptoGraphD1Ev>  ; ICryptoGraph::~ICryptoGraph()
0809b678 +0x3e:  mov    $0x0,%eax
0809b67d +0x43:  test   %al,%al
0809b67f +0x45:  je     0809b68c <+0x52>
0809b681 +0x47:  mov    0x8(%ebp),%eax
0809b684 +0x4a:  mov    %eax,(%esp)
0809b687 +0x4d:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0809b68c +0x52:  leave
0809b68d +0x53:  ret
```

## 反编译 C

```c
// CNCryptoNoekeon::~CNCryptoNoekeon @ 0x809b63a

/* WARNING: Removing unreachable block (ram,0x0809b681) */
/* CNCryptoNoekeon::~CNCryptoNoekeon() */

void __thiscall CNCryptoNoekeon::~CNCryptoNoekeon(CNCryptoNoekeon *this)

{
  *(undefined ***)this = &PTR__CNCryptoNoekeon_08b138c8;
  if (*(void **)(this + 8) != (void *)0x0) {
    operator_delete(*(void **)(this + 8));
    *(undefined4 *)(this + 8) = 0;
  }
  ICryptoGraph::~ICryptoGraph((ICryptoGraph *)this);
  return;
}
```
