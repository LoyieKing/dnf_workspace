# str

`_ZNSt10ostrstream3strEv`

`std::ostrstream::str()`

| 类 | 地址 |
|---|---|
| `std::ostrstream` | `0x086dd8c0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086dd8c0  _ZNSt10ostrstream3strEv
#           std::ostrstream::str()
# range [0x086dd8c0, 0x086dd8df]
086dd8c0 +0x00:  push   %ebp
086dd8c1 +0x01:  mov    %esp,%ebp
086dd8c3 +0x03:  mov    0x8(%ebp),%eax
086dd8c6 +0x06:  movzbl 0x2c(%eax),%edx
086dd8ca +0x0a:  test   $0x1,%dl
086dd8cd +0x0d:  je     086dd8d5 <+0x15>
086dd8cf +0x0f:  or     $0x2,%edx
086dd8d2 +0x12:  mov    %dl,0x2c(%eax)
086dd8d5 +0x15:  mov    0x8(%eax),%eax
086dd8d8 +0x18:  pop    %ebp
086dd8d9 +0x19:  ret
086dd8da +0x1a:  nop
086dd8db +0x1b:  nop
086dd8dc +0x1c:  nop
086dd8dd +0x1d:  nop
086dd8de +0x1e:  nop
086dd8df +0x1f:  nop
```

## 反编译 C

```c
// std::ostrstream::str @ 0x86dd8c0

/* std::ostrstream::str() */

undefined4 __thiscall std::ostrstream::str(ostrstream *this)

{
  if (((byte)this[0x2c] & 1) != 0) {
    this[0x2c] = (ostrstream)((byte)this[0x2c] | 2);
  }
  return *(undefined4 *)(this + 8);
}
```
