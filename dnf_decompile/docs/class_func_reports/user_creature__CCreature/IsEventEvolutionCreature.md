# IsEventEvolutionCreature

`_ZN13user_creature9CCreature24IsEventEvolutionCreatureEi`

`user_creature::CCreature::IsEventEvolutionCreature(int)`

| 类 | 地址 |
|---|---|
| `user_creature::CCreature` | `0x08338bfa` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08338bfa  _ZN13user_creature9CCreature24IsEventEvolutionCreatureEi
#           user_creature::CCreature::IsEventEvolutionCreature(int)
# range [0x08338bfa, 0x08338c27]
08338bfa +0x00:  push   %ebp
08338bfb +0x01:  mov    %esp,%ebp
08338bfd +0x03:  sub    $0x18,%esp
08338c00 +0x06:  mov    0x8(%ebp),%eax
08338c03 +0x09:  mov    0x44(%eax),%eax
08338c06 +0x0c:  test   %eax,%eax
08338c08 +0x0e:  je     08338c21 <+0x27>
08338c0a +0x10:  mov    0x8(%ebp),%eax
08338c0d +0x13:  mov    0x44(%eax),%eax
08338c10 +0x16:  mov    0xc(%ebp),%edx
08338c13 +0x19:  mov    %edx,0x4(%esp)
08338c17 +0x1d:  mov    %eax,(%esp)
08338c1a +0x20:  call   0833f150 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x121d>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x121d
08338c1f +0x25:  jmp    08338c26 <+0x2c>
08338c21 +0x27:  mov    $0x0,%eax
08338c26 +0x2c:  leave
08338c27 +0x2d:  ret
```

## 反编译 C

```c
// user_creature::CCreature::IsEventEvolutionCreature @ 0x8338bfa

/* user_creature::CCreature::IsEventEvolutionCreature(int) */

undefined4 __thiscall
user_creature::CCreature::IsEventEvolutionCreature(CCreature *this,int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(this + 0x44) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = CCreatureScript::validEventEvlouteCreature(*(CCreatureScript **)(this + 0x44),param_1);
  }
  return uVar1;
}
```
