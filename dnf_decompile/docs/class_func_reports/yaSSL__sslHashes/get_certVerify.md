# get_certVerify

`_ZNK5yaSSL9sslHashes14get_certVerifyEv`

`yaSSL::sslHashes::get_certVerify() const`

| 类 | 地址 |
|---|---|
| `yaSSL::sslHashes` | `0x0874e860` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0874e860  _ZNK5yaSSL9sslHashes14get_certVerifyEv
#           yaSSL::sslHashes::get_certVerify() const
# range [0x0874e860, 0x0874e86c]
0874e860 +0x00:  push   %ebp
0874e861 +0x01:  mov    %esp,%ebp
0874e863 +0x03:  mov    0x8(%ebp),%eax
0874e866 +0x06:  pop    %ebp
0874e867 +0x07:  add    $0x3c,%eax
0874e86a +0x0a:  ret
0874e86b +0x0b:  nop
0874e86c +0x0c:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// yaSSL::sslHashes::get_certVerify @ 0x874e860

/* yaSSL::sslHashes::get_certVerify() const */

sslHashes * __thiscall yaSSL::sslHashes::get_certVerify(sslHashes *this)

{
  return this + 0x3c;
}
```
