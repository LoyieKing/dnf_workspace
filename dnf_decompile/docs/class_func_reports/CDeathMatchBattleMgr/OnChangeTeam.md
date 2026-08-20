# OnChangeTeam

`_ZN20CDeathMatchBattleMgr12OnChangeTeamEii`

`CDeathMatchBattleMgr::OnChangeTeam(int, int)`

| 类 | 地址 |
|---|---|
| `CDeathMatchBattleMgr` | `0x085dee9c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085dee9c  _ZN20CDeathMatchBattleMgr12OnChangeTeamEii
#           CDeathMatchBattleMgr::OnChangeTeam(int, int)
# range [0x085dee9c, 0x085deead]
085dee9c +0x00:  push   %ebp
085dee9d +0x01:  mov    %esp,%ebp
085dee9f +0x03:  cmpl   $0x0,0xc(%ebp)
085deea3 +0x07:  js     085deeab <+0xf>
085deea5 +0x09:  cmpl   $0x7,0xc(%ebp)
085deea9 +0x0d:  jmp    085deeac <+0x10>
085deeab +0x0f:  nop
085deeac +0x10:  pop    %ebp
085deead +0x11:  ret
```

## 反编译 C

```c
// CDeathMatchBattleMgr::OnChangeTeam @ 0x85dee9c

/* CDeathMatchBattleMgr::OnChangeTeam(int, int) */

void CDeathMatchBattleMgr::OnChangeTeam(int param_1,int param_2)

{
  return;
}
```
