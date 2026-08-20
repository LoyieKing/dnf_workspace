# IsEvolutionCreature

`_ZN13user_creature9CCreature19IsEvolutionCreatureEi`

`user_creature::CCreature::IsEvolutionCreature(int)`

| 类 | 地址 |
|---|---|
| `user_creature::CCreature` | `0x083388ec` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 083388ec  _ZN13user_creature9CCreature19IsEvolutionCreatureEi
#           user_creature::CCreature::IsEvolutionCreature(int)
# range [0x083388ec, 0x08338921]
083388ec +0x00:  push   %ebp
083388ed +0x01:  mov    %esp,%ebp
083388ef +0x03:  sub    $0x18,%esp
083388f2 +0x06:  mov    0x8(%ebp),%eax
083388f5 +0x09:  mov    0x44(%eax),%eax
083388f8 +0x0c:  test   %eax,%eax
083388fa +0x0e:  je     0833891b <+0x2f>
083388fc +0x10:  mov    0x8(%ebp),%eax
083388ff +0x13:  mov    0x44(%eax),%eax
08338902 +0x16:  mov    %eax,(%esp)
08338905 +0x19:  call   0833f144 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x1211>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x1211
0833890a +0x1e:  cmp    0xc(%ebp),%eax
0833890d +0x21:  sete   %al
08338910 +0x24:  test   %al,%al
08338912 +0x26:  je     0833891b <+0x2f>
08338914 +0x28:  mov    $0x1,%eax
08338919 +0x2d:  jmp    08338920 <+0x34>
0833891b +0x2f:  mov    $0x0,%eax
08338920 +0x34:  leave
08338921 +0x35:  ret
```

## 反编译 C

```c
// user_creature::CCreature::IsEvolutionCreature @ 0x83388ec

/* user_creature::CCreature::IsEvolutionCreature(int) */

undefined4 __thiscall user_creature::CCreature::IsEvolutionCreature(CCreature *this,int param_1)

{
  int iVar1;
  
  if ((*(int *)(this + 0x44) != 0) &&
     (iVar1 = CCreatureScript::GetEvolutionCreatureId(*(CCreatureScript **)(this + 0x44)),
     iVar1 == param_1)) {
    return 1;
  }
  return 0;
}
```
