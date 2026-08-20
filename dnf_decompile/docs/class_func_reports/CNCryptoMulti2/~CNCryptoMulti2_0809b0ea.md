# ~CNCryptoMulti2

`_ZN14CNCryptoMulti2D0Ev`

`CNCryptoMulti2::~CNCryptoMulti2()`

| 类 | 地址 |
|---|---|
| `CNCryptoMulti2` | `0x0809b0ea` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0809b0ea  _ZN14CNCryptoMulti2D0Ev
#           CNCryptoMulti2::~CNCryptoMulti2()
# range [0x0809b0ea, 0x0809b107]
0809b0ea +0x00:  push   %ebp
0809b0eb +0x01:  mov    %esp,%ebp
0809b0ed +0x03:  sub    $0x18,%esp
0809b0f0 +0x06:  mov    0x8(%ebp),%eax
0809b0f3 +0x09:  mov    %eax,(%esp)
0809b0f6 +0x0c:  call   0809b096 <_ZN14CNCryptoMulti2D1Ev>  ; CNCryptoMulti2::~CNCryptoMulti2()
0809b0fb +0x11:  mov    0x8(%ebp),%eax
0809b0fe +0x14:  mov    %eax,(%esp)
0809b101 +0x17:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0809b106 +0x1c:  leave
0809b107 +0x1d:  ret
```

## 反编译 C

```c
// CNCryptoMulti2::~CNCryptoMulti2 @ 0x809b0ea

/* CNCryptoMulti2::~CNCryptoMulti2() */

void __thiscall CNCryptoMulti2::~CNCryptoMulti2(CNCryptoMulti2 *this)

{
  ~CNCryptoMulti2(this);
  operator_delete(this);
  return;
}
```
