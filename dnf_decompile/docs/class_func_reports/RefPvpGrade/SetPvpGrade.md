# SetPvpGrade

`_ZN11RefPvpGrade11SetPvpGradeEiRKNS_15RefPvpGradeDataE`

`RefPvpGrade::SetPvpGrade(int, RefPvpGrade::RefPvpGradeData const&)`

| 类 | 地址 |
|---|---|
| `RefPvpGrade` | `0x085d4798` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085d4798  _ZN11RefPvpGrade11SetPvpGradeEiRKNS_15RefPvpGradeDataE
#           RefPvpGrade::SetPvpGrade(int, RefPvpGrade::RefPvpGradeData const&)
# range [0x085d4798, 0x085d47cd]
085d4798 +0x00:  push   %ebp
085d4799 +0x01:  mov    %esp,%ebp
085d479b +0x03:  push   %ebx
085d479c +0x04:  cmpl   $0x0,0xc(%ebp)
085d47a0 +0x08:  js     085d47a8 <+0x10>
085d47a2 +0x0a:  cmpl   $0x25,0xc(%ebp)
085d47a6 +0x0e:  jle    085d47af <+0x17>
085d47a8 +0x10:  mov    $0x0,%eax
085d47ad +0x15:  jmp    085d47ca <+0x32>
085d47af +0x17:  mov    0xc(%ebp),%ebx
085d47b2 +0x1a:  mov    0x8(%ebp),%ecx
085d47b5 +0x1d:  mov    0x10(%ebp),%eax
085d47b8 +0x20:  mov    0x4(%eax),%edx
085d47bb +0x23:  mov    (%eax),%eax
085d47bd +0x25:  mov    %eax,0x4(%ecx,%ebx,8)
085d47c1 +0x29:  mov    %edx,0x8(%ecx,%ebx,8)
085d47c5 +0x2d:  mov    $0x1,%eax
085d47ca +0x32:  pop    %ebx
085d47cb +0x33:  pop    %ebp
085d47cc +0x34:  ret
085d47cd +0x35:  nop
```

## 反编译 C

```c
// RefPvpGrade::SetPvpGrade @ 0x85d4798

/* RefPvpGrade::SetPvpGrade(int, RefPvpGrade::RefPvpGradeData const&) */

undefined4 __thiscall
RefPvpGrade::SetPvpGrade(RefPvpGrade *this,int param_1,RefPvpGradeData *param_2)

{
  undefined4 uVar1;
  
  if ((param_1 < 0) || (0x25 < param_1)) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(param_2 + 4);
    *(undefined4 *)(this + param_1 * 8 + 4) = *(undefined4 *)param_2;
    *(undefined4 *)(this + param_1 * 8 + 8) = uVar1;
    uVar1 = 1;
  }
  return uVar1;
}
```
