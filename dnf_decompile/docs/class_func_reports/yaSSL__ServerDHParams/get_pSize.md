# get_pSize

`_ZNK5yaSSL14ServerDHParams9get_pSizeEv`

`yaSSL::ServerDHParams::get_pSize() const`

| 类 | 地址 |
|---|---|
| `yaSSL::ServerDHParams` | `0x08746df0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08746df0  _ZNK5yaSSL14ServerDHParams9get_pSizeEv
#           yaSSL::ServerDHParams::get_pSize() const
# range [0x08746df0, 0x08746dfa]
08746df0 +0x00:  push   %ebp
08746df1 +0x01:  mov    %esp,%ebp
08746df3 +0x03:  mov    0x8(%ebp),%eax
08746df6 +0x06:  pop    %ebp
08746df7 +0x07:  mov    (%eax),%eax
08746df9 +0x09:  ret
08746dfa +0x0a:  lea    0x0(%esi),%esi
```

## 反编译 C

```c
// yaSSL::ServerDHParams::get_pSize @ 0x8746df0

/* yaSSL::ServerDHParams::get_pSize() const */

undefined4 __thiscall yaSSL::ServerDHParams::get_pSize(ServerDHParams *this)

{
  return *(undefined4 *)this;
}
```
