# ~CSpecialItemRoutingManager

`_ZN26CSpecialItemRoutingManagerD1Ev`

`CSpecialItemRoutingManager::~CSpecialItemRoutingManager()`

| 类 | 地址 |
|---|---|
| `CSpecialItemRoutingManager` | `0x0860a9ce` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0860a9ce  _ZN26CSpecialItemRoutingManagerD1Ev
#           CSpecialItemRoutingManager::~CSpecialItemRoutingManager()
# range [0x0860a9ce, 0x0860a9d3]
0860a9ce +0x00:  push   %ebp
0860a9cf +0x01:  mov    %esp,%ebp
0860a9d1 +0x03:  pop    %ebp
0860a9d2 +0x04:  ret
0860a9d3 +0x05:  nop
```

## 反编译 C

```c
// CSpecialItemRoutingManager::~CSpecialItemRoutingManager @ 0x860a9ce

/* CSpecialItemRoutingManager::~CSpecialItemRoutingManager() */

void __thiscall
CSpecialItemRoutingManager::~CSpecialItemRoutingManager(CSpecialItemRoutingManager *this)

{
  return;
}
```
