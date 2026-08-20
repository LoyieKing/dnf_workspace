# ~CNCryptoRijndael

`_ZN16CNCryptoRijndaelD0Ev`

`CNCryptoRijndael::~CNCryptoRijndael()`

| 类 | 地址 |
|---|---|
| `CNCryptoRijndael` | `0x0809c0c8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0809c0c8  _ZN16CNCryptoRijndaelD0Ev
#           CNCryptoRijndael::~CNCryptoRijndael()
# range [0x0809c0c8, 0x0809c0e5]
0809c0c8 +0x00:  push   %ebp
0809c0c9 +0x01:  mov    %esp,%ebp
0809c0cb +0x03:  sub    $0x18,%esp
0809c0ce +0x06:  mov    0x8(%ebp),%eax
0809c0d1 +0x09:  mov    %eax,(%esp)
0809c0d4 +0x0c:  call   0809c03e <_ZN16CNCryptoRijndaelD1Ev>  ; CNCryptoRijndael::~CNCryptoRijndael()
0809c0d9 +0x11:  mov    0x8(%ebp),%eax
0809c0dc +0x14:  mov    %eax,(%esp)
0809c0df +0x17:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0809c0e4 +0x1c:  leave
0809c0e5 +0x1d:  ret
```

## 反编译 C

```c
// CNCryptoRijndael::~CNCryptoRijndael @ 0x809c0c8

/* CNCryptoRijndael::~CNCryptoRijndael() */

void __thiscall CNCryptoRijndael::~CNCryptoRijndael(CNCryptoRijndael *this)

{
  ~CNCryptoRijndael(this);
  operator_delete(this);
  return;
}
```
