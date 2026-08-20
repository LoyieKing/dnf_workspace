# del

`_ZN14TeamInfoSecond3delEP5CUser`

`TeamInfoSecond::del(CUser*)`

| 类 | 地址 |
|---|---|
| `TeamInfoSecond` | `0x0855fe54` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0855fe54  _ZN14TeamInfoSecond3delEP5CUser
#           TeamInfoSecond::del(CUser*)
# range [0x0855fe54, 0x0855fea9]
0855fe54 +0x00:  push   %ebp
0855fe55 +0x01:  mov    %esp,%ebp
0855fe57 +0x03:  sub    $0x10,%esp
0855fe5a +0x06:  movl   $0x0,-0x4(%ebp)
0855fe61 +0x0d:  jmp    0855fe97 <+0x43>
0855fe63 +0x0f:  mov    -0x4(%ebp),%edx
0855fe66 +0x12:  mov    0x8(%ebp),%eax
0855fe69 +0x15:  movzbl 0xc(%eax,%edx,8),%eax
0855fe6e +0x1a:  test   %al,%al
0855fe70 +0x1c:  je     0855fe93 <+0x3f>
0855fe72 +0x1e:  mov    -0x4(%ebp),%edx
0855fe75 +0x21:  mov    0x8(%ebp),%eax
0855fe78 +0x24:  mov    0x8(%eax,%edx,8),%eax
0855fe7c +0x28:  cmp    0xc(%ebp),%eax
0855fe7f +0x2b:  jne    0855fe93 <+0x3f>
0855fe81 +0x2d:  mov    -0x4(%ebp),%edx
0855fe84 +0x30:  mov    0x8(%ebp),%eax
0855fe87 +0x33:  movb   $0x0,0xc(%eax,%edx,8)
0855fe8c +0x38:  mov    $0x1,%eax
0855fe91 +0x3d:  jmp    0855fea7 <+0x53>
0855fe93 +0x3f:  addl   $0x1,-0x4(%ebp)
0855fe97 +0x43:  cmpl   $0x3,-0x4(%ebp)
0855fe9b +0x47:  setle  %al
0855fe9e +0x4a:  test   %al,%al
0855fea0 +0x4c:  jne    0855fe63 <+0xf>
0855fea2 +0x4e:  mov    $0x0,%eax
0855fea7 +0x53:  leave
0855fea8 +0x54:  ret
0855fea9 +0x55:  nop
```

## 反编译 C

```c
// TeamInfoSecond::del @ 0x855fe54

/* TeamInfoSecond::del(CUser*) */

undefined4 __thiscall TeamInfoSecond::del(TeamInfoSecond *this,CUser *param_1)

{
  int local_8;
  
  local_8 = 0;
  while( true ) {
    if (3 < local_8) {
      return 0;
    }
    if ((this[local_8 * 8 + 0xc] != (TeamInfoSecond)0x0) &&
       (*(CUser **)(this + local_8 * 8 + 8) == param_1)) break;
    local_8 = local_8 + 1;
  }
  this[local_8 * 8 + 0xc] = (TeamInfoSecond)0x0;
  return 1;
}
```
