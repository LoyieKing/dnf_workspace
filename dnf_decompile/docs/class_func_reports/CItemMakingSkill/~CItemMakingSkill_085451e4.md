# ~CItemMakingSkill

`_ZN16CItemMakingSkillD0Ev`

`CItemMakingSkill::~CItemMakingSkill()`

| 类 | 地址 |
|---|---|
| `CItemMakingSkill` | `0x085451e4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085451e4  _ZN16CItemMakingSkillD0Ev
#           CItemMakingSkill::~CItemMakingSkill()
# range [0x085451e4, 0x08545201]
085451e4 +0x00:  push   %ebp
085451e5 +0x01:  mov    %esp,%ebp
085451e7 +0x03:  sub    $0x18,%esp
085451ea +0x06:  mov    0x8(%ebp),%eax
085451ed +0x09:  mov    %eax,(%esp)
085451f0 +0x0c:  call   08545192 <_ZN16CItemMakingSkillD1Ev>  ; CItemMakingSkill::~CItemMakingSkill()
085451f5 +0x11:  mov    0x8(%ebp),%eax
085451f8 +0x14:  mov    %eax,(%esp)
085451fb +0x17:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08545200 +0x1c:  leave
08545201 +0x1d:  ret
```

## 反编译 C

```c
// CItemMakingSkill::~CItemMakingSkill @ 0x85451e4

/* CItemMakingSkill::~CItemMakingSkill() */

void __thiscall CItemMakingSkill::~CItemMakingSkill(CItemMakingSkill *this)

{
  ~CItemMakingSkill(this);
  operator_delete(this);
  return;
}
```
