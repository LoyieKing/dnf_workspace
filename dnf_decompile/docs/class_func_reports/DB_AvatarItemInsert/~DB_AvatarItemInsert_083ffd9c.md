# ~DB_AvatarItemInsert

`_ZN19DB_AvatarItemInsertD0Ev`

`DB_AvatarItemInsert::~DB_AvatarItemInsert()`

| 类 | 地址 |
|---|---|
| `DB_AvatarItemInsert` | `0x083ffd9c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 083ffd9c  _ZN19DB_AvatarItemInsertD0Ev
#           DB_AvatarItemInsert::~DB_AvatarItemInsert()
# range [0x083ffd9c, 0x083ffdb9]
083ffd9c +0x00:  push   %ebp
083ffd9d +0x01:  mov    %esp,%ebp
083ffd9f +0x03:  sub    $0x18,%esp
083ffda2 +0x06:  mov    0x8(%ebp),%eax
083ffda5 +0x09:  mov    %eax,(%esp)
083ffda8 +0x0c:  call   083ffd6c <_ZN19DB_AvatarItemInsertD1Ev>  ; DB_AvatarItemInsert::~DB_AvatarItemInsert()
083ffdad +0x11:  mov    0x8(%ebp),%eax
083ffdb0 +0x14:  mov    %eax,(%esp)
083ffdb3 +0x17:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
083ffdb8 +0x1c:  leave
083ffdb9 +0x1d:  ret
```

## 反编译 C

```c
// DB_AvatarItemInsert::~DB_AvatarItemInsert @ 0x83ffd9c

/* DB_AvatarItemInsert::~DB_AvatarItemInsert() */

void __thiscall DB_AvatarItemInsert::~DB_AvatarItemInsert(DB_AvatarItemInsert *this)

{
  ~DB_AvatarItemInsert(this);
  operator_delete(this);
  return;
}
```
