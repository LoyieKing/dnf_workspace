# get_type

`_ZNK5yaSSL11Certificate8get_typeEv`

`yaSSL::Certificate::get_type() const`

| 类 | 地址 |
|---|---|
| `yaSSL::Certificate` | `0x08746d50` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08746d50  _ZNK5yaSSL11Certificate8get_typeEv
#           yaSSL::Certificate::get_type() const
# range [0x08746d50, 0x08746d5a]
08746d50 +0x00:  push   %ebp
08746d51 +0x01:  mov    $0xb,%eax
08746d56 +0x06:  mov    %esp,%ebp
08746d58 +0x08:  pop    %ebp
08746d59 +0x09:  ret
08746d5a +0x0a:  lea    0x0(%esi),%esi
```

## 反编译 C

```c
// yaSSL::Certificate::get_type @ 0x8746d50

/* yaSSL::Certificate::get_type() const */

undefined4 yaSSL::Certificate::get_type(void)

{
  return 0xb;
}
```
