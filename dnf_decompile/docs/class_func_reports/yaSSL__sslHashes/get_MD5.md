# get_MD5

`_ZNK5yaSSL9sslHashes7get_MD5Ev`

`yaSSL::sslHashes::get_MD5() const`

| 类 | 地址 |
|---|---|
| `yaSSL::sslHashes` | `0x0874e830` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0874e830  _ZNK5yaSSL9sslHashes7get_MD5Ev
#           yaSSL::sslHashes::get_MD5() const
# range [0x0874e830, 0x0874e839]
0874e830 +0x00:  push   %ebp
0874e831 +0x01:  mov    %esp,%ebp
0874e833 +0x03:  mov    0x8(%ebp),%eax
0874e836 +0x06:  pop    %ebp
0874e837 +0x07:  ret
0874e838 +0x08:  nop
0874e839 +0x09:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// yaSSL::sslHashes::get_MD5 @ 0x874e830

/* yaSSL::sslHashes::get_MD5() const */

sslHashes * __thiscall yaSSL::sslHashes::get_MD5(sslHashes *this)

{
  return this;
}
```
