# ExpandInventory

`_ZN15cUserHistoryLog15ExpandInventoryEiii`

`cUserHistoryLog::ExpandInventory(int, int, int)`

| 类 | 地址 |
|---|---|
| `cUserHistoryLog` | `0x08683cbc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08683cbc  _ZN15cUserHistoryLog15ExpandInventoryEiii
#           cUserHistoryLog::ExpandInventory(int, int, int)
# range [0x08683cbc, 0x08683ced]
08683cbc +0x00:  push   %ebp
08683cbd +0x01:  mov    %esp,%ebp
08683cbf +0x03:  sub    $0x28,%esp
08683cc2 +0x06:  mov    0x8(%ebp),%eax
08683cc5 +0x09:  mov    (%eax),%eax
08683cc7 +0x0b:  mov    0x14(%ebp),%edx
08683cca +0x0e:  mov    %edx,0x10(%esp)
08683cce +0x12:  mov    0x10(%ebp),%edx
08683cd1 +0x15:  mov    %edx,0xc(%esp)
08683cd5 +0x19:  mov    0xc(%ebp),%edx
08683cd8 +0x1c:  mov    %edx,0x8(%esp)
08683cdc +0x20:  movl   $"ExpandInventory+,%d,%d,%d",0x4(%esp)
08683ce4 +0x28:  mov    %eax,(%esp)
08683ce7 +0x2b:  call   0867c8fe <_ZN5CUser10LogHistoryEPKcz>  ; CUser::LogHistory(char const*, ...)
08683cec +0x30:  leave
08683ced +0x31:  ret
```

## 反编译 C

```c
// cUserHistoryLog::ExpandInventory @ 0x8683cbc

/* cUserHistoryLog::ExpandInventory(int, int, int) */

void __thiscall
cUserHistoryLog::ExpandInventory(cUserHistoryLog *this,int param_1,int param_2,int param_3)

{
  CUser::LogHistory(*(CUser **)this,"ExpandInventory+,%d,%d,%d",param_1,param_2,param_3);
  return;
}
```
