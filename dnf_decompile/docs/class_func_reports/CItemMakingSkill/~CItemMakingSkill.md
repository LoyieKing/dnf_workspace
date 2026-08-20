# ~CItemMakingSkill

`_ZN16CItemMakingSkillD1Ev`

`CItemMakingSkill::~CItemMakingSkill()`

| 类 | 地址 |
|---|---|
| `CItemMakingSkill` | `0x08545192` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08545192  _ZN16CItemMakingSkillD1Ev
#           CItemMakingSkill::~CItemMakingSkill()
# range [0x08545192, 0x085451e3]
08545192 +0x00:  push   %ebp
08545193 +0x01:  mov    %esp,%ebp
08545195 +0x03:  sub    $0x18,%esp
08545198 +0x06:  mov    0x8(%ebp),%eax
0854519b +0x09:  movl   $&_ZTV16CItemMakingSkill+0x8,(%eax)
085451a1 +0x0f:  mov    0x8(%ebp),%eax
085451a4 +0x12:  mov    0x1c(%eax),%eax
085451a7 +0x15:  test   %eax,%eax
085451a9 +0x17:  je     085451b9 <+0x27>
085451ab +0x19:  mov    0x8(%ebp),%eax
085451ae +0x1c:  mov    0x1c(%eax),%eax
085451b1 +0x1f:  mov    %eax,(%esp)
085451b4 +0x22:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
085451b9 +0x27:  mov    0x8(%ebp),%eax
085451bc +0x2a:  movl   $0x0,0x1c(%eax)
085451c3 +0x31:  mov    0x8(%ebp),%eax
085451c6 +0x34:  mov    %eax,(%esp)
085451c9 +0x37:  call   080c8be2 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x3a>  ; global constructors keyed to BestClearTime::BestClearTime()+0x3a
085451ce +0x3c:  mov    $0x0,%eax
085451d3 +0x41:  test   %al,%al
085451d5 +0x43:  je     085451e2 <+0x50>
085451d7 +0x45:  mov    0x8(%ebp),%eax
085451da +0x48:  mov    %eax,(%esp)
085451dd +0x4b:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
085451e2 +0x50:  leave
085451e3 +0x51:  ret
```

## 反编译 C

```c
// CItemMakingSkill::~CItemMakingSkill @ 0x8545192

/* WARNING: Removing unreachable block (ram,0x085451d7) */
/* CItemMakingSkill::~CItemMakingSkill() */

void __thiscall CItemMakingSkill::~CItemMakingSkill(CItemMakingSkill *this)

{
  *(undefined ***)this = &PTR_ResetDailyMidnight_08c9c348;
  if (*(int *)(this + 0x1c) != 0) {
    operator_delete(*(void **)(this + 0x1c));
  }
  *(undefined4 *)(this + 0x1c) = 0;
  charac_expand::CData::~CData((CData *)this);
  return;
}
```
