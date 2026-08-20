# operator<<

`_ZN6StreamlsEm`

`Stream::operator<<(unsigned long)`

| 类 | 地址 |
|---|---|
| `Stream` | `0x0861c3d6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0861c3d6  _ZN6StreamlsEm
#           Stream::operator<<(unsigned long)
# range [0x0861c3d6, 0x0861c3f3]
0861c3d6 +0x00:  push   %ebp
0861c3d7 +0x01:  mov    %esp,%ebp
0861c3d9 +0x03:  sub    $0x18,%esp
0861c3dc +0x06:  mov    0xc(%ebp),%eax
0861c3df +0x09:  mov    %eax,0x4(%esp)
0861c3e3 +0x0d:  mov    0x8(%ebp),%eax
0861c3e6 +0x10:  mov    %eax,(%esp)
0861c3e9 +0x13:  call   0861c242 <_ZN6StreamlsEl>  ; Stream::operator<<(long)
0861c3ee +0x18:  mov    0x8(%ebp),%eax
0861c3f1 +0x1b:  leave
0861c3f2 +0x1c:  ret
0861c3f3 +0x1d:  nop
```

## 反编译 C

```c
// Stream::operator<< @ 0x861c3d6

/* Stream::TEMPNAMEPLACEHOLDERVALUE(unsigned long) */

Stream * __thiscall Stream::operator<<(Stream *this,ulong param_1)

{
  operator<<(this,param_1);
  return this;
}
```
