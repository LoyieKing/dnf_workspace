# enumToString

`_ZN17CharacterRestrict12enumToStringENS_4EnumE`

`CharacterRestrict::enumToString(CharacterRestrict::Enum)`

| 类 | 地址 |
|---|---|
| `CharacterRestrict` | `0x0816d472` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0816d472  _ZN17CharacterRestrict12enumToStringENS_4EnumE
#           CharacterRestrict::enumToString(CharacterRestrict::Enum)
# range [0x0816d472, 0x0816d480]
0816d472 +0x00:  push   %ebp
0816d473 +0x01:  mov    %esp,%ebp
0816d475 +0x03:  mov    0x8(%ebp),%eax
0816d478 +0x06:  mov    &_ZN17CharacterRestrictL20enumStringCharactersE(,%eax,4),%eax
0816d47f +0x0d:  pop    %ebp
0816d480 +0x0e:  ret
```

## 反编译 C

```c
// CharacterRestrict::enumToString @ 0x816d472

/* CharacterRestrict::enumToString(CharacterRestrict::Enum) */

undefined4 CharacterRestrict::enumToString(int param_1)

{
  return *(undefined4 *)(enumStringCharacters + param_1 * 4);
}
```
