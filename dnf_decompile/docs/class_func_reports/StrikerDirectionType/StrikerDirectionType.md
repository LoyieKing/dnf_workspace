# StrikerDirectionType

`_ZN20StrikerDirectionTypeC1Ev`

`StrikerDirectionType::StrikerDirectionType()`

| 类 | 地址 |
|---|---|
| `StrikerDirectionType` | `0x08a9d7ec` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08a9d7ec  _ZN20StrikerDirectionTypeC1Ev
#           StrikerDirectionType::StrikerDirectionType()
# range [0x08a9d7ec, 0x08a9d7f9]
08a9d7ec +0x00:  push   %ebp
08a9d7ed +0x01:  mov    %esp,%ebp
08a9d7ef +0x03:  mov    0x8(%ebp),%eax
08a9d7f2 +0x06:  movl   $0x0,(%eax)
08a9d7f8 +0x0c:  pop    %ebp
08a9d7f9 +0x0d:  ret
```

## 反编译 C

```c
// StrikerDirectionType::StrikerDirectionType @ 0x8a9d7ec

/* StrikerDirectionType::StrikerDirectionType() */

void __thiscall StrikerDirectionType::StrikerDirectionType(StrikerDirectionType *this)

{
  *(undefined4 *)this = 0;
  return;
}
```
