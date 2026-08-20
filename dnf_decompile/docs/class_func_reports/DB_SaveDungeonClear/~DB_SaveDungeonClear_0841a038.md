# ~DB_SaveDungeonClear

`_ZN19DB_SaveDungeonClearD0Ev`

`DB_SaveDungeonClear::~DB_SaveDungeonClear()`

| 类 | 地址 |
|---|---|
| `DB_SaveDungeonClear` | `0x0841a038` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0841a038  _ZN19DB_SaveDungeonClearD0Ev
#           DB_SaveDungeonClear::~DB_SaveDungeonClear()
# range [0x0841a038, 0x0841a055]
0841a038 +0x00:  push   %ebp
0841a039 +0x01:  mov    %esp,%ebp
0841a03b +0x03:  sub    $0x18,%esp
0841a03e +0x06:  mov    0x8(%ebp),%eax
0841a041 +0x09:  mov    %eax,(%esp)
0841a044 +0x0c:  call   0841a008 <_ZN19DB_SaveDungeonClearD1Ev>  ; DB_SaveDungeonClear::~DB_SaveDungeonClear()
0841a049 +0x11:  mov    0x8(%ebp),%eax
0841a04c +0x14:  mov    %eax,(%esp)
0841a04f +0x17:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0841a054 +0x1c:  leave
0841a055 +0x1d:  ret
```

## 反编译 C

```c
// DB_SaveDungeonClear::~DB_SaveDungeonClear @ 0x841a038

/* DB_SaveDungeonClear::~DB_SaveDungeonClear() */

void __thiscall DB_SaveDungeonClear::~DB_SaveDungeonClear(DB_SaveDungeonClear *this)

{
  ~DB_SaveDungeonClear(this);
  operator_delete(this);
  return;
}
```
