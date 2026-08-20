# get_type

`_ZNK5yaSSL11ClientHello8get_typeEv`

`yaSSL::ClientHello::get_type() const`

| 类 | 地址 |
|---|---|
| `yaSSL::ClientHello` | `0x08746f20` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08746f20  _ZNK5yaSSL11ClientHello8get_typeEv
#           yaSSL::ClientHello::get_type() const
# range [0x08746f20, 0x08746f2a]
08746f20 +0x00:  push   %ebp
08746f21 +0x01:  mov    $0x1,%eax
08746f26 +0x06:  mov    %esp,%ebp
08746f28 +0x08:  pop    %ebp
08746f29 +0x09:  ret
08746f2a +0x0a:  lea    0x0(%esi),%esi
```

## 反编译 C

```c
// yaSSL::ClientHello::get_type @ 0x8746f20

/* yaSSL::ClientHello::get_type() const */

undefined4 yaSSL::ClientHello::get_type(void)

{
  return 1;
}
```
