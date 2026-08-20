# UseConnect

`_ZN5yaSSL6States10UseConnectEv`

`yaSSL::States::UseConnect()`

| 类 | 地址 |
|---|---|
| `yaSSL::States` | `0x0874df40` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0874df40  _ZN5yaSSL6States10UseConnectEv
#           yaSSL::States::UseConnect()
# range [0x0874df40, 0x0874df4c]
0874df40 +0x00:  push   %ebp
0874df41 +0x01:  mov    %esp,%ebp
0874df43 +0x03:  mov    0x8(%ebp),%eax
0874df46 +0x06:  pop    %ebp
0874df47 +0x07:  add    $0x10,%eax
0874df4a +0x0a:  ret
0874df4b +0x0b:  nop
0874df4c +0x0c:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// yaSSL::States::UseConnect @ 0x874df40

/* yaSSL::States::UseConnect() */

States * __thiscall yaSSL::States::UseConnect(States *this)

{
  return this + 0x10;
}
```
