# get_digestSize

`_ZNK5yaSSL8HMAC_MD514get_digestSizeEv`

`yaSSL::HMAC_MD5::get_digestSize() const`

| 类 | 地址 |
|---|---|
| `yaSSL::HMAC_MD5` | `0x08798530` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08798530  _ZNK5yaSSL8HMAC_MD514get_digestSizeEv
#           yaSSL::HMAC_MD5::get_digestSize() const
# range [0x08798530, 0x0879853a]
08798530 +0x00:  push   %ebp
08798531 +0x01:  mov    $0x10,%eax
08798536 +0x06:  mov    %esp,%ebp
08798538 +0x08:  pop    %ebp
08798539 +0x09:  ret
0879853a +0x0a:  lea    0x0(%esi),%esi
```

## 反编译 C

```c
// yaSSL::HMAC_MD5::get_digestSize @ 0x8798530

/* yaSSL::HMAC_MD5::get_digestSize() const */

undefined4 yaSSL::HMAC_MD5::get_digestSize(void)

{
  return 0x10;
}
```
