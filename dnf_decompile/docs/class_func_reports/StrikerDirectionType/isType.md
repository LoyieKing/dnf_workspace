# isType

`_ZN20StrikerDirectionType6isTypeENS_1TE`

`StrikerDirectionType::isType(StrikerDirectionType::T)`

| 类 | 地址 |
|---|---|
| `StrikerDirectionType` | `0x08a9d81a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08a9d81a  _ZN20StrikerDirectionType6isTypeENS_1TE
#           StrikerDirectionType::isType(StrikerDirectionType::T)
# range [0x08a9d81a, 0x08a9d835]
08a9d81a +0x00:  push   %ebp
08a9d81b +0x01:  mov    %esp,%ebp
08a9d81d +0x03:  mov    0x8(%ebp),%eax
08a9d820 +0x06:  mov    (%eax),%eax
08a9d822 +0x08:  cmp    0xc(%ebp),%eax
08a9d825 +0x0b:  jne    08a9d82e <+0x14>
08a9d827 +0x0d:  mov    $0x1,%eax
08a9d82c +0x12:  jmp    08a9d833 <+0x19>
08a9d82e +0x14:  mov    $0x0,%eax
08a9d833 +0x19:  pop    %ebp
08a9d834 +0x1a:  ret
08a9d835 +0x1b:  nop
```

## 反编译 C

```c
// StrikerDirectionType::isType @ 0x8a9d81a

/* StrikerDirectionType::isType(StrikerDirectionType::T) */

bool __thiscall StrikerDirectionType::isType(StrikerDirectionType *this,int param_2)

{
  return *(int *)this == param_2;
}
```
