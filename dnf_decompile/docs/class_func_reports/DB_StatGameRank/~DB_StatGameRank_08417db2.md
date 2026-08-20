# ~DB_StatGameRank

`_ZN15DB_StatGameRankD0Ev`

`DB_StatGameRank::~DB_StatGameRank()`

| 类 | 地址 |
|---|---|
| `DB_StatGameRank` | `0x08417db2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08417db2  _ZN15DB_StatGameRankD0Ev
#           DB_StatGameRank::~DB_StatGameRank()
# range [0x08417db2, 0x08417dcf]
08417db2 +0x00:  push   %ebp
08417db3 +0x01:  mov    %esp,%ebp
08417db5 +0x03:  sub    $0x18,%esp
08417db8 +0x06:  mov    0x8(%ebp),%eax
08417dbb +0x09:  mov    %eax,(%esp)
08417dbe +0x0c:  call   08417d82 <_ZN15DB_StatGameRankD1Ev>  ; DB_StatGameRank::~DB_StatGameRank()
08417dc3 +0x11:  mov    0x8(%ebp),%eax
08417dc6 +0x14:  mov    %eax,(%esp)
08417dc9 +0x17:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08417dce +0x1c:  leave
08417dcf +0x1d:  ret
```

## 反编译 C

```c
// DB_StatGameRank::~DB_StatGameRank @ 0x8417db2

/* DB_StatGameRank::~DB_StatGameRank() */

void __thiscall DB_StatGameRank::~DB_StatGameRank(DB_StatGameRank *this)

{
  ~DB_StatGameRank(this);
  operator_delete(this);
  return;
}
```
