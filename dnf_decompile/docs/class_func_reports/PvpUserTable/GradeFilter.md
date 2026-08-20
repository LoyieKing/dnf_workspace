# GradeFilter

`_ZN12PvpUserTable11GradeFilterEi`

`PvpUserTable::GradeFilter(int)`

| 类 | 地址 |
|---|---|
| `PvpUserTable` | `0x085d578a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085d578a  _ZN12PvpUserTable11GradeFilterEi
#           PvpUserTable::GradeFilter(int)
# range [0x085d578a, 0x085d57c1]
085d578a +0x00:  push   %ebp
085d578b +0x01:  mov    %esp,%ebp
085d578d +0x03:  cmpl   $0x0,0xc(%ebp)
085d5791 +0x07:  js     085d5799 <+0xf>
085d5793 +0x09:  cmpl   $0x22,0xc(%ebp)
085d5797 +0x0d:  jle    085d57a0 <+0x16>
085d5799 +0x0f:  mov    $0xffffffff,%eax
085d579e +0x14:  jmp    085d57c0 <+0x36>
085d57a0 +0x16:  cmpl   $0x14,0xc(%ebp)
085d57a4 +0x1a:  jle    085d57ad <+0x23>
085d57a6 +0x1c:  mov    $0x14,%eax
085d57ab +0x21:  jmp    085d57c0 <+0x36>
085d57ad +0x23:  cmpl   $0x9,0xc(%ebp)
085d57b1 +0x27:  jg     085d57ba <+0x30>
085d57b3 +0x29:  mov    $0x0,%eax
085d57b8 +0x2e:  jmp    085d57c0 <+0x36>
085d57ba +0x30:  mov    0xc(%ebp),%eax
085d57bd +0x33:  sub    $0x9,%eax
085d57c0 +0x36:  pop    %ebp
085d57c1 +0x37:  ret
```

## 反编译 C

```c
// PvpUserTable::GradeFilter @ 0x85d578a

/* PvpUserTable::GradeFilter(int) */

int __thiscall PvpUserTable::GradeFilter(PvpUserTable *this,int param_1)

{
  int iVar1;
  
  if ((param_1 < 0) || (0x22 < param_1)) {
    iVar1 = -1;
  }
  else if (param_1 < 0x15) {
    if (param_1 < 10) {
      iVar1 = 0;
    }
    else {
      iVar1 = param_1 + -9;
    }
  }
  else {
    iVar1 = 0x14;
  }
  return iVar1;
}
```
