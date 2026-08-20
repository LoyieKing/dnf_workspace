# find_skill

`_ZNK12CDataManager10find_skillEii`

`CDataManager::find_skill(int, int) const`

| 类 | 地址 |
|---|---|
| `CDataManager` | `0x0835fda2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0835fda2  _ZNK12CDataManager10find_skillEii
#           CDataManager::find_skill(int, int) const
# range [0x0835fda2, 0x0835fdc5]
0835fda2 +0x00:  push   %ebp
0835fda3 +0x01:  mov    %esp,%ebp
0835fda5 +0x03:  sub    $0x18,%esp
0835fda8 +0x06:  mov    0x8(%ebp),%eax
0835fdab +0x09:  mov    0x10(%eax),%eax
0835fdae +0x0c:  mov    0x10(%ebp),%edx
0835fdb1 +0x0f:  mov    %edx,0x8(%esp)
0835fdb5 +0x13:  mov    0xc(%ebp),%edx
0835fdb8 +0x16:  mov    %edx,0x4(%esp)
0835fdbc +0x1a:  mov    %eax,(%esp)
0835fdbf +0x1d:  call   08351b74 <_ZN10CSkillList10find_skillEii>  ; CSkillList::find_skill(int, int)
0835fdc4 +0x22:  leave
0835fdc5 +0x23:  ret
```

## 反编译 C

```c
// CDataManager::find_skill @ 0x835fda2

/* CDataManager::find_skill(int, int) const */

void CDataManager::find_skill(int param_1,int param_2)

{
  CSkillList::find_skill(*(int *)(param_1 + 0x10),param_2);
  return;
}
```
