# getReturnUserLevelKey

`_ZN5CUser21getReturnUserLevelKeyEii`

`CUser::getReturnUserLevelKey(int, int)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0869230a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0869230a  _ZN5CUser21getReturnUserLevelKeyEii
#           CUser::getReturnUserLevelKey(int, int)
# range [0x0869230a, 0x0869238f]
0869230a +0x00:  push   %ebp
0869230b +0x01:  mov    %esp,%ebp
0869230d +0x03:  cmpl   $0x0,0x10(%ebp)
08692311 +0x07:  jne    0869233a <+0x30>
08692313 +0x09:  cmpl   $0x9,0xc(%ebp)
08692317 +0x0d:  jg     08692320 <+0x16>
08692319 +0x0f:  mov    $0x5,%eax
0869231e +0x14:  jmp    0869238d <+0x83>
08692320 +0x16:  cmpl   $0xe,0xc(%ebp)
08692324 +0x1a:  jg     0869232d <+0x23>
08692326 +0x1c:  mov    $0xa,%eax
0869232b +0x21:  jmp    0869238d <+0x83>
0869232d +0x23:  cmpl   $0x13,0xc(%ebp)
08692331 +0x27:  jg     08692347 <+0x3d>
08692333 +0x29:  mov    $0xf,%eax
08692338 +0x2e:  jmp    0869238d <+0x83>
0869233a +0x30:  cmpl   $0x13,0xc(%ebp)
0869233e +0x34:  jg     08692347 <+0x3d>
08692340 +0x36:  mov    $0xf,%eax
08692345 +0x3b:  jmp    0869238d <+0x83>
08692347 +0x3d:  cmpl   $0x1d,0xc(%ebp)
0869234b +0x41:  jg     08692354 <+0x4a>
0869234d +0x43:  mov    $0x14,%eax
08692352 +0x48:  jmp    0869238d <+0x83>
08692354 +0x4a:  cmpl   $0x27,0xc(%ebp)
08692358 +0x4e:  jg     08692361 <+0x57>
0869235a +0x50:  mov    $0x1e,%eax
0869235f +0x55:  jmp    0869238d <+0x83>
08692361 +0x57:  cmpl   $0x31,0xc(%ebp)
08692365 +0x5b:  jg     0869236e <+0x64>
08692367 +0x5d:  mov    $0x28,%eax
0869236c +0x62:  jmp    0869238d <+0x83>
0869236e +0x64:  cmpl   $0x3b,0xc(%ebp)
08692372 +0x68:  jg     0869237b <+0x71>
08692374 +0x6a:  mov    $0x32,%eax
08692379 +0x6f:  jmp    0869238d <+0x83>
0869237b +0x71:  cmpl   $0x45,0xc(%ebp)
0869237f +0x75:  jg     08692388 <+0x7e>
08692381 +0x77:  mov    $0x3c,%eax
08692386 +0x7c:  jmp    0869238d <+0x83>
08692388 +0x7e:  mov    $0x46,%eax
0869238d +0x83:  pop    %ebp
0869238e +0x84:  ret
0869238f +0x85:  nop
```

## 反编译 C

```c
// CUser::getReturnUserLevelKey @ 0x869230a

/* CUser::getReturnUserLevelKey(int, int) */

undefined4 __thiscall CUser::getReturnUserLevelKey(CUser *this,int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 == 0) {
    if (param_1 < 10) {
      return 5;
    }
    if (param_1 < 0xf) {
      return 10;
    }
    if (param_1 < 0x14) {
      return 0xf;
    }
  }
  else if (param_1 < 0x14) {
    return 0xf;
  }
  if (param_1 < 0x1e) {
    uVar1 = 0x14;
  }
  else if (param_1 < 0x28) {
    uVar1 = 0x1e;
  }
  else if (param_1 < 0x32) {
    uVar1 = 0x28;
  }
  else if (param_1 < 0x3c) {
    uVar1 = 0x32;
  }
  else if (param_1 < 0x46) {
    uVar1 = 0x3c;
  }
  else {
    uVar1 = 0x46;
  }
  return uVar1;
}
```
