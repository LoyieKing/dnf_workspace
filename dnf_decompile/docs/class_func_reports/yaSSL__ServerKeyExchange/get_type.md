# get_type

`_ZNK5yaSSL17ServerKeyExchange8get_typeEv`

`yaSSL::ServerKeyExchange::get_type() const`

| 类 | 地址 |
|---|---|
| `yaSSL::ServerKeyExchange` | `0x08747010` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08747010  _ZNK5yaSSL17ServerKeyExchange8get_typeEv
#           yaSSL::ServerKeyExchange::get_type() const
# range [0x08747010, 0x0874701a]
08747010 +0x00:  push   %ebp
08747011 +0x01:  mov    $0xc,%eax
08747016 +0x06:  mov    %esp,%ebp
08747018 +0x08:  pop    %ebp
08747019 +0x09:  ret
0874701a +0x0a:  lea    0x0(%esi),%esi
```

## 反编译 C

```c
// yaSSL::ServerKeyExchange::get_type @ 0x8747010

/* yaSSL::ServerKeyExchange::get_type() const */

undefined4 yaSSL::ServerKeyExchange::get_type(void)

{
  return 0xc;
}
```
