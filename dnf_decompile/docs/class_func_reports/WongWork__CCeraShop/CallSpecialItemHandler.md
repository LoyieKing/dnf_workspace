# CallSpecialItemHandler

`_ZN8WongWork9CCeraShop22CallSpecialItemHandlerEiRK19STSpecailItem_ParamR20STSpecailItem_Result`

`WongWork::CCeraShop::CallSpecialItemHandler(int, STSpecailItem_Param const&, STSpecailItem_Result&)`

| 类 | 地址 |
|---|---|
| `WongWork::CCeraShop` | `0x08325854` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08325854  _ZN8WongWork9CCeraShop22CallSpecialItemHandlerEiRK19STSpecailItem_ParamR20STSpecailItem_Result
#           WongWork::CCeraShop::CallSpecialItemHandler(int, STSpecailItem_Param const&, STSpecailItem_Result&)
# range [0x08325854, 0x0832587d]
08325854 +0x00:  push   %ebp
08325855 +0x01:  mov    %esp,%ebp
08325857 +0x03:  sub    $0x18,%esp
0832585a +0x06:  mov    0x8(%ebp),%eax
0832585d +0x09:  mov    (%eax),%eax
0832585f +0x0b:  mov    0x14(%ebp),%edx
08325862 +0x0e:  mov    %edx,0xc(%esp)
08325866 +0x12:  mov    0x10(%ebp),%edx
08325869 +0x15:  mov    %edx,0x8(%esp)
0832586d +0x19:  mov    0xc(%ebp),%edx
08325870 +0x1c:  mov    %edx,0x4(%esp)
08325874 +0x20:  mov    %eax,(%esp)
08325877 +0x23:  call   0827be0a <_ZN18SpecialItemHandler7executeEiRK19STSpecailItem_ParamR20STSpecailItem_Result>  ; SpecialItemHandler::execute(int, STSpecailItem_Param const&, STSpecailItem_Result&)
0832587c +0x28:  leave
0832587d +0x29:  ret
```

## 反编译 C

```c
// WongWork::CCeraShop::CallSpecialItemHandler @ 0x8325854

/* WongWork::CCeraShop::CallSpecialItemHandler(int, STSpecailItem_Param const&,
   STSpecailItem_Result&) */

void __thiscall
WongWork::CCeraShop::CallSpecialItemHandler
          (CCeraShop *this,int param_1,STSpecailItem_Param *param_2,STSpecailItem_Result *param_3)

{
  SpecialItemHandler::execute(*(SpecialItemHandler **)this,param_1,param_2,param_3);
  return;
}
```
