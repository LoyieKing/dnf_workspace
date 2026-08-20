# IsGrowCreature_Equipped_Creature

`_ZNK13user_creature12CCreatureMgr32IsGrowCreature_Equipped_CreatureEv`

`user_creature::CCreatureMgr::IsGrowCreature_Equipped_Creature() const`

| 类 | 地址 |
|---|---|
| `user_creature::CCreatureMgr` | `0x0833debc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0833debc  _ZNK13user_creature12CCreatureMgr32IsGrowCreature_Equipped_CreatureEv
#           user_creature::CCreatureMgr::IsGrowCreature_Equipped_Creature() const
# range [0x0833debc, 0x0833def2]
0833debc +0x00:  push   %ebp
0833debd +0x01:  mov    %esp,%ebp
0833debf +0x03:  sub    $0x18,%esp
0833dec2 +0x06:  mov    0x8(%ebp),%eax
0833dec5 +0x09:  mov    0x18(%eax),%eax
0833dec8 +0x0c:  test   %eax,%eax
0833deca +0x0e:  je     0833deec <+0x30>
0833decc +0x10:  mov    0x8(%ebp),%eax
0833decf +0x13:  mov    0x18(%eax),%eax
0833ded2 +0x16:  mov    %eax,(%esp)
0833ded5 +0x19:  call   0833f0ca <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x1197>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x1197
0833deda +0x1e:  test   %al,%al
0833dedc +0x20:  je     0833dee5 <+0x29>
0833dede +0x22:  mov    $0x1,%eax
0833dee3 +0x27:  jmp    0833def1 <+0x35>
0833dee5 +0x29:  mov    $0x0,%eax
0833deea +0x2e:  jmp    0833def1 <+0x35>
0833deec +0x30:  mov    $0x0,%eax
0833def1 +0x35:  leave
0833def2 +0x36:  ret
```

## 反编译 C

```c
// user_creature::CCreatureMgr::IsGrowCreature_Equipped_Creature @ 0x833debc

/* user_creature::CCreatureMgr::IsGrowCreature_Equipped_Creature() const */

undefined4 __thiscall
user_creature::CCreatureMgr::IsGrowCreature_Equipped_Creature(CCreatureMgr *this)

{
  char cVar1;
  undefined4 uVar2;
  
  if (*(int *)(this + 0x18) == 0) {
    uVar2 = 0;
  }
  else {
    cVar1 = CCreature::IsGrowCreature(*(CCreature **)(this + 0x18));
    if (cVar1 == '\0') {
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
  }
  return uVar2;
}
```
