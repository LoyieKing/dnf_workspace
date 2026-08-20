# size

`_ZNK14TeamInfoSecond4sizeEv`

`TeamInfoSecond::size() const`

| 类 | 地址 |
|---|---|
| `TeamInfoSecond` | `0x0855feaa` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0855feaa  _ZNK14TeamInfoSecond4sizeEv
#           TeamInfoSecond::size() const
# range [0x0855feaa, 0x0855fee7]
0855feaa +0x00:  push   %ebp
0855feab +0x01:  mov    %esp,%ebp
0855fead +0x03:  sub    $0x10,%esp
0855feb0 +0x06:  movl   $0x0,-0x8(%ebp)
0855feb7 +0x0d:  movl   $0x0,-0x4(%ebp)
0855febe +0x14:  jmp    0855fed7 <+0x2d>
0855fec0 +0x16:  mov    -0x4(%ebp),%edx
0855fec3 +0x19:  mov    0x8(%ebp),%eax
0855fec6 +0x1c:  movzbl 0xc(%eax,%edx,8),%eax
0855fecb +0x21:  test   %al,%al
0855fecd +0x23:  je     0855fed3 <+0x29>
0855fecf +0x25:  addl   $0x1,-0x8(%ebp)
0855fed3 +0x29:  addl   $0x1,-0x4(%ebp)
0855fed7 +0x2d:  cmpl   $0x3,-0x4(%ebp)
0855fedb +0x31:  setle  %al
0855fede +0x34:  test   %al,%al
0855fee0 +0x36:  jne    0855fec0 <+0x16>
0855fee2 +0x38:  mov    -0x8(%ebp),%eax
0855fee5 +0x3b:  leave
0855fee6 +0x3c:  ret
0855fee7 +0x3d:  nop
```

## 反编译 C

```c
// TeamInfoSecond::size @ 0x855feaa

/* TeamInfoSecond::size() const */

int __thiscall TeamInfoSecond::size(TeamInfoSecond *this)

{
  int local_c;
  int local_8;
  
  local_c = 0;
  for (local_8 = 0; local_8 < 4; local_8 = local_8 + 1) {
    if (this[local_8 * 8 + 0xc] != (TeamInfoSecond)0x0) {
      local_c = local_c + 1;
    }
  }
  return local_c;
}
```
