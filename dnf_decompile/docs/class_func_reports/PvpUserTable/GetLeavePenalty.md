# GetLeavePenalty

`_ZN12PvpUserTable15GetLeavePenaltyEi`

`PvpUserTable::GetLeavePenalty(int)`

| 类 | 地址 |
|---|---|
| `PvpUserTable` | `0x085d5730` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085d5730  _ZN12PvpUserTable15GetLeavePenaltyEi
#           PvpUserTable::GetLeavePenalty(int)
# range [0x085d5730, 0x085d5789]
085d5730 +0x00:  push   %ebp
085d5731 +0x01:  mov    %esp,%ebp
085d5733 +0x03:  sub    $0x10,%esp
085d5736 +0x06:  mov    0xc(%ebp),%eax
085d5739 +0x09:  mov    %eax,0x4(%esp)
085d573d +0x0d:  mov    0x8(%ebp),%eax
085d5740 +0x10:  mov    %eax,(%esp)
085d5743 +0x13:  call   085d4a14 <_ZN12PvpUserTable11IsValidTeamEi>  ; PvpUserTable::IsValidTeam(int)
085d5748 +0x18:  xor    $0x1,%eax
085d574b +0x1b:  test   %al,%al
085d574d +0x1d:  je     085d5756 <+0x26>
085d574f +0x1f:  mov    $0xffffffff,%eax
085d5754 +0x24:  jmp    085d5787 <+0x57>
085d5756 +0x26:  mov    0xc(%ebp),%edx
085d5759 +0x29:  mov    0x8(%ebp),%eax
085d575c +0x2c:  add    $0xc8,%edx
085d5762 +0x32:  flds   0x4(%eax,%edx,4)
085d5766 +0x36:  flds   &data#98348f84(.rodata)
085d576c +0x3c:  fmulp  %st,%st(1)
085d576e +0x3e:  fnstcw -0x2(%ebp)
085d5771 +0x41:  movzwl -0x2(%ebp),%eax
085d5775 +0x45:  mov    $0xc,%ah
085d5777 +0x47:  mov    %ax,-0x4(%ebp)
085d577b +0x4b:  fldcw  -0x4(%ebp)
085d577e +0x4e:  fistpl -0x8(%ebp)
085d5781 +0x51:  fldcw  -0x2(%ebp)
085d5784 +0x54:  mov    -0x8(%ebp),%eax
085d5787 +0x57:  leave
085d5788 +0x58:  ret
085d5789 +0x59:  nop
```

## 反编译 C

```c
// PvpUserTable::GetLeavePenalty @ 0x85d5730

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PvpUserTable::GetLeavePenalty(int) */

int __thiscall PvpUserTable::GetLeavePenalty(PvpUserTable *this,int param_1)

{
  char cVar1;
  int iVar2;
  
  cVar1 = IsValidTeam(this,param_1);
  if (cVar1 == '\x01') {
    iVar2 = (int)ROUND(_DAT_08cc27d8 * *(float *)(this + (param_1 + 200) * 4 + 4));
  }
  else {
    iVar2 = -1;
  }
  return iVar2;
}
```
