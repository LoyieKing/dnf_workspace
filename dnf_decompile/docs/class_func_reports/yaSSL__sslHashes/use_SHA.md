# use_SHA

`_ZN5yaSSL9sslHashes7use_SHAEv`

`yaSSL::sslHashes::use_SHA()`

| 类 | 地址 |
|---|---|
| `yaSSL::sslHashes` | `0x0874e880` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0874e880  _ZN5yaSSL9sslHashes7use_SHAEv
#           yaSSL::sslHashes::use_SHA()
# range [0x0874e880, 0x0874e88c]
0874e880 +0x00:  push   %ebp
0874e881 +0x01:  mov    %esp,%ebp
0874e883 +0x03:  mov    0x8(%ebp),%eax
0874e886 +0x06:  pop    %ebp
0874e887 +0x07:  add    $0x8,%eax
0874e88a +0x0a:  ret
0874e88b +0x0b:  nop
0874e88c +0x0c:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// yaSSL::sslHashes::use_SHA @ 0x874e880

/* yaSSL::sslHashes::use_SHA() */

sslHashes * __thiscall yaSSL::sslHashes::use_SHA(sslHashes *this)

{
  return this + 8;
}
```
