# operator<<

`_ZN6StreamlsEh`

`Stream::operator<<(unsigned char)`

| 类 | 地址 |
|---|---|
| `Stream` | `0x0861c36a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0861c36a  _ZN6StreamlsEh
#           Stream::operator<<(unsigned char)
# range [0x0861c36a, 0x0861c391]
0861c36a +0x00:  push   %ebp
0861c36b +0x01:  mov    %esp,%ebp
0861c36d +0x03:  sub    $0x28,%esp
0861c370 +0x06:  mov    0xc(%ebp),%eax
0861c373 +0x09:  mov    %al,-0xc(%ebp)
0861c376 +0x0c:  movzbl -0xc(%ebp),%eax
0861c37a +0x10:  movsbl %al,%eax
0861c37d +0x13:  mov    %eax,0x4(%esp)
0861c381 +0x17:  mov    0x8(%ebp),%eax
0861c384 +0x1a:  mov    %eax,(%esp)
0861c387 +0x1d:  call   0861c0b2 <_ZN6StreamlsEc>  ; Stream::operator<<(char)
0861c38c +0x22:  mov    0x8(%ebp),%eax
0861c38f +0x25:  leave
0861c390 +0x26:  ret
0861c391 +0x27:  nop
```

## 反编译 C

```c
// Stream::operator<< @ 0x861c36a

/* Stream::TEMPNAMEPLACEHOLDERVALUE(unsigned char) */

Stream * __thiscall Stream::operator<<(Stream *this,uchar param_1)

{
  operator<<(this,param_1);
  return this;
}
```
