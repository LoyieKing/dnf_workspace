# ~CNCryptoKhazad

`_ZN14CNCryptoKhazadD0Ev`

`CNCryptoKhazad::~CNCryptoKhazad()`

| 类 | 地址 |
|---|---|
| `CNCryptoKhazad` | `0x0809ab46` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0809ab46  _ZN14CNCryptoKhazadD0Ev
#           CNCryptoKhazad::~CNCryptoKhazad()
# range [0x0809ab46, 0x0809ab63]
0809ab46 +0x00:  push   %ebp
0809ab47 +0x01:  mov    %esp,%ebp
0809ab49 +0x03:  sub    $0x18,%esp
0809ab4c +0x06:  mov    0x8(%ebp),%eax
0809ab4f +0x09:  mov    %eax,(%esp)
0809ab52 +0x0c:  call   0809aaf2 <_ZN14CNCryptoKhazadD1Ev>  ; CNCryptoKhazad::~CNCryptoKhazad()
0809ab57 +0x11:  mov    0x8(%ebp),%eax
0809ab5a +0x14:  mov    %eax,(%esp)
0809ab5d +0x17:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0809ab62 +0x1c:  leave
0809ab63 +0x1d:  ret
```

## 反编译 C

```c
// CNCryptoKhazad::~CNCryptoKhazad @ 0x809ab46

/* CNCryptoKhazad::~CNCryptoKhazad() */

void __thiscall CNCryptoKhazad::~CNCryptoKhazad(CNCryptoKhazad *this)

{
  ~CNCryptoKhazad(this);
  operator_delete(this);
  return;
}
```
