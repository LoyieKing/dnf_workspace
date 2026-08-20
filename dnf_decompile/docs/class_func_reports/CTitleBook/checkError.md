# checkError

`_ZN10CTitleBook10checkErrorEP5CUser24ENUM_TITLE_BOOK_CATEGORYi`

`CTitleBook::checkError(CUser*, ENUM_TITLE_BOOK_CATEGORY, int)`

| 类 | 地址 |
|---|---|
| `CTitleBook` | `0x08641fac` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08641fac  _ZN10CTitleBook10checkErrorEP5CUser24ENUM_TITLE_BOOK_CATEGORYi
#           CTitleBook::checkError(CUser*, ENUM_TITLE_BOOK_CATEGORY, int)
# range [0x08641fac, 0x08642057]
08641fac +0x00:  push   %ebp
08641fad +0x01:  mov    %esp,%ebp
08641faf +0x03:  sub    $0x10,%esp
08641fb2 +0x06:  cmpl   $0x0,0x8(%ebp)
08641fb6 +0x0a:  jne    08641fc2 <+0x16>
08641fb8 +0x0c:  mov    $0x3,%eax
08641fbd +0x11:  jmp    08642055 <+0xa9>
08641fc2 +0x16:  movl   $0x0,-0x4(%ebp)
08641fc9 +0x1d:  mov    0xc(%ebp),%eax
08641fcc +0x20:  cmp    $0x1,%eax
08641fcf +0x23:  je     08641ffd <+0x51>
08641fd1 +0x25:  cmp    $0x1,%eax
08641fd4 +0x28:  jg     08641fdc <+0x30>
08641fd6 +0x2a:  test   %eax,%eax
08641fd8 +0x2c:  je     08641fe8 <+0x3c>
08641fda +0x2e:  jmp    0864203f <+0x93>
08641fdc +0x30:  cmp    $0x2,%eax
08641fdf +0x33:  je     08642015 <+0x69>
08641fe1 +0x35:  cmp    $0x3,%eax
08641fe4 +0x38:  je     0864202a <+0x7e>
08641fe6 +0x3a:  jmp    0864203f <+0x93>
08641fe8 +0x3c:  cmpl   $0x0,0x10(%ebp)
08641fec +0x40:  js     08641ff4 <+0x48>
08641fee +0x42:  cmpl   $0x45,0x10(%ebp)
08641ff2 +0x46:  jle    08642048 <+0x9c>
08641ff4 +0x48:  movl   $0x3,-0x4(%ebp)
08641ffb +0x4f:  jmp    08642052 <+0xa6>
08641ffd +0x51:  cmpl   $0x0,0x10(%ebp)
08642001 +0x55:  js     0864200c <+0x60>
08642003 +0x57:  cmpl   $0xc7,0x10(%ebp)
0864200a +0x5e:  jle    0864204b <+0x9f>
0864200c +0x60:  movl   $0x3,-0x4(%ebp)
08642013 +0x67:  jmp    08642052 <+0xa6>
08642015 +0x69:  cmpl   $0x0,0x10(%ebp)
08642019 +0x6d:  js     08642021 <+0x75>
0864201b +0x6f:  cmpl   $0x77,0x10(%ebp)
0864201f +0x73:  jle    0864204e <+0xa2>
08642021 +0x75:  movl   $0x3,-0x4(%ebp)
08642028 +0x7c:  jmp    08642052 <+0xa6>
0864202a +0x7e:  cmpl   $0x0,0x10(%ebp)
0864202e +0x82:  js     08642036 <+0x8a>
08642030 +0x84:  cmpl   $0x3b,0x10(%ebp)
08642034 +0x88:  jle    08642051 <+0xa5>
08642036 +0x8a:  movl   $0x3,-0x4(%ebp)
0864203d +0x91:  jmp    08642052 <+0xa6>
0864203f +0x93:  movl   $0x3,-0x4(%ebp)
08642046 +0x9a:  jmp    08642052 <+0xa6>
08642048 +0x9c:  nop
08642049 +0x9d:  jmp    08642052 <+0xa6>
0864204b +0x9f:  nop
0864204c +0xa0:  jmp    08642052 <+0xa6>
0864204e +0xa2:  nop
0864204f +0xa3:  jmp    08642052 <+0xa6>
08642051 +0xa5:  nop
08642052 +0xa6:  mov    -0x4(%ebp),%eax
08642055 +0xa9:  leave
08642056 +0xaa:  ret
08642057 +0xab:  nop
```

## 反编译 C

```c
// CTitleBook::checkError @ 0x8641fac

/* CTitleBook::checkError(CUser*, ENUM_TITLE_BOOK_CATEGORY, int) */

undefined4 CTitleBook::checkError(int param_1,int param_2,int param_3)

{
  undefined4 local_8;
  
  if (param_1 == 0) {
    local_8 = 3;
  }
  else {
    local_8 = 0;
    if (param_2 == 1) {
      if ((param_3 < 0) || (199 < param_3)) {
        local_8 = 3;
      }
    }
    else {
      if (param_2 < 2) {
        if (param_2 == 0) {
          if ((-1 < param_3) && (param_3 < 0x46)) {
            return 0;
          }
          return 3;
        }
      }
      else {
        if (param_2 == 2) {
          if ((-1 < param_3) && (param_3 < 0x78)) {
            return 0;
          }
          return 3;
        }
        if (param_2 == 3) {
          if ((-1 < param_3) && (param_3 < 0x3c)) {
            return 0;
          }
          return 3;
        }
      }
      local_8 = 3;
    }
  }
  return local_8;
}
```
