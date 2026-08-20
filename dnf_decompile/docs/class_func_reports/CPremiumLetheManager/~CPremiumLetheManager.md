# ~CPremiumLetheManager

`_ZN20CPremiumLetheManagerD1Ev`

`CPremiumLetheManager::~CPremiumLetheManager()`

| 类 | 地址 |
|---|---|
| `CPremiumLetheManager` | `0x085c3d0e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085c3d0e  _ZN20CPremiumLetheManagerD1Ev
#           CPremiumLetheManager::~CPremiumLetheManager()
# range [0x085c3d0e, 0x085c3d13]
085c3d0e +0x00:  push   %ebp
085c3d0f +0x01:  mov    %esp,%ebp
085c3d11 +0x03:  pop    %ebp
085c3d12 +0x04:  ret
085c3d13 +0x05:  nop
```

## 反编译 C

```c
// CPremiumLetheManager::~CPremiumLetheManager @ 0x85c3d0e

/* CPremiumLetheManager::~CPremiumLetheManager() */

void __thiscall CPremiumLetheManager::~CPremiumLetheManager(CPremiumLetheManager *this)

{
  return;
}
```
