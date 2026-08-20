# GetString

`_ZN5yaSSL12StringHolder9GetStringEv`

`yaSSL::StringHolder::GetString()`

| 类 | 地址 |
|---|---|
| `yaSSL::StringHolder` | `0x0874f020` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0874f020  _ZN5yaSSL12StringHolder9GetStringEv
#           yaSSL::StringHolder::GetString()
# range [0x0874f020, 0x0874f029]
0874f020 +0x00:  push   %ebp
0874f021 +0x01:  mov    %esp,%ebp
0874f023 +0x03:  mov    0x8(%ebp),%eax
0874f026 +0x06:  pop    %ebp
0874f027 +0x07:  ret
0874f028 +0x08:  nop
0874f029 +0x09:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// yaSSL::StringHolder::GetString @ 0x874f020

/* yaSSL::StringHolder::GetString() */

StringHolder * __thiscall yaSSL::StringHolder::GetString(StringHolder *this)

{
  return this;
}
```
