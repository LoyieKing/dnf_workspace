# freeze

`_ZNSt9strstream6freezeEb`

`std::strstream::freeze(bool)`

| 类 | 地址 |
|---|---|
| `std::strstream` | `0x086dd910` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086dd910  _ZNSt9strstream6freezeEb
#           std::strstream::freeze(bool)
# range [0x086dd910, 0x086dd93f]
086dd910 +0x00:  push   %ebp
086dd911 +0x01:  mov    %esp,%ebp
086dd913 +0x03:  mov    0x8(%ebp),%eax
086dd916 +0x06:  movzbl 0xc(%ebp),%ecx
086dd91a +0x0a:  movzbl 0x34(%eax),%edx
086dd91e +0x0e:  test   $0x1,%dl
086dd921 +0x11:  je     086dd930 <+0x20>
086dd923 +0x13:  and    $0x1,%ecx
086dd926 +0x16:  and    $0xfffffffd,%edx
086dd929 +0x19:  add    %ecx,%ecx
086dd92b +0x1b:  or     %ecx,%edx
086dd92d +0x1d:  mov    %dl,0x34(%eax)
086dd930 +0x20:  pop    %ebp
086dd931 +0x21:  ret
086dd932 +0x22:  nop
086dd933 +0x23:  nop
086dd934 +0x24:  nop
086dd935 +0x25:  nop
086dd936 +0x26:  nop
086dd937 +0x27:  nop
086dd938 +0x28:  nop
086dd939 +0x29:  nop
086dd93a +0x2a:  nop
086dd93b +0x2b:  nop
086dd93c +0x2c:  nop
086dd93d +0x2d:  nop
086dd93e +0x2e:  nop
086dd93f +0x2f:  nop
```

## 反编译 C

```c
// std::strstream::freeze @ 0x86dd910

/* std::strstream::freeze(bool) */

void __thiscall std::strstream::freeze(strstream *this,bool param_1)

{
  if (((byte)this[0x34] & 1) != 0) {
    this[0x34] = (strstream)((byte)this[0x34] & 0xfd | param_1 * '\x02');
  }
  return;
}
```
