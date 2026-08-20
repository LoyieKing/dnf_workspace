# str

`_ZNSt9strstream3strEv`

`std::strstream::str()`

| 类 | 地址 |
|---|---|
| `std::strstream` | `0x086dd960` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086dd960  _ZNSt9strstream3strEv
#           std::strstream::str()
# range [0x086dd960, 0x086dd97f]
086dd960 +0x00:  push   %ebp
086dd961 +0x01:  mov    %esp,%ebp
086dd963 +0x03:  mov    0x8(%ebp),%eax
086dd966 +0x06:  movzbl 0x34(%eax),%edx
086dd96a +0x0a:  test   $0x1,%dl
086dd96d +0x0d:  je     086dd975 <+0x15>
086dd96f +0x0f:  or     $0x2,%edx
086dd972 +0x12:  mov    %dl,0x34(%eax)
086dd975 +0x15:  mov    0x10(%eax),%eax
086dd978 +0x18:  pop    %ebp
086dd979 +0x19:  ret
086dd97a +0x1a:  nop
086dd97b +0x1b:  nop
086dd97c +0x1c:  nop
086dd97d +0x1d:  nop
086dd97e +0x1e:  nop
086dd97f +0x1f:  nop
```

## 反编译 C

```c
// std::strstream::str @ 0x86dd960

/* std::strstream::str() */

undefined4 __thiscall std::strstream::str(strstream *this)

{
  if (((byte)this[0x34] & 1) != 0) {
    this[0x34] = (strstream)((byte)this[0x34] | 2);
  }
  return *(undefined4 *)(this + 0x10);
}
```
