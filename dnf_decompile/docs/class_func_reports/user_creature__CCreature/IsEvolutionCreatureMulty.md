# IsEvolutionCreatureMulty

`_ZN13user_creature9CCreature24IsEvolutionCreatureMultyEi`

`user_creature::CCreature::IsEvolutionCreatureMulty(int)`

| 类 | 地址 |
|---|---|
| `user_creature::CCreature` | `0x08338922` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08338922  _ZN13user_creature9CCreature24IsEvolutionCreatureMultyEi
#           user_creature::CCreature::IsEvolutionCreatureMulty(int)
# range [0x08338922, 0x0833894f]
08338922 +0x00:  push   %ebp
08338923 +0x01:  mov    %esp,%ebp
08338925 +0x03:  sub    $0x18,%esp
08338928 +0x06:  mov    0x8(%ebp),%eax
0833892b +0x09:  mov    0x44(%eax),%eax
0833892e +0x0c:  test   %eax,%eax
08338930 +0x0e:  je     08338949 <+0x27>
08338932 +0x10:  mov    0x8(%ebp),%eax
08338935 +0x13:  mov    0x44(%eax),%eax
08338938 +0x16:  mov    0xc(%ebp),%edx
0833893b +0x19:  mov    %edx,0x4(%esp)
0833893f +0x1d:  mov    %eax,(%esp)
08338942 +0x20:  call   0833f1e0 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x12ad>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x12ad
08338947 +0x25:  jmp    0833894e <+0x2c>
08338949 +0x27:  mov    $0x0,%eax
0833894e +0x2c:  leave
0833894f +0x2d:  ret
```

## 反编译 C

```c
// user_creature::CCreature::IsEvolutionCreatureMulty @ 0x8338922

/* user_creature::CCreature::IsEvolutionCreatureMulty(int) */

undefined4 __thiscall
user_creature::CCreature::IsEvolutionCreatureMulty(CCreature *this,int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(this + 0x44) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = CCreatureScript::isEvoluationCreature(*(CCreatureScript **)(this + 0x44),param_1);
  }
  return uVar1;
}
```
