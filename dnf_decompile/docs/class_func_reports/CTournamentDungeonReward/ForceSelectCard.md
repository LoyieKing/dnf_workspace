# ForceSelectCard

`_ZN24CTournamentDungeonReward15ForceSelectCardERSt6vectorIiSaIiEEb`

`CTournamentDungeonReward::ForceSelectCard(std::vector<int, std::allocator<int> >&, bool)`

| 类 | 地址 |
|---|---|
| `CTournamentDungeonReward` | `0x0828523c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0828523c  _ZN24CTournamentDungeonReward15ForceSelectCardERSt6vectorIiSaIiEEb
#           CTournamentDungeonReward::ForceSelectCard(std::vector<int, std::allocator<int> >&, bool)
# range [0x0828523c, 0x08285283]
0828523c +0x00:  push   %ebp
0828523d +0x01:  mov    %esp,%ebp
0828523f +0x03:  sub    $0x28,%esp
08285242 +0x06:  mov    0x10(%ebp),%eax
08285245 +0x09:  mov    %al,-0xc(%ebp)
08285248 +0x0c:  mov    0xc(%ebp),%eax
0828524b +0x0f:  mov    %eax,0x8(%esp)
0828524f +0x13:  movl   $0x0,0x4(%esp)
08285257 +0x1b:  mov    0x8(%ebp),%eax
0828525a +0x1e:  mov    %eax,(%esp)
0828525d +0x21:  call   082853b8 <_ZN24CTournamentDungeonReward16_ForceSelectCardE32ENUM_TOURNAMENT_REWARD_CARD_TYPERKSt6vectorIiSaIiEE>  ; CTournamentDungeonReward::_ForceSelectCard(ENUM_TOURNAMENT_REWARD_CARD_TYPE, std::vector<int, std::allocator<int> > const&)
08285262 +0x26:  cmpb   $0x0,-0xc(%ebp)
08285266 +0x2a:  je     08285282 <+0x46>
08285268 +0x2c:  mov    0xc(%ebp),%eax
0828526b +0x2f:  mov    %eax,0x8(%esp)
0828526f +0x33:  movl   $0x1,0x4(%esp)
08285277 +0x3b:  mov    0x8(%ebp),%eax
0828527a +0x3e:  mov    %eax,(%esp)
0828527d +0x41:  call   082853b8 <_ZN24CTournamentDungeonReward16_ForceSelectCardE32ENUM_TOURNAMENT_REWARD_CARD_TYPERKSt6vectorIiSaIiEE>  ; CTournamentDungeonReward::_ForceSelectCard(ENUM_TOURNAMENT_REWARD_CARD_TYPE, std::vector<int, std::allocator<int> > const&)
08285282 +0x46:  leave
08285283 +0x47:  ret
```

## 反编译 C

```c
// CTournamentDungeonReward::ForceSelectCard @ 0x828523c

/* CTournamentDungeonReward::ForceSelectCard(std::vector<int, std::allocator<int> >&, bool) */

void __thiscall
CTournamentDungeonReward::ForceSelectCard
          (CTournamentDungeonReward *this,vector *param_1,bool param_2)

{
  _ForceSelectCard(this,0,param_1);
  if (param_2) {
    _ForceSelectCard(this,1,param_1);
  }
  return;
}
```
