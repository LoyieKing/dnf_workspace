# get_gSize

`_ZNK5yaSSL14ServerDHParams9get_gSizeEv`

`yaSSL::ServerDHParams::get_gSize() const`

| 类 | 地址 |
|---|---|
| `yaSSL::ServerDHParams` | `0x08746e00` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08746e00  _ZNK5yaSSL14ServerDHParams9get_gSizeEv
#           yaSSL::ServerDHParams::get_gSize() const
# range [0x08746e00, 0x08746e0c]
08746e00 +0x00:  push   %ebp
08746e01 +0x01:  mov    %esp,%ebp
08746e03 +0x03:  mov    0x8(%ebp),%eax
08746e06 +0x06:  pop    %ebp
08746e07 +0x07:  mov    0x4(%eax),%eax
08746e0a +0x0a:  ret
08746e0b +0x0b:  nop
08746e0c +0x0c:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// yaSSL::ServerDHParams::get_gSize @ 0x8746e00

/* yaSSL::ServerDHParams::get_gSize() const */

undefined4 __thiscall yaSSL::ServerDHParams::get_gSize(ServerDHParams *this)

{
  return *(undefined4 *)(this + 4);
}
```
