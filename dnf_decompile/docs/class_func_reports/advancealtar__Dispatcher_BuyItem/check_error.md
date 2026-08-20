# check_error

`_ZNK12advancealtar18Dispatcher_BuyItem11check_errorEP5CUserRN15CMDPacketStruct13STBaseRequestE`

`advancealtar::Dispatcher_BuyItem::check_error(CUser*, CMDPacketStruct::STBaseRequest&) const`

| 类 | 地址 |
|---|---|
| `advancealtar::Dispatcher_BuyItem` | `0x0813fbe6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0813fbe6  _ZNK12advancealtar18Dispatcher_BuyItem11check_errorEP5CUserRN15CMDPacketStruct13STBaseRequestE
#           advancealtar::Dispatcher_BuyItem::check_error(CUser*, CMDPacketStruct::STBaseRequest&) const
# range [0x0813fbe6, 0x0813fc05]
0813fbe6 +0x00:  push   %ebp
0813fbe7 +0x01:  mov    %esp,%ebp
0813fbe9 +0x03:  sub    $0x8,%esp
0813fbec +0x06:  call   0812cfea <_ZN12advancealtar18isOpenAdvanceAltarEv>  ; advancealtar::isOpenAdvanceAltar()
0813fbf1 +0x0b:  xor    $0x1,%eax
0813fbf4 +0x0e:  test   %al,%al
0813fbf6 +0x10:  je     0813fbff <+0x19>
0813fbf8 +0x12:  mov    $0x1,%eax
0813fbfd +0x17:  jmp    0813fc04 <+0x1e>
0813fbff +0x19:  mov    $0x0,%eax
0813fc04 +0x1e:  leave
0813fc05 +0x1f:  ret
```

## 反编译 C

```c
// advancealtar::Dispatcher_BuyItem::check_error @ 0x813fbe6

/* advancealtar::Dispatcher_BuyItem::check_error(CUser*, CMDPacketStruct::STBaseRequest&) const */

bool advancealtar::Dispatcher_BuyItem::check_error(CUser *param_1,STBaseRequest *param_2)

{
  char cVar1;
  
  cVar1 = isOpenAdvanceAltar();
  return cVar1 != '\x01';
}
```
