# AuctionPoint

`_ZN15cUserHistoryLog12AuctionPointEP26SIG_AUCTION_LOG_MESSAGE_PG`

`cUserHistoryLog::AuctionPoint(SIG_AUCTION_LOG_MESSAGE_PG*)`

| 类 | 地址 |
|---|---|
| `cUserHistoryLog` | `0x08685654` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08685654  _ZN15cUserHistoryLog12AuctionPointEP26SIG_AUCTION_LOG_MESSAGE_PG
#           cUserHistoryLog::AuctionPoint(SIG_AUCTION_LOG_MESSAGE_PG*)
# range [0x08685654, 0x08685837]
08685654 +0x000:  push   %ebp
08685655 +0x001:  mov    %esp,%ebp
08685657 +0x003:  push   %edi
08685658 +0x004:  push   %esi
08685659 +0x005:  push   %ebx
0868565a +0x006:  sub    $0x5c,%esp
0868565d +0x009:  mov    0xc(%ebp),%eax
08685660 +0x00c:  movzbl (%eax),%eax
08685663 +0x00f:  movzbl %al,%eax
08685666 +0x012:  cmp    $0x1,%eax
08685669 +0x015:  je     08685715 <+0xc1>
0868566f +0x01b:  cmp    $0x1,%eax
08685672 +0x01e:  jg     0868567d <+0x29>
08685674 +0x020:  test   %eax,%eax
08685676 +0x022:  je     08685694 <+0x40>
08685678 +0x024:  jmp    0868580e <+0x1ba>
0868567d +0x029:  cmp    $0x2,%eax
08685680 +0x02c:  je     08685796 <+0x142>
08685686 +0x032:  cmp    $0x3,%eax
08685689 +0x035:  je     086857d2 <+0x17e>
0868568f +0x03b:  jmp    0868580e <+0x1ba>
08685694 +0x040:  mov    0xc(%ebp),%eax
08685697 +0x043:  mov    0x1c(%eax),%ebx
0868569a +0x046:  mov    0xc(%ebp),%eax
0868569d +0x049:  movzwl 0x1a(%eax),%eax
086856a1 +0x04d:  movzwl %ax,%esi
086856a4 +0x050:  mov    0xc(%ebp),%eax
086856a7 +0x053:  mov    0x16(%eax),%eax
086856aa +0x056:  mov    %eax,-0x30(%ebp)
086856ad +0x059:  mov    0xc(%ebp),%eax
086856b0 +0x05c:  movzbl 0x15(%eax),%eax
086856b4 +0x060:  movzbl %al,%eax
086856b7 +0x063:  mov    %eax,-0x2c(%ebp)
086856ba +0x066:  mov    0xc(%ebp),%eax
086856bd +0x069:  mov    0x11(%eax),%eax
086856c0 +0x06c:  mov    %eax,-0x28(%ebp)
086856c3 +0x06f:  mov    0xc(%ebp),%eax
086856c6 +0x072:  mov    0x9(%eax),%edi
086856c9 +0x075:  mov    0xc(%ebp),%eax
086856cc +0x078:  mov    0x1(%eax),%edx
086856cf +0x07b:  mov    0x5(%eax),%ecx
086856d2 +0x07e:  mov    0x8(%ebp),%eax
086856d5 +0x081:  mov    (%eax),%eax
086856d7 +0x083:  mov    %ebx,0x24(%esp)
086856db +0x087:  mov    %esi,0x20(%esp)
086856df +0x08b:  mov    -0x30(%ebp),%ebx
086856e2 +0x08e:  mov    %ebx,0x1c(%esp)
086856e6 +0x092:  mov    -0x2c(%ebp),%ebx
086856e9 +0x095:  mov    %ebx,0x18(%esp)
086856ed +0x099:  mov    -0x28(%ebp),%ebx
086856f0 +0x09c:  mov    %ebx,0x14(%esp)
086856f4 +0x0a0:  mov    %edi,0x10(%esp)
086856f8 +0x0a4:  mov    %edx,0x8(%esp)
086856fc +0x0a8:  mov    %ecx,0xc(%esp)
08685700 +0x0ac:  movl   $"POINT_reg_s,%llu,%d,%u,%hhu,%d,%hu,%u",0x4(%esp)
08685708 +0x0b4:  mov    %eax,(%esp)
0868570b +0x0b7:  call   0867c8fe <_ZN5CUser10LogHistoryEPKcz>  ; CUser::LogHistory(char const*, ...)
08685710 +0x0bc:  jmp    08685830 <+0x1dc>
08685715 +0x0c1:  mov    0xc(%ebp),%eax
08685718 +0x0c4:  mov    0x1c(%eax),%ebx
0868571b +0x0c7:  mov    0xc(%ebp),%eax
0868571e +0x0ca:  movzwl 0x1a(%eax),%eax
08685722 +0x0ce:  movzwl %ax,%esi
08685725 +0x0d1:  mov    0xc(%ebp),%eax
08685728 +0x0d4:  mov    0x16(%eax),%eax
0868572b +0x0d7:  mov    %eax,-0x24(%ebp)
0868572e +0x0da:  mov    0xc(%ebp),%eax
08685731 +0x0dd:  movzbl 0x15(%eax),%eax
08685735 +0x0e1:  movzbl %al,%eax
08685738 +0x0e4:  mov    %eax,-0x20(%ebp)
0868573b +0x0e7:  mov    0xc(%ebp),%eax
0868573e +0x0ea:  mov    0x11(%eax),%eax
08685741 +0x0ed:  mov    %eax,-0x1c(%ebp)
08685744 +0x0f0:  mov    0xc(%ebp),%eax
08685747 +0x0f3:  mov    0x9(%eax),%edi
0868574a +0x0f6:  mov    0xc(%ebp),%eax
0868574d +0x0f9:  mov    0x1(%eax),%edx
08685750 +0x0fc:  mov    0x5(%eax),%ecx
08685753 +0x0ff:  mov    0x8(%ebp),%eax
08685756 +0x102:  mov    (%eax),%eax
08685758 +0x104:  mov    %ebx,0x24(%esp)
0868575c +0x108:  mov    %esi,0x20(%esp)
08685760 +0x10c:  mov    -0x24(%ebp),%ebx
08685763 +0x10f:  mov    %ebx,0x1c(%esp)
08685767 +0x113:  mov    -0x20(%ebp),%ebx
0868576a +0x116:  mov    %ebx,0x18(%esp)
0868576e +0x11a:  mov    -0x1c(%ebp),%ebx
08685771 +0x11d:  mov    %ebx,0x14(%esp)
08685775 +0x121:  mov    %edi,0x10(%esp)
08685779 +0x125:  mov    %edx,0x8(%esp)
0868577d +0x129:  mov    %ecx,0xc(%esp)
08685781 +0x12d:  movl   $"POINT_reg_f,%llu,%d,%u,%hhu,%d,%hu,%u",0x4(%esp)
08685789 +0x135:  mov    %eax,(%esp)
0868578c +0x138:  call   0867c8fe <_ZN5CUser10LogHistoryEPKcz>  ; CUser::LogHistory(char const*, ...)
08685791 +0x13d:  jmp    08685830 <+0x1dc>
08685796 +0x142:  mov    0xc(%ebp),%eax
08685799 +0x145:  mov    0xd(%eax),%esi
0868579c +0x148:  mov    0xc(%ebp),%eax
0868579f +0x14b:  mov    0x9(%eax),%ebx
086857a2 +0x14e:  mov    0xc(%ebp),%eax
086857a5 +0x151:  mov    0x5(%eax),%edx
086857a8 +0x154:  mov    0x1(%eax),%eax
086857ab +0x157:  mov    0x8(%ebp),%ecx
086857ae +0x15a:  mov    (%ecx),%ecx
086857b0 +0x15c:  mov    %esi,0x14(%esp)
086857b4 +0x160:  mov    %ebx,0x10(%esp)
086857b8 +0x164:  mov    %eax,0x8(%esp)
086857bc +0x168:  mov    %edx,0xc(%esp)
086857c0 +0x16c:  movl   $"POINT_bid_s,%llu,%d,%d",0x4(%esp)
086857c8 +0x174:  mov    %ecx,(%esp)
086857cb +0x177:  call   0867c8fe <_ZN5CUser10LogHistoryEPKcz>  ; CUser::LogHistory(char const*, ...)
086857d0 +0x17c:  jmp    08685830 <+0x1dc>
086857d2 +0x17e:  mov    0xc(%ebp),%eax
086857d5 +0x181:  mov    0xd(%eax),%esi
086857d8 +0x184:  mov    0xc(%ebp),%eax
086857db +0x187:  mov    0x9(%eax),%ebx
086857de +0x18a:  mov    0xc(%ebp),%eax
086857e1 +0x18d:  mov    0x5(%eax),%edx
086857e4 +0x190:  mov    0x1(%eax),%eax
086857e7 +0x193:  mov    0x8(%ebp),%ecx
086857ea +0x196:  mov    (%ecx),%ecx
086857ec +0x198:  mov    %esi,0x14(%esp)
086857f0 +0x19c:  mov    %ebx,0x10(%esp)
086857f4 +0x1a0:  mov    %eax,0x8(%esp)
086857f8 +0x1a4:  mov    %edx,0xc(%esp)
086857fc +0x1a8:  movl   $"POINT_bid_f,%llu,%d,%d",0x4(%esp)
08685804 +0x1b0:  mov    %ecx,(%esp)
08685807 +0x1b3:  call   0867c8fe <_ZN5CUser10LogHistoryEPKcz>  ; CUser::LogHistory(char const*, ...)
0868580c +0x1b8:  jmp    08685830 <+0x1dc>
0868580e +0x1ba:  mov    0xc(%ebp),%eax
08685811 +0x1bd:  movzbl (%eax),%eax
08685814 +0x1c0:  movzbl %al,%edx
08685817 +0x1c3:  mov    0x8(%ebp),%eax
0868581a +0x1c6:  mov    (%eax),%eax
0868581c +0x1c8:  mov    %edx,0x8(%esp)
08685820 +0x1cc:  movl   $"POINT_unknown,%d",0x4(%esp)
08685828 +0x1d4:  mov    %eax,(%esp)
0868582b +0x1d7:  call   0867c8fe <_ZN5CUser10LogHistoryEPKcz>  ; CUser::LogHistory(char const*, ...)
08685830 +0x1dc:  add    $0x5c,%esp
08685833 +0x1df:  pop    %ebx
08685834 +0x1e0:  pop    %esi
08685835 +0x1e1:  pop    %edi
08685836 +0x1e2:  pop    %ebp
08685837 +0x1e3:  ret
```

## 反编译 C

```c
// cUserHistoryLog::AuctionPoint @ 0x8685654

/* cUserHistoryLog::AuctionPoint(SIG_AUCTION_LOG_MESSAGE_PG*) */

void __thiscall
cUserHistoryLog::AuctionPoint(cUserHistoryLog *this,SIG_AUCTION_LOG_MESSAGE_PG *param_1)

{
  SIG_AUCTION_LOG_MESSAGE_PG SVar1;
  
  SVar1 = *param_1;
  if (SVar1 == (SIG_AUCTION_LOG_MESSAGE_PG)0x1) {
    CUser::LogHistory(*(CUser **)this,"POINT_reg_f,%llu,%d,%u,%hhu,%d,%hu,%u",
                      *(undefined4 *)(param_1 + 1),*(undefined4 *)(param_1 + 5),
                      *(undefined4 *)(param_1 + 9),*(undefined4 *)(param_1 + 0x11),
                      (uint)(byte)param_1[0x15],*(undefined4 *)(param_1 + 0x16),
                      (uint)*(ushort *)(param_1 + 0x1a),*(undefined4 *)(param_1 + 0x1c));
    return;
  }
  if ((byte)SVar1 < 2) {
    if (SVar1 == (SIG_AUCTION_LOG_MESSAGE_PG)0x0) {
      CUser::LogHistory(*(CUser **)this,"POINT_reg_s,%llu,%d,%u,%hhu,%d,%hu,%u",
                        *(undefined4 *)(param_1 + 1),*(undefined4 *)(param_1 + 5),
                        *(undefined4 *)(param_1 + 9),*(undefined4 *)(param_1 + 0x11),
                        (uint)(byte)param_1[0x15],*(undefined4 *)(param_1 + 0x16),
                        (uint)*(ushort *)(param_1 + 0x1a),*(undefined4 *)(param_1 + 0x1c));
      return;
    }
  }
  else {
    if (SVar1 == (SIG_AUCTION_LOG_MESSAGE_PG)0x2) {
      CUser::LogHistory(*(CUser **)this,"POINT_bid_s,%llu,%d,%d",*(undefined4 *)(param_1 + 1),
                        *(undefined4 *)(param_1 + 5),*(undefined4 *)(param_1 + 9),
                        *(undefined4 *)(param_1 + 0xd));
      return;
    }
    if (SVar1 == (SIG_AUCTION_LOG_MESSAGE_PG)0x3) {
      CUser::LogHistory(*(CUser **)this,"POINT_bid_f,%llu,%d,%d",*(undefined4 *)(param_1 + 1),
                        *(undefined4 *)(param_1 + 5),*(undefined4 *)(param_1 + 9),
                        *(undefined4 *)(param_1 + 0xd));
      return;
    }
  }
  CUser::LogHistory(*(CUser **)this,"POINT_unknown,%d",(uint)(byte)*param_1);
  return;
}
```
