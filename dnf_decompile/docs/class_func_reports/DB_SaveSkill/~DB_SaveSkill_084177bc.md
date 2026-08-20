# ~DB_SaveSkill

`_ZN12DB_SaveSkillD0Ev`

`DB_SaveSkill::~DB_SaveSkill()`

| 类 | 地址 |
|---|---|
| `DB_SaveSkill` | `0x084177bc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084177bc  _ZN12DB_SaveSkillD0Ev
#           DB_SaveSkill::~DB_SaveSkill()
# range [0x084177bc, 0x084177d9]
084177bc +0x00:  push   %ebp
084177bd +0x01:  mov    %esp,%ebp
084177bf +0x03:  sub    $0x18,%esp
084177c2 +0x06:  mov    0x8(%ebp),%eax
084177c5 +0x09:  mov    %eax,(%esp)
084177c8 +0x0c:  call   0841778c <_ZN12DB_SaveSkillD1Ev>  ; DB_SaveSkill::~DB_SaveSkill()
084177cd +0x11:  mov    0x8(%ebp),%eax
084177d0 +0x14:  mov    %eax,(%esp)
084177d3 +0x17:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
084177d8 +0x1c:  leave
084177d9 +0x1d:  ret
```

## 反编译 C

```c
// DB_SaveSkill::~DB_SaveSkill @ 0x84177bc

/* DB_SaveSkill::~DB_SaveSkill() */

void __thiscall DB_SaveSkill::~DB_SaveSkill(DB_SaveSkill *this)

{
  ~DB_SaveSkill(this);
  operator_delete(this);
  return;
}
```
