# ~CNCryptoCast5

`_ZN13CNCryptoCast5D0Ev`

`CNCryptoCast5::~CNCryptoCast5()`

| 类 | 地址 |
|---|---|
| `CNCryptoCast5` | `0x08099ffe` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08099ffe  _ZN13CNCryptoCast5D0Ev
#           CNCryptoCast5::~CNCryptoCast5()
# range [0x08099ffe, 0x0809a01b]
08099ffe +0x00:  push   %ebp
08099fff +0x01:  mov    %esp,%ebp
0809a001 +0x03:  sub    $0x18,%esp
0809a004 +0x06:  mov    0x8(%ebp),%eax
0809a007 +0x09:  mov    %eax,(%esp)
0809a00a +0x0c:  call   08099faa <_ZN13CNCryptoCast5D1Ev>  ; CNCryptoCast5::~CNCryptoCast5()
0809a00f +0x11:  mov    0x8(%ebp),%eax
0809a012 +0x14:  mov    %eax,(%esp)
0809a015 +0x17:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0809a01a +0x1c:  leave
0809a01b +0x1d:  ret
```

## 反编译 C

```c
// CNCryptoCast5::~CNCryptoCast5 @ 0x8099ffe

/* CNCryptoCast5::~CNCryptoCast5() */

void __thiscall CNCryptoCast5::~CNCryptoCast5(CNCryptoCast5 *this)

{
  ~CNCryptoCast5(this);
  operator_delete(this);
  return;
}
```
