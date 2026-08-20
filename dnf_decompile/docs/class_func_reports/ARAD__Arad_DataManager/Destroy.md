# Destroy

`_ZN4ARAD16Arad_DataManager7DestroyEv`

`ARAD::Arad_DataManager::Destroy()`

| 类 | 地址 |
|---|---|
| `ARAD::Arad_DataManager` | `0x081882e0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081882e0  _ZN4ARAD16Arad_DataManager7DestroyEv
#           ARAD::Arad_DataManager::Destroy()
# range [0x081882e0, 0x081882f7]
081882e0 +0x00:  push   %ebp
081882e1 +0x01:  mov    %esp,%ebp
081882e3 +0x03:  sub    $0x18,%esp
081882e6 +0x06:  mov    0x8(%ebp),%eax
081882e9 +0x09:  mov    %eax,(%esp)
081882ec +0x0c:  call   08188952 <_ZN4ARAD16Arad_DataManager15destroyAradDataEv>  ; ARAD::Arad_DataManager::destroyAradData()
081882f1 +0x11:  mov    $0x1,%eax
081882f6 +0x16:  leave
081882f7 +0x17:  ret
```

## 反编译 C

```c
// ARAD::Arad_DataManager::Destroy @ 0x81882e0

/* ARAD::Arad_DataManager::Destroy() */

undefined4 __thiscall ARAD::Arad_DataManager::Destroy(Arad_DataManager *this)

{
  destroyAradData(this);
  return 1;
}
```
