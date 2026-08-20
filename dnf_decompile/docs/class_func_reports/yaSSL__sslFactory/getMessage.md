# getMessage

`_ZNK5yaSSL10sslFactory10getMessageEv`

`yaSSL::sslFactory::getMessage() const`

| 类 | 地址 |
|---|---|
| `yaSSL::sslFactory` | `0x0874df80` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0874df80  _ZNK5yaSSL10sslFactory10getMessageEv
#           yaSSL::sslFactory::getMessage() const
# range [0x0874df80, 0x0874df89]
0874df80 +0x00:  push   %ebp
0874df81 +0x01:  mov    %esp,%ebp
0874df83 +0x03:  mov    0x8(%ebp),%eax
0874df86 +0x06:  pop    %ebp
0874df87 +0x07:  ret
0874df88 +0x08:  nop
0874df89 +0x09:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// yaSSL::sslFactory::getMessage @ 0x874df80

/* yaSSL::sslFactory::getMessage() const */

sslFactory * __thiscall yaSSL::sslFactory::getMessage(sslFactory *this)

{
  return this;
}
```
