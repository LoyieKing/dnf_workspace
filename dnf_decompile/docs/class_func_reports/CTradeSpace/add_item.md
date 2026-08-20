# add_item

`_ZN11CTradeSpace8add_itemEi9TradeSloti`

`CTradeSpace::add_item(int, TradeSlot, int)`

| 类 | 地址 |
|---|---|
| `CTradeSpace` | `0x08529aa2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08529aa2  _ZN11CTradeSpace8add_itemEi9TradeSloti
#           CTradeSpace::add_item(int, TradeSlot, int)
# range [0x08529aa2, 0x08529d47]
08529aa2 +0x000:  push   %ebp
08529aa3 +0x001:  mov    %esp,%ebp
08529aa5 +0x003:  push   %ebx
08529aa6 +0x004:  sub    $0x44,%esp
08529aa9 +0x007:  cmpl   $0x0,0x58(%ebp)
08529aad +0x00b:  jns    08529ab9 <+0x17>
08529aaf +0x00d:  mov    $0xffffffff,%eax
08529ab4 +0x012:  jmp    08529d41 <+0x29f>
08529ab9 +0x017:  movl   $0xffffffff,-0x10(%ebp)
08529ac0 +0x01e:  mov    0x8(%ebp),%eax
08529ac3 +0x021:  mov    %eax,(%esp)
08529ac6 +0x024:  call   085320e2 <_GLOBAL__I__ZN11CTradeSpace11set_tradersEP5CUserS1_+0x140>  ; global constructors keyed to CTradeSpace::set_traders(CUser*, CUser*)+0x140
08529acb +0x029:  lea    0x10(%ebp),%eax
08529ace +0x02c:  add    $0x9,%eax
08529ad1 +0x02f:  mov    %eax,(%esp)
08529ad4 +0x032:  call   08150812 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x147>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x147
08529ad9 +0x037:  test   %al,%al
08529adb +0x039:  je     08529b41 <+0x9f>
08529add +0x03b:  mov    0xc(%ebp),%eax
08529ae0 +0x03e:  mov    %eax,0x4(%esp)
08529ae4 +0x042:  mov    0x8(%ebp),%eax
08529ae7 +0x045:  mov    %eax,(%esp)
08529aea +0x048:  call   085299c0 <_ZN11CTradeSpace18get_empty_itemslotEi>  ; CTradeSpace::get_empty_itemslot(int)
08529aef +0x04d:  mov    %eax,-0x10(%ebp)
08529af2 +0x050:  cmpl   $0xffffffff,-0x10(%ebp)
08529af6 +0x054:  je     08529d33 <+0x291>
08529afc +0x05a:  mov    0xc(%ebp),%ecx
08529aff +0x05d:  mov    -0x10(%ebp),%edx
08529b02 +0x060:  mov    %edx,%eax
08529b04 +0x062:  shl    $0x3,%eax
08529b07 +0x065:  add    %edx,%eax
08529b09 +0x067:  shl    $0x3,%eax
08529b0c +0x06a:  imul   $0x798,%ecx,%edx
08529b12 +0x070:  add    %edx,%eax
08529b14 +0x072:  add    $0x30,%eax
08529b17 +0x075:  add    0x8(%ebp),%eax
08529b1a +0x078:  lea    0x10(%ebp),%edx
08529b1d +0x07b:  cmp    %edx,%eax
08529b1f +0x07d:  je     08529d33 <+0x291>
08529b25 +0x083:  movl   $0x46,0x8(%esp)
08529b2d +0x08b:  lea    0x10(%ebp),%edx
08529b30 +0x08e:  mov    %edx,0x4(%esp)
08529b34 +0x092:  mov    %eax,(%esp)
08529b37 +0x095:  call   0807d8a0 <_init+0x198>
08529b3c +0x09a:  jmp    08529d33 <+0x291>
08529b41 +0x09f:  mov    0x1b(%ebp),%eax
08529b44 +0x0a2:  mov    %eax,0x8(%esp)
08529b48 +0x0a6:  mov    0xc(%ebp),%eax
08529b4b +0x0a9:  mov    %eax,0x4(%esp)
08529b4f +0x0ad:  mov    0x8(%ebp),%eax
08529b52 +0x0b0:  mov    %eax,(%esp)
08529b55 +0x0b3:  call   08529a18 <_ZN11CTradeSpace16check_item_existEii>  ; CTradeSpace::check_item_exist(int, int)
08529b5a +0x0b8:  mov    %eax,-0x10(%ebp)
08529b5d +0x0bb:  cmpl   $0xffffffff,-0x10(%ebp)
08529b61 +0x0bf:  je     08529c3a <+0x198>
08529b67 +0x0c5:  mov    0xc(%ebp),%ebx
08529b6a +0x0c8:  mov    -0x10(%ebp),%edx
08529b6d +0x0cb:  mov    0x8(%ebp),%ecx
08529b70 +0x0ce:  mov    %edx,%eax
08529b72 +0x0d0:  shl    $0x3,%eax
08529b75 +0x0d3:  add    %edx,%eax
08529b77 +0x0d5:  shl    $0x3,%eax
08529b7a +0x0d8:  imul   $0x798,%ebx,%edx
08529b80 +0x0de:  add    %edx,%eax
08529b82 +0x0e0:  lea    (%ecx,%eax,1),%eax
08529b85 +0x0e3:  add    $0x40,%eax
08529b88 +0x0e6:  mov    (%eax),%eax
08529b8a +0x0e8:  mov    %eax,-0xc(%ebp)
08529b8d +0x0eb:  mov    0x58(%ebp),%eax
08529b90 +0x0ee:  add    %eax,-0xc(%ebp)
08529b93 +0x0f1:  mov    0xc(%ebp),%ecx
08529b96 +0x0f4:  mov    -0x10(%ebp),%edx
08529b99 +0x0f7:  mov    %edx,%eax
08529b9b +0x0f9:  shl    $0x3,%eax
08529b9e +0x0fc:  add    %edx,%eax
08529ba0 +0x0fe:  shl    $0x3,%eax
08529ba3 +0x101:  imul   $0x798,%ecx,%edx
08529ba9 +0x107:  add    %edx,%eax
08529bab +0x109:  add    $0x30,%eax
08529bae +0x10c:  add    0x8(%ebp),%eax
08529bb1 +0x10f:  lea    0x9(%eax),%edx
08529bb4 +0x112:  mov    -0xc(%ebp),%eax
08529bb7 +0x115:  mov    %eax,0x4(%esp)
08529bbb +0x119:  mov    %edx,(%esp)
08529bbe +0x11c:  call   080cb884 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6d1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6d1
08529bc3 +0x121:  cmpl   $0x3e7,-0xc(%ebp)
08529bca +0x128:  jle    08529d33 <+0x291>
08529bd0 +0x12e:  mov    0xc(%ebp),%ebx
08529bd3 +0x131:  mov    -0x10(%ebp),%edx
08529bd6 +0x134:  mov    0x8(%ebp),%ecx
08529bd9 +0x137:  mov    %edx,%eax
08529bdb +0x139:  shl    $0x3,%eax
08529bde +0x13c:  add    %edx,%eax
08529be0 +0x13e:  shl    $0x3,%eax
08529be3 +0x141:  imul   $0x798,%ebx,%edx
08529be9 +0x147:  add    %edx,%eax
08529beb +0x149:  lea    (%ecx,%eax,1),%eax
08529bee +0x14c:  add    $0x30,%eax
08529bf1 +0x14f:  mov    0xb(%eax),%ebx
08529bf4 +0x152:  movl   $0x5,0xc(%esp)
08529bfc +0x15a:  movl   $0xd1,0x8(%esp)
08529c04 +0x162:  movl   $&_ZZN11CTradeSpace8add_itemEi9TradeSlotiE19__PRETTY_FUNCTION__,0x4(%esp)
08529c0c +0x16a:  lea    -0x30(%ebp),%eax
08529c0f +0x16d:  mov    %eax,(%esp)
08529c12 +0x170:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08529c17 +0x175:  mov    -0xc(%ebp),%eax
08529c1a +0x178:  mov    %eax,0xc(%esp)
08529c1e +0x17c:  mov    %ebx,0x8(%esp)
08529c22 +0x180:  movl   $"CTradeSpace::add_item, ITEM #%d, %d",0x4(%esp)
08529c2a +0x188:  lea    -0x30(%ebp),%eax
08529c2d +0x18b:  mov    %eax,(%esp)
08529c30 +0x18e:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08529c35 +0x193:  jmp    08529d33 <+0x291>
08529c3a +0x198:  mov    0xc(%ebp),%eax
08529c3d +0x19b:  mov    %eax,0x4(%esp)
08529c41 +0x19f:  mov    0x8(%ebp),%eax
08529c44 +0x1a2:  mov    %eax,(%esp)
08529c47 +0x1a5:  call   085299c0 <_ZN11CTradeSpace18get_empty_itemslotEi>  ; CTradeSpace::get_empty_itemslot(int)
08529c4c +0x1aa:  mov    %eax,-0x10(%ebp)
08529c4f +0x1ad:  cmpl   $0xffffffff,-0x10(%ebp)
08529c53 +0x1b1:  je     08529d33 <+0x291>
08529c59 +0x1b7:  mov    0xc(%ebp),%ecx
08529c5c +0x1ba:  mov    -0x10(%ebp),%edx
08529c5f +0x1bd:  mov    %edx,%eax
08529c61 +0x1bf:  shl    $0x3,%eax
08529c64 +0x1c2:  add    %edx,%eax
08529c66 +0x1c4:  shl    $0x3,%eax
08529c69 +0x1c7:  imul   $0x798,%ecx,%edx
08529c6f +0x1cd:  add    %edx,%eax
08529c71 +0x1cf:  add    $0x30,%eax
08529c74 +0x1d2:  add    0x8(%ebp),%eax
08529c77 +0x1d5:  lea    0x10(%ebp),%edx
08529c7a +0x1d8:  cmp    %edx,%eax
08529c7c +0x1da:  je     08529c95 <+0x1f3>
08529c7e +0x1dc:  movl   $0x46,0x8(%esp)
08529c86 +0x1e4:  lea    0x10(%ebp),%edx
08529c89 +0x1e7:  mov    %edx,0x4(%esp)
08529c8d +0x1eb:  mov    %eax,(%esp)
08529c90 +0x1ee:  call   0807d8a0 <_init+0x198>
08529c95 +0x1f3:  mov    0xc(%ebp),%ecx
08529c98 +0x1f6:  mov    -0x10(%ebp),%edx
08529c9b +0x1f9:  mov    %edx,%eax
08529c9d +0x1fb:  shl    $0x3,%eax
08529ca0 +0x1fe:  add    %edx,%eax
08529ca2 +0x200:  shl    $0x3,%eax
08529ca5 +0x203:  imul   $0x798,%ecx,%edx
08529cab +0x209:  add    %edx,%eax
08529cad +0x20b:  add    $0x30,%eax
08529cb0 +0x20e:  add    0x8(%ebp),%eax
08529cb3 +0x211:  lea    0x9(%eax),%edx
08529cb6 +0x214:  mov    0x58(%ebp),%eax
08529cb9 +0x217:  mov    %eax,0x4(%esp)
08529cbd +0x21b:  mov    %edx,(%esp)
08529cc0 +0x21e:  call   080cb884 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6d1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6d1
08529cc5 +0x223:  cmpl   $0x3e7,0x58(%ebp)
08529ccc +0x22a:  jle    08529d33 <+0x291>
08529cce +0x22c:  mov    0xc(%ebp),%ebx
08529cd1 +0x22f:  mov    -0x10(%ebp),%edx
08529cd4 +0x232:  mov    0x8(%ebp),%ecx
08529cd7 +0x235:  mov    %edx,%eax
08529cd9 +0x237:  shl    $0x3,%eax
08529cdc +0x23a:  add    %edx,%eax
08529cde +0x23c:  shl    $0x3,%eax
08529ce1 +0x23f:  imul   $0x798,%ebx,%edx
08529ce7 +0x245:  add    %edx,%eax
08529ce9 +0x247:  lea    (%ecx,%eax,1),%eax
08529cec +0x24a:  add    $0x30,%eax
08529cef +0x24d:  mov    0xb(%eax),%ebx
08529cf2 +0x250:  movl   $0x5,0xc(%esp)
08529cfa +0x258:  movl   $0xde,0x8(%esp)
08529d02 +0x260:  movl   $&_ZZN11CTradeSpace8add_itemEi9TradeSlotiE19__PRETTY_FUNCTION__,0x4(%esp)
08529d0a +0x268:  lea    -0x20(%ebp),%eax
08529d0d +0x26b:  mov    %eax,(%esp)
08529d10 +0x26e:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08529d15 +0x273:  mov    0x58(%ebp),%eax
08529d18 +0x276:  mov    %eax,0xc(%esp)
08529d1c +0x27a:  mov    %ebx,0x8(%esp)
08529d20 +0x27e:  movl   $"CTradeSpace::add_item, ITEM #%d, %d",0x4(%esp)
08529d28 +0x286:  lea    -0x20(%ebp),%eax
08529d2b +0x289:  mov    %eax,(%esp)
08529d2e +0x28c:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08529d33 +0x291:  mov    0x8(%ebp),%eax
08529d36 +0x294:  mov    %eax,(%esp)
08529d39 +0x297:  call   085320e8 <_GLOBAL__I__ZN11CTradeSpace11set_tradersEP5CUserS1_+0x146>  ; global constructors keyed to CTradeSpace::set_traders(CUser*, CUser*)+0x146
08529d3e +0x29c:  mov    -0x10(%ebp),%eax
08529d41 +0x29f:  add    $0x44,%esp
08529d44 +0x2a2:  pop    %ebx
08529d45 +0x2a3:  pop    %ebp
08529d46 +0x2a4:  ret
08529d47 +0x2a5:  nop
```

## 反编译 C

```c
// CTradeSpace::add_item @ 0x8529aa2

/* CTradeSpace::add_item(int, TradeSlot, int) */

int CTradeSpace::add_item
              (CTradeSpace *param_1,int param_2,undefined4 param_3,undefined4 param_4,
              undefined8 param_5)

{
  undefined4 uVar1;
  char cVar2;
  int in_stack_00000054;
  cMyTrace local_34 [16];
  cMyTrace local_24 [16];
  int local_14;
  int local_10;
  
  if (in_stack_00000054 < 0) {
    local_14 = -1;
  }
  else {
    local_14 = 0xffffffff;
    lock();
    cVar2 = Inven_Item::isEquipableItemType((Inven_Item *)((int)&param_5 + 1));
    if (cVar2 == '\0') {
      local_14 = check_item_exist(param_1,param_2,param_5._3_4_);
      if (local_14 == -1) {
        local_14 = get_empty_itemslot(param_1,param_2);
        if (local_14 != -1) {
          if (param_1 + local_14 * 0x48 + param_2 * 0x798 + 0x30 != (CTradeSpace *)&param_3) {
            memcpy(param_1 + local_14 * 0x48 + param_2 * 0x798 + 0x30,&param_3,0x46);
          }
          Inven_Item::set_add_info
                    ((Inven_Item *)(param_1 + local_14 * 0x48 + param_2 * 0x798 + 0x39),
                     in_stack_00000054);
          if (999 < in_stack_00000054) {
            uVar1 = *(undefined4 *)(param_1 + local_14 * 0x48 + param_2 * 0x798 + 0x3b);
            cMyTrace::cMyTrace(local_24,"int CTradeSpace::add_item(int, TradeSlot, int)",0xde,5);
            cMyTrace::operator()
                      (local_24,"CTradeSpace::add_item, ITEM #%d, %d",uVar1,in_stack_00000054);
          }
        }
      }
      else {
        local_10 = *(int *)(param_1 + local_14 * 0x48 + param_2 * 0x798 + 0x40) + in_stack_00000054;
        Inven_Item::set_add_info
                  ((Inven_Item *)(param_1 + local_14 * 0x48 + param_2 * 0x798 + 0x39),local_10);
        if (999 < local_10) {
          uVar1 = *(undefined4 *)(param_1 + local_14 * 0x48 + param_2 * 0x798 + 0x3b);
          cMyTrace::cMyTrace(local_34,"int CTradeSpace::add_item(int, TradeSlot, int)",0xd1,5);
          cMyTrace::operator()(local_34,"CTradeSpace::add_item, ITEM #%d, %d",uVar1,local_10);
        }
      }
    }
    else {
      local_14 = get_empty_itemslot(param_1,param_2);
      if ((local_14 != -1) &&
         (param_1 + local_14 * 0x48 + param_2 * 0x798 + 0x30 != (CTradeSpace *)&param_3)) {
        memcpy(param_1 + local_14 * 0x48 + param_2 * 0x798 + 0x30,&param_3,0x46);
      }
    }
    unlock();
  }
  return local_14;
}
```
