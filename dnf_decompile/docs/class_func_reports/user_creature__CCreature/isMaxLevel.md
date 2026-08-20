# isMaxLevel

`_ZN13user_creature9CCreature10isMaxLevelEv`

`user_creature::CCreature::isMaxLevel()`

| 类 | 地址 |
|---|---|
| `user_creature::CCreature` | `0x0833756e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0833756e  _ZN13user_creature9CCreature10isMaxLevelEv
#           user_creature::CCreature::isMaxLevel()
# range [0x0833756e, 0x083375ad]
0833756e +0x00:  push   %ebp
0833756f +0x01:  mov    %esp,%ebp
08337571 +0x03:  push   %ebx
08337572 +0x04:  sub    $0x14,%esp
08337575 +0x07:  mov    0x8(%ebp),%eax
08337578 +0x0a:  mov    0x44(%eax),%eax
0833757b +0x0d:  test   %eax,%eax
0833757d +0x0f:  je     083375a3 <+0x35>
0833757f +0x11:  mov    0x8(%ebp),%eax
08337582 +0x14:  mov    0x2c(%eax),%ebx
08337585 +0x17:  mov    0x8(%ebp),%eax
08337588 +0x1a:  mov    0x44(%eax),%eax
0833758b +0x1d:  mov    %eax,(%esp)
0833758e +0x20:  call   0833f24c <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x1319>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x1319
08337593 +0x25:  cmp    %eax,%ebx
08337595 +0x27:  setge  %al
08337598 +0x2a:  test   %al,%al
0833759a +0x2c:  je     083375a3 <+0x35>
0833759c +0x2e:  mov    $0x1,%eax
083375a1 +0x33:  jmp    083375a8 <+0x3a>
083375a3 +0x35:  mov    $0x0,%eax
083375a8 +0x3a:  add    $0x14,%esp
083375ab +0x3d:  pop    %ebx
083375ac +0x3e:  pop    %ebp
083375ad +0x3f:  ret
```

## 反编译 C

```c
// user_creature::CCreature::isMaxLevel @ 0x833756e

/* user_creature::CCreature::isMaxLevel() */

undefined4 __thiscall user_creature::CCreature::isMaxLevel(CCreature *this)

{
  int iVar1;
  int iVar2;
  
  if ((*(int *)(this + 0x44) != 0) &&
     (iVar1 = *(int *)(this + 0x2c),
     iVar2 = CCreatureScript::GetMaxLevel(*(CCreatureScript **)(this + 0x44)), iVar2 <= iVar1)) {
    return 1;
  }
  return 0;
}
```
