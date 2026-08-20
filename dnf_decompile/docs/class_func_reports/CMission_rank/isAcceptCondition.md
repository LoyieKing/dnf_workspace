# isAcceptCondition

`_ZNK13CMission_rank17isAcceptConditionERK5CUser`

`CMission_rank::isAcceptCondition(CUser const&) const`

| 类 | 地址 |
|---|---|
| `CMission_rank` | `0x085e372c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085e372c  _ZNK13CMission_rank17isAcceptConditionERK5CUser
#           CMission_rank::isAcceptCondition(CUser const&) const
# range [0x085e372c, 0x085e377f]
085e372c +0x00:  push   %ebp
085e372d +0x01:  mov    %esp,%ebp
085e372f +0x03:  push   %ebx
085e3730 +0x04:  sub    $0x14,%esp
085e3733 +0x07:  mov    0x8(%ebp),%eax
085e3736 +0x0a:  mov    0x18(%eax),%ebx
085e3739 +0x0d:  mov    0xc(%ebp),%eax
085e373c +0x10:  mov    %eax,(%esp)
085e373f +0x13:  call   0819ee4a <_GLOBAL__I__ZN4ARAD16GetQuarterOfYearEPc+0x86>  ; global constructors keyed to ARAD::GetQuarterOfYear(char*)+0x86
085e3744 +0x18:  cmp    %eax,%ebx
085e3746 +0x1a:  jg     085e3764 <+0x38>
085e3748 +0x1c:  mov    0xc(%ebp),%eax
085e374b +0x1f:  mov    %eax,(%esp)
085e374e +0x22:  call   0819ee4a <_GLOBAL__I__ZN4ARAD16GetQuarterOfYearEPc+0x86>  ; global constructors keyed to ARAD::GetQuarterOfYear(char*)+0x86
085e3753 +0x27:  mov    0x8(%ebp),%edx
085e3756 +0x2a:  mov    0x1c(%edx),%edx
085e3759 +0x2d:  cmp    %edx,%eax
085e375b +0x2f:  jge    085e3764 <+0x38>
085e375d +0x31:  mov    $0x1,%eax
085e3762 +0x36:  jmp    085e3769 <+0x3d>
085e3764 +0x38:  mov    $0x0,%eax
085e3769 +0x3d:  test   %al,%al
085e376b +0x3f:  je     085e3774 <+0x48>
085e376d +0x41:  mov    $0x1,%eax
085e3772 +0x46:  jmp    085e3779 <+0x4d>
085e3774 +0x48:  mov    $0x0,%eax
085e3779 +0x4d:  add    $0x14,%esp
085e377c +0x50:  pop    %ebx
085e377d +0x51:  pop    %ebp
085e377e +0x52:  ret
085e377f +0x53:  nop
```

## 反编译 C

```c
// CMission_rank::isAcceptCondition @ 0x85e372c

/* CMission_rank::isAcceptCondition(CUser const&) const */

undefined1 __thiscall CMission_rank::isAcceptCondition(CMission_rank *this,CUser *param_1)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x18);
  iVar2 = CUserCharacInfo::get_pvp_grade((CUserCharacInfo *)param_1);
  if ((iVar2 < iVar3) ||
     (iVar3 = CUserCharacInfo::get_pvp_grade((CUserCharacInfo *)param_1),
     *(int *)(this + 0x1c) <= iVar3)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}
```
