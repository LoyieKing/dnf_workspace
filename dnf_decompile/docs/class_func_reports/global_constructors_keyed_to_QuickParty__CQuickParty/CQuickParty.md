# CQuickParty

`_GLOBAL__I__ZN10QuickParty11CQuickPartyC2Ev`

`global constructors keyed to QuickParty::CQuickParty::CQuickParty()`

| 类 | 地址 |
|---|---|
| `global constructors keyed to QuickParty::CQuickParty` | `0x0826b732` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0826b732  _GLOBAL__I__ZN10QuickParty11CQuickPartyC2Ev
#           global constructors keyed to QuickParty::CQuickParty::CQuickParty()
# range [0x0826b732, 0x0826d05b]
0826b732 +0x0000:  push   %ebp
0826b733 +0x0001:  mov    %esp,%ebp
0826b735 +0x0003:  sub    $0x18,%esp
0826b738 +0x0006:  movl   $0xffff,0x4(%esp)
0826b740 +0x000e:  movl   $0x1,(%esp)
0826b747 +0x0015:  call   0826b6f2 <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
0826b74c +0x001a:  leave
0826b74d +0x001b:  ret
0826b74e +0x001c:  push   %ebp
0826b74f +0x001d:  mov    %esp,%ebp
0826b751 +0x001f:  mov    0x8(%ebp),%eax
0826b754 +0x0022:  mov    0x10(%eax),%eax
0826b757 +0x0025:  pop    %ebp
0826b758 +0x0026:  ret
0826b759 +0x0027:  nop
0826b75a +0x0028:  push   %ebp
0826b75b +0x0029:  mov    %esp,%ebp
0826b75d +0x002b:  mov    0x8(%ebp),%eax
0826b760 +0x002e:  movzbl 0x14(%eax),%eax
0826b764 +0x0032:  pop    %ebp
0826b765 +0x0033:  ret
0826b766 +0x0034:  push   %ebp
0826b767 +0x0035:  mov    %esp,%ebp
0826b769 +0x0037:  sub    $0x4,%esp
0826b76c +0x003a:  mov    0xc(%ebp),%eax
0826b76f +0x003d:  mov    %al,-0x4(%ebp)
0826b772 +0x0040:  mov    0x8(%ebp),%eax
0826b775 +0x0043:  movzbl -0x4(%ebp),%edx
0826b779 +0x0047:  mov    %dl,0x14(%eax)
0826b77c +0x004a:  leave
0826b77d +0x004b:  ret
0826b77e +0x004c:  push   %ebp
0826b77f +0x004d:  mov    %esp,%ebp
0826b781 +0x004f:  sub    $0x4,%esp
0826b784 +0x0052:  mov    0xc(%ebp),%eax
0826b787 +0x0055:  mov    %ax,-0x4(%ebp)
0826b78b +0x0059:  mov    0x8(%ebp),%eax
0826b78e +0x005c:  movzwl -0x4(%ebp),%edx
0826b792 +0x0060:  mov    %dx,0x16(%eax)
0826b796 +0x0064:  leave
0826b797 +0x0065:  ret
0826b798 +0x0066:  push   %ebp
0826b799 +0x0067:  mov    %esp,%ebp
0826b79b +0x0069:  mov    0x8(%ebp),%eax
0826b79e +0x006c:  movzwl 0x16(%eax),%eax
0826b7a2 +0x0070:  pop    %ebp
0826b7a3 +0x0071:  ret
0826b7a4 +0x0072:  push   %ebp
0826b7a5 +0x0073:  mov    %esp,%ebp
0826b7a7 +0x0075:  mov    0xc(%ebp),%eax
0826b7aa +0x0078:  mov    %eax,%edx
0826b7ac +0x007a:  mov    0x8(%ebp),%eax
0826b7af +0x007d:  mov    %dl,0x18(%eax)
0826b7b2 +0x0080:  pop    %ebp
0826b7b3 +0x0081:  ret
0826b7b4 +0x0082:  push   %ebp
0826b7b5 +0x0083:  mov    %esp,%ebp
0826b7b7 +0x0085:  mov    0x8(%ebp),%eax
0826b7ba +0x0088:  movzbl 0x18(%eax),%eax
0826b7be +0x008c:  movsbl %al,%eax
0826b7c1 +0x008f:  pop    %ebp
0826b7c2 +0x0090:  ret
0826b7c3 +0x0091:  nop
0826b7c4 +0x0092:  push   %ebp
0826b7c5 +0x0093:  mov    %esp,%ebp
0826b7c7 +0x0095:  mov    0xc(%ebp),%eax
0826b7ca +0x0098:  mov    %eax,%edx
0826b7cc +0x009a:  mov    0x8(%ebp),%eax
0826b7cf +0x009d:  mov    %dl,0x19(%eax)
0826b7d2 +0x00a0:  pop    %ebp
0826b7d3 +0x00a1:  ret
0826b7d4 +0x00a2:  push   %ebp
0826b7d5 +0x00a3:  mov    %esp,%ebp
0826b7d7 +0x00a5:  mov    0x8(%ebp),%eax
0826b7da +0x00a8:  movzbl 0x19(%eax),%eax
0826b7de +0x00ac:  movsbl %al,%eax
0826b7e1 +0x00af:  pop    %ebp
0826b7e2 +0x00b0:  ret
0826b7e3 +0x00b1:  nop
0826b7e4 +0x00b2:  push   %ebp
0826b7e5 +0x00b3:  mov    %esp,%ebp
0826b7e7 +0x00b5:  mov    0x8(%ebp),%eax
0826b7ea +0x00b8:  movzbl 0x24(%eax),%eax
0826b7ee +0x00bc:  pop    %ebp
0826b7ef +0x00bd:  ret
0826b7f0 +0x00be:  push   %ebp
0826b7f1 +0x00bf:  mov    %esp,%ebp
0826b7f3 +0x00c1:  sub    $0x4,%esp
0826b7f6 +0x00c4:  mov    0xc(%ebp),%eax
0826b7f9 +0x00c7:  mov    %al,-0x4(%ebp)
0826b7fc +0x00ca:  mov    0x8(%ebp),%eax
0826b7ff +0x00cd:  movzbl -0x4(%ebp),%edx
0826b803 +0x00d1:  mov    %dl,0x24(%eax)
0826b806 +0x00d4:  leave
0826b807 +0x00d5:  ret
0826b808 +0x00d6:  push   %ebp
0826b809 +0x00d7:  mov    %esp,%ebp
0826b80b +0x00d9:  mov    0x8(%ebp),%eax
0826b80e +0x00dc:  movzwl (%eax),%edx
0826b811 +0x00df:  mov    0xc(%ebp),%eax
0826b814 +0x00e2:  movzwl (%eax),%eax
0826b817 +0x00e5:  cmp    %ax,%dx
0826b81a +0x00e8:  jge    0826b823 <+0xf1>
0826b81c +0x00ea:  mov    $0x1,%eax
0826b821 +0x00ef:  jmp    0826b852 <+0x120>
0826b823 +0x00f1:  mov    0x8(%ebp),%eax
0826b826 +0x00f4:  movzwl (%eax),%edx
0826b829 +0x00f7:  mov    0xc(%ebp),%eax
0826b82c +0x00fa:  movzwl (%eax),%eax
0826b82f +0x00fd:  cmp    %ax,%dx
0826b832 +0x0100:  jne    0826b84d <+0x11b>
0826b834 +0x0102:  mov    0x8(%ebp),%eax
0826b837 +0x0105:  movzbl 0x2(%eax),%edx
0826b83b +0x0109:  mov    0xc(%ebp),%eax
0826b83e +0x010c:  movzbl 0x2(%eax),%eax
0826b842 +0x0110:  cmp    %al,%dl
0826b844 +0x0112:  jge    0826b84d <+0x11b>
0826b846 +0x0114:  mov    $0x1,%eax
0826b84b +0x0119:  jmp    0826b852 <+0x120>
0826b84d +0x011b:  mov    $0x0,%eax
0826b852 +0x0120:  pop    %ebp
0826b853 +0x0121:  ret
0826b854 +0x0122:  push   %ebp
0826b855 +0x0123:  mov    %esp,%ebp
0826b857 +0x0125:  push   %edi
0826b858 +0x0126:  push   %esi
0826b859 +0x0127:  push   %ebx
0826b85a +0x0128:  sub    $0x2c,%esp
0826b85d +0x012b:  mov    0x8(%ebp),%ebx
0826b860 +0x012e:  mov    %ebx,%edi
0826b862 +0x0130:  mov    $0x3,%esi
0826b867 +0x0135:  jmp    0826b877 <+0x145>
0826b869 +0x0137:  mov    %edi,(%esp)
0826b86c +0x013a:  call   082357d6 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xae80>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xae80
0826b871 +0x013f:  add    $0x8,%edi
0826b874 +0x0142:  sub    $0x1,%esi
0826b877 +0x0145:  cmp    $0xffffffff,%esi
0826b87a +0x0148:  setne  %al
0826b87d +0x014b:  test   %al,%al
0826b87f +0x014d:  jne    0826b869 <+0x137>
0826b881 +0x014f:  jmp    0826b8b7 <+0x185>
0826b883 +0x0151:  mov    %edx,%edi
0826b885 +0x0153:  mov    %eax,-0x1c(%ebp)
0826b888 +0x0156:  test   %ebx,%ebx
0826b88a +0x0158:  je     0826b8aa <+0x178>
0826b88c +0x015a:  mov    $0x3,%eax
0826b891 +0x015f:  sub    %esi,%eax
0826b893 +0x0161:  shl    $0x3,%eax
0826b896 +0x0164:  lea    (%ebx,%eax,1),%esi
0826b899 +0x0167:  cmp    %ebx,%esi
0826b89b +0x0169:  je     0826b8aa <+0x178>
0826b89d +0x016b:  sub    $0x8,%esi
0826b8a0 +0x016e:  mov    %esi,(%esp)
0826b8a3 +0x0171:  call   0822ade8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x492>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x492
0826b8a8 +0x0176:  jmp    0826b899 <+0x167>
0826b8aa +0x0178:  mov    -0x1c(%ebp),%eax
0826b8ad +0x017b:  mov    %edi,%edx
0826b8af +0x017d:  mov    %eax,(%esp)
0826b8b2 +0x0180:  call   08ae3750 <_Unwind_Resume>
0826b8b7 +0x0185:  mov    0x8(%ebp),%eax
0826b8ba +0x0188:  mov    %eax,(%esp)
0826b8bd +0x018b:  call   082357b8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xae62>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xae62
0826b8c2 +0x0190:  mov    0x8(%ebp),%eax
0826b8c5 +0x0193:  add    $0x8,%eax
0826b8c8 +0x0196:  mov    %eax,(%esp)
0826b8cb +0x0199:  call   082357b8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xae62>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xae62
0826b8d0 +0x019e:  mov    0x8(%ebp),%eax
0826b8d3 +0x01a1:  add    $0x10,%eax
0826b8d6 +0x01a4:  mov    %eax,(%esp)
0826b8d9 +0x01a7:  call   082357b8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xae62>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xae62
0826b8de +0x01ac:  mov    0x8(%ebp),%eax
0826b8e1 +0x01af:  add    $0x18,%eax
0826b8e4 +0x01b2:  mov    %eax,(%esp)
0826b8e7 +0x01b5:  call   082357b8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xae62>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xae62
0826b8ec +0x01ba:  jmp    0826b91f <+0x1ed>
0826b8ee +0x01bc:  mov    %edx,%esi
0826b8f0 +0x01be:  mov    %eax,%edi
0826b8f2 +0x01c0:  mov    0x8(%ebp),%eax
0826b8f5 +0x01c3:  test   %eax,%eax
0826b8f7 +0x01c5:  je     0826b913 <+0x1e1>
0826b8f9 +0x01c7:  mov    0x8(%ebp),%eax
0826b8fc +0x01ca:  lea    0x20(%eax),%ebx
0826b8ff +0x01cd:  mov    0x8(%ebp),%eax
0826b902 +0x01d0:  cmp    %eax,%ebx
0826b904 +0x01d2:  je     0826b913 <+0x1e1>
0826b906 +0x01d4:  sub    $0x8,%ebx
0826b909 +0x01d7:  mov    %ebx,(%esp)
0826b90c +0x01da:  call   0822ade8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x492>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x492
0826b911 +0x01df:  jmp    0826b8ff <+0x1cd>
0826b913 +0x01e1:  mov    %edi,%eax
0826b915 +0x01e3:  mov    %esi,%edx
0826b917 +0x01e5:  mov    %eax,(%esp)
0826b91a +0x01e8:  call   08ae3750 <_Unwind_Resume>
0826b91f +0x01ed:  add    $0x2c,%esp
0826b922 +0x01f0:  pop    %ebx
0826b923 +0x01f1:  pop    %esi
0826b924 +0x01f2:  pop    %edi
0826b925 +0x01f3:  pop    %ebp
0826b926 +0x01f4:  ret
0826b927 +0x01f5:  nop
0826b928 +0x01f6:  push   %ebp
0826b929 +0x01f7:  mov    %esp,%ebp
0826b92b +0x01f9:  mov    0x8(%ebp),%eax
0826b92e +0x01fc:  movzbl 0x89f(%eax),%eax
0826b935 +0x0203:  pop    %ebp
0826b936 +0x0204:  ret
0826b937 +0x0205:  nop
0826b938 +0x0206:  push   %ebp
0826b939 +0x0207:  mov    %esp,%ebp
0826b93b +0x0209:  mov    0x8(%ebp),%eax
0826b93e +0x020c:  movzbl 0x38(%eax),%eax
0826b942 +0x0210:  pop    %ebp
0826b943 +0x0211:  ret
0826b944 +0x0212:  push   %ebp
0826b945 +0x0213:  mov    %esp,%ebp
0826b947 +0x0215:  mov    0x8(%ebp),%eax
0826b94a +0x0218:  movzbl 0x3a(%eax),%eax
0826b94e +0x021c:  pop    %ebp
0826b94f +0x021d:  ret
0826b950 +0x021e:  push   %ebp
0826b951 +0x021f:  mov    %esp,%ebp
0826b953 +0x0221:  mov    0x8(%ebp),%eax
0826b956 +0x0224:  movzbl 0x8fc(%eax),%eax
0826b95d +0x022b:  pop    %ebp
0826b95e +0x022c:  ret
0826b95f +0x022d:  nop
0826b960 +0x022e:  push   %ebp
0826b961 +0x022f:  mov    %esp,%ebp
0826b963 +0x0231:  sub    $0x4,%esp
0826b966 +0x0234:  mov    0xc(%ebp),%eax
0826b969 +0x0237:  mov    %al,-0x4(%ebp)
0826b96c +0x023a:  mov    0x8(%ebp),%eax
0826b96f +0x023d:  movzbl -0x4(%ebp),%edx
0826b973 +0x0241:  mov    %dl,0x69(%eax)
0826b976 +0x0244:  leave
0826b977 +0x0245:  ret
0826b978 +0x0246:  push   %ebp
0826b979 +0x0247:  mov    %esp,%ebp
0826b97b +0x0249:  sub    $0x4,%esp
0826b97e +0x024c:  mov    0xc(%ebp),%eax
0826b981 +0x024f:  mov    %al,-0x4(%ebp)
0826b984 +0x0252:  mov    0x8(%ebp),%eax
0826b987 +0x0255:  movzbl -0x4(%ebp),%edx
0826b98b +0x0259:  mov    %dl,0x6a(%eax)
0826b98e +0x025c:  leave
0826b98f +0x025d:  ret
0826b990 +0x025e:  push   %ebp
0826b991 +0x025f:  mov    %esp,%ebp
0826b993 +0x0261:  sub    $0x4,%esp
0826b996 +0x0264:  mov    0xc(%ebp),%eax
0826b999 +0x0267:  mov    %al,-0x4(%ebp)
0826b99c +0x026a:  mov    0x8(%ebp),%eax
0826b99f +0x026d:  movzbl -0x4(%ebp),%edx
0826b9a3 +0x0271:  mov    %dl,0x13c(%eax)
0826b9a9 +0x0277:  leave
0826b9aa +0x0278:  ret
0826b9ab +0x0279:  nop
0826b9ac +0x027a:  push   %ebp
0826b9ad +0x027b:  mov    %esp,%ebp
0826b9af +0x027d:  mov    0x8(%ebp),%eax
0826b9b2 +0x0280:  mov    0xc(%ebp),%edx
0826b9b5 +0x0283:  mov    %edx,0x1ae0(%eax)
0826b9bb +0x0289:  pop    %ebp
0826b9bc +0x028a:  ret
0826b9bd +0x028b:  nop
0826b9be +0x028c:  push   %ebp
0826b9bf +0x028d:  mov    %esp,%ebp
0826b9c1 +0x028f:  sub    $0x18,%esp
0826b9c4 +0x0292:  mov    0x8(%ebp),%eax
0826b9c7 +0x0295:  mov    %eax,(%esp)
0826b9ca +0x0298:  call   0826ba9c <+0x36a>
0826b9cf +0x029d:  leave
0826b9d0 +0x029e:  ret
0826b9d1 +0x029f:  nop
0826b9d2 +0x02a0:  push   %ebp
0826b9d3 +0x02a1:  mov    %esp,%ebp
0826b9d5 +0x02a3:  push   %ebx
0826b9d6 +0x02a4:  sub    $0x14,%esp
0826b9d9 +0x02a7:  mov    0x8(%ebp),%eax
0826b9dc +0x02aa:  test   %eax,%eax
0826b9de +0x02ac:  je     0826b9fa <+0x2c8>
0826b9e0 +0x02ae:  mov    0x8(%ebp),%eax
0826b9e3 +0x02b1:  lea    0x20(%eax),%ebx
0826b9e6 +0x02b4:  mov    0x8(%ebp),%eax
0826b9e9 +0x02b7:  cmp    %eax,%ebx
0826b9eb +0x02b9:  je     0826b9fa <+0x2c8>
0826b9ed +0x02bb:  sub    $0x8,%ebx
0826b9f0 +0x02be:  mov    %ebx,(%esp)
0826b9f3 +0x02c1:  call   0822ade8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x492>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x492
0826b9f8 +0x02c6:  jmp    0826b9e6 <+0x2b4>
0826b9fa +0x02c8:  add    $0x14,%esp
0826b9fd +0x02cb:  pop    %ebx
0826b9fe +0x02cc:  pop    %ebp
0826b9ff +0x02cd:  ret
0826ba00 +0x02ce:  push   %ebp
0826ba01 +0x02cf:  mov    %esp,%ebp
0826ba03 +0x02d1:  sub    $0x18,%esp
0826ba06 +0x02d4:  mov    0x8(%ebp),%eax
0826ba09 +0x02d7:  add    $0x4,%eax
0826ba0c +0x02da:  mov    %eax,(%esp)
0826ba0f +0x02dd:  call   0826b9d2 <+0x2a0>
0826ba14 +0x02e2:  leave
0826ba15 +0x02e3:  ret
0826ba16 +0x02e4:  push   %ebp
0826ba17 +0x02e5:  mov    %esp,%ebp
0826ba19 +0x02e7:  sub    $0x18,%esp
0826ba1c +0x02ea:  mov    0x8(%ebp),%eax
0826ba1f +0x02ed:  add    $0x4,%eax
0826ba22 +0x02f0:  mov    %eax,(%esp)
0826ba25 +0x02f3:  call   0826b9d2 <+0x2a0>
0826ba2a +0x02f8:  leave
0826ba2b +0x02f9:  ret
0826ba2c +0x02fa:  push   %ebp
0826ba2d +0x02fb:  mov    %esp,%ebp
0826ba2f +0x02fd:  sub    $0x18,%esp
0826ba32 +0x0300:  mov    0x8(%ebp),%eax
0826ba35 +0x0303:  mov    %eax,(%esp)
0826ba38 +0x0306:  call   0826be40 <+0x70e>
0826ba3d +0x030b:  leave
0826ba3e +0x030c:  ret
0826ba3f +0x030d:  nop
0826ba40 +0x030e:  push   %ebp
0826ba41 +0x030f:  mov    %esp,%ebp
0826ba43 +0x0311:  mov    $0x12c,%eax
0826ba48 +0x0316:  pop    %ebp
0826ba49 +0x0317:  ret
0826ba4a +0x0318:  push   %ebp
0826ba4b +0x0319:  mov    %esp,%ebp
0826ba4d +0x031b:  sub    $0x18,%esp
0826ba50 +0x031e:  mov    0x8(%ebp),%eax
0826ba53 +0x0321:  add    $0x4,%eax
0826ba56 +0x0324:  mov    %eax,(%esp)
0826ba59 +0x0327:  call   0826bf02 <+0x7d0>
0826ba5e +0x032c:  leave
0826ba5f +0x032d:  ret
0826ba60 +0x032e:  push   %ebp
0826ba61 +0x032f:  mov    %esp,%ebp
0826ba63 +0x0331:  sub    $0x18,%esp
0826ba66 +0x0334:  mov    0x8(%ebp),%eax
0826ba69 +0x0337:  mov    %eax,(%esp)
0826ba6c +0x033a:  call   0826bf16 <+0x7e4>
0826ba71 +0x033f:  leave
0826ba72 +0x0340:  ret
0826ba73 +0x0341:  nop
0826ba74 +0x0342:  push   %ebp
0826ba75 +0x0343:  mov    %esp,%ebp
0826ba77 +0x0345:  sub    $0x18,%esp
0826ba7a +0x0348:  mov    0x8(%ebp),%eax
0826ba7d +0x034b:  mov    %eax,(%esp)
0826ba80 +0x034e:  call   0826bf22 <+0x7f0>
0826ba85 +0x0353:  leave
0826ba86 +0x0354:  ret
0826ba87 +0x0355:  nop
0826ba88 +0x0356:  push   %ebp
0826ba89 +0x0357:  mov    %esp,%ebp
0826ba8b +0x0359:  sub    $0x18,%esp
0826ba8e +0x035c:  mov    0x8(%ebp),%eax
0826ba91 +0x035f:  mov    %eax,(%esp)
0826ba94 +0x0362:  call   0826bf36 <+0x804>
0826ba99 +0x0367:  leave
0826ba9a +0x0368:  ret
0826ba9b +0x0369:  nop
0826ba9c +0x036a:  push   %ebp
0826ba9d +0x036b:  mov    %esp,%ebp
0826ba9f +0x036d:  push   %esi
0826baa0 +0x036e:  push   %ebx
0826baa1 +0x036f:  sub    $0x10,%esp
0826baa4 +0x0372:  mov    0x8(%ebp),%eax
0826baa7 +0x0375:  mov    %eax,(%esp)
0826baaa +0x0378:  call   0826bfa0 <+0x86e>
0826baaf +0x037d:  mov    %eax,0x4(%esp)
0826bab3 +0x0381:  mov    0x8(%ebp),%eax
0826bab6 +0x0384:  mov    %eax,(%esp)
0826bab9 +0x0387:  call   0826bf4a <+0x818>
0826babe +0x038c:  jmp    0826badb <+0x3a9>
0826bac0 +0x038e:  mov    %edx,%ebx
0826bac2 +0x0390:  mov    %eax,%esi
0826bac4 +0x0392:  mov    0x8(%ebp),%eax
0826bac7 +0x0395:  mov    %eax,(%esp)
0826baca +0x0398:  call   0826ba88 <+0x356>
0826bacf +0x039d:  mov    %esi,%eax
0826bad1 +0x039f:  mov    %ebx,%edx
0826bad3 +0x03a1:  mov    %eax,(%esp)
0826bad6 +0x03a4:  call   08ae3750 <_Unwind_Resume>
0826badb +0x03a9:  mov    0x8(%ebp),%eax
0826bade +0x03ac:  mov    %eax,(%esp)
0826bae1 +0x03af:  call   0826ba88 <+0x356>
0826bae6 +0x03b4:  add    $0x10,%esp
0826bae9 +0x03b7:  pop    %ebx
0826baea +0x03b8:  pop    %esi
0826baeb +0x03b9:  pop    %ebp
0826baec +0x03ba:  ret
0826baed +0x03bb:  nop
0826baee +0x03bc:  push   %ebp
0826baef +0x03bd:  mov    %esp,%ebp
0826baf1 +0x03bf:  sub    $0x18,%esp
0826baf4 +0x03c2:  mov    0x8(%ebp),%eax
0826baf7 +0x03c5:  mov    %eax,(%esp)
0826bafa +0x03c8:  call   0826bfac <+0x87a>
0826baff +0x03cd:  leave
0826bb00 +0x03ce:  ret
0826bb01 +0x03cf:  push   %ebp
0826bb02 +0x03d0:  mov    %esp,%ebp
0826bb04 +0x03d2:  push   %edi
0826bb05 +0x03d3:  push   %esi
0826bb06 +0x03d4:  push   %ebx
0826bb07 +0x03d5:  sub    $0x1c,%esp
0826bb0a +0x03d8:  mov    0x8(%ebp),%ebx
0826bb0d +0x03db:  mov    %ebx,%edi
0826bb0f +0x03dd:  mov    0x10(%ebp),%eax
0826bb12 +0x03e0:  mov    %eax,(%esp)
0826bb15 +0x03e3:  call   0826c02a <+0x8f8>
0826bb1a +0x03e8:  mov    %eax,%esi
0826bb1c +0x03ea:  mov    0xc(%ebp),%eax
0826bb1f +0x03ed:  mov    %eax,(%esp)
0826bb22 +0x03f0:  call   0826c022 <+0x8f0>
0826bb27 +0x03f5:  mov    %esi,0x8(%esp)
0826bb2b +0x03f9:  mov    %eax,0x4(%esp)
0826bb2f +0x03fd:  mov    %edi,(%esp)
0826bb32 +0x0400:  call   0826c032 <+0x900>
0826bb37 +0x0405:  mov    %ebx,%eax
0826bb39 +0x0407:  mov    %ebx,%eax
0826bb3b +0x0409:  add    $0x1c,%esp
0826bb3e +0x040c:  pop    %ebx
0826bb3f +0x040d:  pop    %esi
0826bb40 +0x040e:  pop    %edi
0826bb41 +0x040f:  pop    %ebp
0826bb42 +0x0410:  ret    $0x4
0826bb45 +0x0413:  nop
0826bb46 +0x0414:  push   %ebp
0826bb47 +0x0415:  mov    %esp,%ebp
0826bb49 +0x0417:  push   %edi
0826bb4a +0x0418:  push   %esi
0826bb4b +0x0419:  push   %ebx
0826bb4c +0x041a:  sub    $0x2c,%esp
0826bb4f +0x041d:  mov    0x8(%ebp),%ebx
0826bb52 +0x0420:  mov    %ebx,-0x20(%ebp)
0826bb55 +0x0423:  mov    $0x3,%esi
0826bb5a +0x0428:  mov    0xc(%ebp),%edi
0826bb5d +0x042b:  jmp    0826bb78 <+0x446>
0826bb5f +0x042d:  mov    %edi,0x4(%esp)
0826bb63 +0x0431:  mov    -0x20(%ebp),%eax
0826bb66 +0x0434:  mov    %eax,(%esp)
0826bb69 +0x0437:  call   0826c07a <+0x948>
0826bb6e +0x043c:  addl   $0x8,-0x20(%ebp)
0826bb72 +0x0440:  add    $0x8,%edi
0826bb75 +0x0443:  sub    $0x1,%esi
0826bb78 +0x0446:  cmp    $0xffffffff,%esi
0826bb7b +0x0449:  setne  %al
0826bb7e +0x044c:  test   %al,%al
0826bb80 +0x044e:  jne    0826bb5f <+0x42d>
0826bb82 +0x0450:  jmp    0826bbb8 <+0x486>
0826bb84 +0x0452:  mov    %edx,%edi
0826bb86 +0x0454:  mov    %eax,-0x1c(%ebp)
0826bb89 +0x0457:  test   %ebx,%ebx
0826bb8b +0x0459:  je     0826bbab <+0x479>
0826bb8d +0x045b:  mov    $0x3,%eax
0826bb92 +0x0460:  sub    %esi,%eax
0826bb94 +0x0462:  shl    $0x3,%eax
0826bb97 +0x0465:  lea    (%ebx,%eax,1),%esi
0826bb9a +0x0468:  cmp    %ebx,%esi
0826bb9c +0x046a:  je     0826bbab <+0x479>
0826bb9e +0x046c:  sub    $0x8,%esi
0826bba1 +0x046f:  mov    %esi,(%esp)
0826bba4 +0x0472:  call   0822ade8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x492>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x492
0826bba9 +0x0477:  jmp    0826bb9a <+0x468>
0826bbab +0x0479:  mov    -0x1c(%ebp),%eax
0826bbae +0x047c:  mov    %edi,%edx
0826bbb0 +0x047e:  mov    %eax,(%esp)
0826bbb3 +0x0481:  call   08ae3750 <_Unwind_Resume>
0826bbb8 +0x0486:  add    $0x2c,%esp
0826bbbb +0x0489:  pop    %ebx
0826bbbc +0x048a:  pop    %esi
0826bbbd +0x048b:  pop    %edi
0826bbbe +0x048c:  pop    %ebp
0826bbbf +0x048d:  ret
0826bbc0 +0x048e:  push   %ebp
0826bbc1 +0x048f:  mov    %esp,%ebp
0826bbc3 +0x0491:  push   %ebx
0826bbc4 +0x0492:  sub    $0x14,%esp
0826bbc7 +0x0495:  mov    0x8(%ebp),%ebx
0826bbca +0x0498:  mov    0xc(%ebp),%eax
0826bbcd +0x049b:  mov    %eax,(%esp)
0826bbd0 +0x049e:  call   0826c069 <+0x937>
0826bbd5 +0x04a3:  mov    (%eax),%eax
0826bbd7 +0x04a5:  mov    %eax,(%ebx)
0826bbd9 +0x04a7:  mov    0xc(%ebp),%eax
0826bbdc +0x04aa:  add    $0x4,%eax
0826bbdf +0x04ad:  mov    %eax,(%esp)
0826bbe2 +0x04b0:  call   0826c071 <+0x93f>
0826bbe7 +0x04b5:  mov    0x8(%ebp),%edx
0826bbea +0x04b8:  add    $0x4,%edx
0826bbed +0x04bb:  mov    %eax,0x4(%esp)
0826bbf1 +0x04bf:  mov    %edx,(%esp)
0826bbf4 +0x04c2:  call   0826bb46 <+0x414>
0826bbf9 +0x04c7:  add    $0x14,%esp
0826bbfc +0x04ca:  pop    %ebx
0826bbfd +0x04cb:  pop    %ebp
0826bbfe +0x04cc:  ret
0826bbff +0x04cd:  nop
0826bc00 +0x04ce:  push   %ebp
0826bc01 +0x04cf:  mov    %esp,%ebp
0826bc03 +0x04d1:  push   %ebx
0826bc04 +0x04d2:  sub    $0x14,%esp
0826bc07 +0x04d5:  mov    0x8(%ebp),%ebx
0826bc0a +0x04d8:  mov    0xc(%ebp),%eax
0826bc0d +0x04db:  mov    0x10(%ebp),%edx
0826bc10 +0x04de:  mov    %edx,0x8(%esp)
0826bc14 +0x04e2:  mov    %eax,0x4(%esp)
0826bc18 +0x04e6:  mov    %ebx,(%esp)
0826bc1b +0x04e9:  call   0826c144 <+0xa12>
0826bc20 +0x04ee:  sub    $0x4,%esp
0826bc23 +0x04f1:  mov    %ebx,%eax
0826bc25 +0x04f3:  mov    -0x4(%ebp),%ebx
0826bc28 +0x04f6:  leave
0826bc29 +0x04f7:  ret    $0x4
0826bc2c +0x04fa:  push   %ebp
0826bc2d +0x04fb:  mov    %esp,%ebp
0826bc2f +0x04fd:  push   %ebx
0826bc30 +0x04fe:  sub    $0x14,%esp
0826bc33 +0x0501:  mov    0x8(%ebp),%ebx
0826bc36 +0x0504:  mov    0xc(%ebp),%eax
0826bc39 +0x0507:  mov    0x10(%ebp),%edx
0826bc3c +0x050a:  mov    %edx,0x8(%esp)
0826bc40 +0x050e:  mov    %eax,0x4(%esp)
0826bc44 +0x0512:  mov    %ebx,(%esp)
0826bc47 +0x0515:  call   0826c314 <+0xbe2>
0826bc4c +0x051a:  sub    $0x4,%esp
0826bc4f +0x051d:  mov    %ebx,%eax
0826bc51 +0x051f:  mov    -0x4(%ebp),%ebx
0826bc54 +0x0522:  leave
0826bc55 +0x0523:  ret    $0x4
0826bc58 +0x0526:  push   %ebp
0826bc59 +0x0527:  mov    %esp,%ebp
0826bc5b +0x0529:  push   %ebx
0826bc5c +0x052a:  sub    $0x14,%esp
0826bc5f +0x052d:  mov    0x8(%ebp),%ebx
0826bc62 +0x0530:  mov    0xc(%ebp),%eax
0826bc65 +0x0533:  mov    %eax,0x4(%esp)
0826bc69 +0x0537:  mov    %ebx,(%esp)
0826bc6c +0x053a:  call   0826c3d2 <+0xca0>
0826bc71 +0x053f:  sub    $0x4,%esp
0826bc74 +0x0542:  mov    %ebx,%eax
0826bc76 +0x0544:  mov    -0x4(%ebp),%ebx
0826bc79 +0x0547:  leave
0826bc7a +0x0548:  ret    $0x4
0826bc7d +0x054b:  nop
0826bc7e +0x054c:  push   %ebp
0826bc7f +0x054d:  mov    %esp,%ebp
0826bc81 +0x054f:  mov    0x8(%ebp),%eax
0826bc84 +0x0552:  mov    (%eax),%edx
0826bc86 +0x0554:  mov    0xc(%ebp),%eax
0826bc89 +0x0557:  mov    (%eax),%eax
0826bc8b +0x0559:  cmp    %eax,%edx
0826bc8d +0x055b:  setne  %al
0826bc90 +0x055e:  pop    %ebp
0826bc91 +0x055f:  ret
0826bc92 +0x0560:  push   %ebp
0826bc93 +0x0561:  mov    %esp,%ebp
0826bc95 +0x0563:  mov    0x8(%ebp),%eax
0826bc98 +0x0566:  mov    (%eax),%eax
0826bc9a +0x0568:  add    $0x10,%eax
0826bc9d +0x056b:  pop    %ebp
0826bc9e +0x056c:  ret
0826bc9f +0x056d:  nop
0826bca0 +0x056e:  push   %ebp
0826bca1 +0x056f:  mov    %esp,%ebp
0826bca3 +0x0571:  sub    $0x28,%esp
0826bca6 +0x0574:  lea    -0xc(%ebp),%eax
0826bca9 +0x0577:  mov    0x8(%ebp),%edx
0826bcac +0x057a:  mov    %edx,0x4(%esp)
0826bcb0 +0x057e:  mov    %eax,(%esp)
0826bcb3 +0x0581:  call   082373c8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xca72>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xca72
0826bcb8 +0x0586:  sub    $0x4,%esp
0826bcbb +0x0589:  lea    -0xc(%ebp),%eax
0826bcbe +0x058c:  mov    %eax,(%esp)
0826bcc1 +0x058f:  call   0823742a <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xcad4>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xcad4
0826bcc6 +0x0594:  leave
0826bcc7 +0x0595:  ret
0826bcc8 +0x0596:  push   %ebp
0826bcc9 +0x0597:  mov    %esp,%ebp
0826bccb +0x0599:  sub    $0x28,%esp
0826bcce +0x059c:  lea    -0xc(%ebp),%eax
0826bcd1 +0x059f:  mov    0x8(%ebp),%edx
0826bcd4 +0x05a2:  mov    %edx,0x4(%esp)
0826bcd8 +0x05a6:  mov    %eax,(%esp)
0826bcdb +0x05a9:  call   082373c8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xca72>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xca72
0826bce0 +0x05ae:  sub    $0x4,%esp
0826bce3 +0x05b1:  mov    -0xc(%ebp),%eax
0826bce6 +0x05b4:  mov    %eax,0x4(%esp)
0826bcea +0x05b8:  mov    0x8(%ebp),%eax
0826bced +0x05bb:  mov    %eax,(%esp)
0826bcf0 +0x05be:  call   0826c3f8 <+0xcc6>
0826bcf5 +0x05c3:  leave
0826bcf6 +0x05c4:  ret
0826bcf7 +0x05c5:  nop
0826bcf8 +0x05c6:  push   %ebp
0826bcf9 +0x05c7:  mov    %esp,%ebp
0826bcfb +0x05c9:  sub    $0x28,%esp
0826bcfe +0x05cc:  lea    -0xc(%ebp),%eax
0826bd01 +0x05cf:  mov    0x8(%ebp),%edx
0826bd04 +0x05d2:  mov    %edx,0x4(%esp)
0826bd08 +0x05d6:  mov    %eax,(%esp)
0826bd0b +0x05d9:  call   082373c8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xca72>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xca72
0826bd10 +0x05de:  sub    $0x4,%esp
0826bd13 +0x05e1:  lea    -0x10(%ebp),%eax
0826bd16 +0x05e4:  mov    0x8(%ebp),%edx
0826bd19 +0x05e7:  mov    %edx,0x4(%esp)
0826bd1d +0x05eb:  mov    %eax,(%esp)
0826bd20 +0x05ee:  call   0826c43e <+0xd0c>
0826bd25 +0x05f3:  sub    $0x4,%esp
0826bd28 +0x05f6:  mov    -0x10(%ebp),%eax
0826bd2b +0x05f9:  mov    %eax,-0x14(%ebp)
0826bd2e +0x05fc:  jmp    0826bd91 <+0x65f>
0826bd30 +0x05fe:  mov    -0xc(%ebp),%eax
0826bd33 +0x0601:  mov    %eax,-0x18(%ebp)
0826bd36 +0x0604:  lea    -0x18(%ebp),%eax
0826bd39 +0x0607:  mov    %eax,(%esp)
0826bd3c +0x060a:  call   0823d3de <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+&_ZL14gUnicodeBuffer+0x855c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+&_ZL14gUnicodeBuffer+0x855c
0826bd41 +0x060f:  lea    -0xc(%ebp),%eax
0826bd44 +0x0612:  mov    %eax,(%esp)
0826bd47 +0x0615:  call   0823742a <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xcad4>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xcad4
0826bd4c +0x061a:  mov    (%eax),%edx
0826bd4e +0x061c:  mov    0xc(%ebp),%eax
0826bd51 +0x061f:  mov    (%eax),%eax
0826bd53 +0x0621:  cmp    %eax,%edx
0826bd55 +0x0623:  sete   %al
0826bd58 +0x0626:  test   %al,%al
0826bd5a +0x0628:  je     0826bd8b <+0x659>
0826bd5c +0x062a:  lea    -0xc(%ebp),%eax
0826bd5f +0x062d:  mov    %eax,(%esp)
0826bd62 +0x0630:  call   0823742a <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xcad4>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xcad4
0826bd67 +0x0635:  cmp    0xc(%ebp),%eax
0826bd6a +0x0638:  setne  %al
0826bd6d +0x063b:  test   %al,%al
0826bd6f +0x063d:  je     0826bd85 <+0x653>
0826bd71 +0x063f:  mov    -0xc(%ebp),%eax
0826bd74 +0x0642:  mov    %eax,0x4(%esp)
0826bd78 +0x0646:  mov    0x8(%ebp),%eax
0826bd7b +0x0649:  mov    %eax,(%esp)
0826bd7e +0x064c:  call   0826c3f8 <+0xcc6>
0826bd83 +0x0651:  jmp    0826bd8b <+0x659>
0826bd85 +0x0653:  mov    -0xc(%ebp),%eax
0826bd88 +0x0656:  mov    %eax,-0x14(%ebp)
0826bd8b +0x0659:  mov    -0x18(%ebp),%eax
0826bd8e +0x065c:  mov    %eax,-0xc(%ebp)
0826bd91 +0x065f:  lea    -0x10(%ebp),%eax
0826bd94 +0x0662:  mov    %eax,0x4(%esp)
0826bd98 +0x0666:  lea    -0xc(%ebp),%eax
0826bd9b +0x0669:  mov    %eax,(%esp)
0826bd9e +0x066c:  call   0826c462 <+0xd30>
0826bda3 +0x0671:  test   %al,%al
0826bda5 +0x0673:  jne    0826bd30 <+0x5fe>
0826bda7 +0x0675:  lea    -0x10(%ebp),%eax
0826bdaa +0x0678:  mov    %eax,0x4(%esp)
0826bdae +0x067c:  lea    -0x14(%ebp),%eax
0826bdb1 +0x067f:  mov    %eax,(%esp)
0826bdb4 +0x0682:  call   0826c462 <+0xd30>
0826bdb9 +0x0687:  test   %al,%al
0826bdbb +0x0689:  je     0826bdcf <+0x69d>
0826bdbd +0x068b:  mov    -0x14(%ebp),%eax
0826bdc0 +0x068e:  mov    %eax,0x4(%esp)
0826bdc4 +0x0692:  mov    0x8(%ebp),%eax
0826bdc7 +0x0695:  mov    %eax,(%esp)
0826bdca +0x0698:  call   0826c3f8 <+0xcc6>
0826bdcf +0x069d:  leave
0826bdd0 +0x069e:  ret
0826bdd1 +0x069f:  nop
0826bdd2 +0x06a0:  push   %ebp
0826bdd3 +0x06a1:  mov    %esp,%ebp
0826bdd5 +0x06a3:  sub    $0x28,%esp
0826bdd8 +0x06a6:  mov    0xc(%ebp),%eax
0826bddb +0x06a9:  mov    %eax,(%esp)
0826bdde +0x06ac:  call   0808102a <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x1050>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x1050
0826bde3 +0x06b1:  mov    (%eax),%eax
0826bde5 +0x06b3:  mov    %eax,-0x10(%ebp)
0826bde8 +0x06b6:  lea    -0xc(%ebp),%eax
0826bdeb +0x06b9:  mov    0x8(%ebp),%edx
0826bdee +0x06bc:  mov    %edx,0x4(%esp)
0826bdf2 +0x06c0:  mov    %eax,(%esp)
0826bdf5 +0x06c3:  call   0826c43e <+0xd0c>
0826bdfa +0x06c8:  sub    $0x4,%esp
0826bdfd +0x06cb:  lea    -0x10(%ebp),%eax
0826be00 +0x06ce:  mov    %eax,0x8(%esp)
0826be04 +0x06d2:  mov    -0xc(%ebp),%eax
0826be07 +0x06d5:  mov    %eax,0x4(%esp)
0826be0b +0x06d9:  mov    0x8(%ebp),%eax
0826be0e +0x06dc:  mov    %eax,(%esp)
0826be11 +0x06df:  call   0826c476 <+0xd44>
0826be16 +0x06e4:  leave
0826be17 +0x06e5:  ret
0826be18 +0x06e6:  push   %ebp
0826be19 +0x06e7:  mov    %esp,%ebp
0826be1b +0x06e9:  sub    $0x18,%esp
0826be1e +0x06ec:  mov    0x8(%ebp),%eax
0826be21 +0x06ef:  mov    %eax,(%esp)
0826be24 +0x06f2:  call   0826c4b6 <+0xd84>
0826be29 +0x06f7:  leave
0826be2a +0x06f8:  ret
0826be2b +0x06f9:  nop
0826be2c +0x06fa:  push   %ebp
0826be2d +0x06fb:  mov    %esp,%ebp
0826be2f +0x06fd:  sub    $0x18,%esp
0826be32 +0x0700:  mov    0x8(%ebp),%eax
0826be35 +0x0703:  mov    %eax,(%esp)
0826be38 +0x0706:  call   0826c4d4 <+0xda2>
0826be3d +0x070b:  leave
0826be3e +0x070c:  ret
0826be3f +0x070d:  nop
0826be40 +0x070e:  push   %ebp
0826be41 +0x070f:  mov    %esp,%ebp
0826be43 +0x0711:  push   %esi
0826be44 +0x0712:  push   %ebx
0826be45 +0x0713:  sub    $0x10,%esp
0826be48 +0x0716:  mov    0x8(%ebp),%eax
0826be4b +0x0719:  mov    %eax,(%esp)
0826be4e +0x071c:  call   0826c4e8 <+0xdb6>
0826be53 +0x0721:  jmp    0826be70 <+0x73e>
0826be55 +0x0723:  mov    %edx,%ebx
0826be57 +0x0725:  mov    %eax,%esi
0826be59 +0x0727:  mov    0x8(%ebp),%eax
0826be5c +0x072a:  mov    %eax,(%esp)
0826be5f +0x072d:  call   0826be2c <+0x6fa>
0826be64 +0x0732:  mov    %esi,%eax
0826be66 +0x0734:  mov    %ebx,%edx
0826be68 +0x0736:  mov    %eax,(%esp)
0826be6b +0x0739:  call   08ae3750 <_Unwind_Resume>
0826be70 +0x073e:  mov    0x8(%ebp),%eax
0826be73 +0x0741:  mov    %eax,(%esp)
0826be76 +0x0744:  call   0826be2c <+0x6fa>
0826be7b +0x0749:  add    $0x10,%esp
0826be7e +0x074c:  pop    %ebx
0826be7f +0x074d:  pop    %esi
0826be80 +0x074e:  pop    %ebp
0826be81 +0x074f:  ret
0826be82 +0x0750:  push   %ebp
0826be83 +0x0751:  mov    %esp,%ebp
0826be85 +0x0753:  push   %ebx
0826be86 +0x0754:  sub    $0x14,%esp
0826be89 +0x0757:  mov    0x8(%ebp),%ebx
0826be8c +0x075a:  mov    0xc(%ebp),%eax
0826be8f +0x075d:  mov    (%eax),%eax
0826be91 +0x075f:  mov    %eax,0x4(%esp)
0826be95 +0x0763:  mov    %ebx,(%esp)
0826be98 +0x0766:  call   0826c544 <+0xe12>
0826be9d +0x076b:  mov    %ebx,%eax
0826be9f +0x076d:  add    $0x14,%esp
0826bea2 +0x0770:  pop    %ebx
0826bea3 +0x0771:  pop    %ebp
0826bea4 +0x0772:  ret    $0x4
0826bea7 +0x0775:  nop
0826bea8 +0x0776:  push   %ebp
0826bea9 +0x0777:  mov    %esp,%ebp
0826beab +0x0779:  push   %ebx
0826beac +0x077a:  sub    $0x14,%esp
0826beaf +0x077d:  mov    0x8(%ebp),%ebx
0826beb2 +0x0780:  mov    0xc(%ebp),%eax
0826beb5 +0x0783:  mov    %eax,0x4(%esp)
0826beb9 +0x0787:  mov    %ebx,(%esp)
0826bebc +0x078a:  call   0826c544 <+0xe12>
0826bec1 +0x078f:  mov    %ebx,%eax
0826bec3 +0x0791:  add    $0x14,%esp
0826bec6 +0x0794:  pop    %ebx
0826bec7 +0x0795:  pop    %ebp
0826bec8 +0x0796:  ret    $0x4
0826becb +0x0799:  nop
0826becc +0x079a:  push   %ebp
0826becd +0x079b:  mov    %esp,%ebp
0826becf +0x079d:  mov    0x8(%ebp),%eax
0826bed2 +0x07a0:  mov    (%eax),%edx
0826bed4 +0x07a2:  mov    0xc(%ebp),%eax
0826bed7 +0x07a5:  mov    (%eax),%eax
0826bed9 +0x07a7:  cmp    %eax,%edx
0826bedb +0x07a9:  setne  %al
0826bede +0x07ac:  pop    %ebp
0826bedf +0x07ad:  ret
0826bee0 +0x07ae:  push   %ebp
0826bee1 +0x07af:  mov    %esp,%ebp
0826bee3 +0x07b1:  mov    0x8(%ebp),%eax
0826bee6 +0x07b4:  mov    (%eax),%eax
0826bee8 +0x07b6:  mov    (%eax),%edx
0826beea +0x07b8:  mov    0x8(%ebp),%eax
0826beed +0x07bb:  mov    %edx,(%eax)
0826beef +0x07bd:  mov    0x8(%ebp),%eax
0826bef2 +0x07c0:  pop    %ebp
0826bef3 +0x07c1:  ret
0826bef4 +0x07c2:  push   %ebp
0826bef5 +0x07c3:  mov    %esp,%ebp
0826bef7 +0x07c5:  mov    0x8(%ebp),%eax
0826befa +0x07c8:  mov    (%eax),%eax
0826befc +0x07ca:  add    $0x8,%eax
0826beff +0x07cd:  pop    %ebp
0826bf00 +0x07ce:  ret
0826bf01 +0x07cf:  nop
0826bf02 +0x07d0:  push   %ebp
0826bf03 +0x07d1:  mov    %esp,%ebp
0826bf05 +0x07d3:  sub    $0x18,%esp
0826bf08 +0x07d6:  mov    0x8(%ebp),%eax
0826bf0b +0x07d9:  mov    %eax,(%esp)
0826bf0e +0x07dc:  call   0826c552 <+0xe20>
0826bf13 +0x07e1:  leave
0826bf14 +0x07e2:  ret
0826bf15 +0x07e3:  nop
0826bf16 +0x07e4:  push   %ebp
0826bf17 +0x07e5:  mov    %esp,%ebp
0826bf19 +0x07e7:  mov    0x8(%ebp),%eax
0826bf1c +0x07ea:  mov    0x10(%eax),%eax
0826bf1f +0x07ed:  pop    %ebp
0826bf20 +0x07ee:  ret
0826bf21 +0x07ef:  nop
0826bf22 +0x07f0:  push   %ebp
0826bf23 +0x07f1:  mov    %esp,%ebp
0826bf25 +0x07f3:  sub    $0x18,%esp
0826bf28 +0x07f6:  mov    0x8(%ebp),%eax
0826bf2b +0x07f9:  mov    %eax,(%esp)
0826bf2e +0x07fc:  call   0826c572 <+0xe40>
0826bf33 +0x0801:  leave
0826bf34 +0x0802:  ret
0826bf35 +0x0803:  nop
0826bf36 +0x0804:  push   %ebp
0826bf37 +0x0805:  mov    %esp,%ebp
0826bf39 +0x0807:  sub    $0x18,%esp
0826bf3c +0x080a:  mov    0x8(%ebp),%eax
0826bf3f +0x080d:  mov    %eax,(%esp)
0826bf42 +0x0810:  call   0826c5c2 <+0xe90>
0826bf47 +0x0815:  leave
0826bf48 +0x0816:  ret
0826bf49 +0x0817:  nop
0826bf4a +0x0818:  push   %ebp
0826bf4b +0x0819:  mov    %esp,%ebp
0826bf4d +0x081b:  sub    $0x28,%esp
0826bf50 +0x081e:  jmp    0826bf92 <+0x860>
0826bf52 +0x0820:  mov    0xc(%ebp),%eax
0826bf55 +0x0823:  mov    %eax,(%esp)
0826bf58 +0x0826:  call   0826c5c7 <+0xe95>
0826bf5d +0x082b:  mov    %eax,0x4(%esp)
0826bf61 +0x082f:  mov    0x8(%ebp),%eax
0826bf64 +0x0832:  mov    %eax,(%esp)
0826bf67 +0x0835:  call   0826bf4a <+0x818>
0826bf6c +0x083a:  mov    0xc(%ebp),%eax
0826bf6f +0x083d:  mov    %eax,(%esp)
0826bf72 +0x0840:  call   0826c5d2 <+0xea0>
0826bf77 +0x0845:  mov    %eax,-0xc(%ebp)
0826bf7a +0x0848:  mov    0xc(%ebp),%eax
0826bf7d +0x084b:  mov    %eax,0x4(%esp)
0826bf81 +0x084f:  mov    0x8(%ebp),%eax
0826bf84 +0x0852:  mov    %eax,(%esp)
0826bf87 +0x0855:  call   0826c5de <+0xeac>
0826bf8c +0x085a:  mov    -0xc(%ebp),%eax
0826bf8f +0x085d:  mov    %eax,0xc(%ebp)
0826bf92 +0x0860:  cmpl   $0x0,0xc(%ebp)
0826bf96 +0x0864:  setne  %al
0826bf99 +0x0867:  test   %al,%al
0826bf9b +0x0869:  jne    0826bf52 <+0x820>
0826bf9d +0x086b:  leave
0826bf9e +0x086c:  ret
0826bf9f +0x086d:  nop
0826bfa0 +0x086e:  push   %ebp
0826bfa1 +0x086f:  mov    %esp,%ebp
0826bfa3 +0x0871:  mov    0x8(%ebp),%eax
0826bfa6 +0x0874:  mov    0x8(%eax),%eax
0826bfa9 +0x0877:  pop    %ebp
0826bfaa +0x0878:  ret
0826bfab +0x0879:  nop
0826bfac +0x087a:  push   %ebp
0826bfad +0x087b:  mov    %esp,%ebp
0826bfaf +0x087d:  push   %ebx
0826bfb0 +0x087e:  sub    $0x14,%esp
0826bfb3 +0x0881:  mov    0x8(%ebp),%eax
0826bfb6 +0x0884:  mov    %eax,(%esp)
0826bfb9 +0x0887:  call   0826bfa0 <+0x86e>
0826bfbe +0x088c:  mov    %eax,0x4(%esp)
0826bfc2 +0x0890:  mov    0x8(%ebp),%eax
0826bfc5 +0x0893:  mov    %eax,(%esp)
0826bfc8 +0x0896:  call   0826bf4a <+0x818>
0826bfcd +0x089b:  mov    0x8(%ebp),%eax
0826bfd0 +0x089e:  mov    %eax,(%esp)
0826bfd3 +0x08a1:  call   0826c61e <+0xeec>
0826bfd8 +0x08a6:  mov    %eax,%ebx
0826bfda +0x08a8:  mov    0x8(%ebp),%eax
0826bfdd +0x08ab:  mov    %eax,(%esp)
0826bfe0 +0x08ae:  call   0826c612 <+0xee0>
0826bfe5 +0x08b3:  mov    %eax,(%ebx)
0826bfe7 +0x08b5:  mov    0x8(%ebp),%eax
0826bfea +0x08b8:  mov    %eax,(%esp)
0826bfed +0x08bb:  call   0826c62a <+0xef8>
0826bff2 +0x08c0:  movl   $0x0,(%eax)
0826bff8 +0x08c6:  mov    0x8(%ebp),%eax
0826bffb +0x08c9:  mov    %eax,(%esp)
0826bffe +0x08cc:  call   0826c636 <+0xf04>
0826c003 +0x08d1:  mov    %eax,%ebx
0826c005 +0x08d3:  mov    0x8(%ebp),%eax
0826c008 +0x08d6:  mov    %eax,(%esp)
0826c00b +0x08d9:  call   0826c612 <+0xee0>
0826c010 +0x08de:  mov    %eax,(%ebx)
0826c012 +0x08e0:  mov    0x8(%ebp),%eax
0826c015 +0x08e3:  movl   $0x0,0x14(%eax)
0826c01c +0x08ea:  add    $0x14,%esp
0826c01f +0x08ed:  pop    %ebx
0826c020 +0x08ee:  pop    %ebp
0826c021 +0x08ef:  ret
0826c022 +0x08f0:  push   %ebp
0826c023 +0x08f1:  mov    %esp,%ebp
0826c025 +0x08f3:  mov    0x8(%ebp),%eax
0826c028 +0x08f6:  pop    %ebp
0826c029 +0x08f7:  ret
0826c02a +0x08f8:  push   %ebp
0826c02b +0x08f9:  mov    %esp,%ebp
0826c02d +0x08fb:  mov    0x8(%ebp),%eax
0826c030 +0x08fe:  pop    %ebp
0826c031 +0x08ff:  ret
0826c032 +0x0900:  push   %ebp
0826c033 +0x0901:  mov    %esp,%ebp
0826c035 +0x0903:  sub    $0x18,%esp
0826c038 +0x0906:  mov    0xc(%ebp),%eax
0826c03b +0x0909:  mov    %eax,(%esp)
0826c03e +0x090c:  call   0826c022 <+0x8f0>
0826c043 +0x0911:  mov    0x8(%ebp),%edx
0826c046 +0x0914:  mov    (%eax),%eax
0826c048 +0x0916:  mov    %eax,(%edx)
0826c04a +0x0918:  mov    0x10(%ebp),%eax
0826c04d +0x091b:  mov    %eax,(%esp)
0826c050 +0x091e:  call   0826c02a <+0x8f8>
0826c055 +0x0923:  mov    0x8(%ebp),%edx
0826c058 +0x0926:  add    $0x4,%edx
0826c05b +0x0929:  mov    %eax,0x4(%esp)
0826c05f +0x092d:  mov    %edx,(%esp)
0826c062 +0x0930:  call   0826bb46 <+0x414>
0826c067 +0x0935:  leave
0826c068 +0x0936:  ret
0826c069 +0x0937:  push   %ebp
0826c06a +0x0938:  mov    %esp,%ebp
0826c06c +0x093a:  mov    0x8(%ebp),%eax
0826c06f +0x093d:  pop    %ebp
0826c070 +0x093e:  ret
0826c071 +0x093f:  push   %ebp
0826c072 +0x0940:  mov    %esp,%ebp
0826c074 +0x0942:  mov    0x8(%ebp),%eax
0826c077 +0x0945:  pop    %ebp
0826c078 +0x0946:  ret
0826c079 +0x0947:  nop
0826c07a +0x0948:  push   %ebp
0826c07b +0x0949:  mov    %esp,%ebp
0826c07d +0x094b:  push   %esi
0826c07e +0x094c:  push   %ebx
0826c07f +0x094d:  sub    $0x20,%esp
0826c082 +0x0950:  mov    0xc(%ebp),%eax
0826c085 +0x0953:  mov    %eax,(%esp)
0826c088 +0x0956:  call   0826c642 <+0xf10>
0826c08d +0x095b:  mov    %eax,0x4(%esp)
0826c091 +0x095f:  lea    -0x11(%ebp),%eax
0826c094 +0x0962:  mov    %eax,(%esp)
0826c097 +0x0965:  call   0826c64a <+0xf18>
0826c09c +0x096a:  mov    0x8(%ebp),%eax
0826c09f +0x096d:  lea    -0x11(%ebp),%edx
0826c0a2 +0x0970:  mov    %edx,0x4(%esp)
0826c0a6 +0x0974:  mov    %eax,(%esp)
0826c0a9 +0x0977:  call   0826c65e <+0xf2c>
0826c0ae +0x097c:  jmp    0826c0cb <+0x999>
0826c0b0 +0x097e:  mov    %edx,%ebx
0826c0b2 +0x0980:  mov    %eax,%esi
0826c0b4 +0x0982:  lea    -0x11(%ebp),%eax
0826c0b7 +0x0985:  mov    %eax,(%esp)
0826c0ba +0x0988:  call   08083fd2 <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x215>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x215
0826c0bf +0x098d:  mov    %esi,%eax
0826c0c1 +0x098f:  mov    %ebx,%edx
0826c0c3 +0x0991:  mov    %eax,(%esp)
0826c0c6 +0x0994:  call   08ae3750 <_Unwind_Resume>
0826c0cb +0x0999:  lea    -0x11(%ebp),%eax
0826c0ce +0x099c:  mov    %eax,(%esp)
0826c0d1 +0x099f:  call   08083fd2 <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x215>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x215
0826c0d6 +0x09a4:  lea    -0x10(%ebp),%eax
0826c0d9 +0x09a7:  mov    0xc(%ebp),%edx
0826c0dc +0x09aa:  mov    %edx,0x4(%esp)
0826c0e0 +0x09ae:  mov    %eax,(%esp)
0826c0e3 +0x09b1:  call   0823899a <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xe044>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xe044
0826c0e8 +0x09b6:  sub    $0x4,%esp
0826c0eb +0x09b9:  lea    -0xc(%ebp),%eax
0826c0ee +0x09bc:  mov    0xc(%ebp),%edx
0826c0f1 +0x09bf:  mov    %edx,0x4(%esp)
0826c0f5 +0x09c3:  mov    %eax,(%esp)
0826c0f8 +0x09c6:  call   08238974 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xe01e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xe01e
0826c0fd +0x09cb:  sub    $0x4,%esp
0826c100 +0x09ce:  mov    %bl,0xc(%esp)
0826c104 +0x09d2:  mov    -0x10(%ebp),%eax
0826c107 +0x09d5:  mov    %eax,0x8(%esp)
0826c10b +0x09d9:  mov    -0xc(%ebp),%eax
0826c10e +0x09dc:  mov    %eax,0x4(%esp)
0826c112 +0x09e0:  mov    0x8(%ebp),%eax
0826c115 +0x09e3:  mov    %eax,(%esp)
0826c118 +0x09e6:  call   0826c6a0 <+0xf6e>
0826c11d +0x09eb:  jmp    0826c13a <+0xa08>
0826c11f +0x09ed:  mov    %edx,%ebx
0826c121 +0x09ef:  mov    %eax,%esi
0826c123 +0x09f1:  mov    0x8(%ebp),%eax
0826c126 +0x09f4:  mov    %eax,(%esp)
0826c129 +0x09f7:  call   082357fe <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xaea8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xaea8
0826c12e +0x09fc:  mov    %esi,%eax
0826c130 +0x09fe:  mov    %ebx,%edx
0826c132 +0x0a00:  mov    %eax,(%esp)
0826c135 +0x0a03:  call   08ae3750 <_Unwind_Resume>
0826c13a +0x0a08:  lea    -0x8(%ebp),%esp
0826c13d +0x0a0b:  add    $0x0,%esp
0826c140 +0x0a0e:  pop    %ebx
0826c141 +0x0a0f:  pop    %esi
0826c142 +0x0a10:  pop    %ebp
0826c143 +0x0a11:  ret
0826c144 +0x0a12:  push   %ebp
0826c145 +0x0a13:  mov    %esp,%ebp
0826c147 +0x0a15:  push   %esi
0826c148 +0x0a16:  push   %ebx
0826c149 +0x0a17:  sub    $0x50,%esp
0826c14c +0x0a1a:  mov    0x8(%ebp),%ebx
0826c14f +0x0a1d:  mov    0xc(%ebp),%eax
0826c152 +0x0a20:  mov    %eax,(%esp)
0826c155 +0x0a23:  call   0826bfa0 <+0x86e>
0826c15a +0x0a28:  mov    %eax,-0x14(%ebp)
0826c15d +0x0a2b:  mov    0xc(%ebp),%eax
0826c160 +0x0a2e:  mov    %eax,(%esp)
0826c163 +0x0a31:  call   0826c612 <+0xee0>
0826c168 +0x0a36:  mov    %eax,-0x10(%ebp)
0826c16b +0x0a39:  movb   $0x1,-0x9(%ebp)
0826c16f +0x0a3d:  jmp    0826c1cd <+0xa9b>
0826c171 +0x0a3f:  mov    -0x14(%ebp),%eax
0826c174 +0x0a42:  mov    %eax,-0x10(%ebp)
0826c177 +0x0a45:  mov    -0x14(%ebp),%eax
0826c17a +0x0a48:  mov    %eax,(%esp)
0826c17d +0x0a4b:  call   0826c6ee <+0xfbc>
0826c182 +0x0a50:  mov    %eax,%esi
0826c184 +0x0a52:  mov    0x10(%ebp),%eax
0826c187 +0x0a55:  mov    %eax,0x4(%esp)
0826c18b +0x0a59:  lea    -0x2d(%ebp),%eax
0826c18e +0x0a5c:  mov    %eax,(%esp)
0826c191 +0x0a5f:  call   0826c6e6 <+0xfb4>
0826c196 +0x0a64:  mov    0xc(%ebp),%edx
0826c199 +0x0a67:  mov    %esi,0x8(%esp)
0826c19d +0x0a6b:  mov    %eax,0x4(%esp)
0826c1a1 +0x0a6f:  mov    %edx,(%esp)
0826c1a4 +0x0a72:  call   0826c710 <+0xfde>
0826c1a9 +0x0a77:  mov    %al,-0x9(%ebp)
0826c1ac +0x0a7a:  cmpb   $0x0,-0x9(%ebp)
0826c1b0 +0x0a7e:  je     0826c1bf <+0xa8d>
0826c1b2 +0x0a80:  mov    -0x14(%ebp),%eax
0826c1b5 +0x0a83:  mov    %eax,(%esp)
0826c1b8 +0x0a86:  call   0826c5d2 <+0xea0>
0826c1bd +0x0a8b:  jmp    0826c1ca <+0xa98>
0826c1bf +0x0a8d:  mov    -0x14(%ebp),%eax
0826c1c2 +0x0a90:  mov    %eax,(%esp)
0826c1c5 +0x0a93:  call   0826c5c7 <+0xe95>
0826c1ca +0x0a98:  mov    %eax,-0x14(%ebp)
0826c1cd +0x0a9b:  cmpl   $0x0,-0x14(%ebp)
0826c1d1 +0x0a9f:  setne  %al
0826c1d4 +0x0aa2:  test   %al,%al
0826c1d6 +0x0aa4:  jne    0826c171 <+0xa3f>
0826c1d8 +0x0aa6:  mov    -0x10(%ebp),%eax
0826c1db +0x0aa9:  mov    %eax,0x4(%esp)
0826c1df +0x0aad:  lea    -0x34(%ebp),%eax
0826c1e2 +0x0ab0:  mov    %eax,(%esp)
0826c1e5 +0x0ab3:  call   0826c72a <+0xff8>
0826c1ea +0x0ab8:  cmpb   $0x0,-0x9(%ebp)
0826c1ee +0x0abc:  je     0826c26f <+0xb3d>
0826c1f0 +0x0abe:  lea    -0x2c(%ebp),%eax
0826c1f3 +0x0ac1:  mov    0xc(%ebp),%edx
0826c1f6 +0x0ac4:  mov    %edx,0x4(%esp)
0826c1fa +0x0ac8:  mov    %eax,(%esp)
0826c1fd +0x0acb:  call   0826c738 <+0x1006>
0826c202 +0x0ad0:  sub    $0x4,%esp
0826c205 +0x0ad3:  lea    -0x2c(%ebp),%eax
0826c208 +0x0ad6:  mov    %eax,0x4(%esp)
0826c20c +0x0ada:  lea    -0x34(%ebp),%eax
0826c20f +0x0add:  mov    %eax,(%esp)
0826c212 +0x0ae0:  call   0826c75e <+0x102c>
0826c217 +0x0ae5:  test   %al,%al
0826c219 +0x0ae7:  je     0826c264 <+0xb32>
0826c21b +0x0ae9:  movb   $0x1,-0x25(%ebp)
0826c21f +0x0aed:  mov    -0x10(%ebp),%ecx
0826c222 +0x0af0:  mov    -0x14(%ebp),%edx
0826c225 +0x0af3:  lea    -0x24(%ebp),%eax
0826c228 +0x0af6:  mov    0x10(%ebp),%esi
0826c22b +0x0af9:  mov    %esi,0x10(%esp)
0826c22f +0x0afd:  mov    %ecx,0xc(%esp)
0826c233 +0x0b01:  mov    %edx,0x8(%esp)
0826c237 +0x0b05:  mov    0xc(%ebp),%edx
0826c23a +0x0b08:  mov    %edx,0x4(%esp)
0826c23e +0x0b0c:  mov    %eax,(%esp)
0826c241 +0x0b0f:  call   0826c772 <+0x1040>
0826c246 +0x0b14:  sub    $0x4,%esp
0826c249 +0x0b17:  lea    -0x25(%ebp),%eax
0826c24c +0x0b1a:  mov    %eax,0x8(%esp)
0826c250 +0x0b1e:  lea    -0x24(%ebp),%eax
0826c253 +0x0b21:  mov    %eax,0x4(%esp)
0826c257 +0x0b25:  mov    %ebx,(%esp)
0826c25a +0x0b28:  call   0826c83a <+0x1108>
0826c25f +0x0b2d:  jmp    0826c305 <+0xbd3>
0826c264 +0x0b32:  lea    -0x34(%ebp),%eax
0826c267 +0x0b35:  mov    %eax,(%esp)
0826c26a +0x0b38:  call   0826c868 <+0x1136>
0826c26f +0x0b3d:  mov    0x10(%ebp),%eax
0826c272 +0x0b40:  mov    %eax,0x4(%esp)
0826c276 +0x0b44:  lea    -0x1e(%ebp),%eax
0826c279 +0x0b47:  mov    %eax,(%esp)
0826c27c +0x0b4a:  call   0826c6e6 <+0xfb4>
0826c281 +0x0b4f:  mov    %eax,%esi
0826c283 +0x0b51:  mov    -0x34(%ebp),%eax
0826c286 +0x0b54:  mov    %eax,(%esp)
0826c289 +0x0b57:  call   0826c885 <+0x1153>
0826c28e +0x0b5c:  mov    0xc(%ebp),%edx
0826c291 +0x0b5f:  mov    %esi,0x8(%esp)
0826c295 +0x0b63:  mov    %eax,0x4(%esp)
0826c299 +0x0b67:  mov    %edx,(%esp)
0826c29c +0x0b6a:  call   0826c710 <+0xfde>
0826c2a1 +0x0b6f:  test   %al,%al
0826c2a3 +0x0b71:  je     0826c2eb <+0xbb9>
0826c2a5 +0x0b73:  movb   $0x1,-0x1d(%ebp)
0826c2a9 +0x0b77:  mov    -0x10(%ebp),%ecx
0826c2ac +0x0b7a:  mov    -0x14(%ebp),%edx
0826c2af +0x0b7d:  lea    -0x1c(%ebp),%eax
0826c2b2 +0x0b80:  mov    0x10(%ebp),%esi
0826c2b5 +0x0b83:  mov    %esi,0x10(%esp)
0826c2b9 +0x0b87:  mov    %ecx,0xc(%esp)
0826c2bd +0x0b8b:  mov    %edx,0x8(%esp)
0826c2c1 +0x0b8f:  mov    0xc(%ebp),%edx
0826c2c4 +0x0b92:  mov    %edx,0x4(%esp)
0826c2c8 +0x0b96:  mov    %eax,(%esp)
0826c2cb +0x0b99:  call   0826c772 <+0x1040>
0826c2d0 +0x0b9e:  sub    $0x4,%esp
0826c2d3 +0x0ba1:  lea    -0x1d(%ebp),%eax
0826c2d6 +0x0ba4:  mov    %eax,0x8(%esp)
0826c2da +0x0ba8:  lea    -0x1c(%ebp),%eax
0826c2dd +0x0bab:  mov    %eax,0x4(%esp)
0826c2e1 +0x0baf:  mov    %ebx,(%esp)
0826c2e4 +0x0bb2:  call   0826c83a <+0x1108>
0826c2e9 +0x0bb7:  jmp    0826c305 <+0xbd3>
0826c2eb +0x0bb9:  movb   $0x0,-0x15(%ebp)
0826c2ef +0x0bbd:  lea    -0x15(%ebp),%eax
0826c2f2 +0x0bc0:  mov    %eax,0x8(%esp)
0826c2f6 +0x0bc4:  lea    -0x34(%ebp),%eax
0826c2f9 +0x0bc7:  mov    %eax,0x4(%esp)
0826c2fd +0x0bcb:  mov    %ebx,(%esp)
0826c300 +0x0bce:  call   0826c8a8 <+0x1176>
0826c305 +0x0bd3:  mov    %ebx,%eax
0826c307 +0x0bd5:  lea    -0x8(%ebp),%esp
0826c30a +0x0bd8:  add    $0x0,%esp
0826c30d +0x0bdb:  pop    %ebx
0826c30e +0x0bdc:  pop    %esi
0826c30f +0x0bdd:  pop    %ebp
0826c310 +0x0bde:  ret    $0x4
0826c313 +0x0be1:  nop
0826c314 +0x0be2:  push   %ebp
0826c315 +0x0be3:  mov    %esp,%ebp
0826c317 +0x0be5:  push   %esi
0826c318 +0x0be6:  push   %ebx
0826c319 +0x0be7:  sub    $0x30,%esp
0826c31c +0x0bea:  mov    0x8(%ebp),%ebx
0826c31f +0x0bed:  mov    0xc(%ebp),%eax
0826c322 +0x0bf0:  mov    %eax,(%esp)
0826c325 +0x0bf3:  call   0826c612 <+0xee0>
0826c32a +0x0bf8:  mov    %eax,%esi
0826c32c +0x0bfa:  mov    0xc(%ebp),%eax
0826c32f +0x0bfd:  mov    %eax,(%esp)
0826c332 +0x0c00:  call   0826bfa0 <+0x86e>
0826c337 +0x0c05:  lea    -0x10(%ebp),%edx
0826c33a +0x0c08:  mov    0x10(%ebp),%ecx
0826c33d +0x0c0b:  mov    %ecx,0x10(%esp)
0826c341 +0x0c0f:  mov    %esi,0xc(%esp)
0826c345 +0x0c13:  mov    %eax,0x8(%esp)
0826c349 +0x0c17:  mov    0xc(%ebp),%eax
0826c34c +0x0c1a:  mov    %eax,0x4(%esp)
0826c350 +0x0c1e:  mov    %edx,(%esp)
0826c353 +0x0c21:  call   0826c8d6 <+0x11a4>
0826c358 +0x0c26:  sub    $0x4,%esp
0826c35b +0x0c29:  lea    -0xc(%ebp),%eax
0826c35e +0x0c2c:  mov    0xc(%ebp),%edx
0826c361 +0x0c2f:  mov    %edx,0x4(%esp)
0826c365 +0x0c33:  mov    %eax,(%esp)
0826c368 +0x0c36:  call   0826c3d2 <+0xca0>
0826c36d +0x0c3b:  sub    $0x4,%esp
0826c370 +0x0c3e:  lea    -0xc(%ebp),%eax
0826c373 +0x0c41:  mov    %eax,0x4(%esp)
0826c377 +0x0c45:  lea    -0x10(%ebp),%eax
0826c37a +0x0c48:  mov    %eax,(%esp)
0826c37d +0x0c4b:  call   0826c75e <+0x102c>
0826c382 +0x0c50:  test   %al,%al
0826c384 +0x0c52:  jne    0826c3ab <+0xc79>
0826c386 +0x0c54:  mov    -0x10(%ebp),%eax
0826c389 +0x0c57:  mov    %eax,(%esp)
0826c38c +0x0c5a:  call   0826c885 <+0x1153>
0826c391 +0x0c5f:  mov    0xc(%ebp),%edx
0826c394 +0x0c62:  mov    %eax,0x8(%esp)
0826c398 +0x0c66:  mov    0x10(%ebp),%eax
0826c39b +0x0c69:  mov    %eax,0x4(%esp)
0826c39f +0x0c6d:  mov    %edx,(%esp)
0826c3a2 +0x0c70:  call   0826c710 <+0xfde>
0826c3a7 +0x0c75:  test   %al,%al
0826c3a9 +0x0c77:  je     0826c3bf <+0xc8d>
0826c3ab +0x0c79:  mov    0xc(%ebp),%eax
0826c3ae +0x0c7c:  mov    %eax,0x4(%esp)
0826c3b2 +0x0c80:  mov    %ebx,(%esp)
0826c3b5 +0x0c83:  call   0826c3d2 <+0xca0>
0826c3ba +0x0c88:  sub    $0x4,%esp
0826c3bd +0x0c8b:  jmp    0826c3c4 <+0xc92>
0826c3bf +0x0c8d:  mov    -0x10(%ebp),%eax
0826c3c2 +0x0c90:  mov    %eax,(%ebx)
0826c3c4 +0x0c92:  mov    %ebx,%eax
0826c3c6 +0x0c94:  lea    -0x8(%ebp),%esp
0826c3c9 +0x0c97:  add    $0x0,%esp
0826c3cc +0x0c9a:  pop    %ebx
0826c3cd +0x0c9b:  pop    %esi
0826c3ce +0x0c9c:  pop    %ebp
0826c3cf +0x0c9d:  ret    $0x4
0826c3d2 +0x0ca0:  push   %ebp
0826c3d3 +0x0ca1:  mov    %esp,%ebp
0826c3d5 +0x0ca3:  push   %ebx
0826c3d6 +0x0ca4:  sub    $0x14,%esp
0826c3d9 +0x0ca7:  mov    0x8(%ebp),%ebx
0826c3dc +0x0caa:  mov    0xc(%ebp),%eax
0826c3df +0x0cad:  add    $0x4,%eax
0826c3e2 +0x0cb0:  mov    %eax,0x4(%esp)
0826c3e6 +0x0cb4:  mov    %ebx,(%esp)
0826c3e9 +0x0cb7:  call   0826c72a <+0xff8>
0826c3ee +0x0cbc:  mov    %ebx,%eax
0826c3f0 +0x0cbe:  add    $0x14,%esp
0826c3f3 +0x0cc1:  pop    %ebx
0826c3f4 +0x0cc2:  pop    %ebp
0826c3f5 +0x0cc3:  ret    $0x4
0826c3f8 +0x0cc6:  push   %ebp
0826c3f9 +0x0cc7:  mov    %esp,%ebp
0826c3fb +0x0cc9:  sub    $0x28,%esp
0826c3fe +0x0ccc:  mov    0xc(%ebp),%eax
0826c401 +0x0ccf:  mov    %eax,(%esp)
0826c404 +0x0cd2:  call   086dad40 <_ZNSt15_List_node_base6unhookEv>  ; std::_List_node_base::unhook()
0826c409 +0x0cd7:  mov    0xc(%ebp),%eax
0826c40c +0x0cda:  mov    %eax,-0xc(%ebp)
0826c40f +0x0cdd:  mov    0x8(%ebp),%eax
0826c412 +0x0ce0:  mov    %eax,(%esp)
0826c415 +0x0ce3:  call   0823b988 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+&_ZL14gUnicodeBuffer+0x6b06>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+&_ZL14gUnicodeBuffer+0x6b06
0826c41a +0x0ce8:  mov    -0xc(%ebp),%edx
0826c41d +0x0ceb:  mov    %edx,0x4(%esp)
0826c421 +0x0cef:  mov    %eax,(%esp)
0826c424 +0x0cf2:  call   0823b996 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+&_ZL14gUnicodeBuffer+0x6b14>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+&_ZL14gUnicodeBuffer+0x6b14
0826c429 +0x0cf7:  mov    0x8(%ebp),%eax
0826c42c +0x0cfa:  mov    -0xc(%ebp),%edx
0826c42f +0x0cfd:  mov    %edx,0x4(%esp)
0826c433 +0x0d01:  mov    %eax,(%esp)
0826c436 +0x0d04:  call   0823b9aa <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+&_ZL14gUnicodeBuffer+0x6b28>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+&_ZL14gUnicodeBuffer+0x6b28
0826c43b +0x0d09:  leave
0826c43c +0x0d0a:  ret
0826c43d +0x0d0b:  nop
0826c43e +0x0d0c:  push   %ebp
0826c43f +0x0d0d:  mov    %esp,%ebp
0826c441 +0x0d0f:  push   %ebx
0826c442 +0x0d10:  sub    $0x14,%esp
0826c445 +0x0d13:  mov    0x8(%ebp),%ebx
0826c448 +0x0d16:  mov    0xc(%ebp),%eax
0826c44b +0x0d19:  mov    %eax,0x4(%esp)
0826c44f +0x0d1d:  mov    %ebx,(%esp)
0826c452 +0x0d20:  call   0823a8bc <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xff66>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xff66
0826c457 +0x0d25:  mov    %ebx,%eax
0826c459 +0x0d27:  add    $0x14,%esp
0826c45c +0x0d2a:  pop    %ebx
0826c45d +0x0d2b:  pop    %ebp
0826c45e +0x0d2c:  ret    $0x4
0826c461 +0x0d2f:  nop
0826c462 +0x0d30:  push   %ebp
0826c463 +0x0d31:  mov    %esp,%ebp
0826c465 +0x0d33:  mov    0x8(%ebp),%eax
0826c468 +0x0d36:  mov    (%eax),%edx
0826c46a +0x0d38:  mov    0xc(%ebp),%eax
0826c46d +0x0d3b:  mov    (%eax),%eax
0826c46f +0x0d3d:  cmp    %eax,%edx
0826c471 +0x0d3f:  setne  %al
0826c474 +0x0d42:  pop    %ebp
0826c475 +0x0d43:  ret
0826c476 +0x0d44:  push   %ebp
0826c477 +0x0d45:  mov    %esp,%ebp
0826c479 +0x0d47:  sub    $0x28,%esp
0826c47c +0x0d4a:  mov    0x10(%ebp),%eax
0826c47f +0x0d4d:  mov    %eax,(%esp)
0826c482 +0x0d50:  call   08080ff4 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x101a>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x101a
0826c487 +0x0d55:  mov    (%eax),%eax
0826c489 +0x0d57:  mov    %eax,-0x10(%ebp)
0826c48c +0x0d5a:  lea    -0x10(%ebp),%eax
0826c48f +0x0d5d:  mov    %eax,0x4(%esp)
0826c493 +0x0d61:  mov    0x8(%ebp),%eax
0826c496 +0x0d64:  mov    %eax,(%esp)
0826c499 +0x0d67:  call   0826c952 <+0x1220>
0826c49e +0x0d6c:  mov    %eax,-0xc(%ebp)
0826c4a1 +0x0d6f:  mov    0xc(%ebp),%edx
0826c4a4 +0x0d72:  mov    -0xc(%ebp),%eax
0826c4a7 +0x0d75:  mov    %edx,0x4(%esp)
0826c4ab +0x0d79:  mov    %eax,(%esp)
0826c4ae +0x0d7c:  call   086dad20 <_ZNSt15_List_node_base4hookEPS_>  ; std::_List_node_base::hook(std::_List_node_base*)
0826c4b3 +0x0d81:  leave
0826c4b4 +0x0d82:  ret
0826c4b5 +0x0d83:  nop
0826c4b6 +0x0d84:  push   %ebp
0826c4b7 +0x0d85:  mov    %esp,%ebp
0826c4b9 +0x0d87:  sub    $0x18,%esp
0826c4bc +0x0d8a:  mov    0x8(%ebp),%eax
0826c4bf +0x0d8d:  mov    %eax,(%esp)
0826c4c2 +0x0d90:  call   0826c9da <+0x12a8>
0826c4c7 +0x0d95:  mov    0x8(%ebp),%eax
0826c4ca +0x0d98:  mov    %eax,(%esp)
0826c4cd +0x0d9b:  call   0826ca00 <+0x12ce>
0826c4d2 +0x0da0:  leave
0826c4d3 +0x0da1:  ret
0826c4d4 +0x0da2:  push   %ebp
0826c4d5 +0x0da3:  mov    %esp,%ebp
0826c4d7 +0x0da5:  sub    $0x18,%esp
0826c4da +0x0da8:  mov    0x8(%ebp),%eax
0826c4dd +0x0dab:  mov    %eax,(%esp)
0826c4e0 +0x0dae:  call   0826ca16 <+0x12e4>
0826c4e5 +0x0db3:  leave
0826c4e6 +0x0db4:  ret
0826c4e7 +0x0db5:  nop
0826c4e8 +0x0db6:  push   %ebp
0826c4e9 +0x0db7:  mov    %esp,%ebp
0826c4eb +0x0db9:  sub    $0x28,%esp
0826c4ee +0x0dbc:  mov    0x8(%ebp),%eax
0826c4f1 +0x0dbf:  mov    (%eax),%eax
0826c4f3 +0x0dc1:  mov    %eax,-0x10(%ebp)
0826c4f6 +0x0dc4:  jmp    0826c532 <+0xe00>
0826c4f8 +0x0dc6:  mov    -0x10(%ebp),%eax
0826c4fb +0x0dc9:  mov    %eax,-0xc(%ebp)
0826c4fe +0x0dcc:  mov    -0x10(%ebp),%eax
0826c501 +0x0dcf:  mov    (%eax),%eax
0826c503 +0x0dd1:  mov    %eax,-0x10(%ebp)
0826c506 +0x0dd4:  mov    0x8(%ebp),%eax
0826c509 +0x0dd7:  mov    %eax,(%esp)
0826c50c +0x0dda:  call   0826ca1c <+0x12ea>
0826c511 +0x0ddf:  mov    -0xc(%ebp),%edx
0826c514 +0x0de2:  mov    %edx,0x4(%esp)
0826c518 +0x0de6:  mov    %eax,(%esp)
0826c51b +0x0de9:  call   0826ca2a <+0x12f8>
0826c520 +0x0dee:  mov    -0xc(%ebp),%eax
0826c523 +0x0df1:  mov    %eax,0x4(%esp)
0826c527 +0x0df5:  mov    0x8(%ebp),%eax
0826c52a +0x0df8:  mov    %eax,(%esp)
0826c52d +0x0dfb:  call   0826ca3e <+0x130c>
0826c532 +0x0e00:  mov    0x8(%ebp),%edx
0826c535 +0x0e03:  mov    -0x10(%ebp),%eax
0826c538 +0x0e06:  cmp    %eax,%edx
0826c53a +0x0e08:  setne  %al
0826c53d +0x0e0b:  test   %al,%al
0826c53f +0x0e0d:  jne    0826c4f8 <+0xdc6>
0826c541 +0x0e0f:  leave
0826c542 +0x0e10:  ret
0826c543 +0x0e11:  nop
0826c544 +0x0e12:  push   %ebp
0826c545 +0x0e13:  mov    %esp,%ebp
0826c547 +0x0e15:  mov    0x8(%ebp),%eax
0826c54a +0x0e18:  mov    0xc(%ebp),%edx
0826c54d +0x0e1b:  mov    %edx,(%eax)
0826c54f +0x0e1d:  pop    %ebp
0826c550 +0x0e1e:  ret
0826c551 +0x0e1f:  nop
0826c552 +0x0e20:  push   %ebp
0826c553 +0x0e21:  mov    %esp,%ebp
0826c555 +0x0e23:  sub    $0x18,%esp
0826c558 +0x0e26:  mov    0x8(%ebp),%eax
0826c55b +0x0e29:  lea    0x8(%eax),%edx
0826c55e +0x0e2c:  mov    0x8(%ebp),%eax
0826c561 +0x0e2f:  add    $0x18,%eax
0826c564 +0x0e32:  mov    %edx,0x4(%esp)
0826c568 +0x0e36:  mov    %eax,(%esp)
0826c56b +0x0e39:  call   0826ca60 <+0x132e>
0826c570 +0x0e3e:  leave
0826c571 +0x0e3f:  ret
0826c572 +0x0e40:  push   %ebp
0826c573 +0x0e41:  mov    %esp,%ebp
0826c575 +0x0e43:  sub    $0x18,%esp
0826c578 +0x0e46:  mov    0x8(%ebp),%eax
0826c57b +0x0e49:  mov    %eax,(%esp)
0826c57e +0x0e4c:  call   0826cac4 <+0x1392>
0826c583 +0x0e51:  mov    0x8(%ebp),%eax
0826c586 +0x0e54:  movl   $0x0,0x4(%eax)
0826c58d +0x0e5b:  mov    0x8(%ebp),%eax
0826c590 +0x0e5e:  movl   $0x0,0x8(%eax)
0826c597 +0x0e65:  mov    0x8(%ebp),%eax
0826c59a +0x0e68:  movl   $0x0,0xc(%eax)
0826c5a1 +0x0e6f:  mov    0x8(%ebp),%eax
0826c5a4 +0x0e72:  movl   $0x0,0x10(%eax)
0826c5ab +0x0e79:  mov    0x8(%ebp),%eax
0826c5ae +0x0e7c:  movl   $0x0,0x14(%eax)
0826c5b5 +0x0e83:  mov    0x8(%ebp),%eax
0826c5b8 +0x0e86:  mov    %eax,(%esp)
0826c5bb +0x0e89:  call   0826cad8 <+0x13a6>
0826c5c0 +0x0e8e:  leave
0826c5c1 +0x0e8f:  ret
0826c5c2 +0x0e90:  push   %ebp
0826c5c3 +0x0e91:  mov    %esp,%ebp
0826c5c5 +0x0e93:  pop    %ebp
0826c5c6 +0x0e94:  ret
0826c5c7 +0x0e95:  push   %ebp
0826c5c8 +0x0e96:  mov    %esp,%ebp
0826c5ca +0x0e98:  mov    0x8(%ebp),%eax
0826c5cd +0x0e9b:  mov    0xc(%eax),%eax
0826c5d0 +0x0e9e:  pop    %ebp
0826c5d1 +0x0e9f:  ret
0826c5d2 +0x0ea0:  push   %ebp
0826c5d3 +0x0ea1:  mov    %esp,%ebp
0826c5d5 +0x0ea3:  mov    0x8(%ebp),%eax
0826c5d8 +0x0ea6:  mov    0x8(%eax),%eax
0826c5db +0x0ea9:  pop    %ebp
0826c5dc +0x0eaa:  ret
0826c5dd +0x0eab:  nop
0826c5de +0x0eac:  push   %ebp
0826c5df +0x0ead:  mov    %esp,%ebp
0826c5e1 +0x0eaf:  sub    $0x18,%esp
0826c5e4 +0x0eb2:  mov    0x8(%ebp),%eax
0826c5e7 +0x0eb5:  mov    %eax,(%esp)
0826c5ea +0x0eb8:  call   0826cb0a <+0x13d8>
0826c5ef +0x0ebd:  mov    0xc(%ebp),%edx
0826c5f2 +0x0ec0:  mov    %edx,0x4(%esp)
0826c5f6 +0x0ec4:  mov    %eax,(%esp)
0826c5f9 +0x0ec7:  call   0826cb28 <+0x13f6>
0826c5fe +0x0ecc:  mov    0xc(%ebp),%eax
0826c601 +0x0ecf:  mov    %eax,0x4(%esp)
0826c605 +0x0ed3:  mov    0x8(%ebp),%eax
0826c608 +0x0ed6:  mov    %eax,(%esp)
0826c60b +0x0ed9:  call   0826cb3c <+0x140a>
0826c610 +0x0ede:  leave
0826c611 +0x0edf:  ret
0826c612 +0x0ee0:  push   %ebp
0826c613 +0x0ee1:  mov    %esp,%ebp
0826c615 +0x0ee3:  mov    0x8(%ebp),%eax
0826c618 +0x0ee6:  add    $0x4,%eax
0826c61b +0x0ee9:  pop    %ebp
0826c61c +0x0eea:  ret
0826c61d +0x0eeb:  nop
0826c61e +0x0eec:  push   %ebp
0826c61f +0x0eed:  mov    %esp,%ebp
0826c621 +0x0eef:  mov    0x8(%ebp),%eax
0826c624 +0x0ef2:  add    $0xc,%eax
0826c627 +0x0ef5:  pop    %ebp
0826c628 +0x0ef6:  ret
0826c629 +0x0ef7:  nop
0826c62a +0x0ef8:  push   %ebp
0826c62b +0x0ef9:  mov    %esp,%ebp
0826c62d +0x0efb:  mov    0x8(%ebp),%eax
0826c630 +0x0efe:  add    $0x8,%eax
0826c633 +0x0f01:  pop    %ebp
0826c634 +0x0f02:  ret
0826c635 +0x0f03:  nop
0826c636 +0x0f04:  push   %ebp
0826c637 +0x0f05:  mov    %esp,%ebp
0826c639 +0x0f07:  mov    0x8(%ebp),%eax
0826c63c +0x0f0a:  add    $0x10,%eax
0826c63f +0x0f0d:  pop    %ebp
0826c640 +0x0f0e:  ret
0826c641 +0x0f0f:  nop
0826c642 +0x0f10:  push   %ebp
0826c643 +0x0f11:  mov    %esp,%ebp
0826c645 +0x0f13:  mov    0x8(%ebp),%eax
0826c648 +0x0f16:  pop    %ebp
0826c649 +0x0f17:  ret
0826c64a +0x0f18:  push   %ebp
0826c64b +0x0f19:  mov    %esp,%ebp
0826c64d +0x0f1b:  sub    $0x18,%esp
0826c650 +0x0f1e:  mov    0x8(%ebp),%eax
0826c653 +0x0f21:  mov    %eax,(%esp)
0826c656 +0x0f24:  call   0808e906 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x776>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x776
0826c65b +0x0f29:  leave
0826c65c +0x0f2a:  ret
0826c65d +0x0f2b:  nop
0826c65e +0x0f2c:  push   %ebp
0826c65f +0x0f2d:  mov    %esp,%ebp
0826c661 +0x0f2f:  sub    $0x28,%esp
0826c664 +0x0f32:  mov    0xc(%ebp),%eax
0826c667 +0x0f35:  mov    %eax,0x4(%esp)
0826c66b +0x0f39:  lea    -0x9(%ebp),%eax
0826c66e +0x0f3c:  mov    %eax,(%esp)
0826c671 +0x0f3f:  call   0826cb5e <+0x142c>
0826c676 +0x0f44:  mov    0x8(%ebp),%eax
0826c679 +0x0f47:  lea    -0x9(%ebp),%edx
0826c67c +0x0f4a:  mov    %edx,0x4(%esp)
0826c680 +0x0f4e:  mov    %eax,(%esp)
0826c683 +0x0f51:  call   0826cb72 <+0x1440>
0826c688 +0x0f56:  lea    -0x9(%ebp),%eax
0826c68b +0x0f59:  mov    %eax,(%esp)
0826c68e +0x0f5c:  call   082383d2 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xda7c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xda7c
0826c693 +0x0f61:  mov    0x8(%ebp),%eax
0826c696 +0x0f64:  mov    %eax,(%esp)
0826c699 +0x0f67:  call   0823839e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xda48>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xda48
0826c69e +0x0f6c:  leave
0826c69f +0x0f6d:  ret
0826c6a0 +0x0f6e:  push   %ebp
0826c6a1 +0x0f6f:  mov    %esp,%ebp
0826c6a3 +0x0f71:  sub    $0x18,%esp
0826c6a6 +0x0f74:  jmp    0826c6cd <+0xf9b>
0826c6a8 +0x0f76:  lea    0xc(%ebp),%eax
0826c6ab +0x0f79:  mov    %eax,(%esp)
0826c6ae +0x0f7c:  call   0826cba0 <+0x146e>
0826c6b3 +0x0f81:  mov    %eax,0x4(%esp)
0826c6b7 +0x0f85:  mov    0x8(%ebp),%eax
0826c6ba +0x0f88:  mov    %eax,(%esp)
0826c6bd +0x0f8b:  call   0826cbae <+0x147c>
0826c6c2 +0x0f90:  lea    0xc(%ebp),%eax
0826c6c5 +0x0f93:  mov    %eax,(%esp)
0826c6c8 +0x0f96:  call   0823dfa2 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+&_ZL14gUnicodeBuffer+0x9120>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+&_ZL14gUnicodeBuffer+0x9120
0826c6cd +0x0f9b:  lea    0x10(%ebp),%eax
0826c6d0 +0x0f9e:  mov    %eax,0x4(%esp)
0826c6d4 +0x0fa2:  lea    0xc(%ebp),%eax
0826c6d7 +0x0fa5:  mov    %eax,(%esp)
0826c6da +0x0fa8:  call   0823df8e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+&_ZL14gUnicodeBuffer+0x910c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+&_ZL14gUnicodeBuffer+0x910c
0826c6df +0x0fad:  test   %al,%al
0826c6e1 +0x0faf:  jne    0826c6a8 <+0xf76>
0826c6e3 +0x0fb1:  leave
0826c6e4 +0x0fb2:  ret
0826c6e5 +0x0fb3:  nop
0826c6e6 +0x0fb4:  push   %ebp
0826c6e7 +0x0fb5:  mov    %esp,%ebp
0826c6e9 +0x0fb7:  mov    0xc(%ebp),%eax
0826c6ec +0x0fba:  pop    %ebp
0826c6ed +0x0fbb:  ret
0826c6ee +0x0fbc:  push   %ebp
0826c6ef +0x0fbd:  mov    %esp,%ebp
0826c6f1 +0x0fbf:  sub    $0x28,%esp
0826c6f4 +0x0fc2:  mov    0x8(%ebp),%eax
0826c6f7 +0x0fc5:  mov    %eax,(%esp)
0826c6fa +0x0fc8:  call   0826cbe4 <+0x14b2>
0826c6ff +0x0fcd:  mov    %eax,0x4(%esp)
0826c703 +0x0fd1:  lea    -0x9(%ebp),%eax
0826c706 +0x0fd4:  mov    %eax,(%esp)
0826c709 +0x0fd7:  call   0826c6e6 <+0xfb4>
0826c70e +0x0fdc:  leave
0826c70f +0x0fdd:  ret
0826c710 +0x0fde:  push   %ebp
0826c711 +0x0fdf:  mov    %esp,%ebp
0826c713 +0x0fe1:  sub    $0x18,%esp
0826c716 +0x0fe4:  mov    0x10(%ebp),%eax
0826c719 +0x0fe7:  mov    %eax,0x4(%esp)
0826c71d +0x0feb:  mov    0xc(%ebp),%eax
0826c720 +0x0fee:  mov    %eax,(%esp)
0826c723 +0x0ff1:  call   0826b808 <+0xd6>
0826c728 +0x0ff6:  leave
0826c729 +0x0ff7:  ret
0826c72a +0x0ff8:  push   %ebp
0826c72b +0x0ff9:  mov    %esp,%ebp
0826c72d +0x0ffb:  mov    0xc(%ebp),%edx
0826c730 +0x0ffe:  mov    0x8(%ebp),%eax
0826c733 +0x1001:  mov    %edx,(%eax)
0826c735 +0x1003:  pop    %ebp
0826c736 +0x1004:  ret
0826c737 +0x1005:  nop
0826c738 +0x1006:  push   %ebp
0826c739 +0x1007:  mov    %esp,%ebp
0826c73b +0x1009:  push   %ebx
0826c73c +0x100a:  sub    $0x14,%esp
0826c73f +0x100d:  mov    0x8(%ebp),%ebx
0826c742 +0x1010:  mov    0xc(%ebp),%eax
0826c745 +0x1013:  mov    0xc(%eax),%eax
0826c748 +0x1016:  mov    %eax,0x4(%esp)
0826c74c +0x101a:  mov    %ebx,(%esp)
0826c74f +0x101d:  call   0826c72a <+0xff8>
0826c754 +0x1022:  mov    %ebx,%eax
0826c756 +0x1024:  add    $0x14,%esp
0826c759 +0x1027:  pop    %ebx
0826c75a +0x1028:  pop    %ebp
0826c75b +0x1029:  ret    $0x4
0826c75e +0x102c:  push   %ebp
0826c75f +0x102d:  mov    %esp,%ebp
0826c761 +0x102f:  mov    0x8(%ebp),%eax
0826c764 +0x1032:  mov    (%eax),%edx
0826c766 +0x1034:  mov    0xc(%ebp),%eax
0826c769 +0x1037:  mov    (%eax),%eax
0826c76b +0x1039:  cmp    %eax,%edx
0826c76d +0x103b:  sete   %al
0826c770 +0x103e:  pop    %ebp
0826c771 +0x103f:  ret
0826c772 +0x1040:  push   %ebp
0826c773 +0x1041:  mov    %esp,%ebp
0826c775 +0x1043:  push   %esi
0826c776 +0x1044:  push   %ebx
0826c777 +0x1045:  sub    $0x20,%esp
0826c77a +0x1048:  mov    0x8(%ebp),%esi
0826c77d +0x104b:  cmpl   $0x0,0x10(%ebp)
0826c781 +0x104f:  jne    0826c7c9 <+0x1097>
0826c783 +0x1051:  mov    0xc(%ebp),%eax
0826c786 +0x1054:  mov    %eax,(%esp)
0826c789 +0x1057:  call   0826c612 <+0xee0>
0826c78e +0x105c:  cmp    0x14(%ebp),%eax
0826c791 +0x105f:  je     0826c7c9 <+0x1097>
0826c793 +0x1061:  mov    0x14(%ebp),%eax
0826c796 +0x1064:  mov    %eax,(%esp)
0826c799 +0x1067:  call   0826c885 <+0x1153>
0826c79e +0x106c:  mov    %eax,%ebx
0826c7a0 +0x106e:  mov    0x18(%ebp),%eax
0826c7a3 +0x1071:  mov    %eax,0x4(%esp)
0826c7a7 +0x1075:  lea    -0xe(%ebp),%eax
0826c7aa +0x1078:  mov    %eax,(%esp)
0826c7ad +0x107b:  call   0826c6e6 <+0xfb4>
0826c7b2 +0x1080:  mov    0xc(%ebp),%edx
0826c7b5 +0x1083:  mov    %ebx,0x8(%esp)
0826c7b9 +0x1087:  mov    %eax,0x4(%esp)
0826c7bd +0x108b:  mov    %edx,(%esp)
0826c7c0 +0x108e:  call   0826c710 <+0xfde>
0826c7c5 +0x1093:  test   %al,%al
0826c7c7 +0x1095:  je     0826c7d0 <+0x109e>
0826c7c9 +0x1097:  mov    $0x1,%eax
0826c7ce +0x109c:  jmp    0826c7d5 <+0x10a3>
0826c7d0 +0x109e:  mov    $0x0,%eax
0826c7d5 +0x10a3:  mov    %al,-0xd(%ebp)
0826c7d8 +0x10a6:  mov    0x18(%ebp),%eax
0826c7db +0x10a9:  mov    %eax,0x4(%esp)
0826c7df +0x10ad:  mov    0xc(%ebp),%eax
0826c7e2 +0x10b0:  mov    %eax,(%esp)
0826c7e5 +0x10b3:  call   0826cbf0 <+0x14be>
0826c7ea +0x10b8:  mov    %eax,-0xc(%ebp)
0826c7ed +0x10bb:  mov    0xc(%ebp),%eax
0826c7f0 +0x10be:  lea    0x4(%eax),%ecx
0826c7f3 +0x10c1:  mov    -0xc(%ebp),%edx
0826c7f6 +0x10c4:  movzbl -0xd(%ebp),%eax
0826c7fa +0x10c8:  mov    %ecx,0xc(%esp)
0826c7fe +0x10cc:  mov    0x14(%ebp),%ecx
0826c801 +0x10cf:  mov    %ecx,0x8(%esp)
0826c805 +0x10d3:  mov    %edx,0x4(%esp)
0826c809 +0x10d7:  mov    %eax,(%esp)
0826c80c +0x10da:  call   086df9d0 <_ZSt29_Rb_tree_insert_and_rebalancebPSt18_Rb_tree_node_baseS0_RS_>  ; std::_Rb_tree_insert_and_rebalance(bool, std::_Rb_tree_node_base*, std::_Rb_tree_node_base*, std::_Rb_tree_node_base&)
0826c811 +0x10df:  mov    0xc(%ebp),%eax
0826c814 +0x10e2:  mov    0x14(%eax),%eax
0826c817 +0x10e5:  lea    0x1(%eax),%edx
0826c81a +0x10e8:  mov    0xc(%ebp),%eax
0826c81d +0x10eb:  mov    %edx,0x14(%eax)
0826c820 +0x10ee:  mov    -0xc(%ebp),%eax
0826c823 +0x10f1:  mov    %eax,0x4(%esp)
0826c827 +0x10f5:  mov    %esi,(%esp)
0826c82a +0x10f8:  call   0826c72a <+0xff8>
0826c82f +0x10fd:  mov    %esi,%eax
0826c831 +0x10ff:  add    $0x20,%esp
0826c834 +0x1102:  pop    %ebx
0826c835 +0x1103:  pop    %esi
0826c836 +0x1104:  pop    %ebp
0826c837 +0x1105:  ret    $0x4
0826c83a +0x1108:  push   %ebp
0826c83b +0x1109:  mov    %esp,%ebp
0826c83d +0x110b:  sub    $0x18,%esp
0826c840 +0x110e:  mov    0xc(%ebp),%eax
0826c843 +0x1111:  mov    %eax,(%esp)
0826c846 +0x1114:  call   0826cc71 <+0x153f>
0826c84b +0x1119:  mov    0x8(%ebp),%edx
0826c84e +0x111c:  mov    (%eax),%eax
0826c850 +0x111e:  mov    %eax,(%edx)
0826c852 +0x1120:  mov    0x10(%ebp),%eax
0826c855 +0x1123:  mov    %eax,(%esp)
0826c858 +0x1126:  call   08080fa6 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0xfcc>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0xfcc
0826c85d +0x112b:  movzbl (%eax),%edx
0826c860 +0x112e:  mov    0x8(%ebp),%eax
0826c863 +0x1131:  mov    %dl,0x4(%eax)
0826c866 +0x1134:  leave
0826c867 +0x1135:  ret
0826c868 +0x1136:  push   %ebp
0826c869 +0x1137:  mov    %esp,%ebp
0826c86b +0x1139:  sub    $0x18,%esp
0826c86e +0x113c:  mov    0x8(%ebp),%eax
0826c871 +0x113f:  mov    (%eax),%eax
0826c873 +0x1141:  mov    %eax,(%esp)
0826c876 +0x1144:  call   086df890 <_ZSt18_Rb_tree_decrementPSt18_Rb_tree_node_base>  ; std::_Rb_tree_decrement(std::_Rb_tree_node_base*)
0826c87b +0x1149:  mov    0x8(%ebp),%edx
0826c87e +0x114c:  mov    %eax,(%edx)
0826c880 +0x114e:  mov    0x8(%ebp),%eax
0826c883 +0x1151:  leave
0826c884 +0x1152:  ret
0826c885 +0x1153:  push   %ebp
0826c886 +0x1154:  mov    %esp,%ebp
0826c888 +0x1156:  sub    $0x28,%esp
0826c88b +0x1159:  mov    0x8(%ebp),%eax
0826c88e +0x115c:  mov    %eax,(%esp)
0826c891 +0x115f:  call   0826cc79 <+0x1547>
0826c896 +0x1164:  mov    %eax,0x4(%esp)
0826c89a +0x1168:  lea    -0x9(%ebp),%eax
0826c89d +0x116b:  mov    %eax,(%esp)
0826c8a0 +0x116e:  call   0826c6e6 <+0xfb4>
0826c8a5 +0x1173:  leave
0826c8a6 +0x1174:  ret
0826c8a7 +0x1175:  nop
0826c8a8 +0x1176:  push   %ebp
0826c8a9 +0x1177:  mov    %esp,%ebp
0826c8ab +0x1179:  sub    $0x18,%esp
0826c8ae +0x117c:  mov    0xc(%ebp),%eax
0826c8b1 +0x117f:  mov    %eax,(%esp)
0826c8b4 +0x1182:  call   0826cc84 <+0x1552>
0826c8b9 +0x1187:  mov    0x8(%ebp),%edx
0826c8bc +0x118a:  mov    (%eax),%eax
0826c8be +0x118c:  mov    %eax,(%edx)
0826c8c0 +0x118e:  mov    0x10(%ebp),%eax
0826c8c3 +0x1191:  mov    %eax,(%esp)
0826c8c6 +0x1194:  call   08080fa6 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0xfcc>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0xfcc
0826c8cb +0x1199:  movzbl (%eax),%edx
0826c8ce +0x119c:  mov    0x8(%ebp),%eax
0826c8d1 +0x119f:  mov    %dl,0x4(%eax)
0826c8d4 +0x11a2:  leave
0826c8d5 +0x11a3:  ret
0826c8d6 +0x11a4:  push   %ebp
0826c8d7 +0x11a5:  mov    %esp,%ebp
0826c8d9 +0x11a7:  push   %ebx
0826c8da +0x11a8:  sub    $0x14,%esp
0826c8dd +0x11ab:  mov    0x8(%ebp),%ebx
0826c8e0 +0x11ae:  jmp    0826c92e <+0x11fc>
0826c8e2 +0x11b0:  mov    0x10(%ebp),%eax
0826c8e5 +0x11b3:  mov    %eax,(%esp)
0826c8e8 +0x11b6:  call   0826c6ee <+0xfbc>
0826c8ed +0x11bb:  mov    0xc(%ebp),%edx
0826c8f0 +0x11be:  mov    0x18(%ebp),%ecx
0826c8f3 +0x11c1:  mov    %ecx,0x8(%esp)
0826c8f7 +0x11c5:  mov    %eax,0x4(%esp)
0826c8fb +0x11c9:  mov    %edx,(%esp)
0826c8fe +0x11cc:  call   0826c710 <+0xfde>
0826c903 +0x11d1:  xor    $0x1,%eax
0826c906 +0x11d4:  test   %al,%al
0826c908 +0x11d6:  je     0826c920 <+0x11ee>
0826c90a +0x11d8:  mov    0x10(%ebp),%eax
0826c90d +0x11db:  mov    %eax,0x14(%ebp)
0826c910 +0x11de:  mov    0x10(%ebp),%eax
0826c913 +0x11e1:  mov    %eax,(%esp)
0826c916 +0x11e4:  call   0826c5d2 <+0xea0>
0826c91b +0x11e9:  mov    %eax,0x10(%ebp)
0826c91e +0x11ec:  jmp    0826c92e <+0x11fc>
0826c920 +0x11ee:  mov    0x10(%ebp),%eax
0826c923 +0x11f1:  mov    %eax,(%esp)
0826c926 +0x11f4:  call   0826c5c7 <+0xe95>
0826c92b +0x11f9:  mov    %eax,0x10(%ebp)
0826c92e +0x11fc:  cmpl   $0x0,0x10(%ebp)
0826c932 +0x1200:  setne  %al
0826c935 +0x1203:  test   %al,%al
0826c937 +0x1205:  jne    0826c8e2 <+0x11b0>
0826c939 +0x1207:  mov    0x14(%ebp),%eax
0826c93c +0x120a:  mov    %eax,0x4(%esp)
0826c940 +0x120e:  mov    %ebx,(%esp)
0826c943 +0x1211:  call   0826c72a <+0xff8>
0826c948 +0x1216:  mov    %ebx,%eax
0826c94a +0x1218:  add    $0x14,%esp
0826c94d +0x121b:  pop    %ebx
0826c94e +0x121c:  pop    %ebp
0826c94f +0x121d:  ret    $0x4
0826c952 +0x1220:  push   %ebp
0826c953 +0x1221:  mov    %esp,%ebp
0826c955 +0x1223:  push   %esi
0826c956 +0x1224:  push   %ebx
0826c957 +0x1225:  sub    $0x20,%esp
0826c95a +0x1228:  mov    0x8(%ebp),%eax
0826c95d +0x122b:  mov    %eax,(%esp)
0826c960 +0x122e:  call   0826cc8c <+0x155a>
0826c965 +0x1233:  mov    %eax,-0xc(%ebp)
0826c968 +0x1236:  mov    0xc(%ebp),%eax
0826c96b +0x1239:  mov    %eax,(%esp)
0826c96e +0x123c:  call   08080ff4 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x101a>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x101a
0826c973 +0x1241:  mov    (%eax),%eax
0826c975 +0x1243:  mov    %eax,-0x10(%ebp)
0826c978 +0x1246:  mov    0x8(%ebp),%eax
0826c97b +0x1249:  mov    %eax,(%esp)
0826c97e +0x124c:  call   0823b988 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+&_ZL14gUnicodeBuffer+0x6b06>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+&_ZL14gUnicodeBuffer+0x6b06
0826c983 +0x1251:  lea    -0x10(%ebp),%edx
0826c986 +0x1254:  mov    %edx,0x8(%esp)
0826c98a +0x1258:  mov    -0xc(%ebp),%edx
0826c98d +0x125b:  mov    %edx,0x4(%esp)
0826c991 +0x125f:  mov    %eax,(%esp)
0826c994 +0x1262:  call   0826ccb0 <+0x157e>
0826c999 +0x1267:  jmp    0826c9cf <+0x129d>
0826c99b +0x1269:  mov    %eax,(%esp)
0826c99e +0x126c:  call   08725ce0 <__cxa_begin_catch>
0826c9a3 +0x1271:  mov    0x8(%ebp),%eax
0826c9a6 +0x1274:  mov    -0xc(%ebp),%edx
0826c9a9 +0x1277:  mov    %edx,0x4(%esp)
0826c9ad +0x127b:  mov    %eax,(%esp)
0826c9b0 +0x127e:  call   0823b9aa <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+&_ZL14gUnicodeBuffer+0x6b28>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+&_ZL14gUnicodeBuffer+0x6b28
0826c9b5 +0x1283:  call   08724be0 <__cxa_rethrow>
0826c9ba +0x1288:  mov    %edx,%ebx
0826c9bc +0x128a:  mov    %eax,%esi
0826c9be +0x128c:  call   08725c30 <__cxa_end_catch>
0826c9c3 +0x1291:  mov    %esi,%eax
0826c9c5 +0x1293:  mov    %ebx,%edx
0826c9c7 +0x1295:  mov    %eax,(%esp)
0826c9ca +0x1298:  call   08ae3750 <_Unwind_Resume>
0826c9cf +0x129d:  mov    -0xc(%ebp),%eax
0826c9d2 +0x12a0:  add    $0x20,%esp
0826c9d5 +0x12a3:  pop    %ebx
0826c9d6 +0x12a4:  pop    %esi
0826c9d7 +0x12a5:  pop    %ebp
0826c9d8 +0x12a6:  ret
0826c9d9 +0x12a7:  nop
0826c9da +0x12a8:  push   %ebp
0826c9db +0x12a9:  mov    %esp,%ebp
0826c9dd +0x12ab:  sub    $0x18,%esp
0826c9e0 +0x12ae:  mov    0x8(%ebp),%eax
0826c9e3 +0x12b1:  mov    %eax,(%esp)
0826c9e6 +0x12b4:  call   0826ccf6 <+0x15c4>
0826c9eb +0x12b9:  mov    0x8(%ebp),%eax
0826c9ee +0x12bc:  movl   $0x0,(%eax)
0826c9f4 +0x12c2:  mov    0x8(%ebp),%eax
0826c9f7 +0x12c5:  movl   $0x0,0x4(%eax)
0826c9fe +0x12cc:  leave
0826c9ff +0x12cd:  ret
0826ca00 +0x12ce:  push   %ebp
0826ca01 +0x12cf:  mov    %esp,%ebp
0826ca03 +0x12d1:  mov    0x8(%ebp),%edx
0826ca06 +0x12d4:  mov    0x8(%ebp),%eax
0826ca09 +0x12d7:  mov    %edx,(%eax)
0826ca0b +0x12d9:  mov    0x8(%ebp),%edx
0826ca0e +0x12dc:  mov    0x8(%ebp),%eax
0826ca11 +0x12df:  mov    %edx,0x4(%eax)
0826ca14 +0x12e2:  pop    %ebp
0826ca15 +0x12e3:  ret
0826ca16 +0x12e4:  push   %ebp
0826ca17 +0x12e5:  mov    %esp,%ebp
0826ca19 +0x12e7:  pop    %ebp
0826ca1a +0x12e8:  ret
0826ca1b +0x12e9:  nop
0826ca1c +0x12ea:  push   %ebp
0826ca1d +0x12eb:  mov    %esp,%ebp
0826ca1f +0x12ed:  mov    0x8(%ebp),%eax
0826ca22 +0x12f0:  pop    %ebp
0826ca23 +0x12f1:  ret
0826ca24 +0x12f2:  push   %ebp
0826ca25 +0x12f3:  mov    %esp,%ebp
0826ca27 +0x12f5:  pop    %ebp
0826ca28 +0x12f6:  ret
0826ca29 +0x12f7:  nop
0826ca2a +0x12f8:  push   %ebp
0826ca2b +0x12f9:  mov    %esp,%ebp
0826ca2d +0x12fb:  sub    $0x18,%esp
0826ca30 +0x12fe:  mov    0xc(%ebp),%eax
0826ca33 +0x1301:  mov    %eax,(%esp)
0826ca36 +0x1304:  call   0826ca24 <+0x12f2>
0826ca3b +0x1309:  leave
0826ca3c +0x130a:  ret
0826ca3d +0x130b:  nop
0826ca3e +0x130c:  push   %ebp
0826ca3f +0x130d:  mov    %esp,%ebp
0826ca41 +0x130f:  sub    $0x18,%esp
0826ca44 +0x1312:  mov    0x8(%ebp),%eax
0826ca47 +0x1315:  movl   $0x1,0x8(%esp)
0826ca4f +0x131d:  mov    0xc(%ebp),%edx
0826ca52 +0x1320:  mov    %edx,0x4(%esp)
0826ca56 +0x1324:  mov    %eax,(%esp)
0826ca59 +0x1327:  call   0826cd0a <+0x15d8>
0826ca5e +0x132c:  leave
0826ca5f +0x132d:  ret
0826ca60 +0x132e:  push   %ebp
0826ca61 +0x132f:  mov    %esp,%ebp
0826ca63 +0x1331:  push   %ebx
0826ca64 +0x1332:  sub    $0x4,%esp
0826ca67 +0x1335:  call   0826cd1d <+0x15eb>
0826ca6c +0x133a:  mov    %eax,%edx
0826ca6e +0x133c:  mov    0x8(%ebp),%eax
0826ca71 +0x133f:  mov    0xc(%eax),%eax
0826ca74 +0x1342:  mov    %eax,%ecx
0826ca76 +0x1344:  mov    0xc(%ebp),%eax
0826ca79 +0x1347:  mov    0xc(%eax),%eax
0826ca7c +0x134a:  mov    %ecx,%ebx
0826ca7e +0x134c:  sub    %eax,%ebx
0826ca80 +0x134e:  mov    %ebx,%eax
0826ca82 +0x1350:  sar    $0x2,%eax
0826ca85 +0x1353:  sub    $0x1,%eax
0826ca88 +0x1356:  imul   %eax,%edx
0826ca8b +0x1359:  mov    0x8(%ebp),%eax
0826ca8e +0x135c:  mov    (%eax),%eax
0826ca90 +0x135e:  mov    %eax,%ecx
0826ca92 +0x1360:  mov    0x8(%ebp),%eax
0826ca95 +0x1363:  mov    0x4(%eax),%eax
0826ca98 +0x1366:  mov    %ecx,%ebx
0826ca9a +0x1368:  sub    %eax,%ebx
0826ca9c +0x136a:  mov    %ebx,%eax
0826ca9e +0x136c:  sar    $0x2,%eax
0826caa1 +0x136f:  lea    (%edx,%eax,1),%ecx
0826caa4 +0x1372:  mov    0xc(%ebp),%eax
0826caa7 +0x1375:  mov    0x8(%eax),%eax
0826caaa +0x1378:  mov    %eax,%edx
0826caac +0x137a:  mov    0xc(%ebp),%eax
0826caaf +0x137d:  mov    (%eax),%eax
0826cab1 +0x137f:  mov    %edx,%ebx
0826cab3 +0x1381:  sub    %eax,%ebx
0826cab5 +0x1383:  mov    %ebx,%eax
0826cab7 +0x1385:  sar    $0x2,%eax
0826caba +0x1388:  lea    (%ecx,%eax,1),%eax
0826cabd +0x138b:  add    $0x4,%esp
0826cac0 +0x138e:  pop    %ebx
0826cac1 +0x138f:  pop    %ebp
0826cac2 +0x1390:  ret
0826cac3 +0x1391:  nop
0826cac4 +0x1392:  push   %ebp
0826cac5 +0x1393:  mov    %esp,%ebp
0826cac7 +0x1395:  sub    $0x18,%esp
0826caca +0x1398:  mov    0x8(%ebp),%eax
0826cacd +0x139b:  mov    %eax,(%esp)
0826cad0 +0x139e:  call   0826cd32 <+0x1600>
0826cad5 +0x13a3:  leave
0826cad6 +0x13a4:  ret
0826cad7 +0x13a5:  nop
0826cad8 +0x13a6:  push   %ebp
0826cad9 +0x13a7:  mov    %esp,%ebp
0826cadb +0x13a9:  mov    0x8(%ebp),%eax
0826cade +0x13ac:  movl   $0x0,0x4(%eax)
0826cae5 +0x13b3:  mov    0x8(%ebp),%eax
0826cae8 +0x13b6:  movl   $0x0,0x8(%eax)
0826caef +0x13bd:  mov    0x8(%ebp),%eax
0826caf2 +0x13c0:  lea    0x4(%eax),%edx
0826caf5 +0x13c3:  mov    0x8(%ebp),%eax
0826caf8 +0x13c6:  mov    %edx,0xc(%eax)
0826cafb +0x13c9:  mov    0x8(%ebp),%eax
0826cafe +0x13cc:  lea    0x4(%eax),%edx
0826cb01 +0x13cf:  mov    0x8(%ebp),%eax
0826cb04 +0x13d2:  mov    %edx,0x10(%eax)
0826cb07 +0x13d5:  pop    %ebp
0826cb08 +0x13d6:  ret
0826cb09 +0x13d7:  nop
0826cb0a +0x13d8:  push   %ebp
0826cb0b +0x13d9:  mov    %esp,%ebp
0826cb0d +0x13db:  mov    0x8(%ebp),%eax
0826cb10 +0x13de:  pop    %ebp
0826cb11 +0x13df:  ret
0826cb12 +0x13e0:  push   %ebp
0826cb13 +0x13e1:  mov    %esp,%ebp
0826cb15 +0x13e3:  sub    $0x18,%esp
0826cb18 +0x13e6:  mov    0x8(%ebp),%eax
0826cb1b +0x13e9:  add    $0x10,%eax
0826cb1e +0x13ec:  mov    %eax,(%esp)
0826cb21 +0x13ef:  call   0826ba16 <+0x2e4>
0826cb26 +0x13f4:  leave
0826cb27 +0x13f5:  ret
0826cb28 +0x13f6:  push   %ebp
0826cb29 +0x13f7:  mov    %esp,%ebp
0826cb2b +0x13f9:  sub    $0x18,%esp
0826cb2e +0x13fc:  mov    0xc(%ebp),%eax
0826cb31 +0x13ff:  mov    %eax,(%esp)
0826cb34 +0x1402:  call   0826cb12 <+0x13e0>
0826cb39 +0x1407:  leave
0826cb3a +0x1408:  ret
0826cb3b +0x1409:  nop
0826cb3c +0x140a:  push   %ebp
0826cb3d +0x140b:  mov    %esp,%ebp
0826cb3f +0x140d:  sub    $0x18,%esp
0826cb42 +0x1410:  mov    0x8(%ebp),%eax
0826cb45 +0x1413:  movl   $0x1,0x8(%esp)
0826cb4d +0x141b:  mov    0xc(%ebp),%edx
0826cb50 +0x141e:  mov    %edx,0x4(%esp)
0826cb54 +0x1422:  mov    %eax,(%esp)
0826cb57 +0x1425:  call   0826cd38 <+0x1606>
0826cb5c +0x142a:  leave
0826cb5d +0x142b:  ret
0826cb5e +0x142c:  push   %ebp
0826cb5f +0x142d:  mov    %esp,%ebp
0826cb61 +0x142f:  sub    $0x18,%esp
0826cb64 +0x1432:  mov    0x8(%ebp),%eax
0826cb67 +0x1435:  mov    %eax,(%esp)
0826cb6a +0x1438:  call   0823f19c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+&_ZL14gUnicodeBuffer+0xa31a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+&_ZL14gUnicodeBuffer+0xa31a
0826cb6f +0x143d:  leave
0826cb70 +0x143e:  ret
0826cb71 +0x143f:  nop
0826cb72 +0x1440:  push   %ebp
0826cb73 +0x1441:  mov    %esp,%ebp
0826cb75 +0x1443:  sub    $0x18,%esp
0826cb78 +0x1446:  mov    0x8(%ebp),%eax
0826cb7b +0x1449:  mov    0xc(%ebp),%edx
0826cb7e +0x144c:  mov    %edx,0x4(%esp)
0826cb82 +0x1450:  mov    %eax,(%esp)
0826cb85 +0x1453:  call   0826cd4c <+0x161a>
0826cb8a +0x1458:  mov    0x8(%ebp),%eax
0826cb8d +0x145b:  movl   $0x0,(%eax)
0826cb93 +0x1461:  mov    0x8(%ebp),%eax
0826cb96 +0x1464:  movl   $0x0,0x4(%eax)
0826cb9d +0x146b:  leave
0826cb9e +0x146c:  ret
0826cb9f +0x146d:  nop
0826cba0 +0x146e:  push   %ebp
0826cba1 +0x146f:  mov    %esp,%ebp
0826cba3 +0x1471:  mov    0x8(%ebp),%eax
0826cba6 +0x1474:  mov    (%eax),%eax
0826cba8 +0x1476:  add    $0x8,%eax
0826cbab +0x1479:  pop    %ebp
0826cbac +0x147a:  ret
0826cbad +0x147b:  nop
0826cbae +0x147c:  push   %ebp
0826cbaf +0x147d:  mov    %esp,%ebp
0826cbb1 +0x147f:  sub    $0x28,%esp
0826cbb4 +0x1482:  lea    -0xc(%ebp),%eax
0826cbb7 +0x1485:  mov    0x8(%ebp),%edx
0826cbba +0x1488:  mov    %edx,0x4(%esp)
0826cbbe +0x148c:  mov    %eax,(%esp)
0826cbc1 +0x148f:  call   0826c43e <+0xd0c>
0826cbc6 +0x1494:  sub    $0x4,%esp
0826cbc9 +0x1497:  mov    0xc(%ebp),%eax
0826cbcc +0x149a:  mov    %eax,0x8(%esp)
0826cbd0 +0x149e:  mov    -0xc(%ebp),%eax
0826cbd3 +0x14a1:  mov    %eax,0x4(%esp)
0826cbd7 +0x14a5:  mov    0x8(%ebp),%eax
0826cbda +0x14a8:  mov    %eax,(%esp)
0826cbdd +0x14ab:  call   0826cd66 <+0x1634>
0826cbe2 +0x14b0:  leave
0826cbe3 +0x14b1:  ret
0826cbe4 +0x14b2:  push   %ebp
0826cbe5 +0x14b3:  mov    %esp,%ebp
0826cbe7 +0x14b5:  mov    0x8(%ebp),%eax
0826cbea +0x14b8:  add    $0x10,%eax
0826cbed +0x14bb:  pop    %ebp
0826cbee +0x14bc:  ret
0826cbef +0x14bd:  nop
0826cbf0 +0x14be:  push   %ebp
0826cbf1 +0x14bf:  mov    %esp,%ebp
0826cbf3 +0x14c1:  push   %esi
0826cbf4 +0x14c2:  push   %ebx
0826cbf5 +0x14c3:  sub    $0x20,%esp
0826cbf8 +0x14c6:  mov    0x8(%ebp),%eax
0826cbfb +0x14c9:  mov    %eax,(%esp)
0826cbfe +0x14cc:  call   0826cd9e <+0x166c>
0826cc03 +0x14d1:  mov    %eax,-0xc(%ebp)
0826cc06 +0x14d4:  mov    0xc(%ebp),%eax
0826cc09 +0x14d7:  mov    %eax,(%esp)
0826cc0c +0x14da:  call   0826cdc1 <+0x168f>
0826cc11 +0x14df:  mov    %eax,%ebx
0826cc13 +0x14e1:  mov    0x8(%ebp),%eax
0826cc16 +0x14e4:  mov    %eax,(%esp)
0826cc19 +0x14e7:  call   0826cb0a <+0x13d8>
0826cc1e +0x14ec:  mov    %ebx,0x8(%esp)
0826cc22 +0x14f0:  mov    -0xc(%ebp),%edx
0826cc25 +0x14f3:  mov    %edx,0x4(%esp)
0826cc29 +0x14f7:  mov    %eax,(%esp)
0826cc2c +0x14fa:  call   0826cdca <+0x1698>
0826cc31 +0x14ff:  jmp    0826cc67 <+0x1535>
0826cc33 +0x1501:  mov    %eax,(%esp)
0826cc36 +0x1504:  call   08725ce0 <__cxa_begin_catch>
0826cc3b +0x1509:  mov    -0xc(%ebp),%eax
0826cc3e +0x150c:  mov    %eax,0x4(%esp)
0826cc42 +0x1510:  mov    0x8(%ebp),%eax
0826cc45 +0x1513:  mov    %eax,(%esp)
0826cc48 +0x1516:  call   0826cb3c <+0x140a>
0826cc4d +0x151b:  call   08724be0 <__cxa_rethrow>
0826cc52 +0x1520:  mov    %edx,%ebx
0826cc54 +0x1522:  mov    %eax,%esi
0826cc56 +0x1524:  call   08725c30 <__cxa_end_catch>
0826cc5b +0x1529:  mov    %esi,%eax
0826cc5d +0x152b:  mov    %ebx,%edx
0826cc5f +0x152d:  mov    %eax,(%esp)
0826cc62 +0x1530:  call   08ae3750 <_Unwind_Resume>
0826cc67 +0x1535:  mov    -0xc(%ebp),%eax
0826cc6a +0x1538:  add    $0x20,%esp
0826cc6d +0x153b:  pop    %ebx
0826cc6e +0x153c:  pop    %esi
0826cc6f +0x153d:  pop    %ebp
0826cc70 +0x153e:  ret
0826cc71 +0x153f:  push   %ebp
0826cc72 +0x1540:  mov    %esp,%ebp
0826cc74 +0x1542:  mov    0x8(%ebp),%eax
0826cc77 +0x1545:  pop    %ebp
0826cc78 +0x1546:  ret
0826cc79 +0x1547:  push   %ebp
0826cc7a +0x1548:  mov    %esp,%ebp
0826cc7c +0x154a:  mov    0x8(%ebp),%eax
0826cc7f +0x154d:  add    $0x10,%eax
0826cc82 +0x1550:  pop    %ebp
0826cc83 +0x1551:  ret
0826cc84 +0x1552:  push   %ebp
0826cc85 +0x1553:  mov    %esp,%ebp
0826cc87 +0x1555:  mov    0x8(%ebp),%eax
0826cc8a +0x1558:  pop    %ebp
0826cc8b +0x1559:  ret
0826cc8c +0x155a:  push   %ebp
0826cc8d +0x155b:  mov    %esp,%ebp
0826cc8f +0x155d:  sub    $0x18,%esp
0826cc92 +0x1560:  mov    0x8(%ebp),%eax
0826cc95 +0x1563:  movl   $0x0,0x8(%esp)
0826cc9d +0x156b:  movl   $0x1,0x4(%esp)
0826cca5 +0x1573:  mov    %eax,(%esp)
0826cca8 +0x1576:  call   0826ce32 <+0x1700>
0826ccad +0x157b:  leave
0826ccae +0x157c:  ret
0826ccaf +0x157d:  nop
0826ccb0 +0x157e:  push   %ebp
0826ccb1 +0x157f:  mov    %esp,%ebp
0826ccb3 +0x1581:  push   %ebx
0826ccb4 +0x1582:  sub    $0x24,%esp
0826ccb7 +0x1585:  mov    0x10(%ebp),%eax
0826ccba +0x1588:  mov    %eax,(%esp)
0826ccbd +0x158b:  call   08080ff4 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x101a>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x101a
0826ccc2 +0x1590:  mov    (%eax),%eax
0826ccc4 +0x1592:  mov    %eax,-0xc(%ebp)
0826ccc7 +0x1595:  lea    -0xc(%ebp),%ebx
0826ccca +0x1598:  mov    0xc(%ebp),%eax
0826cccd +0x159b:  mov    %eax,0x4(%esp)
0826ccd1 +0x159f:  movl   $0xc,(%esp)
0826ccd8 +0x15a6:  call   0807ef4c <_GLOBAL__I__Z13base64_encodePKhjRSs+0x1c>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x1c
0826ccdd +0x15ab:  mov    %eax,%edx
0826ccdf +0x15ad:  test   %edx,%edx
0826cce1 +0x15af:  je     0826ccef <+0x15bd>
0826cce3 +0x15b1:  mov    %ebx,0x4(%esp)
0826cce7 +0x15b5:  mov    %eax,(%esp)
0826ccea +0x15b8:  call   0826ce70 <+0x173e>
0826ccef +0x15bd:  add    $0x24,%esp
0826ccf2 +0x15c0:  pop    %ebx
0826ccf3 +0x15c1:  pop    %ebp
0826ccf4 +0x15c2:  ret
0826ccf5 +0x15c3:  nop
0826ccf6 +0x15c4:  push   %ebp
0826ccf7 +0x15c5:  mov    %esp,%ebp
0826ccf9 +0x15c7:  sub    $0x18,%esp
0826ccfc +0x15ca:  mov    0x8(%ebp),%eax
0826ccff +0x15cd:  mov    %eax,(%esp)
0826cd02 +0x15d0:  call   0826ce9e <+0x176c>
0826cd07 +0x15d5:  leave
0826cd08 +0x15d6:  ret
0826cd09 +0x15d7:  nop
0826cd0a +0x15d8:  push   %ebp
0826cd0b +0x15d9:  mov    %esp,%ebp
0826cd0d +0x15db:  sub    $0x18,%esp
0826cd10 +0x15de:  mov    0xc(%ebp),%eax
0826cd13 +0x15e1:  mov    %eax,(%esp)
0826cd16 +0x15e4:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0826cd1b +0x15e9:  leave
0826cd1c +0x15ea:  ret
0826cd1d +0x15eb:  push   %ebp
0826cd1e +0x15ec:  mov    %esp,%ebp
0826cd20 +0x15ee:  sub    $0x18,%esp
0826cd23 +0x15f1:  movl   $0x4,(%esp)
0826cd2a +0x15f8:  call   080ee3bb <_GLOBAL__I__Z26ProcessAntiBotInputWrapperv+0x1c>  ; global constructors keyed to ProcessAntiBotInputWrapper()+0x1c
0826cd2f +0x15fd:  leave
0826cd30 +0x15fe:  ret
0826cd31 +0x15ff:  nop
0826cd32 +0x1600:  push   %ebp
0826cd33 +0x1601:  mov    %esp,%ebp
0826cd35 +0x1603:  pop    %ebp
0826cd36 +0x1604:  ret
0826cd37 +0x1605:  nop
0826cd38 +0x1606:  push   %ebp
0826cd39 +0x1607:  mov    %esp,%ebp
0826cd3b +0x1609:  sub    $0x18,%esp
0826cd3e +0x160c:  mov    0xc(%ebp),%eax
0826cd41 +0x160f:  mov    %eax,(%esp)
0826cd44 +0x1612:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0826cd49 +0x1617:  leave
0826cd4a +0x1618:  ret
0826cd4b +0x1619:  nop
0826cd4c +0x161a:  push   %ebp
0826cd4d +0x161b:  mov    %esp,%ebp
0826cd4f +0x161d:  sub    $0x18,%esp
0826cd52 +0x1620:  mov    0xc(%ebp),%edx
0826cd55 +0x1623:  mov    0x8(%ebp),%eax
0826cd58 +0x1626:  mov    %edx,0x4(%esp)
0826cd5c +0x162a:  mov    %eax,(%esp)
0826cd5f +0x162d:  call   0826cea4 <+0x1772>
0826cd64 +0x1632:  leave
0826cd65 +0x1633:  ret
0826cd66 +0x1634:  push   %ebp
0826cd67 +0x1635:  mov    %esp,%ebp
0826cd69 +0x1637:  sub    $0x28,%esp
0826cd6c +0x163a:  mov    0x10(%ebp),%eax
0826cd6f +0x163d:  mov    %eax,(%esp)
0826cd72 +0x1640:  call   080da877 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0xa14>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0xa14
0826cd77 +0x1645:  mov    %eax,0x4(%esp)
0826cd7b +0x1649:  mov    0x8(%ebp),%eax
0826cd7e +0x164c:  mov    %eax,(%esp)
0826cd81 +0x164f:  call   0826ceaa <+0x1778>
0826cd86 +0x1654:  mov    %eax,-0xc(%ebp)
0826cd89 +0x1657:  mov    0xc(%ebp),%edx
0826cd8c +0x165a:  mov    -0xc(%ebp),%eax
0826cd8f +0x165d:  mov    %edx,0x4(%esp)
0826cd93 +0x1661:  mov    %eax,(%esp)
0826cd96 +0x1664:  call   086dad20 <_ZNSt15_List_node_base4hookEPS_>  ; std::_List_node_base::hook(std::_List_node_base*)
0826cd9b +0x1669:  leave
0826cd9c +0x166a:  ret
0826cd9d +0x166b:  nop
0826cd9e +0x166c:  push   %ebp
0826cd9f +0x166d:  mov    %esp,%ebp
0826cda1 +0x166f:  sub    $0x18,%esp
0826cda4 +0x1672:  mov    0x8(%ebp),%eax
0826cda7 +0x1675:  movl   $0x0,0x8(%esp)
0826cdaf +0x167d:  movl   $0x1,0x4(%esp)
0826cdb7 +0x1685:  mov    %eax,(%esp)
0826cdba +0x1688:  call   0826cf2c <+0x17fa>
0826cdbf +0x168d:  leave
0826cdc0 +0x168e:  ret
0826cdc1 +0x168f:  push   %ebp
0826cdc2 +0x1690:  mov    %esp,%ebp
0826cdc4 +0x1692:  mov    0x8(%ebp),%eax
0826cdc7 +0x1695:  pop    %ebp
0826cdc8 +0x1696:  ret
0826cdc9 +0x1697:  nop
0826cdca +0x1698:  push   %ebp
0826cdcb +0x1699:  mov    %esp,%ebp
0826cdcd +0x169b:  push   %edi
0826cdce +0x169c:  push   %esi
0826cdcf +0x169d:  push   %ebx
0826cdd0 +0x169e:  sub    $0x2c,%esp
0826cdd3 +0x16a1:  mov    0x10(%ebp),%eax
0826cdd6 +0x16a4:  mov    %eax,(%esp)
0826cdd9 +0x16a7:  call   0826cdc1 <+0x168f>
0826cdde +0x16ac:  mov    %eax,%edi
0826cde0 +0x16ae:  mov    0xc(%ebp),%esi
0826cde3 +0x16b1:  mov    %esi,0x4(%esp)
0826cde7 +0x16b5:  movl   $0x34,(%esp)
0826cdee +0x16bc:  call   0807ef4c <_GLOBAL__I__Z13base64_encodePKhjRSs+0x1c>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x1c
0826cdf3 +0x16c1:  mov    %eax,%ebx
0826cdf5 +0x16c3:  mov    %ebx,%eax
0826cdf7 +0x16c5:  test   %eax,%eax
0826cdf9 +0x16c7:  je     0826ce29 <+0x16f7>
0826cdfb +0x16c9:  mov    %ebx,%eax
0826cdfd +0x16cb:  mov    %edi,0x4(%esp)
0826ce01 +0x16cf:  mov    %eax,(%esp)
0826ce04 +0x16d2:  call   0826cf8e <+0x185c>
0826ce09 +0x16d7:  jmp    0826ce29 <+0x16f7>
0826ce0b +0x16d9:  mov    %edx,%edi
0826ce0d +0x16db:  mov    %eax,-0x1c(%ebp)
0826ce10 +0x16de:  mov    %esi,0x4(%esp)
0826ce14 +0x16e2:  mov    %ebx,(%esp)
0826ce17 +0x16e5:  call   0807fff6 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x1c>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x1c
0826ce1c +0x16ea:  mov    -0x1c(%ebp),%eax
0826ce1f +0x16ed:  mov    %edi,%edx
0826ce21 +0x16ef:  mov    %eax,(%esp)
0826ce24 +0x16f2:  call   08ae3750 <_Unwind_Resume>
0826ce29 +0x16f7:  add    $0x2c,%esp
0826ce2c +0x16fa:  pop    %ebx
0826ce2d +0x16fb:  pop    %esi
0826ce2e +0x16fc:  pop    %edi
0826ce2f +0x16fd:  pop    %ebp
0826ce30 +0x16fe:  ret
0826ce31 +0x16ff:  nop
0826ce32 +0x1700:  push   %ebp
0826ce33 +0x1701:  mov    %esp,%ebp
0826ce35 +0x1703:  sub    $0x18,%esp
0826ce38 +0x1706:  mov    0x8(%ebp),%eax
0826ce3b +0x1709:  mov    %eax,(%esp)
0826ce3e +0x170c:  call   0826cfda <+0x18a8>
0826ce43 +0x1711:  cmp    0xc(%ebp),%eax
0826ce46 +0x1714:  setb   %al
0826ce49 +0x1717:  movzbl %al,%eax
0826ce4c +0x171a:  test   %eax,%eax
0826ce4e +0x171c:  setne  %al
0826ce51 +0x171f:  test   %al,%al
0826ce53 +0x1721:  je     0826ce5a <+0x1728>
0826ce55 +0x1723:  call   086d93f0 <_ZSt17__throw_bad_allocv>  ; std::__throw_bad_alloc()
0826ce5a +0x1728:  mov    0xc(%ebp),%edx
0826ce5d +0x172b:  mov    %edx,%eax
0826ce5f +0x172d:  add    %eax,%eax
0826ce61 +0x172f:  add    %edx,%eax
0826ce63 +0x1731:  shl    $0x2,%eax
0826ce66 +0x1734:  mov    %eax,(%esp)
0826ce69 +0x1737:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0826ce6e +0x173c:  leave
0826ce6f +0x173d:  ret
0826ce70 +0x173e:  push   %ebp
0826ce71 +0x173f:  mov    %esp,%ebp
0826ce73 +0x1741:  sub    $0x18,%esp
0826ce76 +0x1744:  mov    0x8(%ebp),%eax
0826ce79 +0x1747:  movl   $0x0,(%eax)
0826ce7f +0x174d:  mov    0x8(%ebp),%eax
0826ce82 +0x1750:  movl   $0x0,0x4(%eax)
0826ce89 +0x1757:  mov    0xc(%ebp),%eax
0826ce8c +0x175a:  mov    %eax,(%esp)
0826ce8f +0x175d:  call   08080ff4 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x101a>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x101a
0826ce94 +0x1762:  mov    (%eax),%edx
0826ce96 +0x1764:  mov    0x8(%ebp),%eax
0826ce99 +0x1767:  mov    %edx,0x8(%eax)
0826ce9c +0x176a:  leave
0826ce9d +0x176b:  ret
0826ce9e +0x176c:  push   %ebp
0826ce9f +0x176d:  mov    %esp,%ebp
0826cea1 +0x176f:  pop    %ebp
0826cea2 +0x1770:  ret
0826cea3 +0x1771:  nop
0826cea4 +0x1772:  push   %ebp
0826cea5 +0x1773:  mov    %esp,%ebp
0826cea7 +0x1775:  pop    %ebp
0826cea8 +0x1776:  ret
0826cea9 +0x1777:  nop
0826ceaa +0x1778:  push   %ebp
0826ceab +0x1779:  mov    %esp,%ebp
0826cead +0x177b:  push   %esi
0826ceae +0x177c:  push   %ebx
0826ceaf +0x177d:  sub    $0x20,%esp
0826ceb2 +0x1780:  mov    0x8(%ebp),%eax
0826ceb5 +0x1783:  mov    %eax,(%esp)
0826ceb8 +0x1786:  call   0826cc8c <+0x155a>
0826cebd +0x178b:  mov    %eax,-0xc(%ebp)
0826cec0 +0x178e:  mov    0xc(%ebp),%eax
0826cec3 +0x1791:  mov    %eax,(%esp)
0826cec6 +0x1794:  call   080da877 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0xa14>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0xa14
0826cecb +0x1799:  mov    %eax,%ebx
0826cecd +0x179b:  mov    0x8(%ebp),%eax
0826ced0 +0x179e:  mov    %eax,(%esp)
0826ced3 +0x17a1:  call   0823b988 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+&_ZL14gUnicodeBuffer+0x6b06>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+&_ZL14gUnicodeBuffer+0x6b06
0826ced8 +0x17a6:  mov    %ebx,0x8(%esp)
0826cedc +0x17aa:  mov    -0xc(%ebp),%edx
0826cedf +0x17ad:  mov    %edx,0x4(%esp)
0826cee3 +0x17b1:  mov    %eax,(%esp)
0826cee6 +0x17b4:  call   0826cfe4 <+0x18b2>
0826ceeb +0x17b9:  jmp    0826cf21 <+0x17ef>
0826ceed +0x17bb:  mov    %eax,(%esp)
0826cef0 +0x17be:  call   08725ce0 <__cxa_begin_catch>
0826cef5 +0x17c3:  mov    0x8(%ebp),%eax
0826cef8 +0x17c6:  mov    -0xc(%ebp),%edx
0826cefb +0x17c9:  mov    %edx,0x4(%esp)
0826ceff +0x17cd:  mov    %eax,(%esp)
0826cf02 +0x17d0:  call   0823b9aa <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+&_ZL14gUnicodeBuffer+0x6b28>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+&_ZL14gUnicodeBuffer+0x6b28
0826cf07 +0x17d5:  call   08724be0 <__cxa_rethrow>
0826cf0c +0x17da:  mov    %edx,%ebx
0826cf0e +0x17dc:  mov    %eax,%esi
0826cf10 +0x17de:  call   08725c30 <__cxa_end_catch>
0826cf15 +0x17e3:  mov    %esi,%eax
0826cf17 +0x17e5:  mov    %ebx,%edx
0826cf19 +0x17e7:  mov    %eax,(%esp)
0826cf1c +0x17ea:  call   08ae3750 <_Unwind_Resume>
0826cf21 +0x17ef:  mov    -0xc(%ebp),%eax
0826cf24 +0x17f2:  add    $0x20,%esp
0826cf27 +0x17f5:  pop    %ebx
0826cf28 +0x17f6:  pop    %esi
0826cf29 +0x17f7:  pop    %ebp
0826cf2a +0x17f8:  ret
0826cf2b +0x17f9:  nop
0826cf2c +0x17fa:  push   %ebp
0826cf2d +0x17fb:  mov    %esp,%ebp
0826cf2f +0x17fd:  sub    $0x18,%esp
0826cf32 +0x1800:  mov    0x8(%ebp),%eax
0826cf35 +0x1803:  mov    %eax,(%esp)
0826cf38 +0x1806:  call   0826d024 <+0x18f2>
0826cf3d +0x180b:  cmp    0xc(%ebp),%eax
0826cf40 +0x180e:  setb   %al
0826cf43 +0x1811:  movzbl %al,%eax
0826cf46 +0x1814:  test   %eax,%eax
0826cf48 +0x1816:  setne  %al
0826cf4b +0x1819:  test   %al,%al
0826cf4d +0x181b:  je     0826cf54 <+0x1822>
0826cf4f +0x181d:  call   086d93f0 <_ZSt17__throw_bad_allocv>  ; std::__throw_bad_alloc()
0826cf54 +0x1822:  mov    0xc(%ebp),%eax
0826cf57 +0x1825:  imul   $0x34,%eax,%eax
0826cf5a +0x1828:  mov    %eax,(%esp)
0826cf5d +0x182b:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0826cf62 +0x1830:  leave
0826cf63 +0x1831:  ret
0826cf64 +0x1832:  push   %ebp
0826cf65 +0x1833:  mov    %esp,%ebp
0826cf67 +0x1835:  sub    $0x18,%esp
0826cf6a +0x1838:  mov    0x8(%ebp),%eax
0826cf6d +0x183b:  mov    0xc(%ebp),%edx
0826cf70 +0x183e:  mov    (%edx),%edx
0826cf72 +0x1840:  mov    %edx,(%eax)
0826cf74 +0x1842:  mov    0xc(%ebp),%eax
0826cf77 +0x1845:  lea    0x4(%eax),%edx
0826cf7a +0x1848:  mov    0x8(%ebp),%eax
0826cf7d +0x184b:  add    $0x4,%eax
0826cf80 +0x184e:  mov    %edx,0x4(%esp)
0826cf84 +0x1852:  mov    %eax,(%esp)
0826cf87 +0x1855:  call   0826bb46 <+0x414>
0826cf8c +0x185a:  leave
0826cf8d +0x185b:  ret
0826cf8e +0x185c:  push   %ebp
0826cf8f +0x185d:  mov    %esp,%ebp
0826cf91 +0x185f:  sub    $0x18,%esp
0826cf94 +0x1862:  mov    0x8(%ebp),%eax
0826cf97 +0x1865:  movl   $0x0,(%eax)
0826cf9d +0x186b:  mov    0x8(%ebp),%eax
0826cfa0 +0x186e:  movl   $0x0,0x4(%eax)
0826cfa7 +0x1875:  mov    0x8(%ebp),%eax
0826cfaa +0x1878:  movl   $0x0,0x8(%eax)
0826cfb1 +0x187f:  mov    0x8(%ebp),%eax
0826cfb4 +0x1882:  movl   $0x0,0xc(%eax)
0826cfbb +0x1889:  mov    0xc(%ebp),%eax
0826cfbe +0x188c:  mov    %eax,(%esp)
0826cfc1 +0x188f:  call   0826cdc1 <+0x168f>
0826cfc6 +0x1894:  mov    0x8(%ebp),%edx
0826cfc9 +0x1897:  add    $0x10,%edx
0826cfcc +0x189a:  mov    %eax,0x4(%esp)
0826cfd0 +0x189e:  mov    %edx,(%esp)
0826cfd3 +0x18a1:  call   0826cf64 <+0x1832>
0826cfd8 +0x18a6:  leave
0826cfd9 +0x18a7:  ret
0826cfda +0x18a8:  push   %ebp
0826cfdb +0x18a9:  mov    %esp,%ebp
0826cfdd +0x18ab:  mov    $0x15555555,%eax
0826cfe2 +0x18b0:  pop    %ebp
0826cfe3 +0x18b1:  ret
0826cfe4 +0x18b2:  push   %ebp
0826cfe5 +0x18b3:  mov    %esp,%ebp
0826cfe7 +0x18b5:  push   %ebx
0826cfe8 +0x18b6:  sub    $0x14,%esp
0826cfeb +0x18b9:  mov    0x10(%ebp),%eax
0826cfee +0x18bc:  mov    %eax,(%esp)
0826cff1 +0x18bf:  call   080da877 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0xa14>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0xa14
0826cff6 +0x18c4:  mov    %eax,%ebx
0826cff8 +0x18c6:  mov    0xc(%ebp),%eax
0826cffb +0x18c9:  mov    %eax,0x4(%esp)
0826cfff +0x18cd:  movl   $0xc,(%esp)
0826d006 +0x18d4:  call   0807ef4c <_GLOBAL__I__Z13base64_encodePKhjRSs+0x1c>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x1c
0826d00b +0x18d9:  mov    %eax,%edx
0826d00d +0x18db:  test   %edx,%edx
0826d00f +0x18dd:  je     0826d01d <+0x18eb>
0826d011 +0x18df:  mov    %ebx,0x4(%esp)
0826d015 +0x18e3:  mov    %eax,(%esp)
0826d018 +0x18e6:  call   0826d02e <+0x18fc>
0826d01d +0x18eb:  add    $0x14,%esp
0826d020 +0x18ee:  pop    %ebx
0826d021 +0x18ef:  pop    %ebp
0826d022 +0x18f0:  ret
0826d023 +0x18f1:  nop
0826d024 +0x18f2:  push   %ebp
0826d025 +0x18f3:  mov    %esp,%ebp
0826d027 +0x18f5:  mov    $0x4ec4ec4,%eax
0826d02c +0x18fa:  pop    %ebp
0826d02d +0x18fb:  ret
0826d02e +0x18fc:  push   %ebp
0826d02f +0x18fd:  mov    %esp,%ebp
0826d031 +0x18ff:  sub    $0x18,%esp
0826d034 +0x1902:  mov    0x8(%ebp),%eax
0826d037 +0x1905:  movl   $0x0,(%eax)
0826d03d +0x190b:  mov    0x8(%ebp),%eax
0826d040 +0x190e:  movl   $0x0,0x4(%eax)
0826d047 +0x1915:  mov    0xc(%ebp),%eax
0826d04a +0x1918:  mov    %eax,(%esp)
0826d04d +0x191b:  call   080da877 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0xa14>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0xa14
0826d052 +0x1920:  mov    (%eax),%edx
0826d054 +0x1922:  mov    0x8(%ebp),%eax
0826d057 +0x1925:  mov    %edx,0x8(%eax)
0826d05a +0x1928:  leave
0826d05b +0x1929:  ret
```

## 反编译 C

```c
// <global>::global @ 0x826b732

/* QuickParty::CQuickParty::CQuickParty() */

void QuickParty::CQuickParty::_GLOBAL__I_CQuickParty(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
