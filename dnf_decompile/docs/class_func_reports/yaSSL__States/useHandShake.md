# useHandShake

`_ZN5yaSSL6States12useHandShakeEv`

`yaSSL::States::useHandShake()`

| 类 | 地址 |
|---|---|
| `yaSSL::States` | `0x0874df10` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0874df10  _ZN5yaSSL6States12useHandShakeEv
#           yaSSL::States::useHandShake()
# range [0x0874df10, 0x0874df1c]
0874df10 +0x00:  push   %ebp
0874df11 +0x01:  mov    %esp,%ebp
0874df13 +0x03:  mov    0x8(%ebp),%eax
0874df16 +0x06:  pop    %ebp
0874df17 +0x07:  add    $0x4,%eax
0874df1a +0x0a:  ret
0874df1b +0x0b:  nop
0874df1c +0x0c:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// yaSSL::States::useHandShake @ 0x874df10

/* yaSSL::States::useHandShake() */

States * __thiscall yaSSL::States::useHandShake(States *this)

{
  return this + 4;
}
```
