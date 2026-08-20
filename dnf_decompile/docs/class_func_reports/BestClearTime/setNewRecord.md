# setNewRecord

`_ZN13BestClearTime12setNewRecordEb`

`BestClearTime::setNewRecord(bool)`

| 类 | 地址 |
|---|---|
| `BestClearTime` | `0x080c8b44` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080c8b44  _ZN13BestClearTime12setNewRecordEb
#           BestClearTime::setNewRecord(bool)
# range [0x080c8b44, 0x080c8b5b]
080c8b44 +0x00:  push   %ebp
080c8b45 +0x01:  mov    %esp,%ebp
080c8b47 +0x03:  sub    $0x4,%esp
080c8b4a +0x06:  mov    0xc(%ebp),%eax
080c8b4d +0x09:  mov    %al,-0x4(%ebp)
080c8b50 +0x0c:  mov    0x8(%ebp),%eax
080c8b53 +0x0f:  movzbl -0x4(%ebp),%edx
080c8b57 +0x13:  mov    %dl,0x20(%eax)
080c8b5a +0x16:  leave
080c8b5b +0x17:  ret
```

## 反编译 C

```c
// BestClearTime::setNewRecord @ 0x80c8b44

/* BestClearTime::setNewRecord(bool) */

void __thiscall BestClearTime::setNewRecord(BestClearTime *this,bool param_1)

{
  this[0x20] = (BestClearTime)param_1;
  return;
}
```
