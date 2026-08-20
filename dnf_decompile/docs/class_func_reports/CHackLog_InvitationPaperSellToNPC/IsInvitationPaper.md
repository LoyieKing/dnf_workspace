# IsInvitationPaper

`_ZN33CHackLog_InvitationPaperSellToNPC17IsInvitationPaperEi`

`CHackLog_InvitationPaperSellToNPC::IsInvitationPaper(int)`

| 类 | 地址 |
|---|---|
| `CHackLog_InvitationPaperSellToNPC` | `0x082866d0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082866d0  _ZN33CHackLog_InvitationPaperSellToNPC17IsInvitationPaperEi
#           CHackLog_InvitationPaperSellToNPC::IsInvitationPaper(int)
# range [0x082866d0, 0x08286713]
082866d0 +0x00:  push   %ebp
082866d1 +0x01:  mov    %esp,%ebp
082866d3 +0x03:  sub    $0x10,%esp
082866d6 +0x06:  movl   $0x7,-0x8(%ebp)
082866dd +0x0d:  movl   $0x0,-0x4(%ebp)
082866e4 +0x14:  jmp    08286700 <+0x30>
082866e6 +0x16:  mov    -0x4(%ebp),%eax
082866e9 +0x19:  mov    &_ZL19INVITATION_PAPER_NO(,%eax,4),%eax
082866f0 +0x20:  cmp    0x8(%ebp),%eax
082866f3 +0x23:  jne    082866fc <+0x2c>
082866f5 +0x25:  mov    $0x1,%eax
082866fa +0x2a:  jmp    08286712 <+0x42>
082866fc +0x2c:  addl   $0x1,-0x4(%ebp)
08286700 +0x30:  mov    -0x4(%ebp),%eax
08286703 +0x33:  cmp    -0x8(%ebp),%eax
08286706 +0x36:  setb   %al
08286709 +0x39:  test   %al,%al
0828670b +0x3b:  jne    082866e6 <+0x16>
0828670d +0x3d:  mov    $0x0,%eax
08286712 +0x42:  leave
08286713 +0x43:  ret
```

## 反编译 C

```c
// CHackLog_InvitationPaperSellToNPC::IsInvitationPaper @ 0x82866d0

/* CHackLog_InvitationPaperSellToNPC::IsInvitationPaper(int) */

undefined4 CHackLog_InvitationPaperSellToNPC::IsInvitationPaper(int param_1)

{
  uint local_8;
  
  local_8 = 0;
  while( true ) {
    if (6 < local_8) {
      return 0;
    }
    if (*(int *)(INVITATION_PAPER_NO + local_8 * 4) == param_1) break;
    local_8 = local_8 + 1;
  }
  return 1;
}
```
