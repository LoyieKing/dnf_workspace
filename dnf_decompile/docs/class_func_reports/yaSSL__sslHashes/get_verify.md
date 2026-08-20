# get_verify

`_ZNK5yaSSL9sslHashes10get_verifyEv`

`yaSSL::sslHashes::get_verify() const`

| 类 | 地址 |
|---|---|
| `yaSSL::sslHashes` | `0x0874e850` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0874e850  _ZNK5yaSSL9sslHashes10get_verifyEv
#           yaSSL::sslHashes::get_verify() const
# range [0x0874e850, 0x0874e85c]
0874e850 +0x00:  push   %ebp
0874e851 +0x01:  mov    %esp,%ebp
0874e853 +0x03:  mov    0x8(%ebp),%eax
0874e856 +0x06:  pop    %ebp
0874e857 +0x07:  add    $0x10,%eax
0874e85a +0x0a:  ret
0874e85b +0x0b:  nop
0874e85c +0x0c:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// yaSSL::sslHashes::get_verify @ 0x874e850

/* yaSSL::sslHashes::get_verify() const */

sslHashes * __thiscall yaSSL::sslHashes::get_verify(sslHashes *this)

{
  return this + 0x10;
}
```
