# GetItemMakingSkill

`_ZNK12CDataManager18GetItemMakingSkillEv`

`CDataManager::GetItemMakingSkill() const`

| 类 | 地址 |
|---|---|
| `CDataManager` | `0x08365ece` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08365ece  _ZNK12CDataManager18GetItemMakingSkillEv
#           CDataManager::GetItemMakingSkill() const
# range [0x08365ece, 0x08365edb]
08365ece +0x00:  push   %ebp
08365ecf +0x01:  mov    %esp,%ebp
08365ed1 +0x03:  mov    0x8(%ebp),%eax
08365ed4 +0x06:  add    $0xb458,%eax
08365ed9 +0x0b:  pop    %ebp
08365eda +0x0c:  ret
08365edb +0x0d:  nop
```

## 反编译 C

```c
// CDataManager::GetItemMakingSkill @ 0x8365ece

/* CDataManager::GetItemMakingSkill() const */

CDataManager * __thiscall CDataManager::GetItemMakingSkill(CDataManager *this)

{
  return this + 0xb458;
}
```
