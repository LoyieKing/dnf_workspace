# get_type

`_ZNK5yaSSL11ServerHello8get_typeEv`

`yaSSL::ServerHello::get_type() const`

| 类 | 地址 |
|---|---|
| `yaSSL::ServerHello` | `0x08746e70` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08746e70  _ZNK5yaSSL11ServerHello8get_typeEv
#           yaSSL::ServerHello::get_type() const
# range [0x08746e70, 0x08746e7a]
08746e70 +0x00:  push   %ebp
08746e71 +0x01:  mov    $0x2,%eax
08746e76 +0x06:  mov    %esp,%ebp
08746e78 +0x08:  pop    %ebp
08746e79 +0x09:  ret
08746e7a +0x0a:  lea    0x0(%esi),%esi
```

## 反编译 C

```c
// yaSSL::ServerHello::get_type @ 0x8746e70

/* yaSSL::ServerHello::get_type() const */

undefined4 yaSSL::ServerHello::get_type(void)

{
  return 2;
}
```
