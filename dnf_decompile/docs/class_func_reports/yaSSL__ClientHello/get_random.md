# get_random

`_ZNK5yaSSL11ClientHello10get_randomEv`

`yaSSL::ClientHello::get_random() const`

| 类 | 地址 |
|---|---|
| `yaSSL::ClientHello` | `0x08746f30` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08746f30  _ZNK5yaSSL11ClientHello10get_randomEv
#           yaSSL::ClientHello::get_random() const
# range [0x08746f30, 0x08746f3c]
08746f30 +0x00:  push   %ebp
08746f31 +0x01:  mov    %esp,%ebp
08746f33 +0x03:  mov    0x8(%ebp),%eax
08746f36 +0x06:  pop    %ebp
08746f37 +0x07:  add    $0xa,%eax
08746f3a +0x0a:  ret
08746f3b +0x0b:  nop
08746f3c +0x0c:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// yaSSL::ClientHello::get_random @ 0x8746f30

/* yaSSL::ClientHello::get_random() const */

ClientHello * __thiscall yaSSL::ClientHello::get_random(ClientHello *this)

{
  return this + 10;
}
```
