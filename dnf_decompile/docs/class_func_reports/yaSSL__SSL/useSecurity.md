# useSecurity

`_ZN5yaSSL3SSL11useSecurityEv`

`yaSSL::SSL::useSecurity()`

| 类 | 地址 |
|---|---|
| `yaSSL::SSL` | `0x0874e2c0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0874e2c0  _ZN5yaSSL3SSL11useSecurityEv
#           yaSSL::SSL::useSecurity()
# range [0x0874e2c0, 0x0874e2cc]
0874e2c0 +0x00:  push   %ebp
0874e2c1 +0x01:  mov    %esp,%ebp
0874e2c3 +0x03:  mov    0x8(%ebp),%eax
0874e2c6 +0x06:  pop    %ebp
0874e2c7 +0x07:  add    $0x68,%eax
0874e2ca +0x0a:  ret
0874e2cb +0x0b:  nop
0874e2cc +0x0c:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// yaSSL::SSL::useSecurity @ 0x874e2c0

/* yaSSL::SSL::useSecurity() */

SSL * __thiscall yaSSL::SSL::useSecurity(SSL *this)

{
  return this + 0x68;
}
```
