# freeze

`_ZNSt12strstreambuf6freezeEb`

`std::strstreambuf::freeze(bool)`

| 类 | 地址 |
|---|---|
| `std::strstreambuf` | `0x086dd450` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086dd450  _ZNSt12strstreambuf6freezeEb
#           std::strstreambuf::freeze(bool)
# range [0x086dd450, 0x086dd47f]
086dd450 +0x00:  push   %ebp
086dd451 +0x01:  mov    %esp,%ebp
086dd453 +0x03:  mov    0x8(%ebp),%eax
086dd456 +0x06:  movzbl 0xc(%ebp),%ecx
086dd45a +0x0a:  movzbl 0x28(%eax),%edx
086dd45e +0x0e:  test   $0x1,%dl
086dd461 +0x11:  je     086dd470 <+0x20>
086dd463 +0x13:  and    $0x1,%ecx
086dd466 +0x16:  and    $0xfffffffd,%edx
086dd469 +0x19:  add    %ecx,%ecx
086dd46b +0x1b:  or     %ecx,%edx
086dd46d +0x1d:  mov    %dl,0x28(%eax)
086dd470 +0x20:  pop    %ebp
086dd471 +0x21:  ret
086dd472 +0x22:  nop
086dd473 +0x23:  nop
086dd474 +0x24:  nop
086dd475 +0x25:  nop
086dd476 +0x26:  nop
086dd477 +0x27:  nop
086dd478 +0x28:  nop
086dd479 +0x29:  nop
086dd47a +0x2a:  nop
086dd47b +0x2b:  nop
086dd47c +0x2c:  nop
086dd47d +0x2d:  nop
086dd47e +0x2e:  nop
086dd47f +0x2f:  nop
```

## 反编译 C

```c
// std::strstreambuf::freeze @ 0x86dd450

/* std::strstreambuf::freeze(bool) */

void __thiscall std::strstreambuf::freeze(strstreambuf *this,bool param_1)

{
  if (((byte)this[0x28] & 1) != 0) {
    this[0x28] = (strstreambuf)((byte)this[0x28] & 0xfd | param_1 * '\x02');
  }
  return;
}
```
