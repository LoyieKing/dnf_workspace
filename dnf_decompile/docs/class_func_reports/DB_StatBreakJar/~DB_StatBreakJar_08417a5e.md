# ~DB_StatBreakJar

`_ZN15DB_StatBreakJarD0Ev`

`DB_StatBreakJar::~DB_StatBreakJar()`

| 类 | 地址 |
|---|---|
| `DB_StatBreakJar` | `0x08417a5e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08417a5e  _ZN15DB_StatBreakJarD0Ev
#           DB_StatBreakJar::~DB_StatBreakJar()
# range [0x08417a5e, 0x08417a7b]
08417a5e +0x00:  push   %ebp
08417a5f +0x01:  mov    %esp,%ebp
08417a61 +0x03:  sub    $0x18,%esp
08417a64 +0x06:  mov    0x8(%ebp),%eax
08417a67 +0x09:  mov    %eax,(%esp)
08417a6a +0x0c:  call   08417a2e <_ZN15DB_StatBreakJarD1Ev>  ; DB_StatBreakJar::~DB_StatBreakJar()
08417a6f +0x11:  mov    0x8(%ebp),%eax
08417a72 +0x14:  mov    %eax,(%esp)
08417a75 +0x17:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08417a7a +0x1c:  leave
08417a7b +0x1d:  ret
```

## 反编译 C

```c
// DB_StatBreakJar::~DB_StatBreakJar @ 0x8417a5e

/* DB_StatBreakJar::~DB_StatBreakJar() */

void __thiscall DB_StatBreakJar::~DB_StatBreakJar(DB_StatBreakJar *this)

{
  ~DB_StatBreakJar(this);
  operator_delete(this);
  return;
}
```
