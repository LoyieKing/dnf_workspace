# DelTradePunishType

`_ZN5CUser18DelTradePunishTypeEi`

`CUser::DelTradePunishType(int)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x086898c2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086898c2  _ZN5CUser18DelTradePunishTypeEi
#           CUser::DelTradePunishType(int)
# range [0x086898c2, 0x0868991b]
086898c2 +0x00:  push   %ebp
086898c3 +0x01:  mov    %esp,%ebp
086898c5 +0x03:  sub    $0x18,%esp
086898c8 +0x06:  mov    0x8(%ebp),%eax
086898cb +0x09:  mov    0x79628(%eax),%eax
086898d1 +0x0f:  mov    %eax,0x8(%esp)
086898d5 +0x13:  mov    0xc(%ebp),%eax
086898d8 +0x16:  mov    %eax,0x4(%esp)
086898dc +0x1a:  movl   $"DelTradePunishType : (%d) // Prev TradePunishType:  %d\n",(%esp)
086898e3 +0x21:  call   0807db60 <_init+0x458>
086898e8 +0x26:  mov    0x8(%ebp),%eax
086898eb +0x29:  mov    0x79628(%eax),%edx
086898f1 +0x2f:  mov    0xc(%ebp),%eax
086898f4 +0x32:  not    %eax
086898f6 +0x34:  and    %eax,%edx
086898f8 +0x36:  mov    0x8(%ebp),%eax
086898fb +0x39:  mov    %edx,0x79628(%eax)
08689901 +0x3f:  mov    0x8(%ebp),%eax
08689904 +0x42:  mov    0x79628(%eax),%eax
0868990a +0x48:  mov    %eax,0x4(%esp)
0868990e +0x4c:  movl   $"After TradePunishType:  %d\n",(%esp)
08689915 +0x53:  call   0807db60 <_init+0x458>
0868991a +0x58:  leave
0868991b +0x59:  ret
```

## 反编译 C

```c
// CUser::DelTradePunishType @ 0x86898c2

/* CUser::DelTradePunishType(int) */

void __thiscall CUser::DelTradePunishType(CUser *this,int param_1)

{
  printf("DelTradePunishType : (%d) // Prev TradePunishType:  %d\n",param_1,
         *(undefined4 *)(this + 0x79628));
  *(uint *)(this + 0x79628) = *(uint *)(this + 0x79628) & ~param_1;
  printf("After TradePunishType:  %d\n",*(undefined4 *)(this + 0x79628));
  return;
}
```
