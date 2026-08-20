# str

`_ZNSt12strstreambuf3strEv`

`std::strstreambuf::str()`

| 类 | 地址 |
|---|---|
| `std::strstreambuf` | `0x086dd480` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086dd480  _ZNSt12strstreambuf3strEv
#           std::strstreambuf::str()
# range [0x086dd480, 0x086dd49f]
086dd480 +0x00:  push   %ebp
086dd481 +0x01:  mov    %esp,%ebp
086dd483 +0x03:  mov    0x8(%ebp),%eax
086dd486 +0x06:  movzbl 0x28(%eax),%edx
086dd48a +0x0a:  test   $0x1,%dl
086dd48d +0x0d:  je     086dd495 <+0x15>
086dd48f +0x0f:  or     $0x2,%edx
086dd492 +0x12:  mov    %dl,0x28(%eax)
086dd495 +0x15:  mov    0x4(%eax),%eax
086dd498 +0x18:  pop    %ebp
086dd499 +0x19:  ret
086dd49a +0x1a:  nop
086dd49b +0x1b:  nop
086dd49c +0x1c:  nop
086dd49d +0x1d:  nop
086dd49e +0x1e:  nop
086dd49f +0x1f:  nop
```

## 反编译 C

```c
// std::strstreambuf::str @ 0x86dd480

/* std::strstreambuf::str() */

undefined4 __thiscall std::strstreambuf::str(strstreambuf *this)

{
  if (((byte)this[0x28] & 1) != 0) {
    this[0x28] = (strstreambuf)((byte)this[0x28] | 2);
  }
  return *(undefined4 *)(this + 4);
}
```
