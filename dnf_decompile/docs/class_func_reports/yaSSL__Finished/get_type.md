# get_type

`_ZNK5yaSSL8Finished8get_typeEv`

`yaSSL::Finished::get_type() const`

| 类 | 地址 |
|---|---|
| `yaSSL::Finished` | `0x08747230` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08747230  _ZNK5yaSSL8Finished8get_typeEv
#           yaSSL::Finished::get_type() const
# range [0x08747230, 0x0874723a]
08747230 +0x00:  push   %ebp
08747231 +0x01:  mov    $0x14,%eax
08747236 +0x06:  mov    %esp,%ebp
08747238 +0x08:  pop    %ebp
08747239 +0x09:  ret
0874723a +0x0a:  lea    0x0(%esi),%esi
```

## 反编译 C

```c
// yaSSL::Finished::get_type @ 0x8747230

/* yaSSL::Finished::get_type() const */

undefined4 yaSSL::Finished::get_type(void)

{
  return 0x14;
}
```
