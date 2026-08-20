# IsAllMoreThanGrade

`_ZN8PvP_Room18IsAllMoreThanGradeEi`

`PvP_Room::IsAllMoreThanGrade(int)`

| 类 | 地址 |
|---|---|
| `PvP_Room` | `0x085da58a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085da58a  _ZN8PvP_Room18IsAllMoreThanGradeEi
#           PvP_Room::IsAllMoreThanGrade(int)
# range [0x085da58a, 0x085da5f3]
085da58a +0x00:  push   %ebp
085da58b +0x01:  mov    %esp,%ebp
085da58d +0x03:  sub    $0x28,%esp
085da590 +0x06:  cmpl   $0x25,0xc(%ebp)
085da594 +0x0a:  jg     085da59c <+0x12>
085da596 +0x0c:  cmpl   $0x0,0xc(%ebp)
085da59a +0x10:  jns    085da5a3 <+0x19>
085da59c +0x12:  mov    $0x0,%eax
085da5a1 +0x17:  jmp    085da5f2 <+0x68>
085da5a3 +0x19:  movl   $0x0,-0x10(%ebp)
085da5aa +0x20:  jmp    085da5e2 <+0x58>
085da5ac +0x22:  mov    -0x10(%ebp),%edx
085da5af +0x25:  mov    0x8(%ebp),%eax
085da5b2 +0x28:  add    $0xc,%edx
085da5b5 +0x2b:  mov    (%eax,%edx,4),%eax
085da5b8 +0x2e:  mov    %eax,-0xc(%ebp)
085da5bb +0x31:  cmpl   $0x0,-0xc(%ebp)
085da5bf +0x35:  je     085da5dd <+0x53>
085da5c1 +0x37:  mov    -0xc(%ebp),%eax
085da5c4 +0x3a:  mov    %eax,(%esp)
085da5c7 +0x3d:  call   0819ee4a <_GLOBAL__I__ZN4ARAD16GetQuarterOfYearEPc+0x86>  ; global constructors keyed to ARAD::GetQuarterOfYear(char*)+0x86
085da5cc +0x42:  cmp    0xc(%ebp),%eax
085da5cf +0x45:  setl   %al
085da5d2 +0x48:  test   %al,%al
085da5d4 +0x4a:  je     085da5de <+0x54>
085da5d6 +0x4c:  mov    $0x0,%eax
085da5db +0x51:  jmp    085da5f2 <+0x68>
085da5dd +0x53:  nop
085da5de +0x54:  addl   $0x1,-0x10(%ebp)
085da5e2 +0x58:  cmpl   $0x7,-0x10(%ebp)
085da5e6 +0x5c:  setle  %al
085da5e9 +0x5f:  test   %al,%al
085da5eb +0x61:  jne    085da5ac <+0x22>
085da5ed +0x63:  mov    $0x1,%eax
085da5f2 +0x68:  leave
085da5f3 +0x69:  ret
```

## 反编译 C

```c
// PvP_Room::IsAllMoreThanGrade @ 0x85da58a

/* PvP_Room::IsAllMoreThanGrade(int) */

undefined4 __thiscall PvP_Room::IsAllMoreThanGrade(PvP_Room *this,int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int local_14;
  
  if ((param_1 < 0x26) && (-1 < param_1)) {
    for (local_14 = 0; local_14 < 8; local_14 = local_14 + 1) {
      if ((*(CUserCharacInfo **)(this + (local_14 + 0xc) * 4) != (CUserCharacInfo *)0x0) &&
         (iVar2 = CUserCharacInfo::get_pvp_grade(*(CUserCharacInfo **)(this + (local_14 + 0xc) * 4))
         , iVar2 < param_1)) {
        return 0;
      }
    }
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
```
