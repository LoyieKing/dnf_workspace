# getHandShake

`_ZNK5yaSSL7Buffers12getHandShakeEv`

`yaSSL::Buffers::getHandShake() const`

| 类 | 地址 |
|---|---|
| `yaSSL::Buffers` | `0x0874e930` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0874e930  _ZNK5yaSSL7Buffers12getHandShakeEv
#           yaSSL::Buffers::getHandShake() const
# range [0x0874e930, 0x0874e93c]
0874e930 +0x00:  push   %ebp
0874e931 +0x01:  mov    %esp,%ebp
0874e933 +0x03:  mov    0x8(%ebp),%eax
0874e936 +0x06:  pop    %ebp
0874e937 +0x07:  add    $0xc,%eax
0874e93a +0x0a:  ret
0874e93b +0x0b:  nop
0874e93c +0x0c:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// yaSSL::Buffers::getHandShake @ 0x874e930

/* yaSSL::Buffers::getHandShake() const */

Buffers * __thiscall yaSSL::Buffers::getHandShake(Buffers *this)

{
  return this + 0xc;
}
```
