# del

`_ZN8TeamInfo3delEP5CUser`

`TeamInfo::del(CUser*)`

| 类 | 地址 |
|---|---|
| `TeamInfo` | `0x0855cc9c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0855cc9c  _ZN8TeamInfo3delEP5CUser
#           TeamInfo::del(CUser*)
# range [0x0855cc9c, 0x0855cd25]
0855cc9c +0x00:  push   %ebp
0855cc9d +0x01:  mov    %esp,%ebp
0855cc9f +0x03:  sub    $0x10,%esp
0855cca2 +0x06:  movl   $0x0,-0x4(%ebp)
0855cca9 +0x0d:  jmp    0855cd13 <+0x77>
0855ccab +0x0f:  mov    -0x4(%ebp),%eax
0855ccae +0x12:  mov    0x8(%ebp),%ecx
0855ccb1 +0x15:  lea    0x0(,%eax,4),%edx
0855ccb8 +0x1c:  lea    0x0(,%edx,8),%eax
0855ccbf +0x23:  sub    %edx,%eax
0855ccc1 +0x25:  movzbl 0xc(%eax,%ecx,1),%eax
0855ccc6 +0x2a:  test   %al,%al
0855ccc8 +0x2c:  je     0855cd0f <+0x73>
0855ccca +0x2e:  mov    -0x4(%ebp),%eax
0855cccd +0x31:  mov    0x8(%ebp),%ecx
0855ccd0 +0x34:  lea    0x0(,%eax,4),%edx
0855ccd7 +0x3b:  lea    0x0(,%edx,8),%eax
0855ccde +0x42:  sub    %edx,%eax
0855cce0 +0x44:  lea    (%ecx,%eax,1),%eax
0855cce3 +0x47:  add    $0x8,%eax
0855cce6 +0x4a:  mov    (%eax),%eax
0855cce8 +0x4c:  cmp    0xc(%ebp),%eax
0855cceb +0x4f:  jne    0855cd0f <+0x73>
0855cced +0x51:  mov    -0x4(%ebp),%eax
0855ccf0 +0x54:  mov    0x8(%ebp),%ecx
0855ccf3 +0x57:  lea    0x0(,%eax,4),%edx
0855ccfa +0x5e:  lea    0x0(,%edx,8),%eax
0855cd01 +0x65:  sub    %edx,%eax
0855cd03 +0x67:  movb   $0x0,0xc(%eax,%ecx,1)
0855cd08 +0x6c:  mov    $0x1,%eax
0855cd0d +0x71:  jmp    0855cd23 <+0x87>
0855cd0f +0x73:  addl   $0x1,-0x4(%ebp)
0855cd13 +0x77:  cmpl   $0x3,-0x4(%ebp)
0855cd17 +0x7b:  setle  %al
0855cd1a +0x7e:  test   %al,%al
0855cd1c +0x80:  jne    0855ccab <+0xf>
0855cd1e +0x82:  mov    $0x0,%eax
0855cd23 +0x87:  leave
0855cd24 +0x88:  ret
0855cd25 +0x89:  nop
```

## 反编译 C

```c
// TeamInfo::del @ 0x855cc9c

/* TeamInfo::del(CUser*) */

undefined4 __thiscall TeamInfo::del(TeamInfo *this,CUser *param_1)

{
  int local_8;
  
  local_8 = 0;
  while( true ) {
    if (3 < local_8) {
      return 0;
    }
    if ((this[local_8 * 0x1c + 0xc] != (TeamInfo)0x0) &&
       (*(CUser **)(this + local_8 * 0x1c + 8) == param_1)) break;
    local_8 = local_8 + 1;
  }
  this[local_8 * 0x1c + 0xc] = (TeamInfo)0x0;
  return 1;
}
```
