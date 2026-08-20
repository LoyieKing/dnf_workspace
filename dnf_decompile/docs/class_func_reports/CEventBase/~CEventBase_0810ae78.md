# ~CEventBase

`_ZN10CEventBaseD0Ev`

`CEventBase::~CEventBase()`

| 类 | 地址 |
|---|---|
| `CEventBase` | `0x0810ae78` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0810ae78  _ZN10CEventBaseD0Ev
#           CEventBase::~CEventBase()
# range [0x0810ae78, 0x0810ae95]
0810ae78 +0x00:  push   %ebp
0810ae79 +0x01:  mov    %esp,%ebp
0810ae7b +0x03:  sub    $0x18,%esp
0810ae7e +0x06:  mov    0x8(%ebp),%eax
0810ae81 +0x09:  mov    %eax,(%esp)
0810ae84 +0x0c:  call   0810ae52 <_ZN10CEventBaseD1Ev>  ; CEventBase::~CEventBase()
0810ae89 +0x11:  mov    0x8(%ebp),%eax
0810ae8c +0x14:  mov    %eax,(%esp)
0810ae8f +0x17:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0810ae94 +0x1c:  leave
0810ae95 +0x1d:  ret
```

## 反编译 C

```c
// CEventBase::~CEventBase @ 0x810ae78

/* CEventBase::~CEventBase() */

void __thiscall CEventBase::~CEventBase(CEventBase *this)

{
  ~CEventBase(this);
  operator_delete(this);
  return;
}
```
