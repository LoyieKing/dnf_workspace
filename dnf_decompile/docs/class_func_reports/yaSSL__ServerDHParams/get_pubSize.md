# get_pubSize

`_ZNK5yaSSL14ServerDHParams11get_pubSizeEv`

`yaSSL::ServerDHParams::get_pubSize() const`

| 类 | 地址 |
|---|---|
| `yaSSL::ServerDHParams` | `0x08746e10` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08746e10  _ZNK5yaSSL14ServerDHParams11get_pubSizeEv
#           yaSSL::ServerDHParams::get_pubSize() const
# range [0x08746e10, 0x08746e1c]
08746e10 +0x00:  push   %ebp
08746e11 +0x01:  mov    %esp,%ebp
08746e13 +0x03:  mov    0x8(%ebp),%eax
08746e16 +0x06:  pop    %ebp
08746e17 +0x07:  mov    0x8(%eax),%eax
08746e1a +0x0a:  ret
08746e1b +0x0b:  nop
08746e1c +0x0c:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// yaSSL::ServerDHParams::get_pubSize @ 0x8746e10

/* yaSSL::ServerDHParams::get_pubSize() const */

undefined4 __thiscall yaSSL::ServerDHParams::get_pubSize(ServerDHParams *this)

{
  return *(undefined4 *)(this + 8);
}
```
