# get_padSize

`_ZNK5yaSSL3MD511get_padSizeEv`

`yaSSL::MD5::get_padSize() const`

| 类 | 地址 |
|---|---|
| `yaSSL::MD5` | `0x087984e0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087984e0  _ZNK5yaSSL3MD511get_padSizeEv
#           yaSSL::MD5::get_padSize() const
# range [0x087984e0, 0x087984ea]
087984e0 +0x00:  push   %ebp
087984e1 +0x01:  mov    $0x30,%eax
087984e6 +0x06:  mov    %esp,%ebp
087984e8 +0x08:  pop    %ebp
087984e9 +0x09:  ret
087984ea +0x0a:  lea    0x0(%esi),%esi
```

## 反编译 C

```c
// yaSSL::MD5::get_padSize @ 0x87984e0

/* yaSSL::MD5::get_padSize() const */

undefined4 yaSSL::MD5::get_padSize(void)

{
  return 0x30;
}
```
