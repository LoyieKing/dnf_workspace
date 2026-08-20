# CCreature

`_ZN13user_creature9CCreatureC1Ev`

`user_creature::CCreature::CCreature()`

| 类 | 地址 |
|---|---|
| `user_creature::CCreature` | `0x0833705e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0833705e  _ZN13user_creature9CCreatureC1Ev
#           user_creature::CCreature::CCreature()
# range [0x0833705e, 0x083370a1]
0833705e +0x00:  push   %ebp
0833705f +0x01:  mov    %esp,%ebp
08337061 +0x03:  sub    $0x18,%esp
08337064 +0x06:  mov    0x8(%ebp),%eax
08337067 +0x09:  mov    %eax,(%esp)
0833706a +0x0c:  call   08340c82 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x2d4f>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x2d4f
0833706f +0x11:  mov    0x8(%ebp),%eax
08337072 +0x14:  movl   $&_ZTVN13user_creature9CCreatureE+0x8,(%eax)
08337078 +0x1a:  mov    0x8(%ebp),%eax
0833707b +0x1d:  add    $0x34,%eax
0833707e +0x20:  mov    %eax,(%esp)
08337081 +0x23:  call   08336cd8 <_ZN13user_creature8CStomachC1Ev>  ; user_creature::CStomach::CStomach()
08337086 +0x28:  mov    0x8(%ebp),%eax
08337089 +0x2b:  add    $0x50,%eax
0833708c +0x2e:  mov    %eax,(%esp)
0833708f +0x31:  call   0833d636 <_ZN13user_creature14COverSkillTimeC1Ev>  ; user_creature::COverSkillTime::COverSkillTime()
08337094 +0x36:  mov    0x8(%ebp),%eax
08337097 +0x39:  mov    %eax,(%esp)
0833709a +0x3c:  call   083370b0 <_ZN13user_creature9CCreature5ResetEv>  ; user_creature::CCreature::Reset()
0833709f +0x41:  leave
083370a0 +0x42:  ret
083370a1 +0x43:  nop
```

## 反编译 C

```c
// user_creature::CCreature::CCreature @ 0x833705e

/* user_creature::CCreature::CCreature() */

void __thiscall user_creature::CCreature::CCreature(CCreature *this)

{
  CCreatureItem::CCreatureItem((CCreatureItem *)this);
  *(undefined ***)this = &PTR_Reset_08c2f4c0;
  CStomach::CStomach((CStomach *)(this + 0x34));
  COverSkillTime::COverSkillTime((COverSkillTime *)(this + 0x50));
  Reset(this);
  return;
}
```
