# check_comment

`_ZN12CEnvironment13check_commentEPc`

`CEnvironment::check_comment(char*)`

| 类 | 地址 |
|---|---|
| `CEnvironment` | `0x08290610` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08290610  _ZN12CEnvironment13check_commentEPc
#           CEnvironment::check_comment(char*)
# range [0x08290610, 0x082906bd]
08290610 +0x00:  push   %ebp
08290611 +0x01:  mov    %esp,%ebp
08290613 +0x03:  sub    $0x10,%esp
08290616 +0x06:  mov    0xc(%ebp),%eax
08290619 +0x09:  movzbl (%eax),%eax
0829061c +0x0c:  test   %al,%al
0829061e +0x0e:  jne    0829062a <+0x1a>
08290620 +0x10:  mov    $0x1,%eax
08290625 +0x15:  jmp    082906bc <+0xac>
0829062a +0x1a:  mov    0xc(%ebp),%eax
0829062d +0x1d:  movzbl (%eax),%eax
08290630 +0x20:  cmp    $0x5b,%al
08290632 +0x22:  je     08290648 <+0x38>
08290634 +0x24:  mov    0xc(%ebp),%eax
08290637 +0x27:  movzbl (%eax),%eax
0829063a +0x2a:  cmp    $0xd,%al
0829063c +0x2c:  je     08290648 <+0x38>
0829063e +0x2e:  mov    0xc(%ebp),%eax
08290641 +0x31:  movzbl (%eax),%eax
08290644 +0x34:  cmp    $0xa,%al
08290646 +0x36:  jne    0829064f <+0x3f>
08290648 +0x38:  mov    $0x1,%eax
0829064d +0x3d:  jmp    082906bc <+0xac>
0829064f +0x3f:  movl   $0x0,-0xc(%ebp)
08290656 +0x46:  jmp    082906a9 <+0x99>
08290658 +0x48:  movl   $0x0,-0x8(%ebp)
0829065f +0x4f:  movl   $0x0,-0x4(%ebp)
08290666 +0x56:  jmp    0829068d <+0x7d>
08290668 +0x58:  mov    -0x4(%ebp),%eax
0829066b +0x5b:  mov    -0xc(%ebp),%edx
0829066e +0x5e:  lea    (%edx,%eax,1),%eax
08290671 +0x61:  add    0xc(%ebp),%eax
08290674 +0x64:  movzbl (%eax),%edx
08290677 +0x67:  mov    -0x4(%ebp),%eax
0829067a +0x6a:  movzbl "//"(%eax),%eax
08290681 +0x71:  cmp    %al,%dl
08290683 +0x73:  jne    08290689 <+0x79>
08290685 +0x75:  addl   $0x1,-0x8(%ebp)
08290689 +0x79:  addl   $0x1,-0x4(%ebp)
0829068d +0x7d:  cmpl   $0x1,-0x4(%ebp)
08290691 +0x81:  setle  %al
08290694 +0x84:  test   %al,%al
08290696 +0x86:  jne    08290668 <+0x58>
08290698 +0x88:  cmpl   $0x2,-0x8(%ebp)
0829069c +0x8c:  jne    082906a5 <+0x95>
0829069e +0x8e:  mov    $0x1,%eax
082906a3 +0x93:  jmp    082906bc <+0xac>
082906a5 +0x95:  addl   $0x1,-0xc(%ebp)
082906a9 +0x99:  cmpl   $0x3fd,-0xc(%ebp)
082906b0 +0xa0:  setle  %al
082906b3 +0xa3:  test   %al,%al
082906b5 +0xa5:  jne    08290658 <+0x48>
082906b7 +0xa7:  mov    $0x0,%eax
082906bc +0xac:  leave
082906bd +0xad:  ret
```

## 反编译 C

```c
// CEnvironment::check_comment @ 0x8290610

/* CEnvironment::check_comment(char*) */

undefined4 __thiscall CEnvironment::check_comment(CEnvironment *this,char *param_1)

{
  undefined4 uVar1;
  int local_10;
  int local_c;
  int local_8;
  
  if (*param_1 == '\0') {
    uVar1 = 1;
  }
  else if (((*param_1 == '[') || (*param_1 == '\r')) || (*param_1 == '\n')) {
    uVar1 = 1;
  }
  else {
    for (local_10 = 0; local_10 < 0x3fe; local_10 = local_10 + 1) {
      local_c = 0;
      for (local_8 = 0; local_8 < 2; local_8 = local_8 + 1) {
        if (param_1[local_10 + local_8] == (&DAT_08c1631f)[local_8]) {
          local_c = local_c + 1;
        }
      }
      if (local_c == 2) {
        return 1;
      }
    }
    uVar1 = 0;
  }
  return uVar1;
}
```
