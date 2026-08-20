# useServer

`_ZN5yaSSL6States9useServerEv`

`yaSSL::States::useServer()`

| 类 | 地址 |
|---|---|
| `yaSSL::States` | `0x0874df30` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0874df30  _ZN5yaSSL6States9useServerEv
#           yaSSL::States::useServer()
# range [0x0874df30, 0x0874df3c]
0874df30 +0x00:  push   %ebp
0874df31 +0x01:  mov    %esp,%ebp
0874df33 +0x03:  mov    0x8(%ebp),%eax
0874df36 +0x06:  pop    %ebp
0874df37 +0x07:  add    $0xc,%eax
0874df3a +0x0a:  ret
0874df3b +0x0b:  nop
0874df3c +0x0c:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// yaSSL::States::useServer @ 0x874df30

/* yaSSL::States::useServer() */

States * __thiscall yaSSL::States::useServer(States *this)

{
  return this + 0xc;
}
```
