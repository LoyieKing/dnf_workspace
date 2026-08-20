# getDungeonIndex

`_ZN12TutorialData15getDungeonIndexEv`

`TutorialData::getDungeonIndex()`

| 类 | 地址 |
|---|---|
| `TutorialData` | `0x08ab82d2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ab82d2  _ZN12TutorialData15getDungeonIndexEv
#           TutorialData::getDungeonIndex()
# range [0x08ab82d2, 0x08ab82db]
08ab82d2 +0x00:  push   %ebp
08ab82d3 +0x01:  mov    %esp,%ebp
08ab82d5 +0x03:  mov    0x8(%ebp),%eax
08ab82d8 +0x06:  mov    (%eax),%eax
08ab82da +0x08:  pop    %ebp
08ab82db +0x09:  ret
```

## 反编译 C

```c
// TutorialData::getDungeonIndex @ 0x8ab82d2

/* TutorialData::getDungeonIndex() */

undefined4 __thiscall TutorialData::getDungeonIndex(TutorialData *this)

{
  return *(undefined4 *)this;
}
```
