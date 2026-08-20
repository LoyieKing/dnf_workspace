# str_len

`_ZN6Stream7str_lenEPc`

`Stream::str_len(char*)`

| 类 | 地址 |
|---|---|
| `Stream` | `0x0861c86a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0861c86a  _ZN6Stream7str_lenEPc
#           Stream::str_len(char*)
# range [0x0861c86a, 0x0861c8af]
0861c86a +0x00:  push   %ebp
0861c86b +0x01:  mov    %esp,%ebp
0861c86d +0x03:  sub    $0x10,%esp
0861c870 +0x06:  movl   $0x0,-0x8(%ebp)
0861c877 +0x0d:  movl   $0x0,-0x4(%ebp)
0861c87e +0x14:  jmp    0861c89a <+0x30>
0861c880 +0x16:  mov    -0x4(%ebp),%eax
0861c883 +0x19:  add    0xc(%ebp),%eax
0861c886 +0x1c:  movzbl (%eax),%eax
0861c889 +0x1f:  test   %al,%al
0861c88b +0x21:  jne    0861c892 <+0x28>
0861c88d +0x23:  mov    -0x8(%ebp),%eax
0861c890 +0x26:  jmp    0861c8ad <+0x43>
0861c892 +0x28:  addl   $0x1,-0x8(%ebp)
0861c896 +0x2c:  addl   $0x1,-0x4(%ebp)
0861c89a +0x30:  cmpl   $0x98967f,-0x4(%ebp)
0861c8a1 +0x37:  setle  %al
0861c8a4 +0x3a:  test   %al,%al
0861c8a6 +0x3c:  jne    0861c880 <+0x16>
0861c8a8 +0x3e:  mov    $0x0,%eax
0861c8ad +0x43:  leave
0861c8ae +0x44:  ret
0861c8af +0x45:  nop
```

## 反编译 C

```c
// Stream::str_len @ 0x861c86a

/* Stream::str_len(char*) */

int __thiscall Stream::str_len(Stream *this,char *param_1)

{
  int local_c;
  int local_8;
  
  local_c = 0;
  local_8 = 0;
  while( true ) {
    if (9999999 < local_8) {
      return 0;
    }
    if (param_1[local_8] == '\0') break;
    local_c = local_c + 1;
    local_8 = local_8 + 1;
  }
  return local_c;
}
```
