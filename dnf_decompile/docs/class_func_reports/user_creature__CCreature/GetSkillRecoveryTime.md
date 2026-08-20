# GetSkillRecoveryTime

`_ZN13user_creature9CCreature20GetSkillRecoveryTimeEv`

`user_creature::CCreature::GetSkillRecoveryTime()`

| 类 | 地址 |
|---|---|
| `user_creature::CCreature` | `0x08338c28` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08338c28  _ZN13user_creature9CCreature20GetSkillRecoveryTimeEv
#           user_creature::CCreature::GetSkillRecoveryTime()
# range [0x08338c28, 0x08338c4f]
08338c28 +0x00:  push   %ebp
08338c29 +0x01:  mov    %esp,%ebp
08338c2b +0x03:  sub    $0x18,%esp
08338c2e +0x06:  mov    0x8(%ebp),%eax
08338c31 +0x09:  mov    0x44(%eax),%eax
08338c34 +0x0c:  test   %eax,%eax
08338c36 +0x0e:  jne    08338c3f <+0x17>
08338c38 +0x10:  mov    $0xffffffff,%eax
08338c3d +0x15:  jmp    08338c4d <+0x25>
08338c3f +0x17:  mov    0x8(%ebp),%eax
08338c42 +0x1a:  mov    0x44(%eax),%eax
08338c45 +0x1d:  mov    %eax,(%esp)
08338c48 +0x20:  call   0833f258 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x1325>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x1325
08338c4d +0x25:  leave
08338c4e +0x26:  ret
08338c4f +0x27:  nop
```

## 反编译 C

```c
// user_creature::CCreature::GetSkillRecoveryTime @ 0x8338c28

/* user_creature::CCreature::GetSkillRecoveryTime() */

undefined4 __thiscall user_creature::CCreature::GetSkillRecoveryTime(CCreature *this)

{
  undefined4 uVar1;
  
  if (*(int *)(this + 0x44) == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = CCreatureScript::GetSkillRecoveryTime(*(CCreatureScript **)(this + 0x44));
  }
  return uVar1;
}
```
