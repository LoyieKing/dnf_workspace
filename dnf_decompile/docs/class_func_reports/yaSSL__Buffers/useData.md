# useData

`_ZN5yaSSL7Buffers7useDataEv`

`yaSSL::Buffers::useData()`

| 类 | 地址 |
|---|---|
| `yaSSL::Buffers` | `0x0874e940` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0874e940  _ZN5yaSSL7Buffers7useDataEv
#           yaSSL::Buffers::useData()
# range [0x0874e940, 0x0874e949]
0874e940 +0x00:  push   %ebp
0874e941 +0x01:  mov    %esp,%ebp
0874e943 +0x03:  mov    0x8(%ebp),%eax
0874e946 +0x06:  pop    %ebp
0874e947 +0x07:  ret
0874e948 +0x08:  nop
0874e949 +0x09:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// yaSSL::Buffers::useData @ 0x874e940

/* yaSSL::Buffers::useData() */

Buffers * __thiscall yaSSL::Buffers::useData(Buffers *this)

{
  return this;
}
```
