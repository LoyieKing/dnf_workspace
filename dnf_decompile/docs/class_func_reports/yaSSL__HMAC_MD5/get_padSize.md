# get_padSize

`_ZNK5yaSSL8HMAC_MD511get_padSizeEv`

`yaSSL::HMAC_MD5::get_padSize() const`

| 类 | 地址 |
|---|---|
| `yaSSL::HMAC_MD5` | `0x08798540` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08798540  _ZNK5yaSSL8HMAC_MD511get_padSizeEv
#           yaSSL::HMAC_MD5::get_padSize() const
# range [0x08798540, 0x0879854a]
08798540 +0x00:  push   %ebp
08798541 +0x01:  mov    $0x30,%eax
08798546 +0x06:  mov    %esp,%ebp
08798548 +0x08:  pop    %ebp
08798549 +0x09:  ret
0879854a +0x0a:  lea    0x0(%esi),%esi
```

## 反编译 C

```c
// yaSSL::HMAC_MD5::get_padSize @ 0x8798540

/* yaSSL::HMAC_MD5::get_padSize() const */

undefined4 yaSSL::HMAC_MD5::get_padSize(void)

{
  return 0x30;
}
```
