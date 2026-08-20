# ~CNCryptoKasumi

`_ZN14CNCryptoKasumiD0Ev`

`CNCryptoKasumi::~CNCryptoKasumi()`

| 类 | 地址 |
|---|---|
| `CNCryptoKasumi` | `0x0809a5a2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0809a5a2  _ZN14CNCryptoKasumiD0Ev
#           CNCryptoKasumi::~CNCryptoKasumi()
# range [0x0809a5a2, 0x0809a5bf]
0809a5a2 +0x00:  push   %ebp
0809a5a3 +0x01:  mov    %esp,%ebp
0809a5a5 +0x03:  sub    $0x18,%esp
0809a5a8 +0x06:  mov    0x8(%ebp),%eax
0809a5ab +0x09:  mov    %eax,(%esp)
0809a5ae +0x0c:  call   0809a54e <_ZN14CNCryptoKasumiD1Ev>  ; CNCryptoKasumi::~CNCryptoKasumi()
0809a5b3 +0x11:  mov    0x8(%ebp),%eax
0809a5b6 +0x14:  mov    %eax,(%esp)
0809a5b9 +0x17:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0809a5be +0x1c:  leave
0809a5bf +0x1d:  ret
```

## 反编译 C

```c
// CNCryptoKasumi::~CNCryptoKasumi @ 0x809a5a2

/* CNCryptoKasumi::~CNCryptoKasumi() */

void __thiscall CNCryptoKasumi::~CNCryptoKasumi(CNCryptoKasumi *this)

{
  ~CNCryptoKasumi(this);
  operator_delete(this);
  return;
}
```
