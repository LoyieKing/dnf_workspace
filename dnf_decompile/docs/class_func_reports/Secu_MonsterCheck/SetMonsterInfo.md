# SetMonsterInfo

`_ZN17Secu_MonsterCheck14SetMonsterInfoEPK15MSG_MONSTER_DIE`

`Secu_MonsterCheck::SetMonsterInfo(MSG_MONSTER_DIE const*)`

| 类 | 地址 |
|---|---|
| `Secu_MonsterCheck` | `0x0827abfa` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0827abfa  _ZN17Secu_MonsterCheck14SetMonsterInfoEPK15MSG_MONSTER_DIE
#           Secu_MonsterCheck::SetMonsterInfo(MSG_MONSTER_DIE const*)
# range [0x0827abfa, 0x0827ac79]
0827abfa +0x00:  push   %ebp
0827abfb +0x01:  mov    %esp,%ebp
0827abfd +0x03:  sub    $0x18,%esp
0827ac00 +0x06:  mov    0xc(%ebp),%eax
0827ac03 +0x09:  movzwl 0xd(%eax),%edx
0827ac07 +0x0d:  mov    0x8(%ebp),%eax
0827ac0a +0x10:  mov    %dx,0x28(%eax)
0827ac0e +0x14:  mov    0xc(%ebp),%eax
0827ac11 +0x17:  movzwl 0xa24(%eax),%edx
0827ac18 +0x1e:  mov    0x8(%ebp),%eax
0827ac1b +0x21:  mov    %dx,0x2a(%eax)
0827ac1f +0x25:  mov    0xc(%ebp),%eax
0827ac22 +0x28:  movzwl 0xa26(%eax),%edx
0827ac29 +0x2f:  mov    0x8(%ebp),%eax
0827ac2c +0x32:  mov    %dx,0x2c(%eax)
0827ac30 +0x36:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
0827ac37 +0x3d:  call   081458ac <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x32f>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x32f
0827ac3c +0x42:  mov    0x8(%ebp),%edx
0827ac3f +0x45:  mov    %eax,0x30(%edx)
0827ac42 +0x48:  mov    0xc(%ebp),%eax
0827ac45 +0x4b:  mov    %eax,0x4(%esp)
0827ac49 +0x4f:  mov    0x8(%ebp),%eax
0827ac4c +0x52:  mov    %eax,(%esp)
0827ac4f +0x55:  call   0827b288 <_ZN17Secu_MonsterCheck7init223EPK15MSG_MONSTER_DIE>  ; Secu_MonsterCheck::init223(MSG_MONSTER_DIE const*)
0827ac54 +0x5a:  mov    0xc(%ebp),%eax
0827ac57 +0x5d:  mov    %eax,0x4(%esp)
0827ac5b +0x61:  mov    0x8(%ebp),%eax
0827ac5e +0x64:  mov    %eax,(%esp)
0827ac61 +0x67:  call   0827b2e4 <_ZN17Secu_MonsterCheck7init224EPK15MSG_MONSTER_DIE>  ; Secu_MonsterCheck::init224(MSG_MONSTER_DIE const*)
0827ac66 +0x6c:  mov    0xc(%ebp),%eax
0827ac69 +0x6f:  mov    %eax,0x4(%esp)
0827ac6d +0x73:  mov    0x8(%ebp),%eax
0827ac70 +0x76:  mov    %eax,(%esp)
0827ac73 +0x79:  call   0827b334 <_ZN17Secu_MonsterCheck7init225EPK15MSG_MONSTER_DIE>  ; Secu_MonsterCheck::init225(MSG_MONSTER_DIE const*)
0827ac78 +0x7e:  leave
0827ac79 +0x7f:  ret
```

## 反编译 C

```c
// Secu_MonsterCheck::SetMonsterInfo @ 0x827abfa

/* Secu_MonsterCheck::SetMonsterInfo(MSG_MONSTER_DIE const*) */

void __thiscall Secu_MonsterCheck::SetMonsterInfo(Secu_MonsterCheck *this,MSG_MONSTER_DIE *param_1)

{
  undefined4 uVar1;
  
  *(undefined2 *)(this + 0x28) = *(undefined2 *)(param_1 + 0xd);
  *(undefined2 *)(this + 0x2a) = *(undefined2 *)(param_1 + 0xa24);
  *(undefined2 *)(this + 0x2c) = *(undefined2 *)(param_1 + 0xa26);
  uVar1 = CSystemTime::getCurTickCount((CSystemTime *)GlobalData::s_systemTime_);
  *(undefined4 *)(this + 0x30) = uVar1;
  init223(this,param_1);
  init224(this,param_1);
  init225(this,param_1);
  return;
}
```
