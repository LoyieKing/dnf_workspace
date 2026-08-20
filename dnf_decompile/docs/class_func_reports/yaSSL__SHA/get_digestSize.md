# get_digestSize

`_ZNK5yaSSL3SHA14get_digestSizeEv`

`yaSSL::SHA::get_digestSize() const`

| 类 | 地址 |
|---|---|
| `yaSSL::SHA` | `0x087984f0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087984f0  _ZNK5yaSSL3SHA14get_digestSizeEv
#           yaSSL::SHA::get_digestSize() const
# range [0x087984f0, 0x087984fa]
087984f0 +0x00:  push   %ebp
087984f1 +0x01:  mov    $0x14,%eax
087984f6 +0x06:  mov    %esp,%ebp
087984f8 +0x08:  pop    %ebp
087984f9 +0x09:  ret
087984fa +0x0a:  lea    0x0(%esi),%esi
```

## 反编译 C

```c
// yaSSL::SHA::get_digestSize @ 0x87984f0

/* yaSSL::SHA::get_digestSize() const */

undefined4 yaSSL::SHA::get_digestSize(void)

{
  return 0x14;
}
```
