# SetLastGrade

`_ZN11RefPvpGrade12SetLastGradeEi`

`RefPvpGrade::SetLastGrade(int)`

| 类 | 地址 |
|---|---|
| `RefPvpGrade` | `0x085d4768` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085d4768  _ZN11RefPvpGrade12SetLastGradeEi
#           RefPvpGrade::SetLastGrade(int)
# range [0x085d4768, 0x085d478d]
085d4768 +0x00:  push   %ebp
085d4769 +0x01:  mov    %esp,%ebp
085d476b +0x03:  cmpl   $0x0,0xc(%ebp)
085d476f +0x07:  js     085d4777 <+0xf>
085d4771 +0x09:  cmpl   $0x26,0xc(%ebp)
085d4775 +0x0d:  jle    085d477e <+0x16>
085d4777 +0x0f:  mov    $0x0,%eax
085d477c +0x14:  jmp    085d478b <+0x23>
085d477e +0x16:  mov    0x8(%ebp),%eax
085d4781 +0x19:  mov    0xc(%ebp),%edx
085d4784 +0x1c:  mov    %edx,(%eax)
085d4786 +0x1e:  mov    $0x1,%eax
085d478b +0x23:  pop    %ebp
085d478c +0x24:  ret
085d478d +0x25:  nop
```

## 反编译 C

```c
// RefPvpGrade::SetLastGrade @ 0x85d4768

/* RefPvpGrade::SetLastGrade(int) */

undefined4 __thiscall RefPvpGrade::SetLastGrade(RefPvpGrade *this,int param_1)

{
  undefined4 uVar1;
  
  if ((param_1 < 0) || (0x26 < param_1)) {
    uVar1 = 0;
  }
  else {
    *(int *)this = param_1;
    uVar1 = 1;
  }
  return uVar1;
}
```
