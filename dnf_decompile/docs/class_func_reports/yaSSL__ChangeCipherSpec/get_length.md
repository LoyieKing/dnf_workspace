# get_length

`_ZNK5yaSSL16ChangeCipherSpec10get_lengthEv`

`yaSSL::ChangeCipherSpec::get_length() const`

| 类 | 地址 |
|---|---|
| `yaSSL::ChangeCipherSpec` | `0x08746b80` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08746b80  _ZNK5yaSSL16ChangeCipherSpec10get_lengthEv
#           yaSSL::ChangeCipherSpec::get_length() const
# range [0x08746b80, 0x08746b8a]
08746b80 +0x00:  push   %ebp
08746b81 +0x01:  mov    $0x1,%eax
08746b86 +0x06:  mov    %esp,%ebp
08746b88 +0x08:  pop    %ebp
08746b89 +0x09:  ret
08746b8a +0x0a:  lea    0x0(%esi),%esi
```

## 反编译 C

```c
// yaSSL::ChangeCipherSpec::get_length @ 0x8746b80

/* yaSSL::ChangeCipherSpec::get_length() const */

undefined4 yaSSL::ChangeCipherSpec::get_length(void)

{
  return 1;
}
```
