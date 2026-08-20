# dispatch_sig

`_ZN21Timer_OneADayItemShop12dispatch_sigEiij`

`Timer_OneADayItemShop::dispatch_sig(int, int, unsigned int)`

| 类 | 地址 |
|---|---|
| `Timer_OneADayItemShop` | `0x0863a916` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0863a916  _ZN21Timer_OneADayItemShop12dispatch_sigEiij
#           Timer_OneADayItemShop::dispatch_sig(int, int, unsigned int)
# range [0x0863a916, 0x0863a93b]
0863a916 +0x00:  push   %ebp
0863a917 +0x01:  mov    %esp,%ebp
0863a919 +0x03:  sub    $0x18,%esp
0863a91c +0x06:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0863a921 +0x0b:  mov    0x8cbc(%eax),%eax
0863a927 +0x11:  mov    %eax,(%esp)
0863a92a +0x14:  call   08512e98 <_ZN9CItemShop21updateOneADayItemListEv>  ; CItemShop::updateOneADayItemList()
0863a92f +0x19:  call   0863a93c <_ZN21Timer_OneADayItemShop15RegistNextTimerEv>  ; Timer_OneADayItemShop::RegistNextTimer()
0863a934 +0x1e:  mov    $0x1,%eax
0863a939 +0x23:  leave
0863a93a +0x24:  ret
0863a93b +0x25:  nop
```

## 反编译 C

```c
// Timer_OneADayItemShop::dispatch_sig @ 0x863a916

/* Timer_OneADayItemShop::dispatch_sig(int, int, unsigned int) */

undefined4 Timer_OneADayItemShop::dispatch_sig(int param_1,int param_2,uint param_3)

{
  int iVar1;
  
  iVar1 = G_CDataManager();
  CItemShop::updateOneADayItemList(*(CItemShop **)(iVar1 + 0x8cbc));
  RegistNextTimer();
  return 1;
}
```
