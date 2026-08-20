# DieMob

`_ZN24Secu_HackLogCheckByParty6DieMobEPK15MSG_MONSTER_DIEP11map_monster`

`Secu_HackLogCheckByParty::DieMob(MSG_MONSTER_DIE const*, map_monster*)`

| 类 | 地址 |
|---|---|
| `Secu_HackLogCheckByParty` | `0x0827a940` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0827a940  _ZN24Secu_HackLogCheckByParty6DieMobEPK15MSG_MONSTER_DIEP11map_monster
#           Secu_HackLogCheckByParty::DieMob(MSG_MONSTER_DIE const*, map_monster*)
# range [0x0827a940, 0x0827a96d]
0827a940 +0x00:  push   %ebp
0827a941 +0x01:  mov    %esp,%ebp
0827a943 +0x03:  sub    $0x18,%esp
0827a946 +0x06:  mov    0xc(%ebp),%eax
0827a949 +0x09:  movzwl 0xf(%eax),%eax
0827a94d +0x0d:  cmp    $0xffff,%ax
0827a951 +0x11:  je     0827a96c <+0x2c>
0827a953 +0x13:  mov    0x8(%ebp),%eax
0827a956 +0x16:  mov    0x10(%ebp),%edx
0827a959 +0x19:  mov    %edx,0x8(%esp)
0827a95d +0x1d:  mov    0xc(%ebp),%edx
0827a960 +0x20:  mov    %edx,0x4(%esp)
0827a964 +0x24:  mov    %eax,(%esp)
0827a967 +0x27:  call   082794d6 <_ZN24Secu_DungeonAverageCheck18setKillMonsterInfoEPK15MSG_MONSTER_DIEP11map_monster>  ; Secu_DungeonAverageCheck::setKillMonsterInfo(MSG_MONSTER_DIE const*, map_monster*)
0827a96c +0x2c:  leave
0827a96d +0x2d:  ret
```

## 反编译 C

```c
// Secu_HackLogCheckByParty::DieMob @ 0x827a940

/* Secu_HackLogCheckByParty::DieMob(MSG_MONSTER_DIE const*, map_monster*) */

void __thiscall
Secu_HackLogCheckByParty::DieMob
          (Secu_HackLogCheckByParty *this,MSG_MONSTER_DIE *param_1,map_monster *param_2)

{
  if (*(short *)(param_1 + 0xf) != -1) {
    Secu_DungeonAverageCheck::setKillMonsterInfo((Secu_DungeonAverageCheck *)this,param_1,param_2);
  }
  return;
}
```
