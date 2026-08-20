# pcount

`_ZNKSt10ostrstream6pcountEv`

`std::ostrstream::pcount() const`

| 类 | 地址 |
|---|---|
| `std::ostrstream` | `0x086dd8e0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086dd8e0  _ZNKSt10ostrstream6pcountEv
#           std::ostrstream::pcount() const
# range [0x086dd8e0, 0x086dd8ff]
086dd8e0 +0x00:  push   %ebp
086dd8e1 +0x01:  xor    %eax,%eax
086dd8e3 +0x03:  mov    %esp,%ebp
086dd8e5 +0x05:  mov    0x8(%ebp),%edx
086dd8e8 +0x08:  mov    0x18(%edx),%ecx
086dd8eb +0x0b:  test   %ecx,%ecx
086dd8ed +0x0d:  je     086dd8f4 <+0x14>
086dd8ef +0x0f:  mov    %ecx,%eax
086dd8f1 +0x11:  sub    0x14(%edx),%eax
086dd8f4 +0x14:  pop    %ebp
086dd8f5 +0x15:  ret
086dd8f6 +0x16:  nop
086dd8f7 +0x17:  nop
086dd8f8 +0x18:  nop
086dd8f9 +0x19:  nop
086dd8fa +0x1a:  nop
086dd8fb +0x1b:  nop
086dd8fc +0x1c:  nop
086dd8fd +0x1d:  nop
086dd8fe +0x1e:  nop
086dd8ff +0x1f:  nop
```

## 反编译 C

```c
// std::ostrstream::pcount @ 0x86dd8e0

/* std::ostrstream::pcount() const */

int __thiscall std::ostrstream::pcount(ostrstream *this)

{
  int iVar1;
  
  iVar1 = 0;
  if (*(int *)(this + 0x18) != 0) {
    iVar1 = *(int *)(this + 0x18) - *(int *)(this + 0x14);
  }
  return iVar1;
}
```
