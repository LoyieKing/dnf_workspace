# setCreatePeriod_GM

`_ZN4ARAD27Arad_EventPeriodDataManager18setCreatePeriod_GMEi`

`ARAD::Arad_EventPeriodDataManager::setCreatePeriod_GM(int)`

| 类 | 地址 |
|---|---|
| `ARAD::Arad_EventPeriodDataManager` | `0x0819589e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0819589e  _ZN4ARAD27Arad_EventPeriodDataManager18setCreatePeriod_GMEi
#           ARAD::Arad_EventPeriodDataManager::setCreatePeriod_GM(int)
# range [0x0819589e, 0x081958b5]
0819589e +0x00:  push   %ebp
0819589f +0x01:  mov    %esp,%ebp
081958a1 +0x03:  cmpl   $0x0,0xc(%ebp)
081958a5 +0x07:  js     081958b2 <+0x14>
081958a7 +0x09:  mov    0x8(%ebp),%eax
081958aa +0x0c:  mov    0xc(%ebp),%edx
081958ad +0x0f:  mov    %edx,0x8(%eax)
081958b0 +0x12:  jmp    081958b3 <+0x15>
081958b2 +0x14:  nop
081958b3 +0x15:  pop    %ebp
081958b4 +0x16:  ret
081958b5 +0x17:  nop
```

## 反编译 C

```c
// ARAD::Arad_EventPeriodDataManager::setCreatePeriod_GM @ 0x819589e

/* ARAD::Arad_EventPeriodDataManager::setCreatePeriod_GM(int) */

void __thiscall
ARAD::Arad_EventPeriodDataManager::setCreatePeriod_GM(Arad_EventPeriodDataManager *this,int param_1)

{
  if (-1 < param_1) {
    *(int *)(this + 8) = param_1;
  }
  return;
}
```
