# GetConnect

`_ZNK5yaSSL6States10GetConnectEv`

`yaSSL::States::GetConnect() const`

| 类 | 地址 |
|---|---|
| `yaSSL::States` | `0x0874dec0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0874dec0  _ZNK5yaSSL6States10GetConnectEv
#           yaSSL::States::GetConnect() const
# range [0x0874dec0, 0x0874decc]
0874dec0 +0x00:  push   %ebp
0874dec1 +0x01:  mov    %esp,%ebp
0874dec3 +0x03:  mov    0x8(%ebp),%eax
0874dec6 +0x06:  pop    %ebp
0874dec7 +0x07:  add    $0x10,%eax
0874deca +0x0a:  ret
0874decb +0x0b:  nop
0874decc +0x0c:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// yaSSL::States::GetConnect @ 0x874dec0

/* yaSSL::States::GetConnect() const */

States * __thiscall yaSSL::States::GetConnect(States *this)

{
  return this + 0x10;
}
```
