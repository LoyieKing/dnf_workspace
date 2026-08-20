# GetOverSkillRecoveryTime

`_ZN13user_creature9CCreature24GetOverSkillRecoveryTimeEv`

`user_creature::CCreature::GetOverSkillRecoveryTime()`

| 类 | 地址 |
|---|---|
| `user_creature::CCreature` | `0x08338c50` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08338c50  _ZN13user_creature9CCreature24GetOverSkillRecoveryTimeEv
#           user_creature::CCreature::GetOverSkillRecoveryTime()
# range [0x08338c50, 0x08338c77]
08338c50 +0x00:  push   %ebp
08338c51 +0x01:  mov    %esp,%ebp
08338c53 +0x03:  sub    $0x18,%esp
08338c56 +0x06:  mov    0x8(%ebp),%eax
08338c59 +0x09:  mov    0x44(%eax),%eax
08338c5c +0x0c:  test   %eax,%eax
08338c5e +0x0e:  jne    08338c67 <+0x17>
08338c60 +0x10:  mov    $0xffffffff,%eax
08338c65 +0x15:  jmp    08338c75 <+0x25>
08338c67 +0x17:  mov    0x8(%ebp),%eax
08338c6a +0x1a:  mov    0x44(%eax),%eax
08338c6d +0x1d:  mov    %eax,(%esp)
08338c70 +0x20:  call   0833f264 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x1331>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x1331
08338c75 +0x25:  leave
08338c76 +0x26:  ret
08338c77 +0x27:  nop
```

## 反编译 C

```c
// user_creature::CCreature::GetOverSkillRecoveryTime @ 0x8338c50

/* user_creature::CCreature::GetOverSkillRecoveryTime() */

undefined4 __thiscall user_creature::CCreature::GetOverSkillRecoveryTime(CCreature *this)

{
  undefined4 uVar1;
  
  if (*(int *)(this + 0x44) == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = CCreatureScript::GetOverSkillRecoveryTime(*(CCreatureScript **)(this + 0x44));
  }
  return uVar1;
}
```
