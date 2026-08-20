# buyItem

`_ZN12advancealtar10HistoryLog7buyItemENS_20AdvanceAltarShopType1TEissi`

`advancealtar::HistoryLog::buyItem(advancealtar::AdvanceAltarShopType::T, int, short, short, int)`

| 类 | 地址 |
|---|---|
| `advancealtar::HistoryLog` | `0x08133dda` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08133dda  _ZN12advancealtar10HistoryLog7buyItemENS_20AdvanceAltarShopType1TEissi
#           advancealtar::HistoryLog::buyItem(advancealtar::AdvanceAltarShopType::T, int, short, short, int)
# range [0x08133dda, 0x08133e2f]
08133dda +0x00:  push   %ebp
08133ddb +0x01:  mov    %esp,%ebp
08133ddd +0x03:  push   %ebx
08133dde +0x04:  sub    $0x34,%esp
08133de1 +0x07:  mov    0x10(%ebp),%edx
08133de4 +0x0a:  mov    0x14(%ebp),%eax
08133de7 +0x0d:  mov    %dx,-0xc(%ebp)
08133deb +0x11:  mov    %ax,-0x10(%ebp)
08133def +0x15:  mov    0x18(%ebp),%eax
08133df2 +0x18:  movzwl %ax,%ebx
08133df5 +0x1b:  movzwl -0x10(%ebp),%eax
08133df9 +0x1f:  movzwl %ax,%ecx
08133dfc +0x22:  mov    0xc(%ebp),%edx
08133dff +0x25:  mov    0x8(%ebp),%eax
08133e02 +0x28:  movzwl %ax,%eax
08133e05 +0x2b:  mov    %ebx,0x14(%esp)
08133e09 +0x2f:  movl   $0x1,0x10(%esp)
08133e11 +0x37:  mov    %ecx,0xc(%esp)
08133e15 +0x3b:  mov    %edx,0x8(%esp)
08133e19 +0x3f:  mov    %eax,0x4(%esp)
08133e1d +0x43:  movl   $&_ZN12advancealtar10HistoryLog23advanceAltarstatistics_E,(%esp)
08133e24 +0x4a:  call   08156d60 <_ZN16CAdvanceAltarLog22incrementLayerStatDataEtjttt>  ; CAdvanceAltarLog::incrementLayerStatData(unsigned short, unsigned int, unsigned short, unsigned short, unsigned short)
08133e29 +0x4f:  add    $0x34,%esp
08133e2c +0x52:  pop    %ebx
08133e2d +0x53:  pop    %ebp
08133e2e +0x54:  ret
08133e2f +0x55:  nop
```

## 反编译 C

```c
// advancealtar::HistoryLog::buyItem @ 0x8133dda

/* advancealtar::HistoryLog::buyItem(advancealtar::AdvanceAltarShopType::T, int, short, short, int)
    */

void advancealtar::HistoryLog::buyItem
               (ushort param_1,uint param_2,undefined4 param_3,ushort param_4,ushort param_5)

{
  CAdvanceAltarLog::incrementLayerStatData
            ((CAdvanceAltarLog *)advanceAltarstatistics_,param_1,param_2,param_4,1,param_5);
  return;
}
```
