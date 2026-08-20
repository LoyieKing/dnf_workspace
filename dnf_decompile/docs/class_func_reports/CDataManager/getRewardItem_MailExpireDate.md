# getRewardItem_MailExpireDate

`_ZN12CDataManager28getRewardItem_MailExpireDateEv`

`CDataManager::getRewardItem_MailExpireDate()`

| 类 | 地址 |
|---|---|
| `CDataManager` | `0x08365536` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08365536  _ZN12CDataManager28getRewardItem_MailExpireDateEv
#           CDataManager::getRewardItem_MailExpireDate()
# range [0x08365536, 0x08365543]
08365536 +0x00:  push   %ebp
08365537 +0x01:  mov    %esp,%ebp
08365539 +0x03:  mov    0x8(%ebp),%eax
0836553c +0x06:  mov    0x4ba8(%eax),%eax
08365542 +0x0c:  pop    %ebp
08365543 +0x0d:  ret
```

## 反编译 C

```c
// CDataManager::getRewardItem_MailExpireDate @ 0x8365536

/* CDataManager::getRewardItem_MailExpireDate() */

undefined4 __thiscall CDataManager::getRewardItem_MailExpireDate(CDataManager *this)

{
  return *(undefined4 *)(this + 0x4ba8);
}
```
