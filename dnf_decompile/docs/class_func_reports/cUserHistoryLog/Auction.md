# Auction

`_ZN15cUserHistoryLog7AuctionEP26SIG_AUCTION_LOG_MESSAGE_AG`

`cUserHistoryLog::Auction(SIG_AUCTION_LOG_MESSAGE_AG*)`

| 类 | 地址 |
|---|---|
| `cUserHistoryLog` | `0x08685452` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08685452  _ZN15cUserHistoryLog7AuctionEP26SIG_AUCTION_LOG_MESSAGE_AG
#           cUserHistoryLog::Auction(SIG_AUCTION_LOG_MESSAGE_AG*)
# range [0x08685452, 0x08685653]
08685452 +0x000:  push   %ebp
08685453 +0x001:  mov    %esp,%ebp
08685455 +0x003:  push   %edi
08685456 +0x004:  push   %esi
08685457 +0x005:  push   %ebx
08685458 +0x006:  sub    $0x5c,%esp
0868545b +0x009:  mov    0xc(%ebp),%eax
0868545e +0x00c:  movzbl (%eax),%eax
08685461 +0x00f:  movzbl %al,%eax
08685464 +0x012:  cmp    $0x1,%eax
08685467 +0x015:  je     08685513 <+0xc1>
0868546d +0x01b:  cmp    $0x1,%eax
08685470 +0x01e:  jg     0868547b <+0x29>
08685472 +0x020:  test   %eax,%eax
08685474 +0x022:  je     08685492 <+0x40>
08685476 +0x024:  jmp    0868562a <+0x1d8>
0868547b +0x029:  cmp    $0x2,%eax
0868547e +0x02c:  je     086855a8 <+0x156>
08685484 +0x032:  cmp    $0x3,%eax
08685487 +0x035:  je     086855ee <+0x19c>
0868548d +0x03b:  jmp    0868562a <+0x1d8>
08685492 +0x040:  mov    0xc(%ebp),%eax
08685495 +0x043:  mov    0x1c(%eax),%ebx
08685498 +0x046:  mov    0xc(%ebp),%eax
0868549b +0x049:  movzwl 0x1a(%eax),%eax
0868549f +0x04d:  movzwl %ax,%esi
086854a2 +0x050:  mov    0xc(%ebp),%eax
086854a5 +0x053:  mov    0x16(%eax),%eax
086854a8 +0x056:  mov    %eax,-0x34(%ebp)
086854ab +0x059:  mov    0xc(%ebp),%eax
086854ae +0x05c:  movzbl 0x15(%eax),%eax
086854b2 +0x060:  movzbl %al,%eax
086854b5 +0x063:  mov    %eax,-0x30(%ebp)
086854b8 +0x066:  mov    0xc(%ebp),%eax
086854bb +0x069:  mov    0x11(%eax),%eax
086854be +0x06c:  mov    %eax,-0x2c(%ebp)
086854c1 +0x06f:  mov    0xc(%ebp),%eax
086854c4 +0x072:  mov    0x9(%eax),%edi
086854c7 +0x075:  mov    0xc(%ebp),%eax
086854ca +0x078:  mov    0x1(%eax),%edx
086854cd +0x07b:  mov    0x5(%eax),%ecx
086854d0 +0x07e:  mov    0x8(%ebp),%eax
086854d3 +0x081:  mov    (%eax),%eax
086854d5 +0x083:  mov    %ebx,0x24(%esp)
086854d9 +0x087:  mov    %esi,0x20(%esp)
086854dd +0x08b:  mov    -0x34(%ebp),%ebx
086854e0 +0x08e:  mov    %ebx,0x1c(%esp)
086854e4 +0x092:  mov    -0x30(%ebp),%ebx
086854e7 +0x095:  mov    %ebx,0x18(%esp)
086854eb +0x099:  mov    -0x2c(%ebp),%ebx
086854ee +0x09c:  mov    %ebx,0x14(%esp)
086854f2 +0x0a0:  mov    %edi,0x10(%esp)
086854f6 +0x0a4:  mov    %edx,0x8(%esp)
086854fa +0x0a8:  mov    %ecx,0xc(%esp)
086854fe +0x0ac:  movl   $"Auction_reg_s,%llu,%d,%u,%hhu,%d,%hu,%u",0x4(%esp)
08685506 +0x0b4:  mov    %eax,(%esp)
08685509 +0x0b7:  call   0867c8fe <_ZN5CUser10LogHistoryEPKcz>  ; CUser::LogHistory(char const*, ...)
0868550e +0x0bc:  jmp    0868564c <+0x1fa>
08685513 +0x0c1:  mov    0xc(%ebp),%eax
08685516 +0x0c4:  movzbl 0x20(%eax),%eax
0868551a +0x0c8:  movzbl %al,%ebx
0868551d +0x0cb:  mov    0xc(%ebp),%eax
08685520 +0x0ce:  mov    0x1c(%eax),%esi
08685523 +0x0d1:  mov    0xc(%ebp),%eax
08685526 +0x0d4:  movzwl 0x1a(%eax),%eax
0868552a +0x0d8:  movzwl %ax,%eax
0868552d +0x0db:  mov    %eax,-0x28(%ebp)
08685530 +0x0de:  mov    0xc(%ebp),%eax
08685533 +0x0e1:  mov    0x16(%eax),%eax
08685536 +0x0e4:  mov    %eax,-0x24(%ebp)
08685539 +0x0e7:  mov    0xc(%ebp),%eax
0868553c +0x0ea:  movzbl 0x15(%eax),%eax
08685540 +0x0ee:  movzbl %al,%eax
08685543 +0x0f1:  mov    %eax,-0x20(%ebp)
08685546 +0x0f4:  mov    0xc(%ebp),%eax
08685549 +0x0f7:  mov    0x11(%eax),%eax
0868554c +0x0fa:  mov    %eax,-0x1c(%ebp)
0868554f +0x0fd:  mov    0xc(%ebp),%eax
08685552 +0x100:  mov    0x9(%eax),%edi
08685555 +0x103:  mov    0xc(%ebp),%eax
08685558 +0x106:  mov    0x1(%eax),%edx
0868555b +0x109:  mov    0x5(%eax),%ecx
0868555e +0x10c:  mov    0x8(%ebp),%eax
08685561 +0x10f:  mov    (%eax),%eax
08685563 +0x111:  mov    %ebx,0x28(%esp)
08685567 +0x115:  mov    %esi,0x24(%esp)
0868556b +0x119:  mov    -0x28(%ebp),%ebx
0868556e +0x11c:  mov    %ebx,0x20(%esp)
08685572 +0x120:  mov    -0x24(%ebp),%ebx
08685575 +0x123:  mov    %ebx,0x1c(%esp)
08685579 +0x127:  mov    -0x20(%ebp),%ebx
0868557c +0x12a:  mov    %ebx,0x18(%esp)
08685580 +0x12e:  mov    -0x1c(%ebp),%ebx
08685583 +0x131:  mov    %ebx,0x14(%esp)
08685587 +0x135:  mov    %edi,0x10(%esp)
0868558b +0x139:  mov    %edx,0x8(%esp)
0868558f +0x13d:  mov    %ecx,0xc(%esp)
08685593 +0x141:  movl   $"Auction_reg_f,%llu,%d,%u,%hhu,%d,%hu,%u,%hhu",0x4(%esp)
0868559b +0x149:  mov    %eax,(%esp)
0868559e +0x14c:  call   0867c8fe <_ZN5CUser10LogHistoryEPKcz>  ; CUser::LogHistory(char const*, ...)
086855a3 +0x151:  jmp    0868564c <+0x1fa>
086855a8 +0x156:  mov    0xc(%ebp),%eax
086855ab +0x159:  mov    0xd(%eax),%edi
086855ae +0x15c:  mov    0xc(%ebp),%eax
086855b1 +0x15f:  mov    0x11(%eax),%esi
086855b4 +0x162:  mov    0xc(%ebp),%eax
086855b7 +0x165:  mov    0x9(%eax),%ebx
086855ba +0x168:  mov    0xc(%ebp),%eax
086855bd +0x16b:  mov    0x5(%eax),%edx
086855c0 +0x16e:  mov    0x1(%eax),%eax
086855c3 +0x171:  mov    0x8(%ebp),%ecx
086855c6 +0x174:  mov    (%ecx),%ecx
086855c8 +0x176:  mov    %edi,0x18(%esp)
086855cc +0x17a:  mov    %esi,0x14(%esp)
086855d0 +0x17e:  mov    %ebx,0x10(%esp)
086855d4 +0x182:  mov    %eax,0x8(%esp)
086855d8 +0x186:  mov    %edx,0xc(%esp)
086855dc +0x18a:  movl   $"Auction_bid_s,%llu,%d,%d,%d",0x4(%esp)
086855e4 +0x192:  mov    %ecx,(%esp)
086855e7 +0x195:  call   0867c8fe <_ZN5CUser10LogHistoryEPKcz>  ; CUser::LogHistory(char const*, ...)
086855ec +0x19a:  jmp    0868564c <+0x1fa>
086855ee +0x19c:  mov    0xc(%ebp),%eax
086855f1 +0x19f:  mov    0xd(%eax),%esi
086855f4 +0x1a2:  mov    0xc(%ebp),%eax
086855f7 +0x1a5:  mov    0x9(%eax),%ebx
086855fa +0x1a8:  mov    0xc(%ebp),%eax
086855fd +0x1ab:  mov    0x5(%eax),%edx
08685600 +0x1ae:  mov    0x1(%eax),%eax
08685603 +0x1b1:  mov    0x8(%ebp),%ecx
08685606 +0x1b4:  mov    (%ecx),%ecx
08685608 +0x1b6:  mov    %esi,0x14(%esp)
0868560c +0x1ba:  mov    %ebx,0x10(%esp)
08685610 +0x1be:  mov    %eax,0x8(%esp)
08685614 +0x1c2:  mov    %edx,0xc(%esp)
08685618 +0x1c6:  movl   $"Auction_bid_f,%llu,%d,%d",0x4(%esp)
08685620 +0x1ce:  mov    %ecx,(%esp)
08685623 +0x1d1:  call   0867c8fe <_ZN5CUser10LogHistoryEPKcz>  ; CUser::LogHistory(char const*, ...)
08685628 +0x1d6:  jmp    0868564c <+0x1fa>
0868562a +0x1d8:  mov    0xc(%ebp),%eax
0868562d +0x1db:  movzbl (%eax),%eax
08685630 +0x1de:  movzbl %al,%edx
08685633 +0x1e1:  mov    0x8(%ebp),%eax
08685636 +0x1e4:  mov    (%eax),%eax
08685638 +0x1e6:  mov    %edx,0x8(%esp)
0868563c +0x1ea:  movl   $"Auction_unknown,%d",0x4(%esp)
08685644 +0x1f2:  mov    %eax,(%esp)
08685647 +0x1f5:  call   0867c8fe <_ZN5CUser10LogHistoryEPKcz>  ; CUser::LogHistory(char const*, ...)
0868564c +0x1fa:  add    $0x5c,%esp
0868564f +0x1fd:  pop    %ebx
08685650 +0x1fe:  pop    %esi
08685651 +0x1ff:  pop    %edi
08685652 +0x200:  pop    %ebp
08685653 +0x201:  ret
```

## 反编译 C

```c
// cUserHistoryLog::Auction @ 0x8685452

/* cUserHistoryLog::Auction(SIG_AUCTION_LOG_MESSAGE_AG*) */

void __thiscall cUserHistoryLog::Auction(cUserHistoryLog *this,SIG_AUCTION_LOG_MESSAGE_AG *param_1)

{
  SIG_AUCTION_LOG_MESSAGE_AG SVar1;
  
  SVar1 = *param_1;
  if (SVar1 == (SIG_AUCTION_LOG_MESSAGE_AG)0x1) {
    CUser::LogHistory(*(CUser **)this,"Auction_reg_f,%llu,%d,%u,%hhu,%d,%hu,%u,%hhu",
                      *(undefined4 *)(param_1 + 1),*(undefined4 *)(param_1 + 5),
                      *(undefined4 *)(param_1 + 9),*(undefined4 *)(param_1 + 0x11),
                      (uint)(byte)param_1[0x15],*(undefined4 *)(param_1 + 0x16),
                      (uint)*(ushort *)(param_1 + 0x1a),*(undefined4 *)(param_1 + 0x1c),
                      (uint)(byte)param_1[0x20]);
    return;
  }
  if ((byte)SVar1 < 2) {
    if (SVar1 == (SIG_AUCTION_LOG_MESSAGE_AG)0x0) {
      CUser::LogHistory(*(CUser **)this,"Auction_reg_s,%llu,%d,%u,%hhu,%d,%hu,%u",
                        *(undefined4 *)(param_1 + 1),*(undefined4 *)(param_1 + 5),
                        *(undefined4 *)(param_1 + 9),*(undefined4 *)(param_1 + 0x11),
                        (uint)(byte)param_1[0x15],*(undefined4 *)(param_1 + 0x16),
                        (uint)*(ushort *)(param_1 + 0x1a),*(undefined4 *)(param_1 + 0x1c));
      return;
    }
  }
  else {
    if (SVar1 == (SIG_AUCTION_LOG_MESSAGE_AG)0x2) {
      CUser::LogHistory(*(CUser **)this,"Auction_bid_s,%llu,%d,%d,%d",*(undefined4 *)(param_1 + 1),
                        *(undefined4 *)(param_1 + 5),*(undefined4 *)(param_1 + 9),
                        *(undefined4 *)(param_1 + 0x11),*(undefined4 *)(param_1 + 0xd));
      return;
    }
    if (SVar1 == (SIG_AUCTION_LOG_MESSAGE_AG)0x3) {
      CUser::LogHistory(*(CUser **)this,"Auction_bid_f,%llu,%d,%d",*(undefined4 *)(param_1 + 1),
                        *(undefined4 *)(param_1 + 5),*(undefined4 *)(param_1 + 9),
                        *(undefined4 *)(param_1 + 0xd));
      return;
    }
  }
  CUser::LogHistory(*(CUser **)this,"Auction_unknown,%d",(uint)(byte)*param_1);
  return;
}
```
