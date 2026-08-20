# get_padSize

`_ZNK5yaSSL8HMAC_RMD11get_padSizeEv`

`yaSSL::HMAC_RMD::get_padSize() const`

| 类 | 地址 |
|---|---|
| `yaSSL::HMAC_RMD` | `0x08798580` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08798580  _ZNK5yaSSL8HMAC_RMD11get_padSizeEv
#           yaSSL::HMAC_RMD::get_padSize() const
# range [0x08798580, 0x0879858a]
08798580 +0x00:  push   %ebp
08798581 +0x01:  mov    $0x2c,%eax
08798586 +0x06:  mov    %esp,%ebp
08798588 +0x08:  pop    %ebp
08798589 +0x09:  ret
0879858a +0x0a:  lea    0x0(%esi),%esi
```

## 反编译 C

```c
// yaSSL::HMAC_RMD::get_padSize @ 0x8798580

/* yaSSL::HMAC_RMD::get_padSize() const */

undefined4 yaSSL::HMAC_RMD::get_padSize(void)

{
  return 0x2c;
}
```
