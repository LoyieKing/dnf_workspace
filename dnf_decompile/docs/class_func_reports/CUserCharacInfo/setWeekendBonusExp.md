# setWeekendBonusExp

`_ZN15CUserCharacInfo18setWeekendBonusExpEji`

`CUserCharacInfo::setWeekendBonusExp(unsigned int, int)`

| 类 | 地址 |
|---|---|
| `CUserCharacInfo` | `0x0868e2d2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0868e2d2  _ZN15CUserCharacInfo18setWeekendBonusExpEji
#           CUserCharacInfo::setWeekendBonusExp(unsigned int, int)
# range [0x0868e2d2, 0x0868e327]
0868e2d2 +0x00:  push   %ebp
0868e2d3 +0x01:  mov    %esp,%ebp
0868e2d5 +0x03:  sub    $0x10,%esp
0868e2d8 +0x06:  mov    0x8(%ebp),%eax
0868e2db +0x09:  mov    0x10(%eax),%eax
0868e2de +0x0c:  test   %eax,%eax
0868e2e0 +0x0e:  je     0868e325 <+0x53>
0868e2e2 +0x10:  mov    0x8(%ebp),%eax
0868e2e5 +0x13:  mov    0x10(%eax),%ecx
0868e2e8 +0x16:  mov    0xc(%ebp),%eax
0868e2eb +0x19:  mov    $0x0,%edx
0868e2f0 +0x1e:  mov    %eax,-0x8(%ebp)
0868e2f3 +0x21:  mov    %edx,-0x4(%ebp)
0868e2f6 +0x24:  fildll -0x8(%ebp)
0868e2f9 +0x27:  fildl  0x10(%ebp)
0868e2fc +0x2a:  flds   ""
0868e302 +0x30:  fdivrp %st,%st(1)
0868e304 +0x32:  fmulp  %st,%st(1)
0868e306 +0x34:  fnstcw -0xa(%ebp)
0868e309 +0x37:  movzwl -0xa(%ebp),%eax
0868e30d +0x3b:  mov    $0xc,%ah
0868e30f +0x3d:  mov    %ax,-0xc(%ebp)
0868e313 +0x41:  fldcw  -0xc(%ebp)
0868e316 +0x44:  fistpl -0x10(%ebp)
0868e319 +0x47:  fldcw  -0xa(%ebp)
0868e31c +0x4a:  mov    -0x10(%ebp),%eax
0868e31f +0x4d:  mov    %eax,0x1291(%ecx)
0868e325 +0x53:  leave
0868e326 +0x54:  ret
0868e327 +0x55:  nop
```

## 反编译 C

```c
// CUserCharacInfo::setWeekendBonusExp @ 0x868e2d2

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CUserCharacInfo::setWeekendBonusExp(unsigned int, int) */

void __thiscall CUserCharacInfo::setWeekendBonusExp(CUserCharacInfo *this,uint param_1,int param_2)

{
  if (*(int *)(this + 0x10) != 0) {
    *(int *)(*(int *)(this + 0x10) + 0x1291) =
         (int)ROUND(((float)param_2 / _DAT_08cf3954) * (float)param_1);
  }
  return;
}
```
