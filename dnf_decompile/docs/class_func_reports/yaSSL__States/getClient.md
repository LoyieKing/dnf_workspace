# getClient

`_ZNK5yaSSL6States9getClientEv`

`yaSSL::States::getClient() const`

| 类 | 地址 |
|---|---|
| `yaSSL::States` | `0x0874dea0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0874dea0  _ZNK5yaSSL6States9getClientEv
#           yaSSL::States::getClient() const
# range [0x0874dea0, 0x0874deac]
0874dea0 +0x00:  push   %ebp
0874dea1 +0x01:  mov    %esp,%ebp
0874dea3 +0x03:  mov    0x8(%ebp),%eax
0874dea6 +0x06:  pop    %ebp
0874dea7 +0x07:  add    $0x8,%eax
0874deaa +0x0a:  ret
0874deab +0x0b:  nop
0874deac +0x0c:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// yaSSL::States::getClient @ 0x874dea0

/* yaSSL::States::getClient() const */

States * __thiscall yaSSL::States::getClient(States *this)

{
  return this + 8;
}
```
