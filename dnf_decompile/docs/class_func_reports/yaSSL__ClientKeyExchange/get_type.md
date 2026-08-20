# get_type

`_ZNK5yaSSL17ClientKeyExchange8get_typeEv`

`yaSSL::ClientKeyExchange::get_type() const`

| 类 | 地址 |
|---|---|
| `yaSSL::ClientKeyExchange` | `0x08747180` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08747180  _ZNK5yaSSL17ClientKeyExchange8get_typeEv
#           yaSSL::ClientKeyExchange::get_type() const
# range [0x08747180, 0x0874718a]
08747180 +0x00:  push   %ebp
08747181 +0x01:  mov    $0x10,%eax
08747186 +0x06:  mov    %esp,%ebp
08747188 +0x08:  pop    %ebp
08747189 +0x09:  ret
0874718a +0x0a:  lea    0x0(%esi),%esi
```

## 反编译 C

```c
// yaSSL::ClientKeyExchange::get_type @ 0x8747180

/* yaSSL::ClientKeyExchange::get_type() const */

undefined4 yaSSL::ClientKeyExchange::get_type(void)

{
  return 0x10;
}
```
