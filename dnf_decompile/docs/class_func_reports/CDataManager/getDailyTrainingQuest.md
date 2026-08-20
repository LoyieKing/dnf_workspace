# getDailyTrainingQuest

`_ZN12CDataManager21getDailyTrainingQuestEi`

`CDataManager::getDailyTrainingQuest(int)`

| 类 | 地址 |
|---|---|
| `CDataManager` | `0x083640fe` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 083640fe  _ZN12CDataManager21getDailyTrainingQuestEi
#           CDataManager::getDailyTrainingQuest(int)
# range [0x083640fe, 0x0836411d]
083640fe +0x00:  push   %ebp
083640ff +0x01:  mov    %esp,%ebp
08364101 +0x03:  mov    0xc(%ebp),%eax
08364104 +0x06:  lea    -0x1(%eax),%edx
08364107 +0x09:  mov    %edx,%eax
08364109 +0x0b:  add    %eax,%eax
0836410b +0x0d:  add    %edx,%eax
0836410d +0x0f:  shl    $0x2,%eax
08364110 +0x12:  add    $0xa1c0,%eax
08364115 +0x17:  add    0x8(%ebp),%eax
08364118 +0x1a:  add    $0x4,%eax
0836411b +0x1d:  pop    %ebp
0836411c +0x1e:  ret
0836411d +0x1f:  nop
```

## 反编译 C

```c
// CDataManager::getDailyTrainingQuest @ 0x83640fe

/* CDataManager::getDailyTrainingQuest(int) */

CDataManager * __thiscall CDataManager::getDailyTrainingQuest(CDataManager *this,int param_1)

{
  return this + (param_1 + -1) * 0xc + 0xa1c4;
}
```
