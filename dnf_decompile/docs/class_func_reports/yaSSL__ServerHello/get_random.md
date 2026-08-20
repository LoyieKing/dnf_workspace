# get_random

`_ZNK5yaSSL11ServerHello10get_randomEv`

`yaSSL::ServerHello::get_random() const`

| 类 | 地址 |
|---|---|
| `yaSSL::ServerHello` | `0x08746e80` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08746e80  _ZNK5yaSSL11ServerHello10get_randomEv
#           yaSSL::ServerHello::get_random() const
# range [0x08746e80, 0x08746e8c]
08746e80 +0x00:  push   %ebp
08746e81 +0x01:  mov    %esp,%ebp
08746e83 +0x03:  mov    0x8(%ebp),%eax
08746e86 +0x06:  pop    %ebp
08746e87 +0x07:  add    $0xa,%eax
08746e8a +0x0a:  ret
08746e8b +0x0b:  nop
08746e8c +0x0c:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// yaSSL::ServerHello::get_random @ 0x8746e80

/* yaSSL::ServerHello::get_random() const */

ServerHello * __thiscall yaSSL::ServerHello::get_random(ServerHello *this)

{
  return this + 10;
}
```
