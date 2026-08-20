# pcount

`_ZNKSt12strstreambuf6pcountEv`

`std::strstreambuf::pcount() const`

| 类 | 地址 |
|---|---|
| `std::strstreambuf` | `0x086dd4a0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086dd4a0  _ZNKSt12strstreambuf6pcountEv
#           std::strstreambuf::pcount() const
# range [0x086dd4a0, 0x086dd4bf]
086dd4a0 +0x00:  push   %ebp
086dd4a1 +0x01:  xor    %eax,%eax
086dd4a3 +0x03:  mov    %esp,%ebp
086dd4a5 +0x05:  mov    0x8(%ebp),%edx
086dd4a8 +0x08:  mov    0x14(%edx),%ecx
086dd4ab +0x0b:  test   %ecx,%ecx
086dd4ad +0x0d:  je     086dd4b4 <+0x14>
086dd4af +0x0f:  mov    %ecx,%eax
086dd4b1 +0x11:  sub    0x10(%edx),%eax
086dd4b4 +0x14:  pop    %ebp
086dd4b5 +0x15:  ret
086dd4b6 +0x16:  nop
086dd4b7 +0x17:  nop
086dd4b8 +0x18:  nop
086dd4b9 +0x19:  nop
086dd4ba +0x1a:  nop
086dd4bb +0x1b:  nop
086dd4bc +0x1c:  nop
086dd4bd +0x1d:  nop
086dd4be +0x1e:  nop
086dd4bf +0x1f:  nop
```

## 反编译 C

```c
// std::strstreambuf::pcount @ 0x86dd4a0

/* std::strstreambuf::pcount() const */

int __thiscall std::strstreambuf::pcount(strstreambuf *this)

{
  int iVar1;
  
  iVar1 = 0;
  if (*(int *)(this + 0x14) != 0) {
    iVar1 = *(int *)(this + 0x14) - *(int *)(this + 0x10);
  }
  return iVar1;
}
```
