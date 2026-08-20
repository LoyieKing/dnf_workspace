# respond_special_item_gift_ticket

`_ZN18SpecialItemHandler32respond_special_item_gift_ticketEiRK19STSpecailItem_ParamR20STSpecailItem_Result`

`SpecialItemHandler::respond_special_item_gift_ticket(int, STSpecailItem_Param const&, STSpecailItem_Result&)`

| 类 | 地址 |
|---|---|
| `SpecialItemHandler` | `0x0827cdb6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0827cdb6  _ZN18SpecialItemHandler32respond_special_item_gift_ticketEiRK19STSpecailItem_ParamR20STSpecailItem_Result
#           SpecialItemHandler::respond_special_item_gift_ticket(int, STSpecailItem_Param const&, STSpecailItem_Result&)
# range [0x0827cdb6, 0x0827cdcf]
0827cdb6 +0x00:  push   %ebp
0827cdb7 +0x01:  mov    %esp,%ebp
0827cdb9 +0x03:  sub    $0x10,%esp
0827cdbc +0x06:  mov    0x10(%ebp),%eax
0827cdbf +0x09:  mov    (%eax),%eax
0827cdc1 +0x0b:  mov    %eax,-0x8(%ebp)
0827cdc4 +0x0e:  mov    0x10(%ebp),%eax
0827cdc7 +0x11:  mov    0x8(%eax),%eax
0827cdca +0x14:  mov    %eax,-0x4(%ebp)
0827cdcd +0x17:  leave
0827cdce +0x18:  ret
0827cdcf +0x19:  nop
```

## 反编译 C

```c
// SpecialItemHandler::respond_special_item_gift_ticket @ 0x827cdb6

/* SpecialItemHandler::respond_special_item_gift_ticket(int, STSpecailItem_Param const&,
   STSpecailItem_Result&) */

void SpecialItemHandler::respond_special_item_gift_ticket
               (int param_1,STSpecailItem_Param *param_2,STSpecailItem_Result *param_3)

{
  return;
}
```
