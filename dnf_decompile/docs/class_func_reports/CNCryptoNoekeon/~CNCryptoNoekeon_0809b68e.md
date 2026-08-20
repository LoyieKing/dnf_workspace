# ~CNCryptoNoekeon

`_ZN15CNCryptoNoekeonD0Ev`

`CNCryptoNoekeon::~CNCryptoNoekeon()`

| 类 | 地址 |
|---|---|
| `CNCryptoNoekeon` | `0x0809b68e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0809b68e  _ZN15CNCryptoNoekeonD0Ev
#           CNCryptoNoekeon::~CNCryptoNoekeon()
# range [0x0809b68e, 0x0809b6ab]
0809b68e +0x00:  push   %ebp
0809b68f +0x01:  mov    %esp,%ebp
0809b691 +0x03:  sub    $0x18,%esp
0809b694 +0x06:  mov    0x8(%ebp),%eax
0809b697 +0x09:  mov    %eax,(%esp)
0809b69a +0x0c:  call   0809b63a <_ZN15CNCryptoNoekeonD1Ev>  ; CNCryptoNoekeon::~CNCryptoNoekeon()
0809b69f +0x11:  mov    0x8(%ebp),%eax
0809b6a2 +0x14:  mov    %eax,(%esp)
0809b6a5 +0x17:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0809b6aa +0x1c:  leave
0809b6ab +0x1d:  ret
```

## 反编译 C

```c
// CNCryptoNoekeon::~CNCryptoNoekeon @ 0x809b68e

/* CNCryptoNoekeon::~CNCryptoNoekeon() */

void __thiscall CNCryptoNoekeon::~CNCryptoNoekeon(CNCryptoNoekeon *this)

{
  ~CNCryptoNoekeon(this);
  operator_delete(this);
  return;
}
```
