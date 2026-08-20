# get_type

`_ZNK5yaSSL15HandShakeHeader8get_typeEv`

`yaSSL::HandShakeHeader::get_type() const`

| 类 | 地址 |
|---|---|
| `yaSSL::HandShakeHeader` | `0x08746a70` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08746a70  _ZNK5yaSSL15HandShakeHeader8get_typeEv
#           yaSSL::HandShakeHeader::get_type() const
# range [0x08746a70, 0x08746a7a]
08746a70 +0x00:  push   %ebp
08746a71 +0x01:  mov    $0x16,%eax
08746a76 +0x06:  mov    %esp,%ebp
08746a78 +0x08:  pop    %ebp
08746a79 +0x09:  ret
08746a7a +0x0a:  lea    0x0(%esi),%esi
```

## 反编译 C

```c
// yaSSL::HandShakeHeader::get_type @ 0x8746a70

/* yaSSL::HandShakeHeader::get_type() const */

undefined4 yaSSL::HandShakeHeader::get_type(void)

{
  return 0x16;
}
```
