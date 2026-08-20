# use_verify

`_ZN5yaSSL9sslHashes10use_verifyEv`

`yaSSL::sslHashes::use_verify()`

| 类 | 地址 |
|---|---|
| `yaSSL::sslHashes` | `0x0874e890` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0874e890  _ZN5yaSSL9sslHashes10use_verifyEv
#           yaSSL::sslHashes::use_verify()
# range [0x0874e890, 0x0874e89c]
0874e890 +0x00:  push   %ebp
0874e891 +0x01:  mov    %esp,%ebp
0874e893 +0x03:  mov    0x8(%ebp),%eax
0874e896 +0x06:  pop    %ebp
0874e897 +0x07:  add    $0x10,%eax
0874e89a +0x0a:  ret
0874e89b +0x0b:  nop
0874e89c +0x0c:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// yaSSL::sslHashes::use_verify @ 0x874e890

/* yaSSL::sslHashes::use_verify() */

sslHashes * __thiscall yaSSL::sslHashes::use_verify(sslHashes *this)

{
  return this + 0x10;
}
```
