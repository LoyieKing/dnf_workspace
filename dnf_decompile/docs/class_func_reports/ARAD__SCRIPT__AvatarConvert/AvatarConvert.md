# AvatarConvert

`_ZN4ARAD6SCRIPT13AvatarConvertC1Ev`

`ARAD::SCRIPT::AvatarConvert::AvatarConvert()`

| 类 | 地址 |
|---|---|
| `ARAD::SCRIPT::AvatarConvert` | `0x088b1b0e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 088b1b0e  _ZN4ARAD6SCRIPT13AvatarConvertC1Ev
#           ARAD::SCRIPT::AvatarConvert::AvatarConvert()
# range [0x088b1b0e, 0x088b1b21]
088b1b0e +0x00:  push   %ebp
088b1b0f +0x01:  mov    %esp,%ebp
088b1b11 +0x03:  sub    $0x18,%esp
088b1b14 +0x06:  mov    0x8(%ebp),%eax
088b1b17 +0x09:  mov    %eax,(%esp)
088b1b1a +0x0c:  call   088b2162 <_GLOBAL__I__ZN4ARAD6SCRIPT14AvatarRechargeC2Ev+0x265>  ; global constructors keyed to ARAD::SCRIPT::AvatarRecharge::AvatarRecharge()+0x265
088b1b1f +0x11:  leave
088b1b20 +0x12:  ret
088b1b21 +0x13:  nop
```

## 反编译 C

```c
// ARAD::SCRIPT::AvatarConvert::AvatarConvert @ 0x88b1b0e

/* ARAD::SCRIPT::AvatarConvert::AvatarConvert() */

void __thiscall ARAD::SCRIPT::AvatarConvert::AvatarConvert(AvatarConvert *this)

{
  std::
  map<int,ARAD::SCRIPT::AvatarConvert::ConvertResult*,std::less<int>,std::allocator<std::pair<int_const,ARAD::SCRIPT::AvatarConvert::ConvertResult*>>>
  ::map((map<int,ARAD::SCRIPT::AvatarConvert::ConvertResult*,std::less<int>,std::allocator<std::pair<int_const,ARAD::SCRIPT::AvatarConvert::ConvertResult*>>>
         *)this);
  return;
}
```
