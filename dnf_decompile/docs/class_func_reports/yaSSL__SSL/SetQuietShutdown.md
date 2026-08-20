# SetQuietShutdown

`_ZN5yaSSL3SSL16SetQuietShutdownEb`

`yaSSL::SSL::SetQuietShutdown(bool)`

| 类 | 地址 |
|---|---|
| `yaSSL::SSL` | `0x0874e000` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0874e000  _ZN5yaSSL3SSL16SetQuietShutdownEb
#           yaSSL::SSL::SetQuietShutdown(bool)
# range [0x0874e000, 0x0874e019]
0874e000 +0x00:  push   %ebp
0874e001 +0x01:  mov    %esp,%ebp
0874e003 +0x03:  mov    0xc(%ebp),%edx
0874e006 +0x06:  mov    0x8(%ebp),%eax
0874e009 +0x09:  mov    %dl,0x9dd(%eax)
0874e00f +0x0f:  pop    %ebp
0874e010 +0x10:  ret
0874e011 +0x11:  nop
0874e012 +0x12:  lea    0x0(%esi,%eiz,1),%esi
0874e019 +0x19:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// yaSSL::SSL::SetQuietShutdown @ 0x874e000

/* yaSSL::SSL::SetQuietShutdown(bool) */

void __thiscall yaSSL::SSL::SetQuietShutdown(SSL *this,bool param_1)

{
  this[0x9dd] = (SSL)param_1;
  return;
}
```
