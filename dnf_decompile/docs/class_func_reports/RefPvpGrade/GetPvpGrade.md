# GetPvpGrade

`_ZNK11RefPvpGrade11GetPvpGradeEi`

`RefPvpGrade::GetPvpGrade(int) const`

| 类 | 地址 |
|---|---|
| `RefPvpGrade` | `0x085d47ce` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085d47ce  _ZNK11RefPvpGrade11GetPvpGradeEi
#           RefPvpGrade::GetPvpGrade(int) const
# range [0x085d47ce, 0x085d4831]
085d47ce +0x00:  push   %ebp
085d47cf +0x01:  mov    %esp,%ebp
085d47d1 +0x03:  sub    $0x14,%esp
085d47d4 +0x06:  mov    0x8(%ebp),%eax
085d47d7 +0x09:  mov    0xc(%eax),%eax
085d47da +0x0c:  cmp    0xc(%ebp),%eax
085d47dd +0x0f:  jle    085d47e6 <+0x18>
085d47df +0x11:  mov    $0x0,%eax
085d47e4 +0x16:  jmp    085d4830 <+0x62>
085d47e6 +0x18:  movl   $0x1,-0x4(%ebp)
085d47ed +0x1f:  jmp    085d4816 <+0x48>
085d47ef +0x21:  mov    -0x4(%ebp),%edx
085d47f2 +0x24:  mov    0x8(%ebp),%eax
085d47f5 +0x27:  mov    0x4(%eax,%edx,8),%eax
085d47f9 +0x2b:  cmp    0xc(%ebp),%eax
085d47fc +0x2e:  jge    085d4812 <+0x44>
085d47fe +0x30:  mov    -0x4(%ebp),%edx
085d4801 +0x33:  mov    0x8(%ebp),%eax
085d4804 +0x36:  mov    0x8(%eax,%edx,8),%eax
085d4808 +0x3a:  cmp    0xc(%ebp),%eax
085d480b +0x3d:  jl     085d4812 <+0x44>
085d480d +0x3f:  mov    -0x4(%ebp),%eax
085d4810 +0x42:  jmp    085d4830 <+0x62>
085d4812 +0x44:  addl   $0x1,-0x4(%ebp)
085d4816 +0x48:  mov    0x8(%ebp),%eax
085d4819 +0x4b:  mov    %eax,(%esp)
085d481c +0x4e:  call   085d478e <_ZNK11RefPvpGrade12GetLastGradeEv>  ; RefPvpGrade::GetLastGrade() const
085d4821 +0x53:  cmp    -0x4(%ebp),%eax
085d4824 +0x56:  setg   %al
085d4827 +0x59:  test   %al,%al
085d4829 +0x5b:  jne    085d47ef <+0x21>
085d482b +0x5d:  mov    $0xffffffff,%eax
085d4830 +0x62:  leave
085d4831 +0x63:  ret
```

## 反编译 C

```c
// RefPvpGrade::GetPvpGrade @ 0x85d47ce

/* RefPvpGrade::GetPvpGrade(int) const */

int __thiscall RefPvpGrade::GetPvpGrade(RefPvpGrade *this,int param_1)

{
  int iVar1;
  int local_8;
  
  if (param_1 < *(int *)(this + 0xc)) {
    iVar1 = 0;
  }
  else {
    for (local_8 = 1; iVar1 = GetLastGrade(this), local_8 < iVar1; local_8 = local_8 + 1) {
      if ((*(int *)(this + local_8 * 8 + 4) < param_1) &&
         (param_1 <= *(int *)(this + local_8 * 8 + 8))) {
        return local_8;
      }
    }
    iVar1 = -1;
  }
  return iVar1;
}
```
