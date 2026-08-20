# SetTradePunishType

`_ZN5CUser18SetTradePunishTypeEi`

`CUser::SetTradePunishType(int)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x08689890` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08689890  _ZN5CUser18SetTradePunishTypeEi
#           CUser::SetTradePunishType(int)
# range [0x08689890, 0x086898c1]
08689890 +0x00:  push   %ebp
08689891 +0x01:  mov    %esp,%ebp
08689893 +0x03:  sub    $0x18,%esp
08689896 +0x06:  mov    0xc(%ebp),%eax
08689899 +0x09:  mov    %eax,0x4(%esp)
0868989d +0x0d:  movl   $" CUser::SetTradePunishType(%d) \n",(%esp)
086898a4 +0x14:  call   0807db60 <_init+0x458>
086898a9 +0x19:  mov    0x8(%ebp),%eax
086898ac +0x1c:  mov    0x79628(%eax),%edx
086898b2 +0x22:  mov    0xc(%ebp),%eax
086898b5 +0x25:  or     %eax,%edx
086898b7 +0x27:  mov    0x8(%ebp),%eax
086898ba +0x2a:  mov    %edx,0x79628(%eax)
086898c0 +0x30:  leave
086898c1 +0x31:  ret
```

## 反编译 C

```c
// CUser::SetTradePunishType @ 0x8689890

/* CUser::SetTradePunishType(int) */

void __thiscall CUser::SetTradePunishType(CUser *this,int param_1)

{
  printf(" CUser::SetTradePunishType(%d) \n",param_1);
  *(uint *)(this + 0x79628) = *(uint *)(this + 0x79628) | param_1;
  return;
}
```
