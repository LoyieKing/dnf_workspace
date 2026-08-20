# ~CEventCreateDnf

`_ZN15CEventCreateDnfD0Ev`

`CEventCreateDnf::~CEventCreateDnf()`

| 类 | 地址 |
|---|---|
| `CEventCreateDnf` | `0x08163b18` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08163b18  _ZN15CEventCreateDnfD0Ev
#           CEventCreateDnf::~CEventCreateDnf()
# range [0x08163b18, 0x08163b35]
08163b18 +0x00:  push   %ebp
08163b19 +0x01:  mov    %esp,%ebp
08163b1b +0x03:  sub    $0x18,%esp
08163b1e +0x06:  mov    0x8(%ebp),%eax
08163b21 +0x09:  mov    %eax,(%esp)
08163b24 +0x0c:  call   08163ae8 <_ZN15CEventCreateDnfD1Ev>  ; CEventCreateDnf::~CEventCreateDnf()
08163b29 +0x11:  mov    0x8(%ebp),%eax
08163b2c +0x14:  mov    %eax,(%esp)
08163b2f +0x17:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08163b34 +0x1c:  leave
08163b35 +0x1d:  ret
```

## 反编译 C

```c
// CEventCreateDnf::~CEventCreateDnf @ 0x8163b18

/* CEventCreateDnf::~CEventCreateDnf() */

void __thiscall CEventCreateDnf::~CEventCreateDnf(CEventCreateDnf *this)

{
  ~CEventCreateDnf(this);
  operator_delete(this);
  return;
}
```
