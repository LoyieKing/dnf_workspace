# get_g

`_ZNK5yaSSL14ServerDHParams5get_gEv`

`yaSSL::ServerDHParams::get_g() const`

| 类 | 地址 |
|---|---|
| `yaSSL::ServerDHParams` | `0x08746e30` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08746e30  _ZNK5yaSSL14ServerDHParams5get_gEv
#           yaSSL::ServerDHParams::get_g() const
# range [0x08746e30, 0x08746e3c]
08746e30 +0x00:  push   %ebp
08746e31 +0x01:  mov    %esp,%ebp
08746e33 +0x03:  mov    0x8(%ebp),%eax
08746e36 +0x06:  pop    %ebp
08746e37 +0x07:  mov    0x10(%eax),%eax
08746e3a +0x0a:  ret
08746e3b +0x0b:  nop
08746e3c +0x0c:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// yaSSL::ServerDHParams::get_g @ 0x8746e30

/* yaSSL::ServerDHParams::get_g() const */

undefined4 __thiscall yaSSL::ServerDHParams::get_g(ServerDHParams *this)

{
  return *(undefined4 *)(this + 0x10);
}
```
