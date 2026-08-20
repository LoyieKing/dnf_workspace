# use_MD5

`_ZN5yaSSL9sslHashes7use_MD5Ev`

`yaSSL::sslHashes::use_MD5()`

| 类 | 地址 |
|---|---|
| `yaSSL::sslHashes` | `0x0874e870` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0874e870  _ZN5yaSSL9sslHashes7use_MD5Ev
#           yaSSL::sslHashes::use_MD5()
# range [0x0874e870, 0x0874e879]
0874e870 +0x00:  push   %ebp
0874e871 +0x01:  mov    %esp,%ebp
0874e873 +0x03:  mov    0x8(%ebp),%eax
0874e876 +0x06:  pop    %ebp
0874e877 +0x07:  ret
0874e878 +0x08:  nop
0874e879 +0x09:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// yaSSL::sslHashes::use_MD5 @ 0x874e870

/* yaSSL::sslHashes::use_MD5() */

sslHashes * __thiscall yaSSL::sslHashes::use_MD5(sslHashes *this)

{
  return this;
}
```
