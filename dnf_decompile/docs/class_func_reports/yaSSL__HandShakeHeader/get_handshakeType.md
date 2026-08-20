# get_handshakeType

`_ZNK5yaSSL15HandShakeHeader17get_handshakeTypeEv`

`yaSSL::HandShakeHeader::get_handshakeType() const`

| 类 | 地址 |
|---|---|
| `yaSSL::HandShakeHeader` | `0x08746a80` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08746a80  _ZNK5yaSSL15HandShakeHeader17get_handshakeTypeEv
#           yaSSL::HandShakeHeader::get_handshakeType() const
# range [0x08746a80, 0x08746a8c]
08746a80 +0x00:  push   %ebp
08746a81 +0x01:  mov    %esp,%ebp
08746a83 +0x03:  mov    0x8(%ebp),%eax
08746a86 +0x06:  pop    %ebp
08746a87 +0x07:  mov    0x4(%eax),%eax
08746a8a +0x0a:  ret
08746a8b +0x0b:  nop
08746a8c +0x0c:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// yaSSL::HandShakeHeader::get_handshakeType @ 0x8746a80

/* yaSSL::HandShakeHeader::get_handshakeType() const */

undefined4 __thiscall yaSSL::HandShakeHeader::get_handshakeType(HandShakeHeader *this)

{
  return *(undefined4 *)(this + 4);
}
```
