# IsInvitationPaper

`_GLOBAL__I__ZN33CHackLog_InvitationPaperSellToNPC17IsInvitationPaperEi`

`global constructors keyed to CHackLog_InvitationPaperSellToNPC::IsInvitationPaper(int)`

| 类 | 地址 |
|---|---|
| `global constructors keyed to CHackLog_InvitationPaperSellToNPC` | `0x0828675e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0828675e  _GLOBAL__I__ZN33CHackLog_InvitationPaperSellToNPC17IsInvitationPaperEi
#           global constructors keyed to CHackLog_InvitationPaperSellToNPC::IsInvitationPaper(int)
# range [0x0828675e, 0x0828677b]
0828675e +0x00:  push   %ebp
0828675f +0x01:  mov    %esp,%ebp
08286761 +0x03:  sub    $0x18,%esp
08286764 +0x06:  movl   $0xffff,0x4(%esp)
0828676c +0x0e:  movl   $0x1,(%esp)
08286773 +0x15:  call   0828671e <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
08286778 +0x1a:  leave
08286779 +0x1b:  ret
0828677a +0x1c:  nop
0828677b +0x1d:  nop
```

## 反编译 C

```c
// <global>::global @ 0x828675e

/* CHackLog_InvitationPaperSellToNPC::IsInvitationPaper(int) */

void CHackLog_InvitationPaperSellToNPC::_GLOBAL__I_IsInvitationPaper(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
