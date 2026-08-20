# getData

`_ZNK5yaSSL7Buffers7getDataEv`

`yaSSL::Buffers::getData() const`

| 类 | 地址 |
|---|---|
| `yaSSL::Buffers` | `0x0874e920` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0874e920  _ZNK5yaSSL7Buffers7getDataEv
#           yaSSL::Buffers::getData() const
# range [0x0874e920, 0x0874e929]
0874e920 +0x00:  push   %ebp
0874e921 +0x01:  mov    %esp,%ebp
0874e923 +0x03:  mov    0x8(%ebp),%eax
0874e926 +0x06:  pop    %ebp
0874e927 +0x07:  ret
0874e928 +0x08:  nop
0874e929 +0x09:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// yaSSL::Buffers::getData @ 0x874e920

/* yaSSL::Buffers::getData() const */

Buffers * __thiscall yaSSL::Buffers::getData(Buffers *this)

{
  return this;
}
```
