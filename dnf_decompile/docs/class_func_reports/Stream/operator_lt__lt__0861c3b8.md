# operator<<

`_ZN6StreamlsEj`

`Stream::operator<<(unsigned int)`

| 类 | 地址 |
|---|---|
| `Stream` | `0x0861c3b8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0861c3b8  _ZN6StreamlsEj
#           Stream::operator<<(unsigned int)
# range [0x0861c3b8, 0x0861c3d5]
0861c3b8 +0x00:  push   %ebp
0861c3b9 +0x01:  mov    %esp,%ebp
0861c3bb +0x03:  sub    $0x18,%esp
0861c3be +0x06:  mov    0xc(%ebp),%eax
0861c3c1 +0x09:  mov    %eax,0x4(%esp)
0861c3c5 +0x0d:  mov    0x8(%ebp),%eax
0861c3c8 +0x10:  mov    %eax,(%esp)
0861c3cb +0x13:  call   0861c1bc <_ZN6StreamlsEi>  ; Stream::operator<<(int)
0861c3d0 +0x18:  mov    0x8(%ebp),%eax
0861c3d3 +0x1b:  leave
0861c3d4 +0x1c:  ret
0861c3d5 +0x1d:  nop
```

## 反编译 C

```c
// Stream::operator<< @ 0x861c3b8

/* Stream::TEMPNAMEPLACEHOLDERVALUE(unsigned int) */

Stream * __thiscall Stream::operator<<(Stream *this,uint param_1)

{
  operator<<(this,param_1);
  return this;
}
```
