# getRecord

`_ZNK5yaSSL6States9getRecordEv`

`yaSSL::States::getRecord() const`

| 类 | 地址 |
|---|---|
| `yaSSL::States` | `0x0874de80` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0874de80  _ZNK5yaSSL6States9getRecordEv
#           yaSSL::States::getRecord() const
# range [0x0874de80, 0x0874de89]
0874de80 +0x00:  push   %ebp
0874de81 +0x01:  mov    %esp,%ebp
0874de83 +0x03:  mov    0x8(%ebp),%eax
0874de86 +0x06:  pop    %ebp
0874de87 +0x07:  ret
0874de88 +0x08:  nop
0874de89 +0x09:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// yaSSL::States::getRecord @ 0x874de80

/* yaSSL::States::getRecord() const */

States * __thiscall yaSSL::States::getRecord(States *this)

{
  return this;
}
```
