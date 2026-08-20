# find_monster

`_ZNK12CDataManager12find_monsterEi`

`CDataManager::find_monster(int) const`

| 类 | 地址 |
|---|---|
| `CDataManager` | `0x0835fd84` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0835fd84  _ZNK12CDataManager12find_monsterEi
#           CDataManager::find_monster(int) const
# range [0x0835fd84, 0x0835fda1]
0835fd84 +0x00:  push   %ebp
0835fd85 +0x01:  mov    %esp,%ebp
0835fd87 +0x03:  sub    $0x18,%esp
0835fd8a +0x06:  mov    0x8(%ebp),%eax
0835fd8d +0x09:  mov    0x8(%eax),%eax
0835fd90 +0x0c:  mov    0xc(%ebp),%edx
0835fd93 +0x0f:  mov    %edx,0x4(%esp)
0835fd97 +0x13:  mov    %eax,(%esp)
0835fd9a +0x16:  call   0834fe9e <_ZN15CMonsterManager12find_monsterEi>  ; CMonsterManager::find_monster(int)
0835fd9f +0x1b:  leave
0835fda0 +0x1c:  ret
0835fda1 +0x1d:  nop
```

## 反编译 C

```c
// CDataManager::find_monster @ 0x835fd84

/* CDataManager::find_monster(int) const */

void CDataManager::find_monster(int param_1)

{
  CMonsterManager::find_monster(*(int *)(param_1 + 8));
  return;
}
```
