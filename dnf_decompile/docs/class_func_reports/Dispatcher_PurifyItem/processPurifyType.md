# processPurifyType

`_ZN21Dispatcher_PurifyItem17processPurifyTypeEiR10Inven_Item`

`Dispatcher_PurifyItem::processPurifyType(int, Inven_Item&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_PurifyItem` | `0x082194b6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082194b6  _ZN21Dispatcher_PurifyItem17processPurifyTypeEiR10Inven_Item
#           Dispatcher_PurifyItem::processPurifyType(int, Inven_Item&)
# range [0x082194b6, 0x082194f3]
082194b6 +0x00:  push   %ebp
082194b7 +0x01:  mov    %esp,%ebp
082194b9 +0x03:  sub    $0x18,%esp
082194bc +0x06:  cmpl   $0x0,0xc(%ebp)
082194c0 +0x0a:  jne    082194d2 <+0x1c>
082194c2 +0x0c:  mov    0x10(%ebp),%eax
082194c5 +0x0f:  add    $0x11,%eax
082194c8 +0x12:  mov    %eax,(%esp)
082194cb +0x15:  call   0822b3d8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xa82>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xa82
082194d0 +0x1a:  jmp    082194f2 <+0x3c>
082194d2 +0x1c:  cmpl   $0x1,0xc(%ebp)
082194d6 +0x20:  jne    082194ed <+0x37>
082194d8 +0x22:  mov    0x10(%ebp),%eax
082194db +0x25:  add    $0x11,%eax
082194de +0x28:  mov    %eax,(%esp)
082194e1 +0x2b:  call   080cb75c <_GLOBAL__I__ZN10BingoEventC2Ev+0x5a9>  ; global constructors keyed to BingoEvent::BingoEvent()+0x5a9
082194e6 +0x30:  mov    $0x1,%eax
082194eb +0x35:  jmp    082194f2 <+0x3c>
082194ed +0x37:  mov    $0x0,%eax
082194f2 +0x3c:  leave
082194f3 +0x3d:  ret
```

## 反编译 C

```c
// Dispatcher_PurifyItem::processPurifyType @ 0x82194b6

/* Dispatcher_PurifyItem::processPurifyType(int, Inven_Item&) */

undefined4 __thiscall
Dispatcher_PurifyItem::processPurifyType
          (Dispatcher_PurifyItem *this,int param_1,Inven_Item *param_2)

{
  undefined4 uVar1;
  
  if (param_1 == 0) {
    uVar1 = stAmplifyOption_t::identify((stAmplifyOption_t *)(param_2 + 0x11));
  }
  else if (param_1 == 1) {
    stAmplifyOption_t::reset((stAmplifyOption_t *)(param_2 + 0x11));
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
```
