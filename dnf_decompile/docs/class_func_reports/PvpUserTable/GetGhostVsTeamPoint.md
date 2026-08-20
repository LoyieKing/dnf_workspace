# GetGhostVsTeamPoint

`_ZN12PvpUserTable19GetGhostVsTeamPointEii`

`PvpUserTable::GetGhostVsTeamPoint(int, int)`

| 类 | 地址 |
|---|---|
| `PvpUserTable` | `0x085d4fca` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085d4fca  _ZN12PvpUserTable19GetGhostVsTeamPointEii
#           PvpUserTable::GetGhostVsTeamPoint(int, int)
# range [0x085d4fca, 0x085d5063]
085d4fca +0x00:  push   %ebp
085d4fcb +0x01:  mov    %esp,%ebp
085d4fcd +0x03:  push   %ebx
085d4fce +0x04:  sub    $0x34,%esp
085d4fd1 +0x07:  movl   $0x0,-0x10(%ebp)
085d4fd8 +0x0e:  movl   $0x0,-0xc(%ebp)
085d4fdf +0x15:  jmp    085d504e <+0x84>
085d4fe1 +0x17:  mov    0xc(%ebp),%ecx
085d4fe4 +0x1a:  mov    -0xc(%ebp),%edx
085d4fe7 +0x1d:  mov    0x8(%ebp),%eax
085d4fea +0x20:  shl    $0x3,%ecx
085d4fed +0x23:  lea    (%ecx,%edx,1),%edx
085d4ff0 +0x26:  add    $0x24,%edx
085d4ff3 +0x29:  mov    (%eax,%edx,8),%eax
085d4ff6 +0x2c:  mov    %eax,-0x10(%ebp)
085d4ff9 +0x2f:  cmpl   $0x0,-0x10(%ebp)
085d4ffd +0x33:  je     085d5049 <+0x7f>
085d4fff +0x35:  mov    0xc(%ebp),%ebx
085d5002 +0x38:  mov    0xc(%ebp),%edx
085d5005 +0x3b:  mov    0x8(%ebp),%eax
085d5008 +0x3e:  add    $0x40,%edx
085d500b +0x41:  flds   (%eax,%edx,4)
085d500e +0x44:  fstps  -0x1c(%ebp)
085d5011 +0x47:  mov    -0x10(%ebp),%eax
085d5014 +0x4a:  mov    %eax,(%esp)
085d5017 +0x4d:  call   0819ee4a <_GLOBAL__I__ZN4ARAD16GetQuarterOfYearEPc+0x86>  ; global constructors keyed to ARAD::GetQuarterOfYear(char*)+0x86
085d501c +0x52:  movl   $0x0,0xc(%esp)
085d5024 +0x5a:  movl   $0x0,0x8(%esp)
085d502c +0x62:  mov    %eax,0x4(%esp)
085d5030 +0x66:  mov    0x8(%ebp),%eax
085d5033 +0x69:  mov    %eax,(%esp)
085d5036 +0x6c:  call   085d4ab8 <_ZN12PvpUserTable12GetExpectValEiiP5CUser>  ; PvpUserTable::GetExpectVal(int, int, CUser*)
085d503b +0x71:  fadds  -0x1c(%ebp)
085d503e +0x74:  mov    0x8(%ebp),%eax
085d5041 +0x77:  lea    0x40(%ebx),%edx
085d5044 +0x7a:  fstps  (%eax,%edx,4)
085d5047 +0x7d:  jmp    085d504a <+0x80>
085d5049 +0x7f:  nop
085d504a +0x80:  addl   $0x1,-0xc(%ebp)
085d504e +0x84:  cmpl   $0x7,-0xc(%ebp)
085d5052 +0x88:  setle  %al
085d5055 +0x8b:  test   %al,%al
085d5057 +0x8d:  jne    085d4fe1 <+0x17>
085d5059 +0x8f:  mov    $0x1,%eax
085d505e +0x94:  add    $0x34,%esp
085d5061 +0x97:  pop    %ebx
085d5062 +0x98:  pop    %ebp
085d5063 +0x99:  ret
```

## 反编译 C

```c
// PvpUserTable::GetGhostVsTeamPoint @ 0x85d4fca

/* PvpUserTable::GetGhostVsTeamPoint(int, int) */

undefined4 PvpUserTable::GetGhostVsTeamPoint(int param_1,int param_2)

{
  float fVar1;
  CUserCharacInfo *this;
  int iVar2;
  longdouble lVar3;
  undefined4 local_10;
  
  for (local_10 = 0; local_10 < 8; local_10 = local_10 + 1) {
    this = *(CUserCharacInfo **)(param_1 + (param_2 * 8 + local_10 + 0x24) * 8);
    if (this != (CUserCharacInfo *)0x0) {
      fVar1 = *(float *)(param_1 + (param_2 + 0x40) * 4);
      iVar2 = CUserCharacInfo::get_pvp_grade(this);
      lVar3 = (longdouble)GetExpectVal((PvpUserTable *)param_1,iVar2,0,(CUser *)0x0);
      *(float *)(param_1 + (param_2 + 0x40) * 4) = (float)(lVar3 + (longdouble)fVar1);
    }
  }
  return 1;
}
```
