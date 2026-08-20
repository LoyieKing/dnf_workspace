# getGrowthWeaponEventdata

`_ZN5CUser24getGrowthWeaponEventdataEv`

`CUser::getGrowthWeaponEventdata()`

| 类 | 地址 |
|---|---|
| `CUser` | `0x08691cd0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08691cd0  _ZN5CUser24getGrowthWeaponEventdataEv
#           CUser::getGrowthWeaponEventdata()
# range [0x08691cd0, 0x08691cdd]
08691cd0 +0x00:  push   %ebp
08691cd1 +0x01:  mov    %esp,%ebp
08691cd3 +0x03:  mov    0x8(%ebp),%eax
08691cd6 +0x06:  add    $0x8ebe4,%eax
08691cdb +0x0b:  pop    %ebp
08691cdc +0x0c:  ret
08691cdd +0x0d:  nop
```

## 反编译 C

```c
// CUser::getGrowthWeaponEventdata @ 0x8691cd0

/* CUser::getGrowthWeaponEventdata() */

CUser * __thiscall CUser::getGrowthWeaponEventdata(CUser *this)

{
  return this + 0x8ebe4;
}
```
