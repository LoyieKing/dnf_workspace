# SetCompression

`_ZN5yaSSL3SSL14SetCompressionEv`

`yaSSL::SSL::SetCompression()`

| 类 | 地址 |
|---|---|
| `yaSSL::SSL` | `0x0874dfc0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0874dfc0  _ZN5yaSSL3SSL14SetCompressionEv
#           yaSSL::SSL::SetCompression()
# range [0x0874dfc0, 0x0874dfca]
0874dfc0 +0x00:  push   %ebp
0874dfc1 +0x01:  mov    $0xffffffff,%eax
0874dfc6 +0x06:  mov    %esp,%ebp
0874dfc8 +0x08:  pop    %ebp
0874dfc9 +0x09:  ret
0874dfca +0x0a:  lea    0x0(%esi),%esi
```

## 反编译 C

```c
// yaSSL::SSL::SetCompression @ 0x874dfc0

/* yaSSL::SSL::SetCompression() */

undefined4 yaSSL::SSL::SetCompression(void)

{
  return 0xffffffff;
}
```
