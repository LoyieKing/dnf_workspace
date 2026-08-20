# OnFight

`_ZN20CDeathMatchBattleMgr7OnFightEv`

`CDeathMatchBattleMgr::OnFight()`

| 类 | 地址 |
|---|---|
| `CDeathMatchBattleMgr` | `0x085defc6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085defc6  _ZN20CDeathMatchBattleMgr7OnFightEv
#           CDeathMatchBattleMgr::OnFight()
# range [0x085defc6, 0x085defcb]
085defc6 +0x00:  push   %ebp
085defc7 +0x01:  mov    %esp,%ebp
085defc9 +0x03:  pop    %ebp
085defca +0x04:  ret
085defcb +0x05:  nop
```

## 反编译 C

```c
// CDeathMatchBattleMgr::OnFight @ 0x85defc6

/* CDeathMatchBattleMgr::OnFight() */

void CDeathMatchBattleMgr::OnFight(void)

{
  return;
}
```
