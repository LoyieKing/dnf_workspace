# ~DB_StatComposition

`_ZN18DB_StatCompositionD0Ev`

`DB_StatComposition::~DB_StatComposition()`

| 类 | 地址 |
|---|---|
| `DB_StatComposition` | `0x08417bce` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08417bce  _ZN18DB_StatCompositionD0Ev
#           DB_StatComposition::~DB_StatComposition()
# range [0x08417bce, 0x08417beb]
08417bce +0x00:  push   %ebp
08417bcf +0x01:  mov    %esp,%ebp
08417bd1 +0x03:  sub    $0x18,%esp
08417bd4 +0x06:  mov    0x8(%ebp),%eax
08417bd7 +0x09:  mov    %eax,(%esp)
08417bda +0x0c:  call   08417b9e <_ZN18DB_StatCompositionD1Ev>  ; DB_StatComposition::~DB_StatComposition()
08417bdf +0x11:  mov    0x8(%ebp),%eax
08417be2 +0x14:  mov    %eax,(%esp)
08417be5 +0x17:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08417bea +0x1c:  leave
08417beb +0x1d:  ret
```

## 反编译 C

```c
// DB_StatComposition::~DB_StatComposition @ 0x8417bce

/* DB_StatComposition::~DB_StatComposition() */

void __thiscall DB_StatComposition::~DB_StatComposition(DB_StatComposition *this)

{
  ~DB_StatComposition(this);
  operator_delete(this);
  return;
}
```
