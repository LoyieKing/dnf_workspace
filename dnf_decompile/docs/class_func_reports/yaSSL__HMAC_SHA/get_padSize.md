# get_padSize

`_ZNK5yaSSL8HMAC_SHA11get_padSizeEv`

`yaSSL::HMAC_SHA::get_padSize() const`

| 类 | 地址 |
|---|---|
| `yaSSL::HMAC_SHA` | `0x08798560` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08798560  _ZNK5yaSSL8HMAC_SHA11get_padSizeEv
#           yaSSL::HMAC_SHA::get_padSize() const
# range [0x08798560, 0x0879856a]
08798560 +0x00:  push   %ebp
08798561 +0x01:  mov    $0x28,%eax
08798566 +0x06:  mov    %esp,%ebp
08798568 +0x08:  pop    %ebp
08798569 +0x09:  ret
0879856a +0x0a:  lea    0x0(%esi),%esi
```

## 反编译 C

```c
// yaSSL::HMAC_SHA::get_padSize @ 0x8798560

/* yaSSL::HMAC_SHA::get_padSize() const */

undefined4 yaSSL::HMAC_SHA::get_padSize(void)

{
  return 0x28;
}
```
