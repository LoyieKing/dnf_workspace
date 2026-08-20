# find_quest

`_ZNK12CDataManager10find_questEi`

`CDataManager::find_quest(int) const`

| 类 | 地址 |
|---|---|
| `CDataManager` | `0x0835fdc6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0835fdc6  _ZNK12CDataManager10find_questEi
#           CDataManager::find_quest(int) const
# range [0x0835fdc6, 0x0835fde3]
0835fdc6 +0x00:  push   %ebp
0835fdc7 +0x01:  mov    %esp,%ebp
0835fdc9 +0x03:  sub    $0x18,%esp
0835fdcc +0x06:  mov    0x8(%ebp),%eax
0835fdcf +0x09:  mov    0x18(%eax),%eax
0835fdd2 +0x0c:  mov    0xc(%ebp),%edx
0835fdd5 +0x0f:  mov    %edx,0x4(%esp)
0835fdd9 +0x13:  mov    %eax,(%esp)
0835fddc +0x16:  call   08355a5c <_ZN9QuestList10find_questEi>  ; QuestList::find_quest(int)
0835fde1 +0x1b:  leave
0835fde2 +0x1c:  ret
0835fde3 +0x1d:  nop
```

## 反编译 C

```c
// CDataManager::find_quest @ 0x835fdc6

/* CDataManager::find_quest(int) const */

void CDataManager::find_quest(int param_1)

{
  QuestList::find_quest(*(int *)(param_1 + 0x18));
  return;
}
```
