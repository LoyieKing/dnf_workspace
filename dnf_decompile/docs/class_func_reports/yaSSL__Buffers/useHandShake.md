# useHandShake

`_ZN5yaSSL7Buffers12useHandShakeEv`

`yaSSL::Buffers::useHandShake()`

| 类 | 地址 |
|---|---|
| `yaSSL::Buffers` | `0x0874e950` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0874e950  _ZN5yaSSL7Buffers12useHandShakeEv
#           yaSSL::Buffers::useHandShake()
# range [0x0874e950, 0x0874e95c]
0874e950 +0x00:  push   %ebp
0874e951 +0x01:  mov    %esp,%ebp
0874e953 +0x03:  mov    0x8(%ebp),%eax
0874e956 +0x06:  pop    %ebp
0874e957 +0x07:  add    $0xc,%eax
0874e95a +0x0a:  ret
0874e95b +0x0b:  nop
0874e95c +0x0c:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// yaSSL::Buffers::useHandShake @ 0x874e950

/* yaSSL::Buffers::useHandShake() */

Buffers * __thiscall yaSSL::Buffers::useHandShake(Buffers *this)

{
  return this + 0xc;
}
```
