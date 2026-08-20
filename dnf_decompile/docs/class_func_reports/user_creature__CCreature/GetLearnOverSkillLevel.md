# GetLearnOverSkillLevel

`_ZN13user_creature9CCreature22GetLearnOverSkillLevelEv`

`user_creature::CCreature::GetLearnOverSkillLevel()`

| 类 | 地址 |
|---|---|
| `user_creature::CCreature` | `0x08338c78` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08338c78  _ZN13user_creature9CCreature22GetLearnOverSkillLevelEv
#           user_creature::CCreature::GetLearnOverSkillLevel()
# range [0x08338c78, 0x08338c9f]
08338c78 +0x00:  push   %ebp
08338c79 +0x01:  mov    %esp,%ebp
08338c7b +0x03:  sub    $0x18,%esp
08338c7e +0x06:  mov    0x8(%ebp),%eax
08338c81 +0x09:  mov    0x44(%eax),%eax
08338c84 +0x0c:  test   %eax,%eax
08338c86 +0x0e:  jne    08338c8f <+0x17>
08338c88 +0x10:  mov    $0xffffffff,%eax
08338c8d +0x15:  jmp    08338c9d <+0x25>
08338c8f +0x17:  mov    0x8(%ebp),%eax
08338c92 +0x1a:  mov    0x44(%eax),%eax
08338c95 +0x1d:  mov    %eax,(%esp)
08338c98 +0x20:  call   0833f270 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x133d>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x133d
08338c9d +0x25:  leave
08338c9e +0x26:  ret
08338c9f +0x27:  nop
```

## 反编译 C

```c
// user_creature::CCreature::GetLearnOverSkillLevel @ 0x8338c78

/* user_creature::CCreature::GetLearnOverSkillLevel() */

undefined4 __thiscall user_creature::CCreature::GetLearnOverSkillLevel(CCreature *this)

{
  undefined4 uVar1;
  
  if (*(int *)(this + 0x44) == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = CCreatureScript::GetLearnOverSkillLevel(*(CCreatureScript **)(this + 0x44));
  }
  return uVar1;
}
```
