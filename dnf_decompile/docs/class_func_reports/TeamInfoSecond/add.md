# add

`_ZN14TeamInfoSecond3addEP5CUser`

`TeamInfoSecond::add(CUser*)`

| 类 | 地址 |
|---|---|
| `TeamInfoSecond` | `0x0855fdfe` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0855fdfe  _ZN14TeamInfoSecond3addEP5CUser
#           TeamInfoSecond::add(CUser*)
# range [0x0855fdfe, 0x0855fe53]
0855fdfe +0x00:  push   %ebp
0855fdff +0x01:  mov    %esp,%ebp
0855fe01 +0x03:  sub    $0x10,%esp
0855fe04 +0x06:  movl   $0x0,-0x4(%ebp)
0855fe0b +0x0d:  jmp    0855fe42 <+0x44>
0855fe0d +0x0f:  mov    -0x4(%ebp),%edx
0855fe10 +0x12:  mov    0x8(%ebp),%eax
0855fe13 +0x15:  movzbl 0xc(%eax,%edx,8),%eax
0855fe18 +0x1a:  xor    $0x1,%eax
0855fe1b +0x1d:  test   %al,%al
0855fe1d +0x1f:  je     0855fe3e <+0x40>
0855fe1f +0x21:  mov    -0x4(%ebp),%edx
0855fe22 +0x24:  mov    0x8(%ebp),%eax
0855fe25 +0x27:  movb   $0x1,0xc(%eax,%edx,8)
0855fe2a +0x2c:  mov    -0x4(%ebp),%edx
0855fe2d +0x2f:  mov    0x8(%ebp),%eax
0855fe30 +0x32:  mov    0xc(%ebp),%ecx
0855fe33 +0x35:  mov    %ecx,0x8(%eax,%edx,8)
0855fe37 +0x39:  mov    $0x1,%eax
0855fe3c +0x3e:  jmp    0855fe52 <+0x54>
0855fe3e +0x40:  addl   $0x1,-0x4(%ebp)
0855fe42 +0x44:  cmpl   $0x3,-0x4(%ebp)
0855fe46 +0x48:  setle  %al
0855fe49 +0x4b:  test   %al,%al
0855fe4b +0x4d:  jne    0855fe0d <+0xf>
0855fe4d +0x4f:  mov    $0x0,%eax
0855fe52 +0x54:  leave
0855fe53 +0x55:  ret
```

## 反编译 C

```c
// TeamInfoSecond::add @ 0x855fdfe

/* TeamInfoSecond::add(CUser*) */

undefined4 __thiscall TeamInfoSecond::add(TeamInfoSecond *this,CUser *param_1)

{
  int local_8;
  
  local_8 = 0;
  while( true ) {
    if (3 < local_8) {
      return 0;
    }
    if (this[local_8 * 8 + 0xc] != (TeamInfoSecond)0x1) break;
    local_8 = local_8 + 1;
  }
  this[local_8 * 8 + 0xc] = (TeamInfoSecond)0x1;
  *(CUser **)(this + local_8 * 8 + 8) = param_1;
  return 1;
}
```
