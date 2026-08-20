# getSecurity

`_ZNK5yaSSL3SSL11getSecurityEv`

`yaSSL::SSL::getSecurity() const`

| 类 | 地址 |
|---|---|
| `yaSSL::SSL` | `0x0874e070` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0874e070  _ZNK5yaSSL3SSL11getSecurityEv
#           yaSSL::SSL::getSecurity() const
# range [0x0874e070, 0x0874e07c]
0874e070 +0x00:  push   %ebp
0874e071 +0x01:  mov    %esp,%ebp
0874e073 +0x03:  mov    0x8(%ebp),%eax
0874e076 +0x06:  pop    %ebp
0874e077 +0x07:  add    $0x68,%eax
0874e07a +0x0a:  ret
0874e07b +0x0b:  nop
0874e07c +0x0c:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// yaSSL::SSL::getSecurity @ 0x874e070

/* yaSSL::SSL::getSecurity() const */

SSL * __thiscall yaSSL::SSL::getSecurity(SSL *this)

{
  return this + 0x68;
}
```
