# _layerInfo

`_ZN17TowerOfDespairMgr10_layerInfoEP5CUser`

`TowerOfDespairMgr::_layerInfo(CUser*)`

| 类 | 地址 |
|---|---|
| `TowerOfDespairMgr` | `0x08644470` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08644470  _ZN17TowerOfDespairMgr10_layerInfoEP5CUser
#           TowerOfDespairMgr::_layerInfo(CUser*)
# range [0x08644470, 0x08644474]
08644470 +0x00:  push   %ebp
08644471 +0x01:  mov    %esp,%ebp
08644473 +0x03:  pop    %ebp
08644474 +0x04:  ret
```

## 反编译 C

```c
// TowerOfDespairMgr::_layerInfo @ 0x8644470

/* TowerOfDespairMgr::_layerInfo(CUser*) */

void TowerOfDespairMgr::_layerInfo(CUser *param_1)

{
  return;
}
```
