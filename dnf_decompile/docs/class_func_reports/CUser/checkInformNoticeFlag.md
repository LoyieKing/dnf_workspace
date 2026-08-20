# checkInformNoticeFlag

`_ZN5CUser21checkInformNoticeFlagEjj`

`CUser::checkInformNoticeFlag(unsigned int, unsigned int)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0868f9e8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0868f9e8  _ZN5CUser21checkInformNoticeFlagEjj
#           CUser::checkInformNoticeFlag(unsigned int, unsigned int)
# range [0x0868f9e8, 0x0868fa45]
0868f9e8 +0x00:  push   %ebp
0868f9e9 +0x01:  mov    %esp,%ebp
0868f9eb +0x03:  push   %ebx
0868f9ec +0x04:  sub    $0x10,%esp
0868f9ef +0x07:  cmpl   $0x7,0xc(%ebp)
0868f9f3 +0x0b:  jbe    0868f9fc <+0x14>
0868f9f5 +0x0d:  mov    $0x0,%eax
0868f9fa +0x12:  jmp    0868fa3f <+0x57>
0868f9fc +0x14:  cmpl   $0xf,0x10(%ebp)
0868fa00 +0x18:  jbe    0868fa09 <+0x21>
0868fa02 +0x1a:  mov    $0x0,%eax
0868fa07 +0x1f:  jmp    0868fa3f <+0x57>
0868fa09 +0x21:  mov    0x10(%ebp),%eax
0868fa0c +0x24:  mov    0x8(%ebp),%edx
0868fa0f +0x27:  movzbl 0x8ebb1(%edx,%eax,1),%eax
0868fa17 +0x2f:  mov    %al,-0x5(%ebp)
0868fa1a +0x32:  movzbl -0x5(%ebp),%edx
0868fa1e +0x36:  mov    0xc(%ebp),%eax
0868fa21 +0x39:  mov    %edx,%ebx
0868fa23 +0x3b:  mov    %eax,%ecx
0868fa25 +0x3d:  sar    %cl,%ebx
0868fa27 +0x3f:  mov    %ebx,%eax
0868fa29 +0x41:  and    $0x1,%eax
0868fa2c +0x44:  xor    $0x1,%eax
0868fa2f +0x47:  test   %al,%al
0868fa31 +0x49:  je     0868fa3a <+0x52>
0868fa33 +0x4b:  mov    $0x1,%eax
0868fa38 +0x50:  jmp    0868fa3f <+0x57>
0868fa3a +0x52:  mov    $0x0,%eax
0868fa3f +0x57:  add    $0x10,%esp
0868fa42 +0x5a:  pop    %ebx
0868fa43 +0x5b:  pop    %ebp
0868fa44 +0x5c:  ret
0868fa45 +0x5d:  nop
```

## 反编译 C

```c
// CUser::checkInformNoticeFlag @ 0x868f9e8

/* CUser::checkInformNoticeFlag(unsigned int, unsigned int) */

undefined4 __thiscall CUser::checkInformNoticeFlag(CUser *this,uint param_1,uint param_2)

{
  undefined4 uVar1;
  
  if (param_1 < 8) {
    if (param_2 < 0x10) {
      if (((byte)((int)(uint)(byte)this[param_2 + 0x8ebb1] >> ((byte)param_1 & 0x1f)) & 1) == 1) {
        uVar1 = 0;
      }
      else {
        uVar1 = 1;
      }
    }
    else {
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
```
