# CItemDictionary

`_ZN15CItemDictionaryC1Ev`

`CItemDictionary::CItemDictionary()`

| 类 | 地址 |
|---|---|
| `CItemDictionary` | `0x0811d5d4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0811d5d4  _ZN15CItemDictionaryC1Ev
#           CItemDictionary::CItemDictionary()
# range [0x0811d5d4, 0x0811d5ef]
0811d5d4 +0x00:  push   %ebp
0811d5d5 +0x01:  mov    %esp,%ebp
0811d5d7 +0x03:  sub    $0x18,%esp
0811d5da +0x06:  mov    0x8(%ebp),%eax
0811d5dd +0x09:  mov    %eax,(%esp)
0811d5e0 +0x0c:  call   080c8cba <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x112>  ; global constructors keyed to BestClearTime::BestClearTime()+0x112
0811d5e5 +0x11:  mov    0x8(%ebp),%eax
0811d5e8 +0x14:  movl   $&_ZTV15CItemDictionary+0x8,(%eax)
0811d5ee +0x1a:  leave
0811d5ef +0x1b:  ret
```

## 反编译 C

```c
// CItemDictionary::CItemDictionary @ 0x811d5d4

/* CItemDictionary::CItemDictionary() */

void __thiscall CItemDictionary::CItemDictionary(CItemDictionary *this)

{
  charac_expand::CData::CData((CData *)this);
  *(undefined ***)this = &PTR_ResetDailyMidnight_08b56908;
  return;
}
```
