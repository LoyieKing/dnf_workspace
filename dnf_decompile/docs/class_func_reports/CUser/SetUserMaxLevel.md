# SetUserMaxLevel

`_ZN5CUser15SetUserMaxLevelEi`

`CUser::SetUserMaxLevel(int)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0868fec8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0868fec8  _ZN5CUser15SetUserMaxLevelEi
#           CUser::SetUserMaxLevel(int)
# range [0x0868fec8, 0x0868ff03]
0868fec8 +0x00:  push   %ebp
0868fec9 +0x01:  mov    %esp,%ebp
0868fecb +0x03:  cmpl   $0x55,0xc(%ebp)
0868fecf +0x07:  jle    0868fee0 <+0x18>
0868fed1 +0x09:  mov    0x8(%ebp),%eax
0868fed4 +0x0c:  movl   $0x55,0x8ebd8(%eax)
0868fede +0x16:  jmp    0868ff01 <+0x39>
0868fee0 +0x18:  cmpl   $0x0,0xc(%ebp)
0868fee4 +0x1c:  jg     0868fef5 <+0x2d>
0868fee6 +0x1e:  mov    0x8(%ebp),%eax
0868fee9 +0x21:  movl   $0x1,0x8ebd8(%eax)
0868fef3 +0x2b:  jmp    0868ff01 <+0x39>
0868fef5 +0x2d:  mov    0x8(%ebp),%eax
0868fef8 +0x30:  mov    0xc(%ebp),%edx
0868fefb +0x33:  mov    %edx,0x8ebd8(%eax)
0868ff01 +0x39:  pop    %ebp
0868ff02 +0x3a:  ret
0868ff03 +0x3b:  nop
```

## 反编译 C

```c
// CUser::SetUserMaxLevel @ 0x868fec8

/* CUser::SetUserMaxLevel(int) */

void __thiscall CUser::SetUserMaxLevel(CUser *this,int param_1)

{
  if (param_1 < 0x56) {
    if (param_1 < 1) {
      *(undefined4 *)(this + 0x8ebd8) = 1;
    }
    else {
      *(int *)(this + 0x8ebd8) = param_1;
    }
  }
  else {
    *(undefined4 *)(this + 0x8ebd8) = 0x55;
  }
  return;
}
```
