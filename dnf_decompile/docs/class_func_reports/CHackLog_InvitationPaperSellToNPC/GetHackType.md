# GetHackType

`_ZN33CHackLog_InvitationPaperSellToNPC11GetHackTypeEv`

`CHackLog_InvitationPaperSellToNPC::GetHackType()`

| 类 | 地址 |
|---|---|
| `CHackLog_InvitationPaperSellToNPC` | `0x08286714` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08286714  _ZN33CHackLog_InvitationPaperSellToNPC11GetHackTypeEv
#           CHackLog_InvitationPaperSellToNPC::GetHackType()
# range [0x08286714, 0x0828671d]
08286714 +0x00:  push   %ebp
08286715 +0x01:  mov    %esp,%ebp
08286717 +0x03:  mov    $0x322,%eax
0828671c +0x08:  pop    %ebp
0828671d +0x09:  ret
```

## 反编译 C

```c
// CHackLog_InvitationPaperSellToNPC::GetHackType @ 0x8286714

/* CHackLog_InvitationPaperSellToNPC::GetHackType() */

undefined4 CHackLog_InvitationPaperSellToNPC::GetHackType(void)

{
  return 0x322;
}
```
