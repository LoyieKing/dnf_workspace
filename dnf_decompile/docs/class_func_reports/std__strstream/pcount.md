# pcount

`_ZNKSt9strstream6pcountEv`

`std::strstream::pcount() const`

| 类 | 地址 |
|---|---|
| `std::strstream` | `0x086dd940` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086dd940  _ZNKSt9strstream6pcountEv
#           std::strstream::pcount() const
# range [0x086dd940, 0x086dd95f]
086dd940 +0x00:  push   %ebp
086dd941 +0x01:  xor    %eax,%eax
086dd943 +0x03:  mov    %esp,%ebp
086dd945 +0x05:  mov    0x8(%ebp),%edx
086dd948 +0x08:  mov    0x20(%edx),%ecx
086dd94b +0x0b:  test   %ecx,%ecx
086dd94d +0x0d:  je     086dd954 <+0x14>
086dd94f +0x0f:  mov    %ecx,%eax
086dd951 +0x11:  sub    0x1c(%edx),%eax
086dd954 +0x14:  pop    %ebp
086dd955 +0x15:  ret
086dd956 +0x16:  nop
086dd957 +0x17:  nop
086dd958 +0x18:  nop
086dd959 +0x19:  nop
086dd95a +0x1a:  nop
086dd95b +0x1b:  nop
086dd95c +0x1c:  nop
086dd95d +0x1d:  nop
086dd95e +0x1e:  nop
086dd95f +0x1f:  nop
```

## 反编译 C

```c
// std::strstream::pcount @ 0x86dd940

/* std::strstream::pcount() const */

int __thiscall std::strstream::pcount(strstream *this)

{
  int iVar1;
  
  iVar1 = 0;
  if (*(int *)(this + 0x20) != 0) {
    iVar1 = *(int *)(this + 0x20) - *(int *)(this + 0x1c);
  }
  return iVar1;
}
```
