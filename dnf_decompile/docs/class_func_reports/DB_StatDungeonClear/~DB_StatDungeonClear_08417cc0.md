# ~DB_StatDungeonClear

`_ZN19DB_StatDungeonClearD0Ev`

`DB_StatDungeonClear::~DB_StatDungeonClear()`

| 类 | 地址 |
|---|---|
| `DB_StatDungeonClear` | `0x08417cc0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08417cc0  _ZN19DB_StatDungeonClearD0Ev
#           DB_StatDungeonClear::~DB_StatDungeonClear()
# range [0x08417cc0, 0x08417cdd]
08417cc0 +0x00:  push   %ebp
08417cc1 +0x01:  mov    %esp,%ebp
08417cc3 +0x03:  sub    $0x18,%esp
08417cc6 +0x06:  mov    0x8(%ebp),%eax
08417cc9 +0x09:  mov    %eax,(%esp)
08417ccc +0x0c:  call   08417c90 <_ZN19DB_StatDungeonClearD1Ev>  ; DB_StatDungeonClear::~DB_StatDungeonClear()
08417cd1 +0x11:  mov    0x8(%ebp),%eax
08417cd4 +0x14:  mov    %eax,(%esp)
08417cd7 +0x17:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08417cdc +0x1c:  leave
08417cdd +0x1d:  ret
```

## 反编译 C

```c
// DB_StatDungeonClear::~DB_StatDungeonClear @ 0x8417cc0

/* DB_StatDungeonClear::~DB_StatDungeonClear() */

void __thiscall DB_StatDungeonClear::~DB_StatDungeonClear(DB_StatDungeonClear *this)

{
  ~DB_StatDungeonClear(this);
  operator_delete(this);
  return;
}
```
