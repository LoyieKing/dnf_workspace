# ~CTournamentDungeonReward

`_ZN24CTournamentDungeonRewardD1Ev`

`CTournamentDungeonReward::~CTournamentDungeonReward()`

| 类 | 地址 |
|---|---|
| `CTournamentDungeonReward` | `0x082847dc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082847dc  _ZN24CTournamentDungeonRewardD1Ev
#           CTournamentDungeonReward::~CTournamentDungeonReward()
# range [0x082847dc, 0x08284801]
082847dc +0x00:  push   %ebp
082847dd +0x01:  mov    %esp,%ebp
082847df +0x03:  sub    $0x18,%esp
082847e2 +0x06:  mov    0x8(%ebp),%eax
082847e5 +0x09:  movl   $&_ZTV24CTournamentDungeonReward+0x8,(%eax)
082847eb +0x0f:  mov    $0x0,%eax
082847f0 +0x14:  test   %al,%al
082847f2 +0x16:  je     082847ff <+0x23>
082847f4 +0x18:  mov    0x8(%ebp),%eax
082847f7 +0x1b:  mov    %eax,(%esp)
082847fa +0x1e:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
082847ff +0x23:  leave
08284800 +0x24:  ret
08284801 +0x25:  nop
```

## 反编译 C

```c
// CTournamentDungeonReward::~CTournamentDungeonReward @ 0x82847dc

/* WARNING: Removing unreachable block (ram,0x082847f4) */
/* CTournamentDungeonReward::~CTournamentDungeonReward() */

void __thiscall CTournamentDungeonReward::~CTournamentDungeonReward(CTournamentDungeonReward *this)

{
  *(undefined ***)this = &PTR__CTournamentDungeonReward_08c0cbf0;
  return;
}
```
