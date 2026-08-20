# find_map

`_ZNK12CDataManager8find_mapEi`

`CDataManager::find_map(int) const`

| 类 | 地址 |
|---|---|
| `CDataManager` | `0x0835fa14` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0835fa14  _ZNK12CDataManager8find_mapEi
#           CDataManager::find_map(int) const
# range [0x0835fa14, 0x0835fa31]
0835fa14 +0x00:  push   %ebp
0835fa15 +0x01:  mov    %esp,%ebp
0835fa17 +0x03:  sub    $0x18,%esp
0835fa1a +0x06:  mov    0x8(%ebp),%eax
0835fa1d +0x09:  mov    0x4(%eax),%eax
0835fa20 +0x0c:  mov    0xc(%ebp),%edx
0835fa23 +0x0f:  mov    %edx,0x4(%esp)
0835fa27 +0x13:  mov    %eax,(%esp)
0835fa2a +0x16:  call   0834f43e <_ZN8CMapList8find_mapEi>  ; CMapList::find_map(int)
0835fa2f +0x1b:  leave
0835fa30 +0x1c:  ret
0835fa31 +0x1d:  nop
```

## 反编译 C

```c
// CDataManager::find_map @ 0x835fa14

/* CDataManager::find_map(int) const */

void CDataManager::find_map(int param_1)

{
  CMapList::find_map(*(int *)(param_1 + 4));
  return;
}
```
