# operator<<

`_ZN6StreamlsEt`

`Stream::operator<<(unsigned short)`

| 类 | 地址 |
|---|---|
| `Stream` | `0x0861c392` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0861c392  _ZN6StreamlsEt
#           Stream::operator<<(unsigned short)
# range [0x0861c392, 0x0861c3b7]
0861c392 +0x00:  push   %ebp
0861c393 +0x01:  mov    %esp,%ebp
0861c395 +0x03:  sub    $0x28,%esp
0861c398 +0x06:  mov    0xc(%ebp),%eax
0861c39b +0x09:  mov    %ax,-0xc(%ebp)
0861c39f +0x0d:  movzwl -0xc(%ebp),%eax
0861c3a3 +0x11:  cwtl
0861c3a4 +0x12:  mov    %eax,0x4(%esp)
0861c3a8 +0x16:  mov    0x8(%ebp),%eax
0861c3ab +0x19:  mov    %eax,(%esp)
0861c3ae +0x1c:  call   0861c12e <_ZN6StreamlsEs>  ; Stream::operator<<(short)
0861c3b3 +0x21:  mov    0x8(%ebp),%eax
0861c3b6 +0x24:  leave
0861c3b7 +0x25:  ret
```

## 反编译 C

```c
// Stream::operator<< @ 0x861c392

/* Stream::TEMPNAMEPLACEHOLDERVALUE(unsigned short) */

Stream * __thiscall Stream::operator<<(Stream *this,ushort param_1)

{
  operator<<(this,param_1);
  return this;
}
```
