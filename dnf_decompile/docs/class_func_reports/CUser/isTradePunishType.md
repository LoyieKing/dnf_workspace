# isTradePunishType

`_ZN5CUser17isTradePunishTypeEi`

`CUser::isTradePunishType(int)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0868991c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0868991c  _ZN5CUser17isTradePunishTypeEi
#           CUser::isTradePunishType(int)
# range [0x0868991c, 0x08689959]
0868991c +0x00:  push   %ebp
0868991d +0x01:  mov    %esp,%ebp
0868991f +0x03:  cmpl   $0x0,0xc(%ebp)
08689923 +0x07:  jne    08689939 <+0x1d>
08689925 +0x09:  mov    0x8(%ebp),%eax
08689928 +0x0c:  mov    0x79628(%eax),%eax
0868992e +0x12:  test   %eax,%eax
08689930 +0x14:  je     08689939 <+0x1d>
08689932 +0x16:  mov    $0x1,%eax
08689937 +0x1b:  jmp    08689957 <+0x3b>
08689939 +0x1d:  mov    0x8(%ebp),%eax
0868993c +0x20:  mov    0x79628(%eax),%edx
08689942 +0x26:  mov    0xc(%ebp),%eax
08689945 +0x29:  and    %edx,%eax
08689947 +0x2b:  test   %eax,%eax
08689949 +0x2d:  je     08689952 <+0x36>
0868994b +0x2f:  mov    $0x1,%eax
08689950 +0x34:  jmp    08689957 <+0x3b>
08689952 +0x36:  mov    $0x0,%eax
08689957 +0x3b:  pop    %ebp
08689958 +0x3c:  ret
08689959 +0x3d:  nop
```

## 反编译 C

```c
// CUser::isTradePunishType @ 0x868991c

/* CUser::isTradePunishType(int) */

undefined4 __thiscall CUser::isTradePunishType(CUser *this,int param_1)

{
  undefined4 uVar1;
  
  if ((param_1 == 0) && (*(int *)(this + 0x79628) != 0)) {
    uVar1 = 1;
  }
  else if ((param_1 & *(uint *)(this + 0x79628)) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}
```
