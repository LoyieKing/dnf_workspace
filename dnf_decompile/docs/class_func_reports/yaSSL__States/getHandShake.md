# getHandShake

`_ZNK5yaSSL6States12getHandShakeEv`

`yaSSL::States::getHandShake() const`

| 类 | 地址 |
|---|---|
| `yaSSL::States` | `0x0874de90` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0874de90  _ZNK5yaSSL6States12getHandShakeEv
#           yaSSL::States::getHandShake() const
# range [0x0874de90, 0x0874de9c]
0874de90 +0x00:  push   %ebp
0874de91 +0x01:  mov    %esp,%ebp
0874de93 +0x03:  mov    0x8(%ebp),%eax
0874de96 +0x06:  pop    %ebp
0874de97 +0x07:  add    $0x4,%eax
0874de9a +0x0a:  ret
0874de9b +0x0b:  nop
0874de9c +0x0c:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// yaSSL::States::getHandShake @ 0x874de90

/* yaSSL::States::getHandShake() const */

States * __thiscall yaSSL::States::getHandShake(States *this)

{
  return this + 4;
}
```
