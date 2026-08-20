# ~CNCryptoRc6

`_ZN11CNCryptoRc6D0Ev`

`CNCryptoRc6::~CNCryptoRc6()`

| 类 | 地址 |
|---|---|
| `CNCryptoRc6` | `0x0809bc30` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0809bc30  _ZN11CNCryptoRc6D0Ev
#           CNCryptoRc6::~CNCryptoRc6()
# range [0x0809bc30, 0x0809bc4d]
0809bc30 +0x00:  push   %ebp
0809bc31 +0x01:  mov    %esp,%ebp
0809bc33 +0x03:  sub    $0x18,%esp
0809bc36 +0x06:  mov    0x8(%ebp),%eax
0809bc39 +0x09:  mov    %eax,(%esp)
0809bc3c +0x0c:  call   0809bbde <_ZN11CNCryptoRc6D1Ev>  ; CNCryptoRc6::~CNCryptoRc6()
0809bc41 +0x11:  mov    0x8(%ebp),%eax
0809bc44 +0x14:  mov    %eax,(%esp)
0809bc47 +0x17:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0809bc4c +0x1c:  leave
0809bc4d +0x1d:  ret
```

## 反编译 C

```c
// CNCryptoRc6::~CNCryptoRc6 @ 0x809bc30

/* CNCryptoRc6::~CNCryptoRc6() */

void __thiscall CNCryptoRc6::~CNCryptoRc6(CNCryptoRc6 *this)

{
  ~CNCryptoRc6(this);
  operator_delete(this);
  return;
}
```
