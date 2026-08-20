# ~DB_SavePvp

`_ZN10DB_SavePvpD0Ev`

`DB_SavePvp::~DB_SavePvp()`

| 类 | 地址 |
|---|---|
| `DB_SavePvp` | `0x0841725a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0841725a  _ZN10DB_SavePvpD0Ev
#           DB_SavePvp::~DB_SavePvp()
# range [0x0841725a, 0x08417277]
0841725a +0x00:  push   %ebp
0841725b +0x01:  mov    %esp,%ebp
0841725d +0x03:  sub    $0x18,%esp
08417260 +0x06:  mov    0x8(%ebp),%eax
08417263 +0x09:  mov    %eax,(%esp)
08417266 +0x0c:  call   0841722a <_ZN10DB_SavePvpD1Ev>  ; DB_SavePvp::~DB_SavePvp()
0841726b +0x11:  mov    0x8(%ebp),%eax
0841726e +0x14:  mov    %eax,(%esp)
08417271 +0x17:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08417276 +0x1c:  leave
08417277 +0x1d:  ret
```

## 反编译 C

```c
// DB_SavePvp::~DB_SavePvp @ 0x841725a

/* DB_SavePvp::~DB_SavePvp() */

void __thiscall DB_SavePvp::~DB_SavePvp(DB_SavePvp *this)

{
  ~DB_SavePvp(this);
  operator_delete(this);
  return;
}
```
