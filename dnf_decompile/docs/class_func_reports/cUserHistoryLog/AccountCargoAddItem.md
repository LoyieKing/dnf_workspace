# AccountCargoAddItem

`_ZN15cUserHistoryLog19AccountCargoAddItemEiii14eItemAddReason`

`cUserHistoryLog::AccountCargoAddItem(int, int, int, eItemAddReason)`

| 类 | 地址 |
|---|---|
| `cUserHistoryLog` | `0x086868b4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086868b4  _ZN15cUserHistoryLog19AccountCargoAddItemEiii14eItemAddReason
#           cUserHistoryLog::AccountCargoAddItem(int, int, int, eItemAddReason)
# range [0x086868b4, 0x086868ed]
086868b4 +0x00:  push   %ebp
086868b5 +0x01:  mov    %esp,%ebp
086868b7 +0x03:  sub    $0x28,%esp
086868ba +0x06:  mov    0x18(%ebp),%edx
086868bd +0x09:  mov    0x8(%ebp),%eax
086868c0 +0x0c:  mov    (%eax),%eax
086868c2 +0x0e:  mov    0x14(%ebp),%ecx
086868c5 +0x11:  mov    %ecx,0x14(%esp)
086868c9 +0x15:  mov    0x10(%ebp),%ecx
086868cc +0x18:  mov    %ecx,0x10(%esp)
086868d0 +0x1c:  mov    0xc(%ebp),%ecx
086868d3 +0x1f:  mov    %ecx,0xc(%esp)
086868d7 +0x23:  mov    %edx,0x8(%esp)
086868db +0x27:  movl   $"AccountCargo+,%d,%d,%d,%d",0x4(%esp)
086868e3 +0x2f:  mov    %eax,(%esp)
086868e6 +0x32:  call   0867c8fe <_ZN5CUser10LogHistoryEPKcz>  ; CUser::LogHistory(char const*, ...)
086868eb +0x37:  leave
086868ec +0x38:  ret
086868ed +0x39:  nop
```

## 反编译 C

```c
// cUserHistoryLog::AccountCargoAddItem @ 0x86868b4

/* cUserHistoryLog::AccountCargoAddItem(int, int, int, eItemAddReason) */

void __thiscall
cUserHistoryLog::AccountCargoAddItem
          (cUserHistoryLog *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,
          undefined4 param_5)

{
  CUser::LogHistory(*(CUser **)this,"AccountCargo+,%d,%d,%d,%d",param_5,param_1,param_2,param_3);
  return;
}
```
