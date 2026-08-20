# ~DB_LoadDungeonClear

`_ZN19DB_LoadDungeonClearD0Ev`

`DB_LoadDungeonClear::~DB_LoadDungeonClear()`

| 类 | 地址 |
|---|---|
| `DB_LoadDungeonClear` | `0x0841989e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0841989e  _ZN19DB_LoadDungeonClearD0Ev
#           DB_LoadDungeonClear::~DB_LoadDungeonClear()
# range [0x0841989e, 0x084198bb]
0841989e +0x00:  push   %ebp
0841989f +0x01:  mov    %esp,%ebp
084198a1 +0x03:  sub    $0x18,%esp
084198a4 +0x06:  mov    0x8(%ebp),%eax
084198a7 +0x09:  mov    %eax,(%esp)
084198aa +0x0c:  call   0841986e <_ZN19DB_LoadDungeonClearD1Ev>  ; DB_LoadDungeonClear::~DB_LoadDungeonClear()
084198af +0x11:  mov    0x8(%ebp),%eax
084198b2 +0x14:  mov    %eax,(%esp)
084198b5 +0x17:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
084198ba +0x1c:  leave
084198bb +0x1d:  ret
```

## 反编译 C

```c
// DB_LoadDungeonClear::~DB_LoadDungeonClear @ 0x841989e

/* DB_LoadDungeonClear::~DB_LoadDungeonClear() */

void __thiscall DB_LoadDungeonClear::~DB_LoadDungeonClear(DB_LoadDungeonClear *this)

{
  ~DB_LoadDungeonClear(this);
  operator_delete(this);
  return;
}
```
