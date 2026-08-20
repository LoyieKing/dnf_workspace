# get_p

`_ZNK5yaSSL14ServerDHParams5get_pEv`

`yaSSL::ServerDHParams::get_p() const`

| 类 | 地址 |
|---|---|
| `yaSSL::ServerDHParams` | `0x08746e20` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08746e20  _ZNK5yaSSL14ServerDHParams5get_pEv
#           yaSSL::ServerDHParams::get_p() const
# range [0x08746e20, 0x08746e2c]
08746e20 +0x00:  push   %ebp
08746e21 +0x01:  mov    %esp,%ebp
08746e23 +0x03:  mov    0x8(%ebp),%eax
08746e26 +0x06:  pop    %ebp
08746e27 +0x07:  mov    0xc(%eax),%eax
08746e2a +0x0a:  ret
08746e2b +0x0b:  nop
08746e2c +0x0c:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// yaSSL::ServerDHParams::get_p @ 0x8746e20

/* yaSSL::ServerDHParams::get_p() const */

undefined4 __thiscall yaSSL::ServerDHParams::get_p(ServerDHParams *this)

{
  return *(undefined4 *)(this + 0xc);
}
```
