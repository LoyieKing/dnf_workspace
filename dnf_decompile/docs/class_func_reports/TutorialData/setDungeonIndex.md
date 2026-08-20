# setDungeonIndex

`_ZN12TutorialData15setDungeonIndexEj`

`TutorialData::setDungeonIndex(unsigned int)`

| 类 | 地址 |
|---|---|
| `TutorialData` | `0x08ab82c4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ab82c4  _ZN12TutorialData15setDungeonIndexEj
#           TutorialData::setDungeonIndex(unsigned int)
# range [0x08ab82c4, 0x08ab82d1]
08ab82c4 +0x00:  push   %ebp
08ab82c5 +0x01:  mov    %esp,%ebp
08ab82c7 +0x03:  mov    0x8(%ebp),%eax
08ab82ca +0x06:  mov    0xc(%ebp),%edx
08ab82cd +0x09:  mov    %edx,(%eax)
08ab82cf +0x0b:  pop    %ebp
08ab82d0 +0x0c:  ret
08ab82d1 +0x0d:  nop
```

## 反编译 C

```c
// TutorialData::setDungeonIndex @ 0x8ab82c4

/* TutorialData::setDungeonIndex(unsigned int) */

void __thiscall TutorialData::setDungeonIndex(TutorialData *this,uint param_1)

{
  *(uint *)this = param_1;
  return;
}
```
