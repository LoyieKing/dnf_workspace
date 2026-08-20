# ~CTournamentDungeonReward

`_ZN24CTournamentDungeonRewardD0Ev`

`CTournamentDungeonReward::~CTournamentDungeonReward()`

| 类 | 地址 |
|---|---|
| `CTournamentDungeonReward` | `0x08284802` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08284802  _ZN24CTournamentDungeonRewardD0Ev
#           CTournamentDungeonReward::~CTournamentDungeonReward()
# range [0x08284802, 0x0828481f]
08284802 +0x00:  push   %ebp
08284803 +0x01:  mov    %esp,%ebp
08284805 +0x03:  sub    $0x18,%esp
08284808 +0x06:  mov    0x8(%ebp),%eax
0828480b +0x09:  mov    %eax,(%esp)
0828480e +0x0c:  call   082847dc <_ZN24CTournamentDungeonRewardD1Ev>  ; CTournamentDungeonReward::~CTournamentDungeonReward()
08284813 +0x11:  mov    0x8(%ebp),%eax
08284816 +0x14:  mov    %eax,(%esp)
08284819 +0x17:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0828481e +0x1c:  leave
0828481f +0x1d:  ret
```

## 反编译 C

```c
// CTournamentDungeonReward::~CTournamentDungeonReward @ 0x8284802

/* CTournamentDungeonReward::~CTournamentDungeonReward() */

void __thiscall CTournamentDungeonReward::~CTournamentDungeonReward(CTournamentDungeonReward *this)

{
  ~CTournamentDungeonReward(this);
  operator_delete(this);
  return;
}
```
