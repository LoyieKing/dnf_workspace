# get_digestSize

`_ZNK5yaSSL3MD514get_digestSizeEv`

`yaSSL::MD5::get_digestSize() const`

| 类 | 地址 |
|---|---|
| `yaSSL::MD5` | `0x087984d0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087984d0  _ZNK5yaSSL3MD514get_digestSizeEv
#           yaSSL::MD5::get_digestSize() const
# range [0x087984d0, 0x087984da]
087984d0 +0x00:  push   %ebp
087984d1 +0x01:  mov    $0x10,%eax
087984d6 +0x06:  mov    %esp,%ebp
087984d8 +0x08:  pop    %ebp
087984d9 +0x09:  ret
087984da +0x0a:  lea    0x0(%esi),%esi
```

## 反编译 C

```c
// yaSSL::MD5::get_digestSize @ 0x87984d0

/* yaSSL::MD5::get_digestSize() const */

undefined4 yaSSL::MD5::get_digestSize(void)

{
  return 0x10;
}
```
