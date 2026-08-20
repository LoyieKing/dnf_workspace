# increase_status

`_ZN5CUser15increase_statusEs`

`CUser::increase_status(short)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x086657fc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086657fc  _ZN5CUser15increase_statusEs
#           CUser::increase_status(short)
# range [0x086657fc, 0x086686ec]
086657fc +0x0000:  push   %ebp
086657fd +0x0001:  mov    %esp,%ebp
086657ff +0x0003:  push   %edi
08665800 +0x0004:  push   %esi
08665801 +0x0005:  push   %ebx
08665802 +0x0006:  sub    $0x20c,%esp
08665808 +0x000c:  mov    0xc(%ebp),%eax
0866580b +0x000f:  mov    %ax,-0x1ec(%ebp)
08665812 +0x0016:  lea    -0xd0(%ebp),%eax
08665818 +0x001c:  mov    %eax,(%esp)
0866581b +0x001f:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
08665820 +0x0024:  mov    0x8(%ebp),%eax
08665823 +0x0027:  mov    %eax,(%esp)
08665826 +0x002a:  call   080da2fe <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x49b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x49b
0866582b +0x002f:  test   %al,%al
0866582d +0x0031:  je     08665859 <+0x5d>
0866582f +0x0033:  lea    -0xd0(%ebp),%eax
08665835 +0x0039:  mov    %eax,0xc(%esp)
08665839 +0x003d:  movl   $0x13,0x8(%esp)
08665841 +0x0045:  movl   $0x20,0x4(%esp)
08665849 +0x004d:  mov    0x8(%ebp),%eax
0866584c +0x0050:  mov    %eax,(%esp)
0866584f +0x0053:  call   0867bfae <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKEThR11PacketGuard>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char, PacketGuard&)
08665854 +0x0058:  jmp    086686d4 <+0x2ed8>
08665859 +0x005d:  movswl -0x1ec(%ebp),%ebx
08665860 +0x0064:  mov    0x8(%ebp),%eax
08665863 +0x0067:  mov    %eax,(%esp)
08665866 +0x006a:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0866586b +0x006f:  lea    -0x14d(%ebp),%edx
08665871 +0x0075:  mov    %ebx,0xc(%esp)
08665875 +0x0079:  movl   $0x1,0x8(%esp)
0866587d +0x0081:  mov    %eax,0x4(%esp)
08665881 +0x0085:  mov    %edx,(%esp)
08665884 +0x0088:  call   084fb918 <_ZNK10CInventory12GetInvenSlotEii>  ; CInventory::GetInvenSlot(int, int) const
08665889 +0x008d:  sub    $0x4,%esp
0866588c +0x0090:  movb   $0xff,-0xd1(%ebp)
08665893 +0x0097:  movl   $0x0,-0xd8(%ebp)
0866589d +0x00a1:  mov    -0x14b(%ebp),%eax
086658a3 +0x00a7:  cmp    $0x4b5,%eax
086658a8 +0x00ac:  je     08665bfd <+0x401>
086658ae +0x00b2:  cmp    $0x4b5,%eax
086658b3 +0x00b7:  ja     08665a2b <+0x22f>
086658b9 +0x00bd:  cmp    $0x40c,%eax
086658be +0x00c2:  je     08665c3f <+0x443>
086658c4 +0x00c8:  cmp    $0x40c,%eax
086658c9 +0x00cd:  ja     0866597e <+0x182>
086658cf +0x00d3:  cmp    $0xc9,%eax
086658d4 +0x00d8:  je     08665e38 <+0x63c>
086658da +0x00de:  cmp    $0xc9,%eax
086658df +0x00e3:  ja     0866592b <+0x12f>
086658e1 +0x00e5:  cmp    $0x2a,%eax
086658e4 +0x00e8:  je     086665ed <+0xdf1>
086658ea +0x00ee:  cmp    $0x2a,%eax
086658ed +0x00f1:  ja     08665906 <+0x10a>
086658ef +0x00f3:  cmp    $0x3,%eax
086658f2 +0x00f6:  je     0866607b <+0x87f>
086658f8 +0x00fc:  cmp    $0x1c,%eax
086658fb +0x00ff:  je     0866607b <+0x87f>
08665901 +0x0105:  jmp    08666751 <+0xf55>
08665906 +0x010a:  cmp    $0x6d,%eax
08665909 +0x010d:  je     0866607b <+0x87f>
0866590f +0x0113:  cmp    $0x6d,%eax
08665912 +0x0116:  jb     08666751 <+0xf55>
08665918 +0x011c:  sub    $0xa1,%eax
0866591d +0x0121:  cmp    $0x1,%eax
08665920 +0x0124:  ja     08666751 <+0xf55>
08665926 +0x012a:  jmp    0866607b <+0x87f>
0866592b +0x012f:  cmp    $0x3c3,%eax
08665930 +0x0134:  je     0866607b <+0x87f>
08665936 +0x013a:  cmp    $0x3c3,%eax
0866593b +0x013f:  ja     08665958 <+0x15c>
0866593d +0x0141:  cmp    $0x394,%eax
08665942 +0x0146:  je     0866607b <+0x87f>
08665948 +0x014c:  cmp    $0x3c0,%eax
0866594d +0x0151:  je     0866607b <+0x87f>
08665953 +0x0157:  jmp    08666751 <+0xf55>
08665958 +0x015c:  cmp    $0x40a,%eax
0866595d +0x0161:  je     08665c13 <+0x417>
08665963 +0x0167:  cmp    $0x40a,%eax
08665968 +0x016c:  ja     08665c29 <+0x42d>
0866596e +0x0172:  cmp    $0x407,%eax
08665973 +0x0177:  je     08665bbb <+0x3bf>
08665979 +0x017d:  jmp    08666751 <+0xf55>
0866597e +0x0182:  cmp    $0x413,%eax
08665983 +0x0187:  je     08665de0 <+0x5e4>
08665989 +0x018d:  cmp    $0x413,%eax
0866598e +0x0192:  ja     086659d8 <+0x1dc>
08665990 +0x0194:  cmp    $0x40f,%eax
08665995 +0x0199:  je     08665d88 <+0x58c>
0866599b +0x019f:  cmp    $0x40f,%eax
086659a0 +0x01a4:  ja     086659bd <+0x1c1>
086659a2 +0x01a6:  cmp    $0x40d,%eax
086659a7 +0x01ab:  je     08665c55 <+0x459>
086659ad +0x01b1:  cmp    $0x40e,%eax
086659b2 +0x01b6:  je     08665bd1 <+0x3d5>
086659b8 +0x01bc:  jmp    08666751 <+0xf55>
086659bd +0x01c1:  cmp    $0x411,%eax
086659c2 +0x01c6:  je     08665db4 <+0x5b8>
086659c8 +0x01cc:  cmp    $0x411,%eax
086659cd +0x01d1:  ja     08665dca <+0x5ce>
086659d3 +0x01d7:  jmp    08665d9e <+0x5a2>
086659d8 +0x01dc:  cmp    $0x416,%eax
086659dd +0x01e1:  je     08665e22 <+0x626>
086659e3 +0x01e7:  cmp    $0x416,%eax
086659e8 +0x01ec:  ja     08665a05 <+0x209>
086659ea +0x01ee:  cmp    $0x414,%eax
086659ef +0x01f3:  je     08665df6 <+0x5fa>
086659f5 +0x01f9:  cmp    $0x415,%eax
086659fa +0x01fe:  je     08665e0c <+0x610>
08665a00 +0x0204:  jmp    08666751 <+0xf55>
08665a05 +0x0209:  cmp    $0x4b0,%eax
08665a0a +0x020e:  jb     08666751 <+0xf55>
08665a10 +0x0214:  cmp    $0x4b2,%eax
08665a15 +0x0219:  jbe    0866662f <+0xe33>
08665a1b +0x021f:  cmp    $0x4b4,%eax
08665a20 +0x0224:  je     08665be7 <+0x3eb>
08665a26 +0x022a:  jmp    08666751 <+0xf55>
08665a2b +0x022f:  cmp    $0x204c,%eax
08665a30 +0x0234:  ja     08665af9 <+0x2fd>
08665a36 +0x023a:  cmp    $0x204b,%eax
08665a3b +0x023f:  jae    08665c97 <+0x49b>
08665a41 +0x0245:  cmp    $0x1bbd,%eax
08665a46 +0x024a:  je     08666517 <+0xd1b>
08665a4c +0x0250:  cmp    $0x1bbd,%eax
08665a51 +0x0255:  ja     08665aa6 <+0x2aa>
08665a53 +0x0257:  cmp    $0x4d0,%eax
08665a58 +0x025c:  je     08665c81 <+0x485>
08665a5e +0x0262:  cmp    $0x4d0,%eax
08665a63 +0x0267:  ja     08665a80 <+0x284>
08665a65 +0x0269:  cmp    $0x4b6,%eax
08665a6a +0x026e:  je     0866607b <+0x87f>
08665a70 +0x0274:  cmp    $0x4cf,%eax
08665a75 +0x0279:  je     08665c6b <+0x46f>
08665a7b +0x027f:  jmp    08666751 <+0xf55>
08665a80 +0x0284:  cmp    $0x4e5,%eax
08665a85 +0x0289:  je     0866607b <+0x87f>
08665a8b +0x028f:  cmp    $0xc84,%eax
08665a90 +0x0294:  je     08665fd3 <+0x7d7>
08665a96 +0x029a:  cmp    $0x4df,%eax
08665a9b +0x029f:  je     08666603 <+0xe07>
08665aa1 +0x02a5:  jmp    08666751 <+0xf55>
08665aa6 +0x02aa:  cmp    $0x1c0d,%eax
08665aab +0x02af:  je     086665d7 <+0xddb>
08665ab1 +0x02b5:  cmp    $0x1c0d,%eax
08665ab6 +0x02ba:  ja     08665ad3 <+0x2d7>
08665ab8 +0x02bc:  cmp    $0x1bc1,%eax
08665abd +0x02c1:  je     08666027 <+0x82b>
08665ac3 +0x02c7:  cmp    $0x1c0c,%eax
08665ac8 +0x02cc:  je     086665c1 <+0xdc5>
08665ace +0x02d2:  jmp    08666751 <+0xf55>
08665ad3 +0x02d7:  cmp    $0x1f16,%eax
08665ad8 +0x02dc:  je     08666619 <+0xe1d>
08665ade +0x02e2:  cmp    $0x1f71,%eax
08665ae3 +0x02e7:  je     08665c97 <+0x49b>
08665ae9 +0x02ed:  cmp    $0x1c82,%eax
08665aee +0x02f2:  je     0866656c <+0xd70>
08665af4 +0x02f8:  jmp    08666751 <+0xf55>
08665af9 +0x02fd:  cmp    $0x28bdb8,%eax
08665afe +0x0302:  je     08665e38 <+0x63c>
08665b04 +0x0308:  cmp    $0x28bdb8,%eax
08665b09 +0x030d:  ja     08665b56 <+0x35a>
08665b0b +0x030f:  cmp    $0x28974b,%eax
08665b10 +0x0314:  je     08666320 <+0xb24>
08665b16 +0x031a:  cmp    $0x28974b,%eax
08665b1b +0x031f:  ja     08665b30 <+0x334>
08665b1d +0x0321:  sub    $0x204e,%eax
08665b22 +0x0326:  cmp    $0x1,%eax
08665b25 +0x0329:  ja     08666751 <+0xf55>
08665b2b +0x032f:  jmp    08665c97 <+0x49b>
08665b30 +0x0334:  cmp    $0x289788,%eax
08665b35 +0x0339:  je     08666320 <+0xb24>
08665b3b +0x033f:  cmp    $0x28982c,%eax
08665b40 +0x0344:  je     0866607b <+0x87f>
08665b46 +0x034a:  cmp    $0x28974c,%eax
08665b4b +0x034f:  je     08666425 <+0xc29>
08665b51 +0x0355:  jmp    08666751 <+0xf55>
08665b56 +0x035a:  cmp    $0x989a13,%eax
08665b5b +0x035f:  je     08665d24 <+0x528>
08665b61 +0x0365:  cmp    $0x989a13,%eax
08665b66 +0x036a:  ja     08665b83 <+0x387>
08665b68 +0x036c:  cmp    $0x28d14d,%eax
08665b6d +0x0371:  je     086665ed <+0xdf1>
08665b73 +0x0377:  cmp    $0x28d2bc,%eax
08665b78 +0x037c:  je     08665c97 <+0x49b>
08665b7e +0x0382:  jmp    08666751 <+0xf55>
08665b83 +0x0387:  cmp    $0x2920915c,%eax
08665b88 +0x038c:  je     0866662f <+0xe33>
08665b8e +0x0392:  cmp    $0x292091ad,%eax
08665b93 +0x0397:  je     08665ba5 <+0x3a9>
08665b95 +0x0399:  cmp    $0x292090e1,%eax
08665b9a +0x039e:  je     08665d24 <+0x528>
08665ba0 +0x03a4:  jmp    08666751 <+0xf55>
08665ba5 +0x03a9:  movb   $0x19,-0xd1(%ebp)
08665bac +0x03b0:  movl   $0x1,-0xd8(%ebp)
08665bb6 +0x03ba:  jmp    08666990 <+0x1194>
08665bbb +0x03bf:  movb   $0x0,-0xd1(%ebp)
08665bc2 +0x03c6:  movl   $0x5,-0xd8(%ebp)
08665bcc +0x03d0:  jmp    08666990 <+0x1194>
08665bd1 +0x03d5:  movb   $0x0,-0xd1(%ebp)
08665bd8 +0x03dc:  movl   $0x14,-0xd8(%ebp)
08665be2 +0x03e6:  jmp    08666990 <+0x1194>
08665be7 +0x03eb:  movb   $0x11,-0xd1(%ebp)
08665bee +0x03f2:  movl   $0x1,-0xd8(%ebp)
08665bf8 +0x03fc:  jmp    08666990 <+0x1194>
08665bfd +0x0401:  movb   $0x11,-0xd1(%ebp)
08665c04 +0x0408:  movl   $0x5,-0xd8(%ebp)
08665c0e +0x0412:  jmp    08666990 <+0x1194>
08665c13 +0x0417:  movb   $0x1,-0xd1(%ebp)
08665c1a +0x041e:  movl   $0x64,-0xd8(%ebp)
08665c24 +0x0428:  jmp    08666990 <+0x1194>
08665c29 +0x042d:  movb   $0x1,-0xd1(%ebp)
08665c30 +0x0434:  movl   $0x3e8,-0xd8(%ebp)
08665c3a +0x043e:  jmp    08666990 <+0x1194>
08665c3f +0x0443:  movb   $0x1,-0xd1(%ebp)
08665c46 +0x044a:  movl   $0x2710,-0xd8(%ebp)
08665c50 +0x0454:  jmp    08666990 <+0x1194>
08665c55 +0x0459:  movb   $0x1,-0xd1(%ebp)
08665c5c +0x0460:  movl   $&_ZL14gUnicodeBuffer+0xe174,-0xd8(%ebp)
08665c66 +0x046a:  jmp    08666990 <+0x1194>
08665c6b +0x046f:  movb   $0x1,-0xd1(%ebp)
08665c72 +0x0476:  movl   $0xf4240,-0xd8(%ebp)
08665c7c +0x0480:  jmp    08666990 <+0x1194>
08665c81 +0x0485:  movb   $0x1,-0xd1(%ebp)
08665c88 +0x048c:  movl   $0x989680,-0xd8(%ebp)
08665c92 +0x0496:  jmp    08666990 <+0x1194>
08665c97 +0x049b:  mov    -0x14b(%ebp),%eax
08665c9d +0x04a1:  mov    %eax,0x4(%esp)
08665ca1 +0x04a5:  mov    0x8(%ebp),%eax
08665ca4 +0x04a8:  mov    %eax,(%esp)
08665ca7 +0x04ab:  call   08689d06 <_ZN5CUser19CalLevelUpItemCheckEm>  ; CUser::CalLevelUpItemCheck(unsigned long)
08665cac +0x04b0:  test   %al,%al
08665cae +0x04b2:  je     08665ced <+0x4f1>
08665cb0 +0x04b4:  movl   $0x3b,0x10(%esp)
08665cb8 +0x04bc:  movl   $0x13,0xc(%esp)
08665cc0 +0x04c4:  lea    -0xd8(%ebp),%eax
08665cc6 +0x04ca:  mov    %eax,0x8(%esp)
08665cca +0x04ce:  lea    -0xd1(%ebp),%eax
08665cd0 +0x04d4:  mov    %eax,0x4(%esp)
08665cd4 +0x04d8:  mov    0x8(%ebp),%eax
08665cd7 +0x04db:  mov    %eax,(%esp)
08665cda +0x04de:  call   08689d74 <_ZN5CUser19CalLevelUpItemStateERcRiii>  ; CUser::CalLevelUpItemState(char&, int&, int, int)
08665cdf +0x04e3:  xor    $0x1,%eax
08665ce2 +0x04e6:  test   %al,%al
08665ce4 +0x04e8:  je     08665ced <+0x4f1>
08665ce6 +0x04ea:  mov    $0x1,%eax
08665ceb +0x04ef:  jmp    08665cf2 <+0x4f6>
08665ced +0x04f1:  mov    $0x0,%eax
08665cf2 +0x04f6:  test   %al,%al
08665cf4 +0x04f8:  je     08666983 <+0x1187>
08665cfa +0x04fe:  lea    -0xd0(%ebp),%eax
08665d00 +0x0504:  mov    %eax,0xc(%esp)
08665d04 +0x0508:  movl   $0x13,0x8(%esp)
08665d0c +0x0510:  movl   $0x20,0x4(%esp)
08665d14 +0x0518:  mov    0x8(%ebp),%eax
08665d17 +0x051b:  mov    %eax,(%esp)
08665d1a +0x051e:  call   0867bfae <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKEThR11PacketGuard>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char, PacketGuard&)
08665d1f +0x0523:  jmp    086686d4 <+0x2ed8>
08665d24 +0x0528:  movl   $0x54,0x10(%esp)
08665d2c +0x0530:  movl   $0x1,0xc(%esp)
08665d34 +0x0538:  lea    -0xd8(%ebp),%eax
08665d3a +0x053e:  mov    %eax,0x8(%esp)
08665d3e +0x0542:  lea    -0xd1(%ebp),%eax
08665d44 +0x0548:  mov    %eax,0x4(%esp)
08665d48 +0x054c:  mov    0x8(%ebp),%eax
08665d4b +0x054f:  mov    %eax,(%esp)
08665d4e +0x0552:  call   08689d74 <_ZN5CUser19CalLevelUpItemStateERcRiii>  ; CUser::CalLevelUpItemState(char&, int&, int, int)
08665d53 +0x0557:  xor    $0x1,%eax
08665d56 +0x055a:  test   %al,%al
08665d58 +0x055c:  je     08666986 <+0x118a>
08665d5e +0x0562:  lea    -0xd0(%ebp),%eax
08665d64 +0x0568:  mov    %eax,0xc(%esp)
08665d68 +0x056c:  movl   $0x13,0x8(%esp)
08665d70 +0x0574:  movl   $0x20,0x4(%esp)
08665d78 +0x057c:  mov    0x8(%ebp),%eax
08665d7b +0x057f:  mov    %eax,(%esp)
08665d7e +0x0582:  call   0867bfae <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKEThR11PacketGuard>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char, PacketGuard&)
08665d83 +0x0587:  jmp    086686d4 <+0x2ed8>
08665d88 +0x058c:  movb   $0x4,-0xd1(%ebp)
08665d8f +0x0593:  movl   $0x32,-0xd8(%ebp)
08665d99 +0x059d:  jmp    08666990 <+0x1194>
08665d9e +0x05a2:  movb   $0x6,-0xd1(%ebp)
08665da5 +0x05a9:  movl   $0x32,-0xd8(%ebp)
08665daf +0x05b3:  jmp    08666990 <+0x1194>
08665db4 +0x05b8:  movb   $0x5,-0xd1(%ebp)
08665dbb +0x05bf:  movl   $0x32,-0xd8(%ebp)
08665dc5 +0x05c9:  jmp    08666990 <+0x1194>
08665dca +0x05ce:  movb   $0x7,-0xd1(%ebp)
08665dd1 +0x05d5:  movl   $0x32,-0xd8(%ebp)
08665ddb +0x05df:  jmp    08666990 <+0x1194>
08665de0 +0x05e4:  movb   $0x2,-0xd1(%ebp)
08665de7 +0x05eb:  movl   $0xfa,-0xd8(%ebp)
08665df1 +0x05f5:  jmp    08666990 <+0x1194>
08665df6 +0x05fa:  movb   $0x3,-0xd1(%ebp)
08665dfd +0x0601:  movl   $0xfa,-0xd8(%ebp)
08665e07 +0x060b:  jmp    08666990 <+0x1194>
08665e0c +0x0610:  movb   $0x8,-0xd1(%ebp)
08665e13 +0x0617:  movl   $0xa,-0xd8(%ebp)
08665e1d +0x0621:  jmp    08666990 <+0x1194>
08665e22 +0x0626:  movb   $0x9,-0xd1(%ebp)
08665e29 +0x062d:  movl   $0xa,-0xd8(%ebp)
08665e33 +0x0637:  jmp    08666990 <+0x1194>
08665e38 +0x063c:  mov    &_ZN10GlobalData15s_event_managerE,%eax
08665e3d +0x0641:  movl   $0xf,0x4(%esp)
08665e45 +0x0649:  mov    %eax,(%esp)
08665e48 +0x064c:  call   08115998 <_ZN13CEventManager14GetRepeatEventEi>  ; CEventManager::GetRepeatEvent(int)
08665e4d +0x0651:  mov    %eax,-0xa8(%ebp)
08665e53 +0x0657:  cmpl   $0x0,-0xa8(%ebp)
08665e5a +0x065e:  je     08665e87 <+0x68b>
08665e5c +0x0660:  mov    -0xa8(%ebp),%eax
08665e62 +0x0666:  mov    (%eax),%eax
08665e64 +0x0668:  add    $0x34,%eax
08665e67 +0x066b:  mov    (%eax),%edx
08665e69 +0x066d:  mov    -0xa8(%ebp),%eax
08665e6f +0x0673:  movl   $0x0,0x4(%esp)
08665e77 +0x067b:  mov    %eax,(%esp)
08665e7a +0x067e:  call   *%edx
08665e7c +0x0680:  test   %al,%al
08665e7e +0x0682:  je     08665e87 <+0x68b>
08665e80 +0x0684:  mov    $0x1,%eax
08665e85 +0x0689:  jmp    08665e8c <+0x690>
08665e87 +0x068b:  mov    $0x0,%eax
08665e8c +0x0690:  test   %al,%al
08665e8e +0x0692:  je     08665f1c <+0x720>
08665e94 +0x0698:  lea    -0xd0(%ebp),%eax
08665e9a +0x069e:  mov    %eax,(%esp)
08665e9d +0x06a1:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
08665ea2 +0x06a6:  movl   $0x20,0x8(%esp)
08665eaa +0x06ae:  movl   $0x1,0x4(%esp)
08665eb2 +0x06b6:  lea    -0xd0(%ebp),%eax
08665eb8 +0x06bc:  mov    %eax,(%esp)
08665ebb +0x06bf:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
08665ec0 +0x06c4:  movl   $0x0,0x4(%esp)
08665ec8 +0x06cc:  lea    -0xd0(%ebp),%eax
08665ece +0x06d2:  mov    %eax,(%esp)
08665ed1 +0x06d5:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08665ed6 +0x06da:  movl   $0x13,0x4(%esp)
08665ede +0x06e2:  lea    -0xd0(%ebp),%eax
08665ee4 +0x06e8:  mov    %eax,(%esp)
08665ee7 +0x06eb:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08665eec +0x06f0:  movl   $0x1,0x4(%esp)
08665ef4 +0x06f8:  lea    -0xd0(%ebp),%eax
08665efa +0x06fe:  mov    %eax,(%esp)
08665efd +0x0701:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
08665f02 +0x0706:  lea    -0xd0(%ebp),%eax
08665f08 +0x070c:  mov    %eax,0x4(%esp)
08665f0c +0x0710:  mov    0x8(%ebp),%eax
08665f0f +0x0713:  mov    %eax,(%esp)
08665f12 +0x0716:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
08665f17 +0x071b:  jmp    086686d4 <+0x2ed8>
08665f1c +0x0720:  mov    0x8(%ebp),%eax
08665f1f +0x0723:  mov    %eax,(%esp)
08665f22 +0x0726:  call   08657766 <_ZNK5CUser24getCurCharacTotalFatigueEv>  ; CUser::getCurCharacTotalFatigue() const
08665f27 +0x072b:  test   %ax,%ax
08665f2a +0x072e:  sete   %al
08665f2d +0x0731:  test   %al,%al
08665f2f +0x0733:  je     08665fbd <+0x7c1>
08665f35 +0x0739:  lea    -0xd0(%ebp),%eax
08665f3b +0x073f:  mov    %eax,(%esp)
08665f3e +0x0742:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
08665f43 +0x0747:  movl   $0x20,0x8(%esp)
08665f4b +0x074f:  movl   $0x1,0x4(%esp)
08665f53 +0x0757:  lea    -0xd0(%ebp),%eax
08665f59 +0x075d:  mov    %eax,(%esp)
08665f5c +0x0760:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
08665f61 +0x0765:  movl   $0x0,0x4(%esp)
08665f69 +0x076d:  lea    -0xd0(%ebp),%eax
08665f6f +0x0773:  mov    %eax,(%esp)
08665f72 +0x0776:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08665f77 +0x077b:  movl   $0x43,0x4(%esp)
08665f7f +0x0783:  lea    -0xd0(%ebp),%eax
08665f85 +0x0789:  mov    %eax,(%esp)
08665f88 +0x078c:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08665f8d +0x0791:  movl   $0x1,0x4(%esp)
08665f95 +0x0799:  lea    -0xd0(%ebp),%eax
08665f9b +0x079f:  mov    %eax,(%esp)
08665f9e +0x07a2:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
08665fa3 +0x07a7:  lea    -0xd0(%ebp),%eax
08665fa9 +0x07ad:  mov    %eax,0x4(%esp)
08665fad +0x07b1:  mov    0x8(%ebp),%eax
08665fb0 +0x07b4:  mov    %eax,(%esp)
08665fb3 +0x07b7:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
08665fb8 +0x07bc:  jmp    086686d4 <+0x2ed8>
08665fbd +0x07c1:  movb   $0xe,-0xd1(%ebp)
08665fc4 +0x07c8:  movl   $0x0,-0xd8(%ebp)
08665fce +0x07d2:  jmp    08666990 <+0x1194>
08665fd3 +0x07d7:  mov    0x8(%ebp),%eax
08665fd6 +0x07da:  mov    %eax,(%esp)
08665fd9 +0x07dd:  call   0822f46c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4b16>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4b16
08665fde +0x07e2:  test   %eax,%eax
08665fe0 +0x07e4:  setne  %al
08665fe3 +0x07e7:  test   %al,%al
08665fe5 +0x07e9:  je     08665ffd <+0x801>
08665fe7 +0x07eb:  movb   $0xb,-0xd1(%ebp)
08665fee +0x07f2:  movl   $0xa,-0xd8(%ebp)
08665ff8 +0x07fc:  jmp    08666990 <+0x1194>
08665ffd +0x0801:  lea    -0xd0(%ebp),%eax
08666003 +0x0807:  mov    %eax,0xc(%esp)
08666007 +0x080b:  movl   $0x40,0x8(%esp)
0866600f +0x0813:  movl   $0x20,0x4(%esp)
08666017 +0x081b:  mov    0x8(%ebp),%eax
0866601a +0x081e:  mov    %eax,(%esp)
0866601d +0x0821:  call   0867bfae <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKEThR11PacketGuard>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char, PacketGuard&)
08666022 +0x0826:  jmp    086686d4 <+0x2ed8>
08666027 +0x082b:  mov    0x8(%ebp),%eax
0866602a +0x082e:  mov    %eax,(%esp)
0866602d +0x0831:  call   0822f46c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4b16>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4b16
08666032 +0x0836:  test   %eax,%eax
08666034 +0x0838:  setne  %al
08666037 +0x083b:  test   %al,%al
08666039 +0x083d:  je     08666051 <+0x855>
0866603b +0x083f:  movb   $0xb,-0xd1(%ebp)
08666042 +0x0846:  movl   $0x32,-0xd8(%ebp)
0866604c +0x0850:  jmp    08666990 <+0x1194>
08666051 +0x0855:  lea    -0xd0(%ebp),%eax
08666057 +0x085b:  mov    %eax,0xc(%esp)
0866605b +0x085f:  movl   $0x40,0x8(%esp)
08666063 +0x0867:  movl   $0x20,0x4(%esp)
0866606b +0x086f:  mov    0x8(%ebp),%eax
0866606e +0x0872:  mov    %eax,(%esp)
08666071 +0x0875:  call   0867bfae <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKEThR11PacketGuard>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char, PacketGuard&)
08666076 +0x087a:  jmp    086686d4 <+0x2ed8>
0866607b +0x087f:  mov    &_ZN10GlobalData22s_pSecuProtectionFieldE,%eax
08666080 +0x0884:  movl   $0x2c,0x8(%esp)
08666088 +0x088c:  mov    0x8(%ebp),%edx
0866608b +0x088f:  mov    %edx,0x4(%esp)
0866608f +0x0893:  mov    %eax,(%esp)
08666092 +0x0896:  call   08288a02 <_ZN21CSecu_ProtectionField5CheckEP5CUser18SECURITY_PROTCTION>  ; CSecu_ProtectionField::Check(CUser*, SECURITY_PROTCTION)
08666097 +0x089b:  mov    %eax,-0xa4(%ebp)
0866609d +0x08a1:  cmpl   $0x0,-0xa4(%ebp)
086660a4 +0x08a8:  je     086660d5 <+0x8d9>
086660a6 +0x08aa:  mov    -0xa4(%ebp),%eax
086660ac +0x08b0:  movzbl %al,%eax
086660af +0x08b3:  lea    -0xd0(%ebp),%edx
086660b5 +0x08b9:  mov    %edx,0xc(%esp)
086660b9 +0x08bd:  mov    %eax,0x8(%esp)
086660bd +0x08c1:  movl   $0x20,0x4(%esp)
086660c5 +0x08c9:  mov    0x8(%ebp),%eax
086660c8 +0x08cc:  mov    %eax,(%esp)
086660cb +0x08cf:  call   0867bfae <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKEThR11PacketGuard>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char, PacketGuard&)
086660d0 +0x08d4:  jmp    086686d4 <+0x2ed8>
086660d5 +0x08d9:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
086660da +0x08de:  mov    %eax,(%esp)
086660dd +0x08e1:  call   0823441e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9ac8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9ac8
086660e2 +0x08e6:  test   %al,%al
086660e4 +0x08e8:  je     08666110 <+0x914>
086660e6 +0x08ea:  lea    -0xd0(%ebp),%eax
086660ec +0x08f0:  mov    %eax,0xc(%esp)
086660f0 +0x08f4:  movl   $0x17,0x8(%esp)
086660f8 +0x08fc:  movl   $0x20,0x4(%esp)
08666100 +0x0904:  mov    0x8(%ebp),%eax
08666103 +0x0907:  mov    %eax,(%esp)
08666106 +0x090a:  call   0867bfae <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKEThR11PacketGuard>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char, PacketGuard&)
0866610b +0x090f:  jmp    086686d4 <+0x2ed8>
08666110 +0x0914:  movswl -0x1ec(%ebp),%eax
08666117 +0x091b:  mov    %eax,0x8(%esp)
0866611b +0x091f:  movl   $0x1,0x4(%esp)
08666123 +0x0927:  mov    0x8(%ebp),%eax
08666126 +0x092a:  mov    %eax,(%esp)
08666129 +0x092d:  call   08646942 <_ZNK5CUser13CheckItemLockEii>  ; CUser::CheckItemLock(int, int) const
0866612e +0x0932:  test   %al,%al
08666130 +0x0934:  je     0866615c <+0x960>
08666132 +0x0936:  lea    -0xd0(%ebp),%eax
08666138 +0x093c:  mov    %eax,0xc(%esp)
0866613c +0x0940:  movl   $0xd5,0x8(%esp)
08666144 +0x0948:  movl   $0x20,0x4(%esp)
0866614c +0x0950:  mov    0x8(%ebp),%eax
0866614f +0x0953:  mov    %eax,(%esp)
08666152 +0x0956:  call   0867bfae <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKEThR11PacketGuard>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char, PacketGuard&)
08666157 +0x095b:  jmp    086686d4 <+0x2ed8>
0866615c +0x0960:  mov    0x8(%ebp),%eax
0866615f +0x0963:  mov    %eax,(%esp)
08666162 +0x0966:  call   08609d10 <_ZN8WongWork13CSkillChanger14CheckConditionEPK5CUser>  ; WongWork::CSkillChanger::CheckCondition(CUser const*)
08666167 +0x096b:  xor    $0x1,%eax
0866616a +0x096e:  test   %al,%al
0866616c +0x0970:  je     0866619b <+0x99f>
0866616e +0x0972:  mov    0x8(%ebp),%eax
08666171 +0x0975:  mov    %eax,(%esp)
08666174 +0x0978:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
08666179 +0x097d:  mov    %eax,%ebx
0866617b +0x097f:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08666180 +0x0984:  mov    %ebx,0x4(%esp)
08666184 +0x0988:  mov    %eax,(%esp)
08666187 +0x098b:  call   08360442 <_ZNK12CDataManager13get_level_expEi>  ; CDataManager::get_level_exp(int) const
0866618c +0x0990:  mov    0x8(%ebp),%edx
0866618f +0x0993:  mov    %eax,0x4(%esp)
08666193 +0x0997:  mov    %edx,(%esp)
08666196 +0x099a:  call   0819a87c <_GLOBAL__I__ZN4ARAD10DISPATCHER23Arad_InternalDispatcherC2Ev+0x562>  ; global constructors keyed to ARAD::DISPATCHER::Arad_InternalDispatcher::Arad_InternalDispatcher()+0x562
0866619b +0x099f:  mov    -0x14b(%ebp),%eax
086661a1 +0x09a5:  cmp    $0x4b6,%eax
086661a6 +0x09aa:  je     086661b5 <+0x9b9>
086661a8 +0x09ac:  mov    -0x14b(%ebp),%eax
086661ae +0x09b2:  cmp    $0x4e5,%eax
086661b3 +0x09b7:  jne    08666226 <+0xa2a>
086661b5 +0x09b9:  mov    0x8(%ebp),%eax
086661b8 +0x09bc:  mov    %eax,(%esp)
086661bb +0x09bf:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
086661c0 +0x09c4:  cmp    $0x31,%eax
086661c3 +0x09c7:  setle  %al
086661c6 +0x09ca:  test   %al,%al
086661c8 +0x09cc:  jne    086686d4 <+0x2ed8>
086661ce +0x09d2:  movl   $0x21,0x4(%esp)
086661d6 +0x09da:  mov    0x8(%ebp),%eax
086661d9 +0x09dd:  mov    %eax,(%esp)
086661dc +0x09e0:  call   080e600e <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x144>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x144
086661e1 +0x09e5:  test   %al,%al
086661e3 +0x09e7:  je     0866620f <+0xa13>
086661e5 +0x09e9:  lea    -0xd0(%ebp),%eax
086661eb +0x09ef:  mov    %eax,0xc(%esp)
086661ef +0x09f3:  movl   $0xd8,0x8(%esp)
086661f7 +0x09fb:  movl   $0x20,0x4(%esp)
086661ff +0x0a03:  mov    0x8(%ebp),%eax
08666202 +0x0a06:  mov    %eax,(%esp)
08666205 +0x0a09:  call   0867bfae <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKEThR11PacketGuard>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char, PacketGuard&)
0866620a +0x0a0e:  jmp    086686d4 <+0x2ed8>
0866620f +0x0a13:  movl   $0x1,-0xd8(%ebp)
08666219 +0x0a1d:  movb   $0x12,-0xd1(%ebp)
08666220 +0x0a24:  nop
08666221 +0x0a25:  jmp    08666990 <+0x1194>
08666226 +0x0a2a:  mov    -0x14b(%ebp),%eax
0866622c +0x0a30:  cmp    $0x394,%eax
08666231 +0x0a35:  jne    08666249 <+0xa4d>
08666233 +0x0a37:  movl   $0x1,-0xd8(%ebp)
0866623d +0x0a41:  movb   $0xa,-0xd1(%ebp)
08666244 +0x0a48:  jmp    08666990 <+0x1194>
08666249 +0x0a4d:  mov    -0x14b(%ebp),%eax
0866624f +0x0a53:  cmp    $0x3c0,%eax
08666254 +0x0a58:  jne    086662c4 <+0xac8>
08666256 +0x0a5a:  movl   $0x1,-0xd8(%ebp)
08666260 +0x0a64:  movb   $0x18,-0xd1(%ebp)
08666267 +0x0a6b:  movl   $0xb,0x4(%esp)
0866626f +0x0a73:  mov    0x8(%ebp),%eax
08666272 +0x0a76:  mov    %eax,(%esp)
08666275 +0x0a79:  call   080dd584 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xcd>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xcd
0866627a +0x0a7e:  mov    %eax,-0xa0(%ebp)
08666280 +0x0a84:  cmpl   $0x0,-0xa0(%ebp)
08666287 +0x0a8b:  je     08666989 <+0x118d>
0866628d +0x0a91:  mov    0x8(%ebp),%eax
08666290 +0x0a94:  mov    %eax,0x4(%esp)
08666294 +0x0a98:  mov    -0xa0(%ebp),%eax
0866629a +0x0a9e:  mov    %eax,(%esp)
0866629d +0x0aa1:  call   085ef54c <_ZN10CQuestShop7clearQPEP5CUser>  ; CQuestShop::clearQP(CUser*)
086662a2 +0x0aa6:  movl   $0x0,0x8(%esp)
086662aa +0x0aae:  mov    0x8(%ebp),%eax
086662ad +0x0ab1:  mov    %eax,0x4(%esp)
086662b1 +0x0ab5:  mov    -0xa0(%ebp),%eax
086662b7 +0x0abb:  mov    %eax,(%esp)
086662ba +0x0abe:  call   085ef6fc <_ZN10CQuestShop12sendCharacQpEP5CUserc>  ; CQuestShop::sendCharacQp(CUser*, char)
086662bf +0x0ac3:  jmp    08666990 <+0x1194>
086662c4 +0x0ac8:  mov    -0x14b(%ebp),%eax
086662ca +0x0ace:  cmp    $0x3c3,%eax
086662cf +0x0ad3:  jne    086662e7 <+0xaeb>
086662d1 +0x0ad5:  movl   $0x1,-0xd8(%ebp)
086662db +0x0adf:  movb   $0xa,-0xd1(%ebp)
086662e2 +0x0ae6:  jmp    08666990 <+0x1194>
086662e7 +0x0aeb:  mov    -0x14b(%ebp),%eax
086662ed +0x0af1:  cmp    $0x28982c,%eax
086662f2 +0x0af6:  jne    0866630a <+0xb0e>
086662f4 +0x0af8:  movl   $0x1,-0xd8(%ebp)
086662fe +0x0b02:  movb   $0xa,-0xd1(%ebp)
08666305 +0x0b09:  jmp    08666990 <+0x1194>
0866630a +0x0b0e:  movl   $0x0,-0xd8(%ebp)
08666314 +0x0b18:  movb   $0xa,-0xd1(%ebp)
0866631b +0x0b1f:  jmp    08666990 <+0x1194>
08666320 +0x0b24:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
08666325 +0x0b29:  mov    %eax,(%esp)
08666328 +0x0b2c:  call   0823441e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9ac8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9ac8
0866632d +0x0b31:  xor    $0x1,%eax
08666330 +0x0b34:  test   %al,%al
08666332 +0x0b36:  je     0866635e <+0xb62>
08666334 +0x0b38:  lea    -0xd0(%ebp),%eax
0866633a +0x0b3e:  mov    %eax,0xc(%esp)
0866633e +0x0b42:  movl   $0x17,0x8(%esp)
08666346 +0x0b4a:  movl   $0x20,0x4(%esp)
0866634e +0x0b52:  mov    0x8(%ebp),%eax
08666351 +0x0b55:  mov    %eax,(%esp)
08666354 +0x0b58:  call   0867bfae <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKEThR11PacketGuard>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char, PacketGuard&)
08666359 +0x0b5d:  jmp    086686d4 <+0x2ed8>
0866635e +0x0b62:  mov    &_ZN10GlobalData22s_pSecuProtectionFieldE,%eax
08666363 +0x0b67:  movl   $0x2c,0x8(%esp)
0866636b +0x0b6f:  mov    0x8(%ebp),%edx
0866636e +0x0b72:  mov    %edx,0x4(%esp)
08666372 +0x0b76:  mov    %eax,(%esp)
08666375 +0x0b79:  call   08288a02 <_ZN21CSecu_ProtectionField5CheckEP5CUser18SECURITY_PROTCTION>  ; CSecu_ProtectionField::Check(CUser*, SECURITY_PROTCTION)
0866637a +0x0b7e:  mov    %eax,-0x9c(%ebp)
08666380 +0x0b84:  cmpl   $0x0,-0x9c(%ebp)
08666387 +0x0b8b:  je     086663b8 <+0xbbc>
08666389 +0x0b8d:  mov    -0x9c(%ebp),%eax
0866638f +0x0b93:  movzbl %al,%eax
08666392 +0x0b96:  lea    -0xd0(%ebp),%edx
08666398 +0x0b9c:  mov    %edx,0xc(%esp)
0866639c +0x0ba0:  mov    %eax,0x8(%esp)
086663a0 +0x0ba4:  movl   $0x20,0x4(%esp)
086663a8 +0x0bac:  mov    0x8(%ebp),%eax
086663ab +0x0baf:  mov    %eax,(%esp)
086663ae +0x0bb2:  call   0867bfae <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKEThR11PacketGuard>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char, PacketGuard&)
086663b3 +0x0bb7:  jmp    086686d4 <+0x2ed8>
086663b8 +0x0bbc:  mov    0x8(%ebp),%eax
086663bb +0x0bbf:  mov    %eax,(%esp)
086663be +0x0bc2:  call   08609d10 <_ZN8WongWork13CSkillChanger14CheckConditionEPK5CUser>  ; WongWork::CSkillChanger::CheckCondition(CUser const*)
086663c3 +0x0bc7:  xor    $0x1,%eax
086663c6 +0x0bca:  test   %al,%al
086663c8 +0x0bcc:  je     086663f4 <+0xbf8>
086663ca +0x0bce:  lea    -0xd0(%ebp),%eax
086663d0 +0x0bd4:  mov    %eax,0xc(%esp)
086663d4 +0x0bd8:  movl   $0x1,0x8(%esp)
086663dc +0x0be0:  movl   $0x20,0x4(%esp)
086663e4 +0x0be8:  mov    0x8(%ebp),%eax
086663e7 +0x0beb:  mov    %eax,(%esp)
086663ea +0x0bee:  call   0867bfae <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKEThR11PacketGuard>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char, PacketGuard&)
086663ef +0x0bf3:  jmp    086686d4 <+0x2ed8>
086663f4 +0x0bf8:  movl   $0x0,-0xd8(%ebp)
086663fe +0x0c02:  movb   $0x16,-0xd1(%ebp)
08666405 +0x0c09:  mov    -0x14b(%ebp),%eax
0866640b +0x0c0f:  cmp    $0x289788,%eax
08666410 +0x0c14:  jne    0866698c <+0x1190>
08666416 +0x0c1a:  movl   $0x1,-0xd8(%ebp)
08666420 +0x0c24:  jmp    08666990 <+0x1194>
08666425 +0x0c29:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
0866642a +0x0c2e:  mov    %eax,(%esp)
0866642d +0x0c31:  call   0823441e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9ac8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9ac8
08666432 +0x0c36:  xor    $0x1,%eax
08666435 +0x0c39:  test   %al,%al
08666437 +0x0c3b:  je     08666463 <+0xc67>
08666439 +0x0c3d:  lea    -0xd0(%ebp),%eax
0866643f +0x0c43:  mov    %eax,0xc(%esp)
08666443 +0x0c47:  movl   $0x17,0x8(%esp)
0866644b +0x0c4f:  movl   $0x20,0x4(%esp)
08666453 +0x0c57:  mov    0x8(%ebp),%eax
08666456 +0x0c5a:  mov    %eax,(%esp)
08666459 +0x0c5d:  call   0867bfae <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKEThR11PacketGuard>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char, PacketGuard&)
0866645e +0x0c62:  jmp    086686d4 <+0x2ed8>
08666463 +0x0c67:  mov    &_ZN10GlobalData22s_pSecuProtectionFieldE,%eax
08666468 +0x0c6c:  movl   $0x2c,0x8(%esp)
08666470 +0x0c74:  mov    0x8(%ebp),%edx
08666473 +0x0c77:  mov    %edx,0x4(%esp)
08666477 +0x0c7b:  mov    %eax,(%esp)
0866647a +0x0c7e:  call   08288a02 <_ZN21CSecu_ProtectionField5CheckEP5CUser18SECURITY_PROTCTION>  ; CSecu_ProtectionField::Check(CUser*, SECURITY_PROTCTION)
0866647f +0x0c83:  mov    %eax,-0x98(%ebp)
08666485 +0x0c89:  cmpl   $0x0,-0x98(%ebp)
0866648c +0x0c90:  je     086664bd <+0xcc1>
0866648e +0x0c92:  mov    -0x98(%ebp),%eax
08666494 +0x0c98:  movzbl %al,%eax
08666497 +0x0c9b:  lea    -0xd0(%ebp),%edx
0866649d +0x0ca1:  mov    %edx,0xc(%esp)
086664a1 +0x0ca5:  mov    %eax,0x8(%esp)
086664a5 +0x0ca9:  movl   $0x20,0x4(%esp)
086664ad +0x0cb1:  mov    0x8(%ebp),%eax
086664b0 +0x0cb4:  mov    %eax,(%esp)
086664b3 +0x0cb7:  call   0867bfae <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKEThR11PacketGuard>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char, PacketGuard&)
086664b8 +0x0cbc:  jmp    086686d4 <+0x2ed8>
086664bd +0x0cc1:  movl   $0x21,0x4(%esp)
086664c5 +0x0cc9:  mov    0x8(%ebp),%eax
086664c8 +0x0ccc:  mov    %eax,(%esp)
086664cb +0x0ccf:  call   080e600e <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x144>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x144
086664d0 +0x0cd4:  xor    $0x1,%eax
086664d3 +0x0cd7:  test   %al,%al
086664d5 +0x0cd9:  je     08666501 <+0xd05>
086664d7 +0x0cdb:  lea    -0xd0(%ebp),%eax
086664dd +0x0ce1:  mov    %eax,0xc(%esp)
086664e1 +0x0ce5:  movl   $0xd8,0x8(%esp)
086664e9 +0x0ced:  movl   $0x20,0x4(%esp)
086664f1 +0x0cf5:  mov    0x8(%ebp),%eax
086664f4 +0x0cf8:  mov    %eax,(%esp)
086664f7 +0x0cfb:  call   0867bfae <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKEThR11PacketGuard>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char, PacketGuard&)
086664fc +0x0d00:  jmp    086686d4 <+0x2ed8>
08666501 +0x0d05:  movl   $0x0,-0xd8(%ebp)
0866650b +0x0d0f:  movb   $0x17,-0xd1(%ebp)
08666512 +0x0d16:  jmp    08666990 <+0x1194>
08666517 +0x0d1b:  mov    0x8(%ebp),%eax
0866651a +0x0d1e:  mov    %eax,(%esp)
0866651d +0x0d21:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
08666522 +0x0d26:  cmp    $0x3,%eax
08666525 +0x0d29:  setne  %al
08666528 +0x0d2c:  test   %al,%al
0866652a +0x0d2e:  je     08666556 <+0xd5a>
0866652c +0x0d30:  lea    -0xd0(%ebp),%eax
08666532 +0x0d36:  mov    %eax,0xc(%esp)
08666536 +0x0d3a:  movl   $0x13,0x8(%esp)
0866653e +0x0d42:  movl   $0x20,0x4(%esp)
08666546 +0x0d4a:  mov    0x8(%ebp),%eax
08666549 +0x0d4d:  mov    %eax,(%esp)
0866654c +0x0d50:  call   0867bfae <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKEThR11PacketGuard>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char, PacketGuard&)
08666551 +0x0d55:  jmp    086686d4 <+0x2ed8>
08666556 +0x0d5a:  movb   $0xd,-0xd1(%ebp)
0866655d +0x0d61:  movl   $0x8,-0xd8(%ebp)
08666567 +0x0d6b:  jmp    08666990 <+0x1194>
0866656c +0x0d70:  mov    0x8(%ebp),%eax
0866656f +0x0d73:  mov    %eax,(%esp)
08666572 +0x0d76:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
08666577 +0x0d7b:  cmp    $0x3,%eax
0866657a +0x0d7e:  setne  %al
0866657d +0x0d81:  test   %al,%al
0866657f +0x0d83:  je     086665ab <+0xdaf>
08666581 +0x0d85:  lea    -0xd0(%ebp),%eax
08666587 +0x0d8b:  mov    %eax,0xc(%esp)
0866658b +0x0d8f:  movl   $0x13,0x8(%esp)
08666593 +0x0d97:  movl   $0x20,0x4(%esp)
0866659b +0x0d9f:  mov    0x8(%ebp),%eax
0866659e +0x0da2:  mov    %eax,(%esp)
086665a1 +0x0da5:  call   0867bfae <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKEThR11PacketGuard>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char, PacketGuard&)
086665a6 +0x0daa:  jmp    086686d4 <+0x2ed8>
086665ab +0x0daf:  movb   $0xd,-0xd1(%ebp)
086665b2 +0x0db6:  movl   $0x2,-0xd8(%ebp)
086665bc +0x0dc0:  jmp    08666990 <+0x1194>
086665c1 +0x0dc5:  movb   $0xd,-0xd1(%ebp)
086665c8 +0x0dcc:  movl   $0x1,-0xd8(%ebp)
086665d2 +0x0dd6:  jmp    08666990 <+0x1194>
086665d7 +0x0ddb:  movb   $0xd,-0xd1(%ebp)
086665de +0x0de2:  movl   $0x5,-0xd8(%ebp)
086665e8 +0x0dec:  jmp    08666990 <+0x1194>
086665ed +0x0df1:  movb   $0x15,-0xd1(%ebp)
086665f4 +0x0df8:  movl   $0x1,-0xd8(%ebp)
086665fe +0x0e02:  jmp    08666990 <+0x1194>
08666603 +0x0e07:  movb   $0x13,-0xd1(%ebp)
0866660a +0x0e0e:  movl   $0xa,-0xd8(%ebp)
08666614 +0x0e18:  jmp    08666990 <+0x1194>
08666619 +0x0e1d:  movb   $0x14,-0xd1(%ebp)
08666620 +0x0e24:  movl   $0x0,-0xd8(%ebp)
0866662a +0x0e2e:  jmp    08666990 <+0x1194>
0866662f +0x0e33:  mov    -0x14b(%ebp),%eax
08666635 +0x0e39:  cmp    $0x2920915c,%eax
0866663a +0x0e3e:  jne    08666678 <+0xe7c>
0866663c +0x0e40:  mov    0x8(%ebp),%eax
0866663f +0x0e43:  mov    %eax,(%esp)
08666642 +0x0e46:  call   08230172 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x581c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x581c
08666647 +0x0e4b:  xor    $0x1,%eax
0866664a +0x0e4e:  test   %al,%al
0866664c +0x0e50:  je     08666678 <+0xe7c>
0866664e +0x0e52:  lea    -0xd0(%ebp),%eax
08666654 +0x0e58:  mov    %eax,0xc(%esp)
08666658 +0x0e5c:  movl   $0xdb,0x8(%esp)
08666660 +0x0e64:  movl   $0x20,0x4(%esp)
08666668 +0x0e6c:  mov    0x8(%ebp),%eax
0866666b +0x0e6f:  mov    %eax,(%esp)
0866666e +0x0e72:  call   0867bfae <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKEThR11PacketGuard>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char, PacketGuard&)
08666673 +0x0e77:  jmp    086686d4 <+0x2ed8>
08666678 +0x0e7c:  mov    0x8(%ebp),%eax
0866667b +0x0e7f:  movzbl 0x8d03b(%eax),%eax
08666682 +0x0e86:  movzbl %al,%eax
08666685 +0x0e89:  lea    0x1(%eax),%ebx
08666688 +0x0e8c:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0866668d +0x0e91:  add    $0xa50c,%eax
08666692 +0x0e96:  mov    %ebx,0x4(%esp)
08666696 +0x0e9a:  mov    %eax,(%esp)
08666699 +0x0e9d:  call   08979648 <_ZN20GuildParameterScript20getGuildLevelUpParamEi>  ; GuildParameterScript::getGuildLevelUpParam(int)
0866669e +0x0ea2:  mov    %eax,-0x94(%ebp)
086666a4 +0x0ea8:  cmpl   $0x0,-0x94(%ebp)
086666ab +0x0eaf:  jne    086666d7 <+0xedb>
086666ad +0x0eb1:  lea    -0xd0(%ebp),%eax
086666b3 +0x0eb7:  mov    %eax,0xc(%esp)
086666b7 +0x0ebb:  movl   $0xd2,0x8(%esp)
086666bf +0x0ec3:  movl   $0x20,0x4(%esp)
086666c7 +0x0ecb:  mov    0x8(%ebp),%eax
086666ca +0x0ece:  mov    %eax,(%esp)
086666cd +0x0ed1:  call   0867bfae <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKEThR11PacketGuard>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char, PacketGuard&)
086666d2 +0x0ed6:  jmp    086686d4 <+0x2ed8>
086666d7 +0x0edb:  mov    0x8(%ebp),%eax
086666da +0x0ede:  mov    %eax,(%esp)
086666dd +0x0ee1:  call   08230164 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x580e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x580e
086666e2 +0x0ee6:  mov    0x29(%eax),%edx
086666e5 +0x0ee9:  mov    -0x94(%ebp),%eax
086666eb +0x0eef:  mov    0x4(%eax),%eax
086666ee +0x0ef2:  cmp    %eax,%edx
086666f0 +0x0ef4:  setae  %al
086666f3 +0x0ef7:  test   %al,%al
086666f5 +0x0ef9:  je     08666721 <+0xf25>
086666f7 +0x0efb:  lea    -0xd0(%ebp),%eax
086666fd +0x0f01:  mov    %eax,0xc(%esp)
08666701 +0x0f05:  movl   $0xd2,0x8(%esp)
08666709 +0x0f0d:  movl   $0x20,0x4(%esp)
08666711 +0x0f15:  mov    0x8(%ebp),%eax
08666714 +0x0f18:  mov    %eax,(%esp)
08666717 +0x0f1b:  call   0867bfae <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKEThR11PacketGuard>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char, PacketGuard&)
0866671c +0x0f20:  jmp    086686d4 <+0x2ed8>
08666721 +0x0f25:  movb   $0x10,-0xd1(%ebp)
08666728 +0x0f2c:  mov    -0x14b(%ebp),%eax
0866672e +0x0f32:  mov    %eax,%ebx
08666730 +0x0f34:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08666735 +0x0f39:  add    $0xa50c,%eax
0866673a +0x0f3e:  mov    %ebx,0x4(%esp)
0866673e +0x0f42:  mov    %eax,(%esp)
08666741 +0x0f45:  call   08979672 <_ZN20GuildParameterScript15getGuildExpBookEi>  ; GuildParameterScript::getGuildExpBook(int)
08666746 +0x0f4a:  mov    %eax,-0xd8(%ebp)
0866674c +0x0f50:  jmp    08666990 <+0x1194>
08666751 +0x0f55:  mov    -0x14b(%ebp),%ebx
08666757 +0x0f5b:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0866675c +0x0f60:  mov    0x50cc(%eax),%eax
08666762 +0x0f66:  cmp    %eax,%ebx
08666764 +0x0f68:  sete   %al
08666767 +0x0f6b:  test   %al,%al
08666769 +0x0f6d:  je     08666902 <+0x1106>
0866676f +0x0f73:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08666774 +0x0f78:  mov    0x50cc(%eax),%ebx
0866677a +0x0f7e:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0866677f +0x0f83:  mov    %ebx,0x4(%esp)
08666783 +0x0f87:  mov    %eax,(%esp)
08666786 +0x0f8a:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
0866678b +0x0f8f:  mov    %eax,-0x90(%ebp)
08666791 +0x0f95:  cmpl   $0x0,-0x90(%ebp)
08666798 +0x0f9c:  jne    086667c4 <+0xfc8>
0866679a +0x0f9e:  lea    -0xd0(%ebp),%eax
086667a0 +0x0fa4:  mov    %eax,0xc(%esp)
086667a4 +0x0fa8:  movl   $0x11,0x8(%esp)
086667ac +0x0fb0:  movl   $0x20,0x4(%esp)
086667b4 +0x0fb8:  mov    0x8(%ebp),%eax
086667b7 +0x0fbb:  mov    %eax,(%esp)
086667ba +0x0fbe:  call   0867bfae <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKEThR11PacketGuard>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char, PacketGuard&)
086667bf +0x0fc3:  jmp    086686d4 <+0x2ed8>
086667c4 +0x0fc8:  mov    -0x90(%ebp),%eax
086667ca +0x0fce:  mov    %eax,(%esp)
086667cd +0x0fd1:  call   080f12fa <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x37c>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x37c
086667d2 +0x0fd6:  xor    $0x1,%eax
086667d5 +0x0fd9:  test   %al,%al
086667d7 +0x0fdb:  je     08666803 <+0x1007>
086667d9 +0x0fdd:  lea    -0xd0(%ebp),%eax
086667df +0x0fe3:  mov    %eax,0xc(%esp)
086667e3 +0x0fe7:  movl   $0x11,0x8(%esp)
086667eb +0x0fef:  movl   $0x20,0x4(%esp)
086667f3 +0x0ff7:  mov    0x8(%ebp),%eax
086667f6 +0x0ffa:  mov    %eax,(%esp)
086667f9 +0x0ffd:  call   0867bfae <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKEThR11PacketGuard>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char, PacketGuard&)
086667fe +0x1002:  jmp    086686d4 <+0x2ed8>
08666803 +0x1007:  mov    -0x90(%ebp),%eax
08666809 +0x100d:  mov    %eax,-0x8c(%ebp)
0866680f +0x1013:  mov    0x8(%ebp),%eax
08666812 +0x1016:  mov    %eax,(%esp)
08666815 +0x1019:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
0866681a +0x101e:  mov    %eax,%ebx
0866681c +0x1020:  mov    -0x8c(%ebp),%eax
08666822 +0x1026:  mov    %eax,(%esp)
08666825 +0x1029:  call   080f12ee <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x370>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x370
0866682a +0x102e:  cmp    %eax,%ebx
0866682c +0x1030:  setl   %al
0866682f +0x1033:  test   %al,%al
08666831 +0x1035:  je     0866685d <+0x1061>
08666833 +0x1037:  lea    -0xd0(%ebp),%eax
08666839 +0x103d:  mov    %eax,0xc(%esp)
0866683d +0x1041:  movl   $0x11,0x8(%esp)
08666845 +0x1049:  movl   $0x20,0x4(%esp)
0866684d +0x1051:  mov    0x8(%ebp),%eax
08666850 +0x1054:  mov    %eax,(%esp)
08666853 +0x1057:  call   0867bfae <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKEThR11PacketGuard>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char, PacketGuard&)
08666858 +0x105c:  jmp    086686d4 <+0x2ed8>
0866685d +0x1061:  mov    0x8(%ebp),%eax
08666860 +0x1064:  mov    %eax,(%esp)
08666863 +0x1067:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
08666868 +0x106c:  cmp    $0x47,%eax
0866686b +0x106f:  setg   %al
0866686e +0x1072:  test   %al,%al
08666870 +0x1074:  je     0866689c <+0x10a0>
08666872 +0x1076:  lea    -0xd0(%ebp),%eax
08666878 +0x107c:  mov    %eax,0xc(%esp)
0866687c +0x1080:  movl   $0x11,0x8(%esp)
08666884 +0x1088:  movl   $0x20,0x4(%esp)
0866688c +0x1090:  mov    0x8(%ebp),%eax
0866688f +0x1093:  mov    %eax,(%esp)
08666892 +0x1096:  call   0867bfae <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKEThR11PacketGuard>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char, PacketGuard&)
08666897 +0x109b:  jmp    086686d4 <+0x2ed8>
0866689c +0x10a0:  movb   $0x1,-0xd1(%ebp)
086668a3 +0x10a7:  movl   $0x0,-0x88(%ebp)
086668ad +0x10b1:  mov    -0x8c(%ebp),%eax
086668b3 +0x10b7:  lea    -0xd8(%ebp),%edx
086668b9 +0x10bd:  mov    %edx,0x8(%esp)
086668bd +0x10c1:  movl   $0x0,0x4(%esp)
086668c5 +0x10c9:  mov    %eax,(%esp)
086668c8 +0x10cc:  call   08694658 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0xead>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0xead
086668cd +0x10d1:  xor    $0x1,%eax
086668d0 +0x10d4:  test   %al,%al
086668d2 +0x10d6:  je     0866698f <+0x1193>
086668d8 +0x10dc:  lea    -0xd0(%ebp),%eax
086668de +0x10e2:  mov    %eax,0xc(%esp)
086668e2 +0x10e6:  movl   $0x11,0x8(%esp)
086668ea +0x10ee:  movl   $0x20,0x4(%esp)
086668f2 +0x10f6:  mov    0x8(%ebp),%eax
086668f5 +0x10f9:  mov    %eax,(%esp)
086668f8 +0x10fc:  call   0867bfae <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKEThR11PacketGuard>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char, PacketGuard&)
086668fd +0x1101:  jmp    086686d4 <+0x2ed8>
08666902 +0x1106:  mov    -0x14b(%ebp),%eax
08666908 +0x110c:  mov    %eax,%ebx
0866690a +0x110e:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0866690f +0x1113:  mov    %ebx,0x4(%esp)
08666913 +0x1117:  mov    %eax,(%esp)
08666916 +0x111a:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
0866691b +0x111f:  mov    %eax,-0x84(%ebp)
08666921 +0x1125:  cmpl   $0x0,-0x84(%ebp)
08666928 +0x112c:  je     08666990 <+0x1194>
0866692a +0x112e:  mov    -0x84(%ebp),%eax
08666930 +0x1134:  mov    %eax,-0x80(%ebp)
08666933 +0x1137:  cmpl   $0x0,-0x80(%ebp)
08666937 +0x113b:  je     08666990 <+0x1194>
08666939 +0x113d:  mov    -0x80(%ebp),%eax
0866693c +0x1140:  mov    %eax,(%esp)
0866693f +0x1143:  call   086946b6 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0xf0b>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0xf0b
08666944 +0x1148:  test   %eax,%eax
08666946 +0x114a:  setne  %al
08666949 +0x114d:  test   %al,%al
0866694b +0x114f:  je     08666990 <+0x1194>
0866694d +0x1151:  mov    -0x80(%ebp),%eax
08666950 +0x1154:  mov    %eax,(%esp)
08666953 +0x1157:  call   086946b6 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0xf0b>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0xf0b
08666958 +0x115c:  cmp    $0x1,%eax
0866695b +0x115f:  jne    08666990 <+0x1194>
0866695d +0x1161:  mov    -0x80(%ebp),%eax
08666960 +0x1164:  lea    -0xd8(%ebp),%edx
08666966 +0x116a:  mov    %edx,0x8(%esp)
0866696a +0x116e:  movl   $0x0,0x4(%esp)
08666972 +0x1176:  mov    %eax,(%esp)
08666975 +0x1179:  call   08694658 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0xead>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0xead
0866697a +0x117e:  movb   $0x1,-0xd1(%ebp)
08666981 +0x1185:  jmp    08666990 <+0x1194>
08666983 +0x1187:  nop
08666984 +0x1188:  jmp    08666990 <+0x1194>
08666986 +0x118a:  nop
08666987 +0x118b:  jmp    08666990 <+0x1194>
08666989 +0x118d:  nop
0866698a +0x118e:  jmp    08666990 <+0x1194>
0866698c +0x1190:  nop
0866698d +0x1191:  jmp    08666990 <+0x1194>
0866698f +0x1193:  nop
08666990 +0x1194:  movzbl -0xd1(%ebp),%eax
08666997 +0x119b:  cmp    $0xff,%al
08666999 +0x119d:  jne    086669c5 <+0x11c9>
0866699b +0x119f:  lea    -0xd0(%ebp),%eax
086669a1 +0x11a5:  mov    %eax,0xc(%esp)
086669a5 +0x11a9:  movl   $0x11,0x8(%esp)
086669ad +0x11b1:  movl   $0x20,0x4(%esp)
086669b5 +0x11b9:  mov    0x8(%ebp),%eax
086669b8 +0x11bc:  mov    %eax,(%esp)
086669bb +0x11bf:  call   0867bfae <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKEThR11PacketGuard>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char, PacketGuard&)
086669c0 +0x11c4:  jmp    086686d4 <+0x2ed8>
086669c5 +0x11c9:  movzbl -0xd1(%ebp),%eax
086669cc +0x11d0:  cmp    $0xf,%al
086669ce +0x11d2:  jne    08666a5a <+0x125e>
086669d4 +0x11d8:  mov    0x8(%ebp),%eax
086669d7 +0x11db:  mov    %eax,(%esp)
086669da +0x11de:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
086669df +0x11e3:  cmp    $0x3,%eax
086669e2 +0x11e6:  setne  %al
086669e5 +0x11e9:  test   %al,%al
086669e7 +0x11eb:  je     08666a13 <+0x1217>
086669e9 +0x11ed:  lea    -0xd0(%ebp),%eax
086669ef +0x11f3:  mov    %eax,0xc(%esp)
086669f3 +0x11f7:  movl   $0x13,0x8(%esp)
086669fb +0x11ff:  movl   $0x20,0x4(%esp)
08666a03 +0x1207:  mov    0x8(%ebp),%eax
08666a06 +0x120a:  mov    %eax,(%esp)
08666a09 +0x120d:  call   0867bfae <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKEThR11PacketGuard>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char, PacketGuard&)
08666a0e +0x1212:  jmp    086686d4 <+0x2ed8>
08666a13 +0x1217:  mov    0x8(%ebp),%eax
08666a16 +0x121a:  mov    %eax,(%esp)
08666a19 +0x121d:  call   0822f2ae <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4958>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4958
08666a1e +0x1222:  movzwl %ax,%edx
08666a21 +0x1225:  mov    -0xd8(%ebp),%eax
08666a27 +0x122b:  cmp    %eax,%edx
08666a29 +0x122d:  setl   %al
08666a2c +0x1230:  test   %al,%al
08666a2e +0x1232:  je     08666a5a <+0x125e>
08666a30 +0x1234:  lea    -0xd0(%ebp),%eax
08666a36 +0x123a:  mov    %eax,0xc(%esp)
08666a3a +0x123e:  movl   $0x5f,0x8(%esp)
08666a42 +0x1246:  movl   $0x20,0x4(%esp)
08666a4a +0x124e:  mov    0x8(%ebp),%eax
08666a4d +0x1251:  mov    %eax,(%esp)
08666a50 +0x1254:  call   0867bfae <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKEThR11PacketGuard>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char, PacketGuard&)
08666a55 +0x1259:  jmp    086686d4 <+0x2ed8>
08666a5a +0x125e:  movzbl -0xd1(%ebp),%eax
08666a61 +0x1265:  test   %al,%al
08666a63 +0x1267:  je     08666a7b <+0x127f>
08666a65 +0x1269:  movzbl -0xd1(%ebp),%eax
08666a6c +0x1270:  cmp    $0x11,%al
08666a6e +0x1272:  je     08666a7b <+0x127f>
08666a70 +0x1274:  movzbl -0xd1(%ebp),%eax
08666a77 +0x127b:  cmp    $0x1,%al
08666a79 +0x127d:  jne    08666ab6 <+0x12ba>
08666a7b +0x127f:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
08666a80 +0x1284:  mov    %eax,(%esp)
08666a83 +0x1287:  call   0823441e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9ac8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9ac8
08666a88 +0x128c:  test   %al,%al
08666a8a +0x128e:  je     08666ab6 <+0x12ba>
08666a8c +0x1290:  lea    -0xd0(%ebp),%eax
08666a92 +0x1296:  mov    %eax,0xc(%esp)
08666a96 +0x129a:  movl   $0x13,0x8(%esp)
08666a9e +0x12a2:  movl   $0x20,0x4(%esp)
08666aa6 +0x12aa:  mov    0x8(%ebp),%eax
08666aa9 +0x12ad:  mov    %eax,(%esp)
08666aac +0x12b0:  call   0867bfae <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKEThR11PacketGuard>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char, PacketGuard&)
08666ab1 +0x12b5:  jmp    086686d4 <+0x2ed8>
08666ab6 +0x12ba:  mov    -0x14b(%ebp),%eax
08666abc +0x12c0:  mov    %eax,%ebx
08666abe +0x12c2:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08666ac3 +0x12c7:  mov    %ebx,0x4(%esp)
08666ac7 +0x12cb:  mov    %eax,(%esp)
08666aca +0x12ce:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
08666acf +0x12d3:  mov    %eax,-0xac(%ebp)
08666ad5 +0x12d9:  cmpl   $0x0,-0xac(%ebp)
08666adc +0x12e0:  je     086686d4 <+0x2ed8>
08666ae2 +0x12e6:  mov    -0xac(%ebp),%eax
08666ae8 +0x12ec:  mov    %eax,(%esp)
08666aeb +0x12ef:  call   086946c4 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0xf19>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0xf19
08666af0 +0x12f4:  mov    %eax,%ebx
08666af2 +0x12f6:  mov    0x8(%ebp),%eax
08666af5 +0x12f9:  mov    %eax,(%esp)
08666af8 +0x12fc:  call   0819ee4a <_GLOBAL__I__ZN4ARAD16GetQuarterOfYearEPc+0x86>  ; global constructors keyed to ARAD::GetQuarterOfYear(char*)+0x86
08666afd +0x1301:  cmp    %eax,%ebx
08666aff +0x1303:  setg   %al
08666b02 +0x1306:  test   %al,%al
08666b04 +0x1308:  je     08666b30 <+0x1334>
08666b06 +0x130a:  lea    -0xd0(%ebp),%eax
08666b0c +0x1310:  mov    %eax,0xc(%esp)
08666b10 +0x1314:  movl   $0x1,0x8(%esp)
08666b18 +0x131c:  movl   $0x20,0x4(%esp)
08666b20 +0x1324:  mov    0x8(%ebp),%eax
08666b23 +0x1327:  mov    %eax,(%esp)
08666b26 +0x132a:  call   0867bfae <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKEThR11PacketGuard>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char, PacketGuard&)
08666b2b +0x132f:  jmp    086686d4 <+0x2ed8>
08666b30 +0x1334:  mov    -0xac(%ebp),%eax
08666b36 +0x133a:  mov    (%eax),%eax
08666b38 +0x133c:  add    $0xc,%eax
08666b3b +0x133f:  mov    (%eax),%edx
08666b3d +0x1341:  mov    -0xac(%ebp),%eax
08666b43 +0x1347:  mov    %eax,(%esp)
08666b46 +0x134a:  call   *%edx
08666b48 +0x134c:  cmp    $0x15,%eax
08666b4b +0x134f:  setne  %al
08666b4e +0x1352:  test   %al,%al
08666b50 +0x1354:  je     08666bc1 <+0x13c5>
08666b52 +0x1356:  movswl -0x1ec(%ebp),%ebx
08666b59 +0x135d:  mov    0x8(%ebp),%eax
08666b5c +0x1360:  mov    %eax,(%esp)
08666b5f +0x1363:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
08666b64 +0x1368:  movl   $0x1,0x14(%esp)
08666b6c +0x1370:  movl   $0xa,0x10(%esp)
08666b74 +0x1378:  movl   $0x1,0xc(%esp)
08666b7c +0x1380:  mov    %ebx,0x8(%esp)
08666b80 +0x1384:  movl   $0x1,0x4(%esp)
08666b88 +0x138c:  mov    %eax,(%esp)
08666b8b +0x138f:  call   0850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>  ; CInventory::delete_item(INVEN_TYPE, int, int, eItemDelReason, bool)
08666b90 +0x1394:  xor    $0x1,%eax
08666b93 +0x1397:  test   %al,%al
08666b95 +0x1399:  je     08666bc1 <+0x13c5>
08666b97 +0x139b:  lea    -0xd0(%ebp),%eax
08666b9d +0x13a1:  mov    %eax,0xc(%esp)
08666ba1 +0x13a5:  movl   $0x11,0x8(%esp)
08666ba9 +0x13ad:  movl   $0x20,0x4(%esp)
08666bb1 +0x13b5:  mov    0x8(%ebp),%eax
08666bb4 +0x13b8:  mov    %eax,(%esp)
08666bb7 +0x13bb:  call   0867bfae <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKEThR11PacketGuard>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char, PacketGuard&)
08666bbc +0x13c0:  jmp    086686d4 <+0x2ed8>
08666bc1 +0x13c5:  movzbl -0xd1(%ebp),%eax
08666bc8 +0x13cc:  movsbl %al,%eax
08666bcb +0x13cf:  cmp    $0x19,%eax
08666bce +0x13d2:  ja     08668435 <+0x2c39>
08666bd4 +0x13d8:  mov    &data#00ce4c80(.rodata)(,%eax,4),%eax
08666bdb +0x13df:  jmp    *%eax
08666bdd +0x13e1:  mov    -0xd8(%ebp),%eax
08666be3 +0x13e7:  mov    %eax,%ebx
08666be5 +0x13e9:  mov    0x8(%ebp),%eax
08666be8 +0x13ec:  mov    %eax,(%esp)
08666beb +0x13ef:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
08666bf0 +0x13f4:  add    $0x658,%eax
08666bf5 +0x13f9:  mov    %ebx,0x4(%esp)
08666bf9 +0x13fd:  mov    %eax,(%esp)
08666bfc +0x1400:  call   0817fefa <_ZN10AvatarCoin3AddEj>  ; AvatarCoin::Add(unsigned int)
08666c01 +0x1405:  mov    0x8(%ebp),%eax
08666c04 +0x1408:  mov    %eax,(%esp)
08666c07 +0x140b:  call   081800d6 <_ZN10AvatarCoin8SaveToDBEP5CUser>  ; AvatarCoin::SaveToDB(CUser*)
08666c0c +0x1410:  mov    0x8(%ebp),%eax
08666c0f +0x1413:  mov    %eax,(%esp)
08666c12 +0x1416:  call   0817ffe4 <_ZN10AvatarCoin14SendSyncPacketEP5CUser>  ; AvatarCoin::SendSyncPacket(CUser*)
08666c17 +0x141b:  mov    -0xd8(%ebp),%eax
08666c1d +0x1421:  mov    %eax,0x4(%esp)
08666c21 +0x1425:  mov    0x8(%ebp),%eax
08666c24 +0x1428:  mov    %eax,(%esp)
08666c27 +0x142b:  call   0817ff9c <_ZN10AvatarCoin10HistoryLog6AddLogEP5CUserj>  ; AvatarCoin::HistoryLog::AddLog(CUser*, unsigned int)
08666c2c +0x1430:  jmp    08668435 <+0x2c39>
08666c31 +0x1435:  mov    -0xd8(%ebp),%eax
08666c37 +0x143b:  mov    %eax,0x4(%esp)
08666c3b +0x143f:  mov    0x8(%ebp),%eax
08666c3e +0x1442:  mov    %eax,(%esp)
08666c41 +0x1445:  call   0866a9a0 <_ZN5CUser7gain_spEi>  ; CUser::gain_sp(int)
08666c46 +0x144a:  mov    -0xd8(%ebp),%eax
08666c4c +0x1450:  movl   $0x1,0xc(%esp)
08666c54 +0x1458:  mov    %eax,0x8(%esp)
08666c58 +0x145c:  movl   $0xffffffff,0x4(%esp)
08666c60 +0x1464:  mov    0x8(%ebp),%eax
08666c63 +0x1467:  mov    %eax,(%esp)
08666c66 +0x146a:  call   0866ac0e <_ZN5CUser14history_log_spEii12eSPAddReason>  ; CUser::history_log_sp(int, int, eSPAddReason)
08666c6b +0x146f:  lea    -0xd0(%ebp),%eax
08666c71 +0x1475:  mov    %eax,(%esp)
08666c74 +0x1478:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
08666c79 +0x147d:  movl   $0x20,0x8(%esp)
08666c81 +0x1485:  movl   $0x1,0x4(%esp)
08666c89 +0x148d:  lea    -0xd0(%ebp),%eax
08666c8f +0x1493:  mov    %eax,(%esp)
08666c92 +0x1496:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
08666c97 +0x149b:  movl   $0x1,0x4(%esp)
08666c9f +0x14a3:  lea    -0xd0(%ebp),%eax
08666ca5 +0x14a9:  mov    %eax,(%esp)
08666ca8 +0x14ac:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08666cad +0x14b1:  movswl -0x1ec(%ebp),%eax
08666cb4 +0x14b8:  mov    %eax,0x4(%esp)
08666cb8 +0x14bc:  lea    -0xd0(%ebp),%eax
08666cbe +0x14c2:  mov    %eax,(%esp)
08666cc1 +0x14c5:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
08666cc6 +0x14ca:  movzbl -0xd1(%ebp),%eax
08666ccd +0x14d1:  movsbl %al,%eax
08666cd0 +0x14d4:  mov    %eax,0x4(%esp)
08666cd4 +0x14d8:  lea    -0xd0(%ebp),%eax
08666cda +0x14de:  mov    %eax,(%esp)
08666cdd +0x14e1:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08666ce2 +0x14e6:  mov    -0xd8(%ebp),%eax
08666ce8 +0x14ec:  mov    %eax,0x4(%esp)
08666cec +0x14f0:  lea    -0xd0(%ebp),%eax
08666cf2 +0x14f6:  mov    %eax,(%esp)
08666cf5 +0x14f9:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
08666cfa +0x14fe:  movl   $0x0,0x4(%esp)
08666d02 +0x1506:  lea    -0xd0(%ebp),%eax
08666d08 +0x150c:  mov    %eax,(%esp)
08666d0b +0x150f:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
08666d10 +0x1514:  movl   $0x0,0x4(%esp)
08666d18 +0x151c:  lea    -0xd0(%ebp),%eax
08666d1e +0x1522:  mov    %eax,(%esp)
08666d21 +0x1525:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
08666d26 +0x152a:  movl   $0x1,0x4(%esp)
08666d2e +0x1532:  lea    -0xd0(%ebp),%eax
08666d34 +0x1538:  mov    %eax,(%esp)
08666d37 +0x153b:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
08666d3c +0x1540:  lea    -0xd0(%ebp),%eax
08666d42 +0x1546:  mov    %eax,0x4(%esp)
08666d46 +0x154a:  mov    0x8(%ebp),%eax
08666d49 +0x154d:  mov    %eax,(%esp)
08666d4c +0x1550:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
08666d51 +0x1555:  jmp    086686d4 <+0x2ed8>
08666d56 +0x155a:  mov    -0xd8(%ebp),%eax
08666d5c +0x1560:  mov    %eax,0x4(%esp)
08666d60 +0x1564:  mov    0x8(%ebp),%eax
08666d63 +0x1567:  mov    %eax,(%esp)
08666d66 +0x156a:  call   0866aad2 <_ZN5CUser8gain_sfpEi>  ; CUser::gain_sfp(int)
08666d6b +0x156f:  mov    -0xd8(%ebp),%eax
08666d71 +0x1575:  movl   $0x1,0xc(%esp)
08666d79 +0x157d:  mov    %eax,0x8(%esp)
08666d7d +0x1581:  movl   $0xffffffff,0x4(%esp)
08666d85 +0x1589:  mov    0x8(%ebp),%eax
08666d88 +0x158c:  mov    %eax,(%esp)
08666d8b +0x158f:  call   0866acd0 <_ZN5CUser15history_log_sfpEii12eSPAddReason>  ; CUser::history_log_sfp(int, int, eSPAddReason)
08666d90 +0x1594:  lea    -0xd0(%ebp),%eax
08666d96 +0x159a:  mov    %eax,(%esp)
08666d99 +0x159d:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
08666d9e +0x15a2:  movl   $0x20,0x8(%esp)
08666da6 +0x15aa:  movl   $0x1,0x4(%esp)
08666dae +0x15b2:  lea    -0xd0(%ebp),%eax
08666db4 +0x15b8:  mov    %eax,(%esp)
08666db7 +0x15bb:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
08666dbc +0x15c0:  movl   $0x1,0x4(%esp)
08666dc4 +0x15c8:  lea    -0xd0(%ebp),%eax
08666dca +0x15ce:  mov    %eax,(%esp)
08666dcd +0x15d1:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08666dd2 +0x15d6:  movswl -0x1ec(%ebp),%eax
08666dd9 +0x15dd:  mov    %eax,0x4(%esp)
08666ddd +0x15e1:  lea    -0xd0(%ebp),%eax
08666de3 +0x15e7:  mov    %eax,(%esp)
08666de6 +0x15ea:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
08666deb +0x15ef:  movzbl -0xd1(%ebp),%eax
08666df2 +0x15f6:  movsbl %al,%eax
08666df5 +0x15f9:  mov    %eax,0x4(%esp)
08666df9 +0x15fd:  lea    -0xd0(%ebp),%eax
08666dff +0x1603:  mov    %eax,(%esp)
08666e02 +0x1606:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08666e07 +0x160b:  mov    -0xd8(%ebp),%eax
08666e0d +0x1611:  mov    %eax,0x4(%esp)
08666e11 +0x1615:  lea    -0xd0(%ebp),%eax
08666e17 +0x161b:  mov    %eax,(%esp)
08666e1a +0x161e:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
08666e1f +0x1623:  movl   $0x0,0x4(%esp)
08666e27 +0x162b:  lea    -0xd0(%ebp),%eax
08666e2d +0x1631:  mov    %eax,(%esp)
08666e30 +0x1634:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
08666e35 +0x1639:  movl   $0x0,0x4(%esp)
08666e3d +0x1641:  lea    -0xd0(%ebp),%eax
08666e43 +0x1647:  mov    %eax,(%esp)
08666e46 +0x164a:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
08666e4b +0x164f:  movl   $0x1,0x4(%esp)
08666e53 +0x1657:  lea    -0xd0(%ebp),%eax
08666e59 +0x165d:  mov    %eax,(%esp)
08666e5c +0x1660:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
08666e61 +0x1665:  lea    -0xd0(%ebp),%eax
08666e67 +0x166b:  mov    %eax,0x4(%esp)
08666e6b +0x166f:  mov    0x8(%ebp),%eax
08666e6e +0x1672:  mov    %eax,(%esp)
08666e71 +0x1675:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
08666e76 +0x167a:  jmp    086686d4 <+0x2ed8>
08666e7b +0x167f:  movl   $0x0,-0xdc(%ebp)
08666e85 +0x1689:  movl   $0x0,-0xe0(%ebp)
08666e8f +0x1693:  mov    0x8(%ebp),%eax
08666e92 +0x1696:  mov    %eax,(%esp)
08666e95 +0x1699:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
08666e9a +0x169e:  cmp    $0x54,%eax
08666e9d +0x16a1:  setg   %al
08666ea0 +0x16a4:  test   %al,%al
08666ea2 +0x16a6:  je     08666eae <+0x16b2>
08666ea4 +0x16a8:  movl   $0x0,-0xd8(%ebp)
08666eae +0x16b2:  mov    -0x14b(%ebp),%ebx
08666eb4 +0x16b8:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08666eb9 +0x16bd:  mov    0x50cc(%eax),%eax
08666ebf +0x16c3:  cmp    %eax,%ebx
08666ec1 +0x16c5:  sete   %al
08666ec4 +0x16c8:  test   %al,%al
08666ec6 +0x16ca:  je     08666f17 <+0x171b>
08666ec8 +0x16cc:  mov    -0xd8(%ebp),%eax
08666ece +0x16d2:  movl   $0x1,0x1c(%esp)
08666ed6 +0x16da:  movl   $0x3,0x18(%esp)
08666ede +0x16e2:  lea    -0xe8(%ebp),%edx
08666ee4 +0x16e8:  mov    %edx,0x14(%esp)
08666ee8 +0x16ec:  lea    -0xe4(%ebp),%edx
08666eee +0x16f2:  mov    %edx,0x10(%esp)
08666ef2 +0x16f6:  lea    -0xe0(%ebp),%edx
08666ef8 +0x16fc:  mov    %edx,0xc(%esp)
08666efc +0x1700:  lea    -0xdc(%ebp),%edx
08666f02 +0x1706:  mov    %edx,0x8(%esp)
08666f06 +0x170a:  mov    %eax,0x4(%esp)
08666f0a +0x170e:  mov    0x8(%ebp),%eax
08666f0d +0x1711:  mov    %eax,(%esp)
08666f10 +0x1714:  call   0868b20c <_ZN5CUser9rewardExpEiRiS0_S0_S0_13eExpAddReasonb>  ; CUser::rewardExp(int, int&, int&, int&, int&, eExpAddReason, bool)
08666f15 +0x1719:  jmp    08666f64 <+0x1768>
08666f17 +0x171b:  mov    -0xd8(%ebp),%eax
08666f1d +0x1721:  movl   $0x1,0x1c(%esp)
08666f25 +0x1729:  movl   $0x0,0x18(%esp)
08666f2d +0x1731:  lea    -0xe8(%ebp),%edx
08666f33 +0x1737:  mov    %edx,0x14(%esp)
08666f37 +0x173b:  lea    -0xe4(%ebp),%edx
08666f3d +0x1741:  mov    %edx,0x10(%esp)
08666f41 +0x1745:  lea    -0xe0(%ebp),%edx
08666f47 +0x174b:  mov    %edx,0xc(%esp)
08666f4b +0x174f:  lea    -0xdc(%ebp),%edx
08666f51 +0x1755:  mov    %edx,0x8(%esp)
08666f55 +0x1759:  mov    %eax,0x4(%esp)
08666f59 +0x175d:  mov    0x8(%ebp),%eax
08666f5c +0x1760:  mov    %eax,(%esp)
08666f5f +0x1763:  call   0868b20c <_ZN5CUser9rewardExpEiRiS0_S0_S0_13eExpAddReasonb>  ; CUser::rewardExp(int, int&, int&, int&, int&, eExpAddReason, bool)
08666f64 +0x1768:  lea    -0xd0(%ebp),%eax
08666f6a +0x176e:  mov    %eax,(%esp)
08666f6d +0x1771:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
08666f72 +0x1776:  movl   $0x20,0x8(%esp)
08666f7a +0x177e:  movl   $0x1,0x4(%esp)
08666f82 +0x1786:  lea    -0xd0(%ebp),%eax
08666f88 +0x178c:  mov    %eax,(%esp)
08666f8b +0x178f:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
08666f90 +0x1794:  movl   $0x1,0x4(%esp)
08666f98 +0x179c:  lea    -0xd0(%ebp),%eax
08666f9e +0x17a2:  mov    %eax,(%esp)
08666fa1 +0x17a5:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08666fa6 +0x17aa:  movswl -0x1ec(%ebp),%eax
08666fad +0x17b1:  mov    %eax,0x4(%esp)
08666fb1 +0x17b5:  lea    -0xd0(%ebp),%eax
08666fb7 +0x17bb:  mov    %eax,(%esp)
08666fba +0x17be:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
08666fbf +0x17c3:  movzbl -0xd1(%ebp),%eax
08666fc6 +0x17ca:  movsbl %al,%eax
08666fc9 +0x17cd:  mov    %eax,0x4(%esp)
08666fcd +0x17d1:  lea    -0xd0(%ebp),%eax
08666fd3 +0x17d7:  mov    %eax,(%esp)
08666fd6 +0x17da:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08666fdb +0x17df:  mov    -0xd8(%ebp),%eax
08666fe1 +0x17e5:  mov    %eax,0x4(%esp)
08666fe5 +0x17e9:  lea    -0xd0(%ebp),%eax
08666feb +0x17ef:  mov    %eax,(%esp)
08666fee +0x17f2:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
08666ff3 +0x17f7:  mov    -0xe8(%ebp),%edx
08666ff9 +0x17fd:  mov    -0xe4(%ebp),%eax
08666fff +0x1803:  mov    %edx,%ecx
08667001 +0x1805:  sub    %eax,%ecx
08667003 +0x1807:  mov    %ecx,%eax
08667005 +0x1809:  mov    %eax,0x4(%esp)
08667009 +0x180d:  lea    -0xd0(%ebp),%eax
0866700f +0x1813:  mov    %eax,(%esp)
08667012 +0x1816:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
08667017 +0x181b:  mov    -0xe0(%ebp),%eax
0866701d +0x1821:  mov    %eax,0x4(%esp)
08667021 +0x1825:  lea    -0xd0(%ebp),%eax
08667027 +0x182b:  mov    %eax,(%esp)
0866702a +0x182e:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0866702f +0x1833:  movl   $0x1,0x4(%esp)
08667037 +0x183b:  lea    -0xd0(%ebp),%eax
0866703d +0x1841:  mov    %eax,(%esp)
08667040 +0x1844:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
08667045 +0x1849:  lea    -0xd0(%ebp),%eax
0866704b +0x184f:  mov    %eax,0x4(%esp)
0866704f +0x1853:  mov    0x8(%ebp),%eax
08667052 +0x1856:  mov    %eax,(%esp)
08667055 +0x1859:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
0866705a +0x185e:  jmp    086686d4 <+0x2ed8>
0866705f +0x1863:  mov    0x8(%ebp),%eax
08667062 +0x1866:  mov    %eax,(%esp)
08667065 +0x1869:  call   086960d8 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x292d>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x292d
0866706a +0x186e:  mov    (%eax),%ecx
0866706c +0x1870:  mov    -0xd8(%ebp),%edx
08667072 +0x1876:  lea    (%ecx,%edx,1),%edx
08667075 +0x1879:  mov    %edx,(%eax)
08667077 +0x187b:  jmp    08668435 <+0x2c39>
0866707c +0x1880:  mov    0x8(%ebp),%eax
0866707f +0x1883:  mov    %eax,(%esp)
08667082 +0x1886:  call   086960d8 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x292d>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x292d
08667087 +0x188b:  mov    0x4(%eax),%ecx
0866708a +0x188e:  mov    -0xd8(%ebp),%edx
08667090 +0x1894:  lea    (%ecx,%edx,1),%edx
08667093 +0x1897:  mov    %edx,0x4(%eax)
08667096 +0x189a:  jmp    08668435 <+0x2c39>
0866709b +0x189f:  mov    0x8(%ebp),%eax
0866709e +0x18a2:  mov    %eax,(%esp)
086670a1 +0x18a5:  call   086960d8 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x292d>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x292d
086670a6 +0x18aa:  movzwl 0x8(%eax),%ecx
086670aa +0x18ae:  mov    -0xd8(%ebp),%edx
086670b0 +0x18b4:  lea    (%ecx,%edx,1),%edx
086670b3 +0x18b7:  mov    %dx,0x8(%eax)
086670b7 +0x18bb:  jmp    08668435 <+0x2c39>
086670bc +0x18c0:  mov    0x8(%ebp),%eax
086670bf +0x18c3:  mov    %eax,(%esp)
086670c2 +0x18c6:  call   086960d8 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x292d>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x292d
086670c7 +0x18cb:  movzwl 0xa(%eax),%ecx
086670cb +0x18cf:  mov    -0xd8(%ebp),%edx
086670d1 +0x18d5:  lea    (%ecx,%edx,1),%edx
086670d4 +0x18d8:  mov    %dx,0xa(%eax)
086670d8 +0x18dc:  jmp    08668435 <+0x2c39>
086670dd +0x18e1:  mov    0x8(%ebp),%eax
086670e0 +0x18e4:  mov    %eax,(%esp)
086670e3 +0x18e7:  call   086960d8 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x292d>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x292d
086670e8 +0x18ec:  movzwl 0xc(%eax),%ecx
086670ec +0x18f0:  mov    -0xd8(%ebp),%edx
086670f2 +0x18f6:  lea    (%ecx,%edx,1),%edx
086670f5 +0x18f9:  mov    %dx,0xc(%eax)
086670f9 +0x18fd:  jmp    08668435 <+0x2c39>
086670fe +0x1902:  mov    0x8(%ebp),%eax
08667101 +0x1905:  mov    %eax,(%esp)
08667104 +0x1908:  call   086960d8 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x292d>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x292d
08667109 +0x190d:  movzwl 0xe(%eax),%ecx
0866710d +0x1911:  mov    -0xd8(%ebp),%edx
08667113 +0x1917:  lea    (%ecx,%edx,1),%edx
08667116 +0x191a:  mov    %dx,0xe(%eax)
0866711a +0x191e:  jmp    08668435 <+0x2c39>
0866711f +0x1923:  mov    0x8(%ebp),%eax
08667122 +0x1926:  mov    %eax,(%esp)
08667125 +0x1929:  call   086960d8 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x292d>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x292d
0866712a +0x192e:  mov    0x42(%eax),%ecx
0866712d +0x1931:  mov    -0xd8(%ebp),%edx
08667133 +0x1937:  lea    (%ecx,%edx,1),%edx
08667136 +0x193a:  mov    %edx,0x42(%eax)
08667139 +0x193d:  jmp    08668435 <+0x2c39>
0866713e +0x1942:  movl   $0x0,-0x7c(%ebp)
08667145 +0x1949:  jmp    08667175 <+0x1979>
08667147 +0x194b:  mov    0x8(%ebp),%eax
0866714a +0x194e:  mov    %eax,(%esp)
0866714d +0x1951:  call   086960d8 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x292d>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x292d
08667152 +0x1956:  mov    -0x7c(%ebp),%ecx
08667155 +0x1959:  mov    -0x7c(%ebp),%edx
08667158 +0x195c:  add    $0x8,%edx
0866715b +0x195f:  movzwl (%eax,%edx,2),%edx
0866715f +0x1963:  mov    %edx,%ebx
08667161 +0x1965:  mov    -0xd8(%ebp),%edx
08667167 +0x196b:  lea    (%ebx,%edx,1),%edx
0866716a +0x196e:  add    $0x8,%ecx
0866716d +0x1971:  mov    %dx,(%eax,%ecx,2)
08667171 +0x1975:  addl   $0x1,-0x7c(%ebp)
08667175 +0x1979:  cmpl   $0x3,-0x7c(%ebp)
08667179 +0x197d:  setle  %al
0866717c +0x1980:  test   %al,%al
0866717e +0x1982:  jne    08667147 <+0x194b>
08667180 +0x1984:  jmp    08668435 <+0x2c39>
08667185 +0x1989:  mov    0x8(%ebp),%eax
08667188 +0x198c:  mov    %eax,(%esp)
0866718b +0x198f:  call   0822f33c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x49e6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x49e6
08667190 +0x1994:  mov    %eax,%ebx
08667192 +0x1996:  mov    0x8(%ebp),%eax
08667195 +0x1999:  mov    %eax,(%esp)
08667198 +0x199c:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
0866719d +0x19a1:  movsbl %al,%esi
086671a0 +0x19a4:  mov    0x8(%ebp),%eax
086671a3 +0x19a7:  mov    %eax,(%esp)
086671a6 +0x19aa:  call   0822f140 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47ea>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47ea
086671ab +0x19af:  mov    %ebx,0x8(%esp)
086671af +0x19b3:  mov    %esi,0x4(%esp)
086671b3 +0x19b7:  mov    %eax,(%esp)
086671b6 +0x19ba:  call   08604e78 <_ZN9SkillSlot16clear_sfp_skillsEc20ENUM_SKILL_TREE_KIND>  ; SkillSlot::clear_sfp_skills(char, ENUM_SKILL_TREE_KIND)
086671bb +0x19bf:  mov    0x8(%ebp),%eax
086671be +0x19c2:  mov    %eax,(%esp)
086671c1 +0x19c5:  call   0822f140 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47ea>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47ea
086671c6 +0x19ca:  mov    0x8(%ebp),%edx
086671c9 +0x19cd:  mov    %edx,0x4(%esp)
086671cd +0x19d1:  mov    %eax,(%esp)
086671d0 +0x19d4:  call   0822ee2e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x44d8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x44d8
086671d5 +0x19d9:  movl   $0x0,-0x78(%ebp)
086671dc +0x19e0:  mov    0x8(%ebp),%eax
086671df +0x19e3:  mov    %eax,(%esp)
086671e2 +0x19e6:  call   0822f33c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x49e6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x49e6
086671e7 +0x19eb:  cmp    $0xffffffff,%eax
086671ea +0x19ee:  je     086671fb <+0x19ff>
086671ec +0x19f0:  mov    0x8(%ebp),%eax
086671ef +0x19f3:  mov    %eax,(%esp)
086671f2 +0x19f6:  call   0822f33c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x49e6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x49e6
086671f7 +0x19fb:  test   %eax,%eax
086671f9 +0x19fd:  jne    08667202 <+0x1a06>
086671fb +0x19ff:  mov    $0x1,%eax
08667200 +0x1a04:  jmp    08667207 <+0x1a0b>
08667202 +0x1a06:  mov    $0x0,%eax
08667207 +0x1a0b:  test   %al,%al
08667209 +0x1a0d:  je     08667214 <+0x1a18>
0866720b +0x1a0f:  movl   $0x3,-0x78(%ebp)
08667212 +0x1a16:  jmp    0866721b <+0x1a1f>
08667214 +0x1a18:  movl   $0x4,-0x78(%ebp)
0866721b +0x1a1f:  lea    -0x1e4(%ebp),%eax
08667221 +0x1a25:  mov    %eax,(%esp)
08667224 +0x1a28:  call   08234fbe <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xa668>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xa668
08667229 +0x1a2d:  movl   $0x0,0xc(%esp)
08667231 +0x1a35:  mov    -0x78(%ebp),%eax
08667234 +0x1a38:  mov    %eax,0x8(%esp)
08667238 +0x1a3c:  mov    0x8(%ebp),%eax
0866723b +0x1a3f:  mov    %eax,0x4(%esp)
0866723f +0x1a43:  lea    -0x1e4(%ebp),%eax
08667245 +0x1a49:  mov    %eax,(%esp)
08667248 +0x1a4c:  call   08609e90 <_ZN8WongWork13CSkillChanger15SkillInitializeEP5CUserib>  ; WongWork::CSkillChanger::SkillInitialize(CUser*, int, bool)
0866724d +0x1a51:  mov    0x8(%ebp),%eax
08667250 +0x1a54:  mov    %eax,(%esp)
08667253 +0x1a57:  call   0866c46a <_ZN5CUser15send_skill_infoEv>  ; CUser::send_skill_info()
08667258 +0x1a5c:  jmp    08667275 <+0x1a79>
0866725a +0x1a5e:  mov    %edx,%ebx
0866725c +0x1a60:  mov    %eax,%esi
0866725e +0x1a62:  lea    -0x1e4(%ebp),%eax
08667264 +0x1a68:  mov    %eax,(%esp)
08667267 +0x1a6b:  call   08234fc4 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xa66e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xa66e
0866726c +0x1a70:  mov    %esi,%eax
0866726e +0x1a72:  mov    %ebx,%edx
08667270 +0x1a74:  jmp    086686b6 <+0x2eba>
08667275 +0x1a79:  lea    -0x1e4(%ebp),%eax
0866727b +0x1a7f:  mov    %eax,(%esp)
0866727e +0x1a82:  call   08234fc4 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xa66e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xa66e
08667283 +0x1a87:  jmp    08668435 <+0x2c39>
08667288 +0x1a8c:  mov    -0xd8(%ebp),%eax
0866728e +0x1a92:  cmp    $0x1,%eax
08667291 +0x1a95:  jne    08667479 <+0x1c7d>
08667297 +0x1a9b:  mov    0x8(%ebp),%eax
0866729a +0x1a9e:  mov    %eax,(%esp)
0866729d +0x1aa1:  call   0822f140 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47ea>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47ea
086672a2 +0x1aa6:  mov    %eax,(%esp)
086672a5 +0x1aa9:  call   08604e08 <_ZN9SkillSlot21clear_all_skills_bothEv>  ; SkillSlot::clear_all_skills_both()
086672aa +0x1aae:  mov    0x8(%ebp),%eax
086672ad +0x1ab1:  mov    %eax,(%esp)
086672b0 +0x1ab4:  call   0822f140 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47ea>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47ea
086672b5 +0x1ab9:  mov    0x8(%ebp),%edx
086672b8 +0x1abc:  mov    %edx,0x4(%esp)
086672bc +0x1ac0:  mov    %eax,(%esp)
086672bf +0x1ac3:  call   0822ee2e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x44d8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x44d8
086672c4 +0x1ac8:  movl   $0x3,0xc(%esp)
086672cc +0x1ad0:  movl   $0x1,0x8(%esp)
086672d4 +0x1ad8:  movl   $0x0,0x4(%esp)
086672dc +0x1ae0:  mov    0x8(%ebp),%eax
086672df +0x1ae3:  mov    %eax,(%esp)
086672e2 +0x1ae6:  call   08665400 <_ZN5CUser16givePvPSkillTreeEibi>  ; CUser::givePvPSkillTree(int, bool, int)
086672e7 +0x1aeb:  mov    0x8(%ebp),%eax
086672ea +0x1aee:  mov    %eax,(%esp)
086672ed +0x1af1:  call   0819ee4a <_GLOBAL__I__ZN4ARAD16GetQuarterOfYearEPc+0x86>  ; global constructors keyed to ARAD::GetQuarterOfYear(char*)+0x86
086672f2 +0x1af6:  mov    %eax,%esi
086672f4 +0x1af8:  mov    0x8(%ebp),%eax
086672f7 +0x1afb:  mov    %eax,(%esp)
086672fa +0x1afe:  call   0822f23c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x48e6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x48e6
086672ff +0x1b03:  movsbl %al,%eax
08667302 +0x1b06:  mov    %eax,-0x1f4(%ebp)
08667308 +0x1b0c:  mov    0x8(%ebp),%eax
0866730b +0x1b0f:  mov    %eax,(%esp)
0866730e +0x1b12:  call   08110c94 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1a6>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1a6
08667313 +0x1b17:  movsbl %al,%edi
08667316 +0x1b1a:  mov    0x8(%ebp),%eax
08667319 +0x1b1d:  mov    %eax,(%esp)
0866731c +0x1b20:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
08667321 +0x1b25:  mov    %eax,%ebx
08667323 +0x1b27:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08667328 +0x1b2c:  add    $0xa800,%eax
0866732d +0x1b31:  movl   $0x0,0x14(%esp)
08667335 +0x1b39:  mov    %esi,0x10(%esp)
08667339 +0x1b3d:  mov    -0x1f4(%ebp),%edx
0866733f +0x1b43:  mov    %edx,0xc(%esp)
08667343 +0x1b47:  mov    %edi,0x8(%esp)
08667347 +0x1b4b:  mov    %ebx,0x4(%esp)
0866734b +0x1b4f:  mov    %eax,(%esp)
0866734e +0x1b52:  call   08a5dd62 <_ZNK27PvPSkillTreeParameterScript16getPvPSkillPointEiiiib>  ; PvPSkillTreeParameterScript::getPvPSkillPoint(int, int, int, int, bool) const
08667353 +0x1b57:  mov    %eax,-0x74(%ebp)
08667356 +0x1b5a:  mov    0x8(%ebp),%eax
08667359 +0x1b5d:  mov    %eax,(%esp)
0866735c +0x1b60:  call   0822f140 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47ea>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47ea
08667361 +0x1b65:  movl   $0x0,0x8(%esp)
08667369 +0x1b6d:  mov    -0x74(%ebp),%edx
0866736c +0x1b70:  mov    %edx,0x4(%esp)
08667370 +0x1b74:  mov    %eax,(%esp)
08667373 +0x1b77:  call   086034f8 <_ZN9SkillSlot22set_remain_sp_at_indexEi20ENUM_SKILL_TREE_KIND>  ; SkillSlot::set_remain_sp_at_index(int, ENUM_SKILL_TREE_KIND)
08667378 +0x1b7c:  mov    0x8(%ebp),%eax
0866737b +0x1b7f:  mov    %eax,(%esp)
0866737e +0x1b82:  call   0822f140 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47ea>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47ea
08667383 +0x1b87:  movl   $0x1,0x8(%esp)
0866738b +0x1b8f:  mov    -0x74(%ebp),%edx
0866738e +0x1b92:  mov    %edx,0x4(%esp)
08667392 +0x1b96:  mov    %eax,(%esp)
08667395 +0x1b99:  call   086034f8 <_ZN9SkillSlot22set_remain_sp_at_indexEi20ENUM_SKILL_TREE_KIND>  ; SkillSlot::set_remain_sp_at_index(int, ENUM_SKILL_TREE_KIND)
0866739a +0x1b9e:  mov    0x8(%ebp),%eax
0866739d +0x1ba1:  mov    %eax,(%esp)
086673a0 +0x1ba4:  call   0866c46a <_ZN5CUser15send_skill_infoEv>  ; CUser::send_skill_info()
086673a5 +0x1ba9:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
086673aa +0x1bae:  mov    %eax,(%esp)
086673ad +0x1bb1:  call   08298e88 <_ZN12CGameManager22GetPremiumLetheManagerEv>  ; CGameManager::GetPremiumLetheManager()
086673b2 +0x1bb6:  mov    %eax,-0x70(%ebp)
086673b5 +0x1bb9:  movl   $0x21,0x4(%esp)
086673bd +0x1bc1:  mov    0x8(%ebp),%eax
086673c0 +0x1bc4:  mov    %eax,(%esp)
086673c3 +0x1bc7:  call   080e600e <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x144>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x144
086673c8 +0x1bcc:  test   %al,%al
086673ca +0x1bce:  je     08667436 <+0x1c3a>
086673cc +0x1bd0:  cmpl   $0x0,-0x70(%ebp)
086673d0 +0x1bd4:  je     086673f0 <+0x1bf4>
086673d2 +0x1bd6:  movl   $0x21,0x4(%esp)
086673da +0x1bde:  mov    0x8(%ebp),%eax
086673dd +0x1be1:  mov    %eax,(%esp)
086673e0 +0x1be4:  call   080e600e <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x144>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x144
086673e5 +0x1be9:  test   %al,%al
086673e7 +0x1beb:  je     086673f0 <+0x1bf4>
086673e9 +0x1bed:  mov    $0x1,%eax
086673ee +0x1bf2:  jmp    086673f5 <+0x1bf9>
086673f0 +0x1bf4:  mov    $0x0,%eax
086673f5 +0x1bf9:  test   %al,%al
086673f7 +0x1bfb:  je     0866841f <+0x2c23>
086673fd +0x1c01:  movl   $0x0,0x8(%esp)
08667405 +0x1c09:  mov    0x8(%ebp),%eax
08667408 +0x1c0c:  mov    %eax,0x4(%esp)
0866740c +0x1c10:  mov    -0x70(%ebp),%eax
0866740f +0x1c13:  mov    %eax,(%esp)
08667412 +0x1c16:  call   085c4008 <_ZN20CPremiumLetheManager14InitLetheSkillEP5CUser20ENUM_SKILL_TREE_KIND>  ; CPremiumLetheManager::InitLetheSkill(CUser*, ENUM_SKILL_TREE_KIND)
08667417 +0x1c1b:  movl   $0x1,0x8(%esp)
0866741f +0x1c23:  mov    0x8(%ebp),%eax
08667422 +0x1c26:  mov    %eax,0x4(%esp)
08667426 +0x1c2a:  mov    -0x70(%ebp),%eax
08667429 +0x1c2d:  mov    %eax,(%esp)
0866742c +0x1c30:  call   085c4008 <_ZN20CPremiumLetheManager14InitLetheSkillEP5CUser20ENUM_SKILL_TREE_KIND>  ; CPremiumLetheManager::InitLetheSkill(CUser*, ENUM_SKILL_TREE_KIND)
08667431 +0x1c35:  jmp    08668435 <+0x2c39>
08667436 +0x1c3a:  cmpl   $0x0,-0x70(%ebp)
0866743a +0x1c3e:  je     08668422 <+0x2c26>
08667440 +0x1c44:  movl   $0x0,0x8(%esp)
08667448 +0x1c4c:  mov    0x8(%ebp),%eax
0866744b +0x1c4f:  mov    %eax,0x4(%esp)
0866744f +0x1c53:  mov    -0x70(%ebp),%eax
08667452 +0x1c56:  mov    %eax,(%esp)
08667455 +0x1c59:  call   085c3f30 <_ZN20CPremiumLetheManager21UpdateBackupSkillFlagEP5CUser20ENUM_SKILL_TREE_KIND>  ; CPremiumLetheManager::UpdateBackupSkillFlag(CUser*, ENUM_SKILL_TREE_KIND)
0866745a +0x1c5e:  movl   $0x1,0x8(%esp)
08667462 +0x1c66:  mov    0x8(%ebp),%eax
08667465 +0x1c69:  mov    %eax,0x4(%esp)
08667469 +0x1c6d:  mov    -0x70(%ebp),%eax
0866746c +0x1c70:  mov    %eax,(%esp)
0866746f +0x1c73:  call   085c3f30 <_ZN20CPremiumLetheManager21UpdateBackupSkillFlagEP5CUser20ENUM_SKILL_TREE_KIND>  ; CPremiumLetheManager::UpdateBackupSkillFlag(CUser*, ENUM_SKILL_TREE_KIND)
08667474 +0x1c78:  jmp    08668435 <+0x2c39>
08667479 +0x1c7d:  mov    0x8(%ebp),%eax
0866747c +0x1c80:  mov    %eax,(%esp)
0866747f +0x1c83:  call   0822f33c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x49e6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x49e6
08667484 +0x1c88:  mov    %eax,%ebx
08667486 +0x1c8a:  mov    0x8(%ebp),%eax
08667489 +0x1c8d:  mov    %eax,(%esp)
0866748c +0x1c90:  call   0822f140 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47ea>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47ea
08667491 +0x1c95:  mov    %ebx,0x4(%esp)
08667495 +0x1c99:  mov    %eax,(%esp)
08667498 +0x1c9c:  call   08604d90 <_ZN9SkillSlot16clear_all_skillsE20ENUM_SKILL_TREE_KIND>  ; SkillSlot::clear_all_skills(ENUM_SKILL_TREE_KIND)
0866749d +0x1ca1:  mov    0x8(%ebp),%eax
086674a0 +0x1ca4:  mov    %eax,(%esp)
086674a3 +0x1ca7:  call   0822f140 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47ea>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47ea
086674a8 +0x1cac:  mov    0x8(%ebp),%edx
086674ab +0x1caf:  mov    %edx,0x4(%esp)
086674af +0x1cb3:  mov    %eax,(%esp)
086674b2 +0x1cb6:  call   0822ee2e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x44d8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x44d8
086674b7 +0x1cbb:  movl   $0x0,-0x6c(%ebp)
086674be +0x1cc2:  mov    0x8(%ebp),%eax
086674c1 +0x1cc5:  mov    %eax,(%esp)
086674c4 +0x1cc8:  call   0822f33c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x49e6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x49e6
086674c9 +0x1ccd:  cmp    $0xffffffff,%eax
086674cc +0x1cd0:  je     086674dd <+0x1ce1>
086674ce +0x1cd2:  mov    0x8(%ebp),%eax
086674d1 +0x1cd5:  mov    %eax,(%esp)
086674d4 +0x1cd8:  call   0822f33c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x49e6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x49e6
086674d9 +0x1cdd:  test   %eax,%eax
086674db +0x1cdf:  jne    086674e4 <+0x1ce8>
086674dd +0x1ce1:  mov    $0x1,%eax
086674e2 +0x1ce6:  jmp    086674e9 <+0x1ced>
086674e4 +0x1ce8:  mov    $0x0,%eax
086674e9 +0x1ced:  test   %al,%al
086674eb +0x1cef:  je     086674f6 <+0x1cfa>
086674ed +0x1cf1:  movl   $0x1,-0x6c(%ebp)
086674f4 +0x1cf8:  jmp    086674fd <+0x1d01>
086674f6 +0x1cfa:  movl   $0x2,-0x6c(%ebp)
086674fd +0x1d01:  mov    -0x6c(%ebp),%eax
08667500 +0x1d04:  mov    %eax,0xc(%esp)
08667504 +0x1d08:  movl   $0x1,0x8(%esp)
0866750c +0x1d10:  movl   $0x0,0x4(%esp)
08667514 +0x1d18:  mov    0x8(%ebp),%eax
08667517 +0x1d1b:  mov    %eax,(%esp)
0866751a +0x1d1e:  call   08665400 <_ZN5CUser16givePvPSkillTreeEibi>  ; CUser::givePvPSkillTree(int, bool, int)
0866751f +0x1d23:  mov    0x8(%ebp),%eax
08667522 +0x1d26:  mov    %eax,(%esp)
08667525 +0x1d29:  call   0819ee4a <_GLOBAL__I__ZN4ARAD16GetQuarterOfYearEPc+0x86>  ; global constructors keyed to ARAD::GetQuarterOfYear(char*)+0x86
0866752a +0x1d2e:  mov    %eax,%esi
0866752c +0x1d30:  mov    0x8(%ebp),%eax
0866752f +0x1d33:  mov    %eax,(%esp)
08667532 +0x1d36:  call   0822f23c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x48e6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x48e6
08667537 +0x1d3b:  movsbl %al,%eax
0866753a +0x1d3e:  mov    %eax,-0x1f0(%ebp)
08667540 +0x1d44:  mov    0x8(%ebp),%eax
08667543 +0x1d47:  mov    %eax,(%esp)
08667546 +0x1d4a:  call   08110c94 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1a6>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1a6
0866754b +0x1d4f:  movsbl %al,%edi
0866754e +0x1d52:  mov    0x8(%ebp),%eax
08667551 +0x1d55:  mov    %eax,(%esp)
08667554 +0x1d58:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
08667559 +0x1d5d:  mov    %eax,%ebx
0866755b +0x1d5f:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08667560 +0x1d64:  add    $0xa800,%eax
08667565 +0x1d69:  movl   $0x0,0x14(%esp)
0866756d +0x1d71:  mov    %esi,0x10(%esp)
08667571 +0x1d75:  mov    -0x1f0(%ebp),%ecx
08667577 +0x1d7b:  mov    %ecx,0xc(%esp)
0866757b +0x1d7f:  mov    %edi,0x8(%esp)
0866757f +0x1d83:  mov    %ebx,0x4(%esp)
08667583 +0x1d87:  mov    %eax,(%esp)
08667586 +0x1d8a:  call   08a5dd62 <_ZNK27PvPSkillTreeParameterScript16getPvPSkillPointEiiiib>  ; PvPSkillTreeParameterScript::getPvPSkillPoint(int, int, int, int, bool) const
0866758b +0x1d8f:  mov    %eax,-0x68(%ebp)
0866758e +0x1d92:  mov    0x8(%ebp),%eax
08667591 +0x1d95:  mov    %eax,(%esp)
08667594 +0x1d98:  call   0822f33c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x49e6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x49e6
08667599 +0x1d9d:  mov    %eax,%ebx
0866759b +0x1d9f:  mov    0x8(%ebp),%eax
0866759e +0x1da2:  mov    %eax,(%esp)
086675a1 +0x1da5:  call   0822f140 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47ea>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47ea
086675a6 +0x1daa:  mov    %ebx,0x8(%esp)
086675aa +0x1dae:  mov    -0x68(%ebp),%edx
086675ad +0x1db1:  mov    %edx,0x4(%esp)
086675b1 +0x1db5:  mov    %eax,(%esp)
086675b4 +0x1db8:  call   086034f8 <_ZN9SkillSlot22set_remain_sp_at_indexEi20ENUM_SKILL_TREE_KIND>  ; SkillSlot::set_remain_sp_at_index(int, ENUM_SKILL_TREE_KIND)
086675b9 +0x1dbd:  mov    0x8(%ebp),%eax
086675bc +0x1dc0:  mov    %eax,(%esp)
086675bf +0x1dc3:  call   0866c46a <_ZN5CUser15send_skill_infoEv>  ; CUser::send_skill_info()
086675c4 +0x1dc8:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
086675c9 +0x1dcd:  mov    %eax,(%esp)
086675cc +0x1dd0:  call   08298e88 <_ZN12CGameManager22GetPremiumLetheManagerEv>  ; CGameManager::GetPremiumLetheManager()
086675d1 +0x1dd5:  mov    %eax,-0x64(%ebp)
086675d4 +0x1dd8:  movl   $0x21,0x4(%esp)
086675dc +0x1de0:  mov    0x8(%ebp),%eax
086675df +0x1de3:  mov    %eax,(%esp)
086675e2 +0x1de6:  call   080e600e <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x144>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x144
086675e7 +0x1deb:  test   %al,%al
086675e9 +0x1ded:  je     08667642 <+0x1e46>
086675eb +0x1def:  cmpl   $0x0,-0x64(%ebp)
086675ef +0x1df3:  je     0866760f <+0x1e13>
086675f1 +0x1df5:  movl   $0x21,0x4(%esp)
086675f9 +0x1dfd:  mov    0x8(%ebp),%eax
086675fc +0x1e00:  mov    %eax,(%esp)
086675ff +0x1e03:  call   080e600e <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x144>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x144
08667604 +0x1e08:  test   %al,%al
08667606 +0x1e0a:  je     0866760f <+0x1e13>
08667608 +0x1e0c:  mov    $0x1,%eax
0866760d +0x1e11:  jmp    08667614 <+0x1e18>
0866760f +0x1e13:  mov    $0x0,%eax
08667614 +0x1e18:  test   %al,%al
08667616 +0x1e1a:  je     08668425 <+0x2c29>
0866761c +0x1e20:  mov    0x8(%ebp),%eax
0866761f +0x1e23:  mov    %eax,(%esp)
08667622 +0x1e26:  call   0822f33c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x49e6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x49e6
08667627 +0x1e2b:  mov    %eax,0x8(%esp)
0866762b +0x1e2f:  mov    0x8(%ebp),%eax
0866762e +0x1e32:  mov    %eax,0x4(%esp)
08667632 +0x1e36:  mov    -0x64(%ebp),%eax
08667635 +0x1e39:  mov    %eax,(%esp)
08667638 +0x1e3c:  call   085c4008 <_ZN20CPremiumLetheManager14InitLetheSkillEP5CUser20ENUM_SKILL_TREE_KIND>  ; CPremiumLetheManager::InitLetheSkill(CUser*, ENUM_SKILL_TREE_KIND)
0866763d +0x1e41:  jmp    08668435 <+0x2c39>
08667642 +0x1e46:  cmpl   $0x0,-0x64(%ebp)
08667646 +0x1e4a:  je     08668428 <+0x2c2c>
0866764c +0x1e50:  mov    0x8(%ebp),%eax
0866764f +0x1e53:  mov    %eax,(%esp)
08667652 +0x1e56:  call   0822f33c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x49e6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x49e6
08667657 +0x1e5b:  mov    %eax,0x8(%esp)
0866765b +0x1e5f:  mov    0x8(%ebp),%eax
0866765e +0x1e62:  mov    %eax,0x4(%esp)
08667662 +0x1e66:  mov    -0x64(%ebp),%eax
08667665 +0x1e69:  mov    %eax,(%esp)
08667668 +0x1e6c:  call   085c3f30 <_ZN20CPremiumLetheManager21UpdateBackupSkillFlagEP5CUser20ENUM_SKILL_TREE_KIND>  ; CPremiumLetheManager::UpdateBackupSkillFlag(CUser*, ENUM_SKILL_TREE_KIND)
0866766d +0x1e71:  jmp    08668435 <+0x2c39>
08667672 +0x1e76:  mov    -0xd8(%ebp),%eax
08667678 +0x1e7c:  cmp    $0x1,%eax
0866767b +0x1e7f:  jne    08667b3d <+0x2341>
08667681 +0x1e85:  mov    0x8(%ebp),%eax
08667684 +0x1e88:  mov    %eax,(%esp)
08667687 +0x1e8b:  call   0822f140 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47ea>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47ea
0866768c +0x1e90:  mov    %eax,(%esp)
0866768f +0x1e93:  call   08604e08 <_ZN9SkillSlot21clear_all_skills_bothEv>  ; SkillSlot::clear_all_skills_both()
08667694 +0x1e98:  mov    0x8(%ebp),%eax
08667697 +0x1e9b:  mov    %eax,(%esp)
0866769a +0x1e9e:  call   0822f140 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47ea>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47ea
0866769f +0x1ea3:  mov    0x8(%ebp),%edx
086676a2 +0x1ea6:  mov    %edx,0x4(%esp)
086676a6 +0x1eaa:  mov    %eax,(%esp)
086676a9 +0x1ead:  call   0822ee2e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x44d8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x44d8
086676ae +0x1eb2:  mov    0x8(%ebp),%eax
086676b1 +0x1eb5:  mov    %eax,(%esp)
086676b4 +0x1eb8:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
086676b9 +0x1ebd:  mov    %eax,%ebx
086676bb +0x1ebf:  mov    0x8(%ebp),%eax
086676be +0x1ec2:  mov    %eax,(%esp)
086676c1 +0x1ec5:  call   0822f140 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47ea>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47ea
086676c6 +0x1eca:  add    $0x46,%eax
086676c9 +0x1ecd:  mov    %ebx,0x4(%esp)
086676cd +0x1ed1:  mov    %eax,(%esp)
086676d0 +0x1ed4:  call   08604fe2 <_Z25addSkillOnCreateCharacterP15_Mastered_skilli>  ; addSkillOnCreateCharacter(_Mastered_skill*, int)
086676d5 +0x1ed9:  mov    0x8(%ebp),%eax
086676d8 +0x1edc:  mov    %eax,(%esp)
086676db +0x1edf:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
086676e0 +0x1ee4:  mov    %eax,%ebx
086676e2 +0x1ee6:  mov    0x8(%ebp),%eax
086676e5 +0x1ee9:  mov    %eax,(%esp)
086676e8 +0x1eec:  call   0822f140 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47ea>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47ea
086676ed +0x1ef1:  add    $0x1de,%eax
086676f2 +0x1ef6:  mov    %ebx,0x4(%esp)
086676f6 +0x1efa:  mov    %eax,(%esp)
086676f9 +0x1efd:  call   08604fe2 <_Z25addSkillOnCreateCharacterP15_Mastered_skilli>  ; addSkillOnCreateCharacter(_Mastered_skill*, int)
086676fe +0x1f02:  lea    -0xf4(%ebp),%eax
08667704 +0x1f08:  mov    %eax,(%esp)
08667707 +0x1f0b:  call   081349d6 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5dd>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5dd
0866770c +0x1f10:  lea    -0xfc(%ebp),%eax
08667712 +0x1f16:  mov    %eax,(%esp)
08667715 +0x1f19:  call   081b5c8e <_GLOBAL__I__ZN23NeedMaterialDataManagerC2Ev+0x31>  ; global constructors keyed to NeedMaterialDataManager::NeedMaterialDataManager()+0x31
0866771a +0x1f1e:  mov    0x8(%ebp),%eax
0866771d +0x1f21:  mov    %eax,(%esp)
08667720 +0x1f24:  call   0822f23c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x48e6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x48e6
08667725 +0x1f29:  movsbl %al,%esi
08667728 +0x1f2c:  mov    0x8(%ebp),%eax
0866772b +0x1f2f:  mov    %eax,(%esp)
0866772e +0x1f32:  call   08110c94 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1a6>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1a6
08667733 +0x1f37:  movsbl %al,%ebx
08667736 +0x1f3a:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0866773b +0x1f3f:  mov    0x14(%eax),%edi
0866773e +0x1f42:  mov    0x8(%ebp),%eax
08667741 +0x1f45:  mov    %eax,(%esp)
08667744 +0x1f48:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
08667749 +0x1f4d:  imul   $0x7dc,%eax,%eax
0866774f +0x1f53:  lea    (%edi,%eax,1),%edx
08667752 +0x1f56:  movl   $0x0,0x10(%esp)
0866775a +0x1f5e:  lea    -0xf4(%ebp),%eax
08667760 +0x1f64:  mov    %eax,0xc(%esp)
08667764 +0x1f68:  mov    %esi,0x8(%esp)
08667768 +0x1f6c:  mov    %ebx,0x4(%esp)
0866776c +0x1f70:  mov    %edx,(%esp)
0866776f +0x1f73:  call   08348798 <_ZNK10CCharacter14get_give_skillEiiRSt6vectorISt4pairIiiESaIS2_EEj>  ; CCharacter::get_give_skill(int, int, std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&, unsigned int) const
08667774 +0x1f78:  mov    %al,-0x55(%ebp)
08667777 +0x1f7b:  movzbl -0x55(%ebp),%eax
0866777b +0x1f7f:  xor    $0x1,%eax
0866777e +0x1f82:  test   %al,%al
08667780 +0x1f84:  je     086677d5 <+0x1fd9>
08667782 +0x1f86:  movzbl -0xd1(%ebp),%eax
08667789 +0x1f8d:  movsbl %al,%ebx
0866778c +0x1f90:  mov    0x8(%ebp),%eax
0866778f +0x1f93:  mov    %eax,(%esp)
08667792 +0x1f96:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
08667797 +0x1f9b:  mov    %ebx,0x18(%esp)
0866779b +0x1f9f:  mov    %eax,0x14(%esp)
0866779f +0x1fa3:  movl   $"User %s - CUser::set_grow_type %d",0x10(%esp)
086677a7 +0x1fab:  movl   $0x4aee,0xc(%esp)
086677af +0x1fb3:  movl   $&_ZZN5CUser15increase_statusEsE19__PRETTY_FUNCTION__,0x8(%esp)
086677b7 +0x1fbb:  movl   $"user.cpp",0x4(%esp)
086677bf +0x1fc3:  movl   $0x1,(%esp)
086677c6 +0x1fca:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
086677cb +0x1fcf:  mov    $0x0,%ebx
086677d0 +0x1fd4:  jmp    08667b22 <+0x2326>
086677d5 +0x1fd9:  movl   $0x0,-0x4c(%ebp)
086677dc +0x1fe0:  jmp    08667891 <+0x2095>
086677e1 +0x1fe5:  mov    -0x4c(%ebp),%eax
086677e4 +0x1fe8:  mov    %eax,0x4(%esp)
086677e8 +0x1fec:  lea    -0xf4(%ebp),%eax
086677ee +0x1ff2:  mov    %eax,(%esp)
086677f1 +0x1ff5:  call   080ea8a4 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x4dd>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x4dd
086677f6 +0x1ffa:  mov    0x4(%eax),%edx
086677f9 +0x1ffd:  mov    (%eax),%eax
086677fb +0x1fff:  mov    %eax,-0xfc(%ebp)
08667801 +0x2005:  mov    %edx,-0xf8(%ebp)
08667807 +0x200b:  mov    -0xfc(%ebp),%eax
0866780d +0x2011:  mov    %eax,-0x60(%ebp)
08667810 +0x2014:  mov    -0xf8(%ebp),%eax
08667816 +0x201a:  mov    %eax,-0x5c(%ebp)
08667819 +0x201d:  mov    0x8(%ebp),%eax
0866781c +0x2020:  mov    %eax,(%esp)
0866781f +0x2023:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
08667824 +0x2028:  mov    %eax,%ebx
08667826 +0x202a:  mov    0x8(%ebp),%eax
08667829 +0x202d:  mov    %eax,(%esp)
0866782c +0x2030:  call   0822f140 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47ea>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47ea
08667831 +0x2035:  movl   $0x0,0x10(%esp)
08667839 +0x203d:  mov    -0x5c(%ebp),%edx
0866783c +0x2040:  mov    %edx,0xc(%esp)
08667840 +0x2044:  mov    -0x60(%ebp),%edx
08667843 +0x2047:  mov    %edx,0x8(%esp)
08667847 +0x204b:  mov    %ebx,0x4(%esp)
0866784b +0x204f:  mov    %eax,(%esp)
0866784e +0x2052:  call   086040bc <_ZN9SkillSlot14growtype_skillEiii20ENUM_SKILL_TREE_KIND>  ; SkillSlot::growtype_skill(int, int, int, ENUM_SKILL_TREE_KIND)
08667853 +0x2057:  mov    0x8(%ebp),%eax
08667856 +0x205a:  mov    %eax,(%esp)
08667859 +0x205d:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
0866785e +0x2062:  mov    %eax,%ebx
08667860 +0x2064:  mov    0x8(%ebp),%eax
08667863 +0x2067:  mov    %eax,(%esp)
08667866 +0x206a:  call   0822f140 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47ea>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47ea
0866786b +0x206f:  movl   $0x1,0x10(%esp)
08667873 +0x2077:  mov    -0x5c(%ebp),%edx
08667876 +0x207a:  mov    %edx,0xc(%esp)
0866787a +0x207e:  mov    -0x60(%ebp),%edx
0866787d +0x2081:  mov    %edx,0x8(%esp)
08667881 +0x2085:  mov    %ebx,0x4(%esp)
08667885 +0x2089:  mov    %eax,(%esp)
08667888 +0x208c:  call   086040bc <_ZN9SkillSlot14growtype_skillEiii20ENUM_SKILL_TREE_KIND>  ; SkillSlot::growtype_skill(int, int, int, ENUM_SKILL_TREE_KIND)
0866788d +0x2091:  addl   $0x1,-0x4c(%ebp)
08667891 +0x2095:  lea    -0xf4(%ebp),%eax
08667897 +0x209b:  mov    %eax,(%esp)
0866789a +0x209e:  call   080dd814 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x35d>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x35d
0866789f +0x20a3:  cmp    -0x4c(%ebp),%eax
086678a2 +0x20a6:  setg   %al
086678a5 +0x20a9:  test   %al,%al
086678a7 +0x20ab:  jne    086677e1 <+0x1fe5>
086678ad +0x20b1:  mov    0x8(%ebp),%eax
086678b0 +0x20b4:  mov    %eax,(%esp)
086678b3 +0x20b7:  call   0822f894 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4f3e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4f3e
086678b8 +0x20bc:  mov    %eax,%ebx
086678ba +0x20be:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
086678bf +0x20c3:  mov    %ebx,0x4(%esp)
086678c3 +0x20c7:  mov    %eax,(%esp)
086678c6 +0x20ca:  call   0822b5f2 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc9c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc9c
086678cb +0x20cf:  mov    %eax,-0x54(%ebp)
086678ce +0x20d2:  cmpl   $0x0,-0x54(%ebp)
086678d2 +0x20d6:  je     086679d2 <+0x21d6>
086678d8 +0x20dc:  movl   $0x0,-0x48(%ebp)
086678df +0x20e3:  jmp    086679b6 <+0x21ba>
086678e4 +0x20e8:  mov    0x8(%ebp),%eax
086678e7 +0x20eb:  mov    %eax,(%esp)
086678ea +0x20ee:  call   08375026 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xeff2>  ; global constructors keyed to CServerEvent::m_nExpRate+0xeff2
086678ef +0x20f3:  mov    %eax,0x4(%esp)
086678f3 +0x20f7:  mov    0x8(%ebp),%eax
086678f6 +0x20fa:  mov    %eax,(%esp)
086678f9 +0x20fd:  call   0868bc7c <_ZN5CUser20GetCurExpertJobLevelEi>  ; CUser::GetCurExpertJobLevel(int)
086678fe +0x2102:  mov    %eax,%esi
08667900 +0x2104:  mov    -0x54(%ebp),%eax
08667903 +0x2107:  lea    0xc(%eax),%edx
08667906 +0x210a:  mov    -0x48(%ebp),%eax
08667909 +0x210d:  mov    %eax,0x4(%esp)
0866790d +0x2111:  mov    %edx,(%esp)
08667910 +0x2114:  call   080ea8a4 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x4dd>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x4dd
08667915 +0x2119:  mov    (%eax),%edi
08667917 +0x211b:  mov    0x8(%ebp),%eax
0866791a +0x211e:  mov    %eax,(%esp)
0866791d +0x2121:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
08667922 +0x2126:  mov    %eax,%ebx
08667924 +0x2128:  mov    0x8(%ebp),%eax
08667927 +0x212b:  mov    %eax,(%esp)
0866792a +0x212e:  call   0822f140 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47ea>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47ea
0866792f +0x2133:  movl   $0x0,0x10(%esp)
08667937 +0x213b:  mov    %esi,0xc(%esp)
0866793b +0x213f:  mov    %edi,0x8(%esp)
0866793f +0x2143:  mov    %ebx,0x4(%esp)
08667943 +0x2147:  mov    %eax,(%esp)
08667946 +0x214a:  call   086040bc <_ZN9SkillSlot14growtype_skillEiii20ENUM_SKILL_TREE_KIND>  ; SkillSlot::growtype_skill(int, int, int, ENUM_SKILL_TREE_KIND)
0866794b +0x214f:  mov    0x8(%ebp),%eax
0866794e +0x2152:  mov    %eax,(%esp)
08667951 +0x2155:  call   08375026 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xeff2>  ; global constructors keyed to CServerEvent::m_nExpRate+0xeff2
08667956 +0x215a:  mov    %eax,0x4(%esp)
0866795a +0x215e:  mov    0x8(%ebp),%eax
0866795d +0x2161:  mov    %eax,(%esp)
08667960 +0x2164:  call   0868bc7c <_ZN5CUser20GetCurExpertJobLevelEi>  ; CUser::GetCurExpertJobLevel(int)
08667965 +0x2169:  mov    %eax,%esi
08667967 +0x216b:  mov    -0x54(%ebp),%eax
0866796a +0x216e:  lea    0xc(%eax),%edx
0866796d +0x2171:  mov    -0x48(%ebp),%eax
08667970 +0x2174:  mov    %eax,0x4(%esp)
08667974 +0x2178:  mov    %edx,(%esp)
08667977 +0x217b:  call   080ea8a4 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x4dd>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x4dd
0866797c +0x2180:  mov    (%eax),%edi
0866797e +0x2182:  mov    0x8(%ebp),%eax
08667981 +0x2185:  mov    %eax,(%esp)
08667984 +0x2188:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
08667989 +0x218d:  mov    %eax,%ebx
0866798b +0x218f:  mov    0x8(%ebp),%eax
0866798e +0x2192:  mov    %eax,(%esp)
08667991 +0x2195:  call   0822f140 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47ea>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47ea
08667996 +0x219a:  movl   $0x1,0x10(%esp)
0866799e +0x21a2:  mov    %esi,0xc(%esp)
086679a2 +0x21a6:  mov    %edi,0x8(%esp)
086679a6 +0x21aa:  mov    %ebx,0x4(%esp)
086679aa +0x21ae:  mov    %eax,(%esp)
086679ad +0x21b1:  call   086040bc <_ZN9SkillSlot14growtype_skillEiii20ENUM_SKILL_TREE_KIND>  ; SkillSlot::growtype_skill(int, int, int, ENUM_SKILL_TREE_KIND)
086679b2 +0x21b6:  addl   $0x1,-0x48(%ebp)
086679b6 +0x21ba:  mov    -0x54(%ebp),%eax
086679b9 +0x21bd:  add    $0xc,%eax
086679bc +0x21c0:  mov    %eax,(%esp)
086679bf +0x21c3:  call   080dd814 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x35d>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x35d
086679c4 +0x21c8:  cmp    -0x48(%ebp),%eax
086679c7 +0x21cb:  seta   %al
086679ca +0x21ce:  test   %al,%al
086679cc +0x21d0:  jne    086678e4 <+0x20e8>
086679d2 +0x21d6:  lea    -0x1e4(%ebp),%eax
086679d8 +0x21dc:  mov    %eax,(%esp)
086679db +0x21df:  call   08234fbe <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xa668>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xa668
086679e0 +0x21e4:  movl   $0x0,0xc(%esp)
086679e8 +0x21ec:  movl   $0x0,0x8(%esp)
086679f0 +0x21f4:  mov    0x8(%ebp),%eax
086679f3 +0x21f7:  mov    %eax,0x4(%esp)
086679f7 +0x21fb:  lea    -0x1e4(%ebp),%eax
086679fd +0x2201:  mov    %eax,(%esp)
08667a00 +0x2204:  call   08609e90 <_ZN8WongWork13CSkillChanger15SkillInitializeEP5CUserib>  ; WongWork::CSkillChanger::SkillInitialize(CUser*, int, bool)
08667a05 +0x2209:  mov    0x8(%ebp),%eax
08667a08 +0x220c:  mov    %eax,(%esp)
08667a0b +0x220f:  call   0866c46a <_ZN5CUser15send_skill_infoEv>  ; CUser::send_skill_info()
08667a10 +0x2214:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
08667a15 +0x2219:  mov    %eax,(%esp)
08667a18 +0x221c:  call   08298e88 <_ZN12CGameManager22GetPremiumLetheManagerEv>  ; CGameManager::GetPremiumLetheManager()
08667a1d +0x2221:  mov    %eax,-0x50(%ebp)
08667a20 +0x2224:  movl   $0x21,0x4(%esp)
08667a28 +0x222c:  mov    0x8(%ebp),%eax
08667a2b +0x222f:  mov    %eax,(%esp)
08667a2e +0x2232:  call   080e600e <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x144>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x144
08667a33 +0x2237:  test   %al,%al
08667a35 +0x2239:  je     08667a9e <+0x22a2>
08667a37 +0x223b:  cmpl   $0x0,-0x50(%ebp)
08667a3b +0x223f:  je     08667a5b <+0x225f>
08667a3d +0x2241:  movl   $0x21,0x4(%esp)
08667a45 +0x2249:  mov    0x8(%ebp),%eax
08667a48 +0x224c:  mov    %eax,(%esp)
08667a4b +0x224f:  call   080e600e <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x144>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x144
08667a50 +0x2254:  test   %al,%al
08667a52 +0x2256:  je     08667a5b <+0x225f>
08667a54 +0x2258:  mov    $0x1,%eax
08667a59 +0x225d:  jmp    08667a60 <+0x2264>
08667a5b +0x225f:  mov    $0x0,%eax
08667a60 +0x2264:  test   %al,%al
08667a62 +0x2266:  je     08667af2 <+0x22f6>
08667a68 +0x226c:  movl   $0x0,0x8(%esp)
08667a70 +0x2274:  mov    0x8(%ebp),%eax
08667a73 +0x2277:  mov    %eax,0x4(%esp)
08667a77 +0x227b:  mov    -0x50(%ebp),%eax
08667a7a +0x227e:  mov    %eax,(%esp)
08667a7d +0x2281:  call   085c4008 <_ZN20CPremiumLetheManager14InitLetheSkillEP5CUser20ENUM_SKILL_TREE_KIND>  ; CPremiumLetheManager::InitLetheSkill(CUser*, ENUM_SKILL_TREE_KIND)
08667a82 +0x2286:  movl   $0x1,0x8(%esp)
08667a8a +0x228e:  mov    0x8(%ebp),%eax
08667a8d +0x2291:  mov    %eax,0x4(%esp)
08667a91 +0x2295:  mov    -0x50(%ebp),%eax
08667a94 +0x2298:  mov    %eax,(%esp)
08667a97 +0x229b:  call   085c4008 <_ZN20CPremiumLetheManager14InitLetheSkillEP5CUser20ENUM_SKILL_TREE_KIND>  ; CPremiumLetheManager::InitLetheSkill(CUser*, ENUM_SKILL_TREE_KIND)
08667a9c +0x22a0:  jmp    08667af2 <+0x22f6>
08667a9e +0x22a2:  cmpl   $0x0,-0x50(%ebp)
08667aa2 +0x22a6:  je     08667af2 <+0x22f6>
08667aa4 +0x22a8:  movl   $0x0,0x8(%esp)
08667aac +0x22b0:  mov    0x8(%ebp),%eax
08667aaf +0x22b3:  mov    %eax,0x4(%esp)
08667ab3 +0x22b7:  mov    -0x50(%ebp),%eax
08667ab6 +0x22ba:  mov    %eax,(%esp)
08667ab9 +0x22bd:  call   085c3f30 <_ZN20CPremiumLetheManager21UpdateBackupSkillFlagEP5CUser20ENUM_SKILL_TREE_KIND>  ; CPremiumLetheManager::UpdateBackupSkillFlag(CUser*, ENUM_SKILL_TREE_KIND)
08667abe +0x22c2:  movl   $0x1,0x8(%esp)
08667ac6 +0x22ca:  mov    0x8(%ebp),%eax
08667ac9 +0x22cd:  mov    %eax,0x4(%esp)
08667acd +0x22d1:  mov    -0x50(%ebp),%eax
08667ad0 +0x22d4:  mov    %eax,(%esp)
08667ad3 +0x22d7:  call   085c3f30 <_ZN20CPremiumLetheManager21UpdateBackupSkillFlagEP5CUser20ENUM_SKILL_TREE_KIND>  ; CPremiumLetheManager::UpdateBackupSkillFlag(CUser*, ENUM_SKILL_TREE_KIND)
08667ad8 +0x22dc:  jmp    08667af2 <+0x22f6>
08667ada +0x22de:  mov    %edx,%ebx
08667adc +0x22e0:  mov    %eax,%esi
08667ade +0x22e2:  lea    -0x1e4(%ebp),%eax
08667ae4 +0x22e8:  mov    %eax,(%esp)
08667ae7 +0x22eb:  call   08234fc4 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xa66e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xa66e
08667aec +0x22f0:  mov    %esi,%eax
08667aee +0x22f2:  mov    %ebx,%edx
08667af0 +0x22f4:  jmp    08667b07 <+0x230b>
08667af2 +0x22f6:  lea    -0x1e4(%ebp),%eax
08667af8 +0x22fc:  mov    %eax,(%esp)
08667afb +0x22ff:  call   08234fc4 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xa66e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xa66e
08667b00 +0x2304:  mov    $0x1,%ebx
08667b05 +0x2309:  jmp    08667b22 <+0x2326>
08667b07 +0x230b:  mov    %edx,%ebx
08667b09 +0x230d:  mov    %eax,%esi
08667b0b +0x230f:  lea    -0xf4(%ebp),%eax
08667b11 +0x2315:  mov    %eax,(%esp)
08667b14 +0x2318:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
08667b19 +0x231d:  mov    %esi,%eax
08667b1b +0x231f:  mov    %ebx,%edx
08667b1d +0x2321:  jmp    086686b6 <+0x2eba>
08667b22 +0x2326:  lea    -0xf4(%ebp),%eax
08667b28 +0x232c:  mov    %eax,(%esp)
08667b2b +0x232f:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
08667b30 +0x2334:  test   %ebx,%ebx
08667b32 +0x2336:  je     086686d4 <+0x2ed8>
08667b38 +0x233c:  jmp    08668435 <+0x2c39>
08667b3d +0x2341:  mov    0x8(%ebp),%eax
08667b40 +0x2344:  mov    %eax,(%esp)
08667b43 +0x2347:  call   0822f33c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x49e6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x49e6
08667b48 +0x234c:  mov    %eax,%ebx
08667b4a +0x234e:  mov    0x8(%ebp),%eax
08667b4d +0x2351:  mov    %eax,(%esp)
08667b50 +0x2354:  call   0822f140 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47ea>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47ea
08667b55 +0x2359:  mov    %ebx,0x4(%esp)
08667b59 +0x235d:  mov    %eax,(%esp)
08667b5c +0x2360:  call   08604d90 <_ZN9SkillSlot16clear_all_skillsE20ENUM_SKILL_TREE_KIND>  ; SkillSlot::clear_all_skills(ENUM_SKILL_TREE_KIND)
08667b61 +0x2365:  mov    0x8(%ebp),%eax
08667b64 +0x2368:  mov    %eax,(%esp)
08667b67 +0x236b:  call   0822f140 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47ea>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47ea
08667b6c +0x2370:  mov    0x8(%ebp),%edx
08667b6f +0x2373:  mov    %edx,0x4(%esp)
08667b73 +0x2377:  mov    %eax,(%esp)
08667b76 +0x237a:  call   0822ee2e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x44d8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x44d8
08667b7b +0x237f:  mov    0x8(%ebp),%eax
08667b7e +0x2382:  mov    %eax,(%esp)
08667b81 +0x2385:  call   0822f33c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x49e6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x49e6
08667b86 +0x238a:  cmp    $0xffffffff,%eax
08667b89 +0x238d:  je     08667b9a <+0x239e>
08667b8b +0x238f:  mov    0x8(%ebp),%eax
08667b8e +0x2392:  mov    %eax,(%esp)
08667b91 +0x2395:  call   0822f33c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x49e6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x49e6
08667b96 +0x239a:  test   %eax,%eax
08667b98 +0x239c:  jne    08667ba1 <+0x23a5>
08667b9a +0x239e:  mov    $0x1,%eax
08667b9f +0x23a3:  jmp    08667ba6 <+0x23aa>
08667ba1 +0x23a5:  mov    $0x0,%eax
08667ba6 +0x23aa:  test   %al,%al
08667ba8 +0x23ac:  je     08667bd3 <+0x23d7>
08667baa +0x23ae:  mov    0x8(%ebp),%eax
08667bad +0x23b1:  mov    %eax,(%esp)
08667bb0 +0x23b4:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
08667bb5 +0x23b9:  mov    %eax,%ebx
08667bb7 +0x23bb:  mov    0x8(%ebp),%eax
08667bba +0x23be:  mov    %eax,(%esp)
08667bbd +0x23c1:  call   0822f140 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47ea>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47ea
08667bc2 +0x23c6:  add    $0x46,%eax
08667bc5 +0x23c9:  mov    %ebx,0x4(%esp)
08667bc9 +0x23cd:  mov    %eax,(%esp)
08667bcc +0x23d0:  call   08604fe2 <_Z25addSkillOnCreateCharacterP15_Mastered_skilli>  ; addSkillOnCreateCharacter(_Mastered_skill*, int)
08667bd1 +0x23d5:  jmp    08667bfc <+0x2400>
08667bd3 +0x23d7:  mov    0x8(%ebp),%eax
08667bd6 +0x23da:  mov    %eax,(%esp)
08667bd9 +0x23dd:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
08667bde +0x23e2:  mov    %eax,%ebx
08667be0 +0x23e4:  mov    0x8(%ebp),%eax
08667be3 +0x23e7:  mov    %eax,(%esp)
08667be6 +0x23ea:  call   0822f140 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47ea>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47ea
08667beb +0x23ef:  add    $0x1de,%eax
08667bf0 +0x23f4:  mov    %ebx,0x4(%esp)
08667bf4 +0x23f8:  mov    %eax,(%esp)
08667bf7 +0x23fb:  call   08604fe2 <_Z25addSkillOnCreateCharacterP15_Mastered_skilli>  ; addSkillOnCreateCharacter(_Mastered_skill*, int)
08667bfc +0x2400:  lea    -0x108(%ebp),%eax
08667c02 +0x2406:  mov    %eax,(%esp)
08667c05 +0x2409:  call   081349d6 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5dd>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5dd
08667c0a +0x240e:  lea    -0x110(%ebp),%eax
08667c10 +0x2414:  mov    %eax,(%esp)
08667c13 +0x2417:  call   081b5c8e <_GLOBAL__I__ZN23NeedMaterialDataManagerC2Ev+0x31>  ; global constructors keyed to NeedMaterialDataManager::NeedMaterialDataManager()+0x31
08667c18 +0x241c:  mov    0x8(%ebp),%eax
08667c1b +0x241f:  mov    %eax,(%esp)
08667c1e +0x2422:  call   0822f23c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x48e6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x48e6
08667c23 +0x2427:  movsbl %al,%esi
08667c26 +0x242a:  mov    0x8(%ebp),%eax
08667c29 +0x242d:  mov    %eax,(%esp)
08667c2c +0x2430:  call   08110c94 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1a6>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1a6
08667c31 +0x2435:  movsbl %al,%ebx
08667c34 +0x2438:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08667c39 +0x243d:  mov    0x14(%eax),%edi
08667c3c +0x2440:  mov    0x8(%ebp),%eax
08667c3f +0x2443:  mov    %eax,(%esp)
08667c42 +0x2446:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
08667c47 +0x244b:  imul   $0x7dc,%eax,%eax
08667c4d +0x2451:  lea    (%edi,%eax,1),%edx
08667c50 +0x2454:  movl   $0x0,0x10(%esp)
08667c58 +0x245c:  lea    -0x108(%ebp),%eax
08667c5e +0x2462:  mov    %eax,0xc(%esp)
08667c62 +0x2466:  mov    %esi,0x8(%esp)
08667c66 +0x246a:  mov    %ebx,0x4(%esp)
08667c6a +0x246e:  mov    %edx,(%esp)
08667c6d +0x2471:  call   08348798 <_ZNK10CCharacter14get_give_skillEiiRSt6vectorISt4pairIiiESaIS2_EEj>  ; CCharacter::get_give_skill(int, int, std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&, unsigned int) const
08667c72 +0x2476:  mov    %al,-0x39(%ebp)
08667c75 +0x2479:  movzbl -0x39(%ebp),%eax
08667c79 +0x247d:  xor    $0x1,%eax
08667c7c +0x2480:  test   %al,%al
08667c7e +0x2482:  je     08667cd3 <+0x24d7>
08667c80 +0x2484:  movzbl -0xd1(%ebp),%eax
08667c87 +0x248b:  movsbl %al,%ebx
08667c8a +0x248e:  mov    0x8(%ebp),%eax
08667c8d +0x2491:  mov    %eax,(%esp)
08667c90 +0x2494:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
08667c95 +0x2499:  mov    %ebx,0x18(%esp)
08667c99 +0x249d:  mov    %eax,0x14(%esp)
08667c9d +0x24a1:  movl   $"User %s - CUser::set_grow_type %d",0x10(%esp)
08667ca5 +0x24a9:  movl   $0x4b48,0xc(%esp)
08667cad +0x24b1:  movl   $&_ZZN5CUser15increase_statusEsE19__PRETTY_FUNCTION__,0x8(%esp)
08667cb5 +0x24b9:  movl   $"user.cpp",0x4(%esp)
08667cbd +0x24c1:  movl   $0x1,(%esp)
08667cc4 +0x24c8:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08667cc9 +0x24cd:  mov    $0x0,%ebx
08667cce +0x24d2:  jmp    08668007 <+0x280b>
08667cd3 +0x24d7:  movl   $0x0,-0x2c(%ebp)
08667cda +0x24de:  jmp    08667d5b <+0x255f>
08667cdc +0x24e0:  mov    -0x2c(%ebp),%eax
08667cdf +0x24e3:  mov    %eax,0x4(%esp)
08667ce3 +0x24e7:  lea    -0x108(%ebp),%eax
08667ce9 +0x24ed:  mov    %eax,(%esp)
08667cec +0x24f0:  call   080ea8a4 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x4dd>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x4dd
08667cf1 +0x24f5:  mov    0x4(%eax),%edx
08667cf4 +0x24f8:  mov    (%eax),%eax
08667cf6 +0x24fa:  mov    %eax,-0x110(%ebp)
08667cfc +0x2500:  mov    %edx,-0x10c(%ebp)
08667d02 +0x2506:  mov    -0x110(%ebp),%eax
08667d08 +0x250c:  mov    %eax,-0x44(%ebp)
08667d0b +0x250f:  mov    -0x10c(%ebp),%eax
08667d11 +0x2515:  mov    %eax,-0x40(%ebp)
08667d14 +0x2518:  mov    0x8(%ebp),%eax
08667d17 +0x251b:  mov    %eax,(%esp)
08667d1a +0x251e:  call   0822f33c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x49e6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x49e6
08667d1f +0x2523:  mov    %eax,%esi
08667d21 +0x2525:  mov    0x8(%ebp),%eax
08667d24 +0x2528:  mov    %eax,(%esp)
08667d27 +0x252b:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
08667d2c +0x2530:  mov    %eax,%ebx
08667d2e +0x2532:  mov    0x8(%ebp),%eax
08667d31 +0x2535:  mov    %eax,(%esp)
08667d34 +0x2538:  call   0822f140 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47ea>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47ea
08667d39 +0x253d:  mov    %esi,0x10(%esp)
08667d3d +0x2541:  mov    -0x40(%ebp),%edx
08667d40 +0x2544:  mov    %edx,0xc(%esp)
08667d44 +0x2548:  mov    -0x44(%ebp),%edx
08667d47 +0x254b:  mov    %edx,0x8(%esp)
08667d4b +0x254f:  mov    %ebx,0x4(%esp)
08667d4f +0x2553:  mov    %eax,(%esp)
08667d52 +0x2556:  call   086040bc <_ZN9SkillSlot14growtype_skillEiii20ENUM_SKILL_TREE_KIND>  ; SkillSlot::growtype_skill(int, int, int, ENUM_SKILL_TREE_KIND)
08667d57 +0x255b:  addl   $0x1,-0x2c(%ebp)
08667d5b +0x255f:  lea    -0x108(%ebp),%eax
08667d61 +0x2565:  mov    %eax,(%esp)
08667d64 +0x2568:  call   080dd814 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x35d>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x35d
08667d69 +0x256d:  cmp    -0x2c(%ebp),%eax
08667d6c +0x2570:  setg   %al
08667d6f +0x2573:  test   %al,%al
08667d71 +0x2575:  jne    08667cdc <+0x24e0>
08667d77 +0x257b:  mov    0x8(%ebp),%eax
08667d7a +0x257e:  mov    %eax,(%esp)
08667d7d +0x2581:  call   0822f894 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4f3e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4f3e
08667d82 +0x2586:  mov    %eax,%ebx
08667d84 +0x2588:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08667d89 +0x258d:  mov    %ebx,0x4(%esp)
08667d8d +0x2591:  mov    %eax,(%esp)
08667d90 +0x2594:  call   0822b5f2 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc9c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc9c
08667d95 +0x2599:  mov    %eax,-0x38(%ebp)
08667d98 +0x259c:  cmpl   $0x0,-0x38(%ebp)
08667d9c +0x25a0:  je     08667e9c <+0x26a0>
08667da2 +0x25a6:  movl   $0x0,-0x28(%ebp)
08667da9 +0x25ad:  jmp    08667e80 <+0x2684>
08667dae +0x25b2:  mov    0x8(%ebp),%eax
08667db1 +0x25b5:  mov    %eax,(%esp)
08667db4 +0x25b8:  call   08375026 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xeff2>  ; global constructors keyed to CServerEvent::m_nExpRate+0xeff2
08667db9 +0x25bd:  mov    %eax,0x4(%esp)
08667dbd +0x25c1:  mov    0x8(%ebp),%eax
08667dc0 +0x25c4:  mov    %eax,(%esp)
08667dc3 +0x25c7:  call   0868bc7c <_ZN5CUser20GetCurExpertJobLevelEi>  ; CUser::GetCurExpertJobLevel(int)
08667dc8 +0x25cc:  mov    %eax,%esi
08667dca +0x25ce:  mov    -0x38(%ebp),%eax
08667dcd +0x25d1:  lea    0xc(%eax),%edx
08667dd0 +0x25d4:  mov    -0x28(%ebp),%eax
08667dd3 +0x25d7:  mov    %eax,0x4(%esp)
08667dd7 +0x25db:  mov    %edx,(%esp)
08667dda +0x25de:  call   080ea8a4 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x4dd>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x4dd
08667ddf +0x25e3:  mov    (%eax),%edi
08667de1 +0x25e5:  mov    0x8(%ebp),%eax
08667de4 +0x25e8:  mov    %eax,(%esp)
08667de7 +0x25eb:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
08667dec +0x25f0:  mov    %eax,%ebx
08667dee +0x25f2:  mov    0x8(%ebp),%eax
08667df1 +0x25f5:  mov    %eax,(%esp)
08667df4 +0x25f8:  call   0822f140 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47ea>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47ea
08667df9 +0x25fd:  movl   $0x0,0x10(%esp)
08667e01 +0x2605:  mov    %esi,0xc(%esp)
08667e05 +0x2609:  mov    %edi,0x8(%esp)
08667e09 +0x260d:  mov    %ebx,0x4(%esp)
08667e0d +0x2611:  mov    %eax,(%esp)
08667e10 +0x2614:  call   086040bc <_ZN9SkillSlot14growtype_skillEiii20ENUM_SKILL_TREE_KIND>  ; SkillSlot::growtype_skill(int, int, int, ENUM_SKILL_TREE_KIND)
08667e15 +0x2619:  mov    0x8(%ebp),%eax
08667e18 +0x261c:  mov    %eax,(%esp)
08667e1b +0x261f:  call   08375026 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xeff2>  ; global constructors keyed to CServerEvent::m_nExpRate+0xeff2
08667e20 +0x2624:  mov    %eax,0x4(%esp)
08667e24 +0x2628:  mov    0x8(%ebp),%eax
08667e27 +0x262b:  mov    %eax,(%esp)
08667e2a +0x262e:  call   0868bc7c <_ZN5CUser20GetCurExpertJobLevelEi>  ; CUser::GetCurExpertJobLevel(int)
08667e2f +0x2633:  mov    %eax,%esi
08667e31 +0x2635:  mov    -0x38(%ebp),%eax
08667e34 +0x2638:  lea    0xc(%eax),%edx
08667e37 +0x263b:  mov    -0x28(%ebp),%eax
08667e3a +0x263e:  mov    %eax,0x4(%esp)
08667e3e +0x2642:  mov    %edx,(%esp)
08667e41 +0x2645:  call   080ea8a4 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x4dd>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x4dd
08667e46 +0x264a:  mov    (%eax),%edi
08667e48 +0x264c:  mov    0x8(%ebp),%eax
08667e4b +0x264f:  mov    %eax,(%esp)
08667e4e +0x2652:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
08667e53 +0x2657:  mov    %eax,%ebx
08667e55 +0x2659:  mov    0x8(%ebp),%eax
08667e58 +0x265c:  mov    %eax,(%esp)
08667e5b +0x265f:  call   0822f140 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47ea>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47ea
08667e60 +0x2664:  movl   $0x1,0x10(%esp)
08667e68 +0x266c:  mov    %esi,0xc(%esp)
08667e6c +0x2670:  mov    %edi,0x8(%esp)
08667e70 +0x2674:  mov    %ebx,0x4(%esp)
08667e74 +0x2678:  mov    %eax,(%esp)
08667e77 +0x267b:  call   086040bc <_ZN9SkillSlot14growtype_skillEiii20ENUM_SKILL_TREE_KIND>  ; SkillSlot::growtype_skill(int, int, int, ENUM_SKILL_TREE_KIND)
08667e7c +0x2680:  addl   $0x1,-0x28(%ebp)
08667e80 +0x2684:  mov    -0x38(%ebp),%eax
08667e83 +0x2687:  add    $0xc,%eax
08667e86 +0x268a:  mov    %eax,(%esp)
08667e89 +0x268d:  call   080dd814 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x35d>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x35d
08667e8e +0x2692:  cmp    -0x28(%ebp),%eax
08667e91 +0x2695:  seta   %al
08667e94 +0x2698:  test   %al,%al
08667e96 +0x269a:  jne    08667dae <+0x25b2>
08667e9c +0x26a0:  lea    -0x1e4(%ebp),%eax
08667ea2 +0x26a6:  mov    %eax,(%esp)
08667ea5 +0x26a9:  call   08234fbe <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xa668>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xa668
08667eaa +0x26ae:  movl   $0x0,-0x34(%ebp)
08667eb1 +0x26b5:  mov    0x8(%ebp),%eax
08667eb4 +0x26b8:  mov    %eax,(%esp)
08667eb7 +0x26bb:  call   0822f33c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x49e6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x49e6
08667ebc +0x26c0:  cmp    $0xffffffff,%eax
08667ebf +0x26c3:  je     08667ed0 <+0x26d4>
08667ec1 +0x26c5:  mov    0x8(%ebp),%eax
08667ec4 +0x26c8:  mov    %eax,(%esp)
08667ec7 +0x26cb:  call   0822f33c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x49e6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x49e6
08667ecc +0x26d0:  test   %eax,%eax
08667ece +0x26d2:  jne    08667ed7 <+0x26db>
08667ed0 +0x26d4:  mov    $0x1,%eax
08667ed5 +0x26d9:  jmp    08667edc <+0x26e0>
08667ed7 +0x26db:  mov    $0x0,%eax
08667edc +0x26e0:  test   %al,%al
08667ede +0x26e2:  je     08667ee9 <+0x26ed>
08667ee0 +0x26e4:  movl   $0x1,-0x34(%ebp)
08667ee7 +0x26eb:  jmp    08667ef0 <+0x26f4>
08667ee9 +0x26ed:  movl   $0x2,-0x34(%ebp)
08667ef0 +0x26f4:  movl   $0x0,0xc(%esp)
08667ef8 +0x26fc:  mov    -0x34(%ebp),%eax
08667efb +0x26ff:  mov    %eax,0x8(%esp)
08667eff +0x2703:  mov    0x8(%ebp),%eax
08667f02 +0x2706:  mov    %eax,0x4(%esp)
08667f06 +0x270a:  lea    -0x1e4(%ebp),%eax
08667f0c +0x2710:  mov    %eax,(%esp)
08667f0f +0x2713:  call   08609e90 <_ZN8WongWork13CSkillChanger15SkillInitializeEP5CUserib>  ; WongWork::CSkillChanger::SkillInitialize(CUser*, int, bool)
08667f14 +0x2718:  mov    0x8(%ebp),%eax
08667f17 +0x271b:  mov    %eax,(%esp)
08667f1a +0x271e:  call   0866c46a <_ZN5CUser15send_skill_infoEv>  ; CUser::send_skill_info()
08667f1f +0x2723:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
08667f24 +0x2728:  mov    %eax,(%esp)
08667f27 +0x272b:  call   08298e88 <_ZN12CGameManager22GetPremiumLetheManagerEv>  ; CGameManager::GetPremiumLetheManager()
08667f2c +0x2730:  mov    %eax,-0x30(%ebp)
08667f2f +0x2733:  movl   $0x21,0x4(%esp)
08667f37 +0x273b:  mov    0x8(%ebp),%eax
08667f3a +0x273e:  mov    %eax,(%esp)
08667f3d +0x2741:  call   080e600e <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x144>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x144
08667f42 +0x2746:  test   %al,%al
08667f44 +0x2748:  je     08667f96 <+0x279a>
08667f46 +0x274a:  cmpl   $0x0,-0x30(%ebp)
08667f4a +0x274e:  je     08667f6a <+0x276e>
08667f4c +0x2750:  movl   $0x21,0x4(%esp)
08667f54 +0x2758:  mov    0x8(%ebp),%eax
08667f57 +0x275b:  mov    %eax,(%esp)
08667f5a +0x275e:  call   080e600e <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x144>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x144
08667f5f +0x2763:  test   %al,%al
08667f61 +0x2765:  je     08667f6a <+0x276e>
08667f63 +0x2767:  mov    $0x1,%eax
08667f68 +0x276c:  jmp    08667f6f <+0x2773>
08667f6a +0x276e:  mov    $0x0,%eax
08667f6f +0x2773:  test   %al,%al
08667f71 +0x2775:  je     08667fd7 <+0x27db>
08667f73 +0x2777:  mov    0x8(%ebp),%eax
08667f76 +0x277a:  mov    %eax,(%esp)
08667f79 +0x277d:  call   0822f33c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x49e6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x49e6
08667f7e +0x2782:  mov    %eax,0x8(%esp)
08667f82 +0x2786:  mov    0x8(%ebp),%eax
08667f85 +0x2789:  mov    %eax,0x4(%esp)
08667f89 +0x278d:  mov    -0x30(%ebp),%eax
08667f8c +0x2790:  mov    %eax,(%esp)
08667f8f +0x2793:  call   085c4008 <_ZN20CPremiumLetheManager14InitLetheSkillEP5CUser20ENUM_SKILL_TREE_KIND>  ; CPremiumLetheManager::InitLetheSkill(CUser*, ENUM_SKILL_TREE_KIND)
08667f94 +0x2798:  jmp    08667fd7 <+0x27db>
08667f96 +0x279a:  cmpl   $0x0,-0x30(%ebp)
08667f9a +0x279e:  je     08667fd7 <+0x27db>
08667f9c +0x27a0:  mov    0x8(%ebp),%eax
08667f9f +0x27a3:  mov    %eax,(%esp)
08667fa2 +0x27a6:  call   0822f33c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x49e6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x49e6
08667fa7 +0x27ab:  mov    %eax,0x8(%esp)
08667fab +0x27af:  mov    0x8(%ebp),%eax
08667fae +0x27b2:  mov    %eax,0x4(%esp)
08667fb2 +0x27b6:  mov    -0x30(%ebp),%eax
08667fb5 +0x27b9:  mov    %eax,(%esp)
08667fb8 +0x27bc:  call   085c3f30 <_ZN20CPremiumLetheManager21UpdateBackupSkillFlagEP5CUser20ENUM_SKILL_TREE_KIND>  ; CPremiumLetheManager::UpdateBackupSkillFlag(CUser*, ENUM_SKILL_TREE_KIND)
08667fbd +0x27c1:  jmp    08667fd7 <+0x27db>
08667fbf +0x27c3:  mov    %edx,%ebx
08667fc1 +0x27c5:  mov    %eax,%esi
08667fc3 +0x27c7:  lea    -0x1e4(%ebp),%eax
08667fc9 +0x27cd:  mov    %eax,(%esp)
08667fcc +0x27d0:  call   08234fc4 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xa66e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xa66e
08667fd1 +0x27d5:  mov    %esi,%eax
08667fd3 +0x27d7:  mov    %ebx,%edx
08667fd5 +0x27d9:  jmp    08667fec <+0x27f0>
08667fd7 +0x27db:  lea    -0x1e4(%ebp),%eax
08667fdd +0x27e1:  mov    %eax,(%esp)
08667fe0 +0x27e4:  call   08234fc4 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xa66e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xa66e
08667fe5 +0x27e9:  mov    $0x1,%ebx
08667fea +0x27ee:  jmp    08668007 <+0x280b>
08667fec +0x27f0:  mov    %edx,%ebx
08667fee +0x27f2:  mov    %eax,%esi
08667ff0 +0x27f4:  lea    -0x108(%ebp),%eax
08667ff6 +0x27fa:  mov    %eax,(%esp)
08667ff9 +0x27fd:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
08667ffe +0x2802:  mov    %esi,%eax
08668000 +0x2804:  mov    %ebx,%edx
08668002 +0x2806:  jmp    086686b6 <+0x2eba>
08668007 +0x280b:  lea    -0x108(%ebp),%eax
0866800d +0x2811:  mov    %eax,(%esp)
08668010 +0x2814:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
08668015 +0x2819:  test   %ebx,%ebx
08668017 +0x281b:  je     086686d4 <+0x2ed8>
0866801d +0x2821:  jmp    08668435 <+0x2c39>
08668022 +0x2826:  mov    0x8(%ebp),%eax
08668025 +0x2829:  mov    %eax,(%esp)
08668028 +0x282c:  call   0822f46c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4b16>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4b16
0866802d +0x2831:  test   %eax,%eax
0866802f +0x2833:  setne  %al
08668032 +0x2836:  test   %al,%al
08668034 +0x2838:  je     0866842b <+0x2c2f>
0866803a +0x283e:  mov    -0xd8(%ebp),%edx
08668040 +0x2844:  mov    0x8(%ebp),%eax
08668043 +0x2847:  mov    %edx,0x4(%esp)
08668047 +0x284b:  mov    %eax,(%esp)
0866804a +0x284e:  call   08645c76 <_ZN15CUserCharacInfo13add_guild_expEi>  ; CUserCharacInfo::add_guild_exp(int)
0866804f +0x2853:  jmp    08668435 <+0x2c39>
08668054 +0x2858:  mov    -0xd8(%ebp),%eax
0866805a +0x285e:  movzbl %al,%edx
0866805d +0x2861:  mov    0x8(%ebp),%eax
08668060 +0x2864:  mov    %edx,0x4(%esp)
08668064 +0x2868:  mov    %eax,(%esp)
08668067 +0x286b:  call   082f0914 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x698>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x698
0866806c +0x2870:  jmp    08668435 <+0x2c39>
08668071 +0x2875:  mov    0x8(%ebp),%eax
08668074 +0x2878:  mov    %eax,(%esp)
08668077 +0x287b:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0866807c +0x2880:  mov    %eax,(%esp)
0866807f +0x2883:  call   08110c7a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x18c>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x18c
08668084 +0x2888:  mov    -0xd8(%ebp),%edx
0866808a +0x288e:  lea    (%eax,%edx,1),%ebx
0866808d +0x2891:  mov    0x8(%ebp),%eax
08668090 +0x2894:  mov    %eax,(%esp)
08668093 +0x2897:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
08668098 +0x289c:  mov    %ebx,0x4(%esp)
0866809c +0x28a0:  mov    %eax,(%esp)
0866809f +0x28a3:  call   08110c86 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x198>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x198
086680a4 +0x28a8:  mov    -0xd8(%ebp),%ebx
086680aa +0x28ae:  mov    0x8(%ebp),%eax
086680ad +0x28b1:  mov    %eax,(%esp)
086680b0 +0x28b4:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
086680b5 +0x28b9:  mov    %eax,(%esp)
086680b8 +0x28bc:  call   08110c7a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x18c>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x18c
086680bd +0x28c1:  mov    0x8(%ebp),%edx
086680c0 +0x28c4:  add    $0x79700,%edx
086680c6 +0x28ca:  movl   $0x2,0xc(%esp)
086680ce +0x28d2:  mov    %ebx,0x8(%esp)
086680d2 +0x28d6:  mov    %eax,0x4(%esp)
086680d6 +0x28da:  mov    %edx,(%esp)
086680d9 +0x28dd:  call   08683c58 <_ZN15cUserHistoryLog12EventCoinAddEii14eCoinAddReason>  ; cUserHistoryLog::EventCoinAdd(int, int, eCoinAddReason)
086680de +0x28e2:  movl   $0x1,0xc(%esp)
086680e6 +0x28ea:  movl   $0x0,0x8(%esp)
086680ee +0x28f2:  movl   $0x1,0x4(%esp)
086680f6 +0x28fa:  mov    0x8(%ebp),%eax
086680f9 +0x28fd:  mov    %eax,(%esp)
086680fc +0x2900:  call   0867c65a <_ZN5CUser18SendUpdateItemListENS_11eSendTargetE14ENUM_ITEMSPACEi>  ; CUser::SendUpdateItemList(CUser::eSendTarget, ENUM_ITEMSPACE, int)
08668101 +0x2905:  jmp    08668435 <+0x2c39>
08668106 +0x290a:  mov    0x8(%ebp),%eax
08668109 +0x290d:  mov    %eax,(%esp)
0866810c +0x2910:  call   0822f2ae <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4958>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4958
08668111 +0x2915:  movzwl %ax,%edx
08668114 +0x2918:  mov    -0xd8(%ebp),%eax
0866811a +0x291e:  mov    %edx,%ecx
0866811c +0x2920:  sub    %eax,%ecx
0866811e +0x2922:  mov    %ecx,%eax
08668120 +0x2924:  mov    %eax,-0xc4(%ebp)
08668126 +0x292a:  movl   $0x0,-0xc0(%ebp)
08668130 +0x2934:  lea    -0xc4(%ebp),%eax
08668136 +0x293a:  mov    %eax,0x4(%esp)
0866813a +0x293e:  lea    -0xc0(%ebp),%eax
08668140 +0x2944:  mov    %eax,(%esp)
08668143 +0x2947:  call   0808e218 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x88>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x88
08668148 +0x294c:  mov    (%eax),%edx
0866814a +0x294e:  mov    0x8(%ebp),%eax
0866814d +0x2951:  mov    %edx,0x4(%esp)
08668151 +0x2955:  mov    %eax,(%esp)
08668154 +0x2958:  call   0822f2ce <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4978>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4978
08668159 +0x295d:  mov    0x8(%ebp),%eax
0866815c +0x2960:  mov    %eax,(%esp)
0866815f +0x2963:  call   08656540 <_ZN5CUser11SendFatigueEv>  ; CUser::SendFatigue()
08668164 +0x2968:  jmp    08668435 <+0x2c39>
08668169 +0x296d:  mov    -0xd8(%ebp),%eax
0866816f +0x2973:  mov    %eax,0x4(%esp)
08668173 +0x2977:  mov    0x8(%ebp),%eax
08668176 +0x297a:  mov    %eax,(%esp)
08668179 +0x297d:  call   08657ada <_ZN5CUser14RecoverFatigueEi>  ; CUser::RecoverFatigue(int)
0866817e +0x2982:  mov    0x8(%ebp),%eax
08668181 +0x2985:  mov    %eax,(%esp)
08668184 +0x2988:  call   08656540 <_ZN5CUser11SendFatigueEv>  ; CUser::SendFatigue()
08668189 +0x298d:  jmp    08668435 <+0x2c39>
0866818e +0x2992:  mov    -0xd8(%ebp),%eax
08668194 +0x2998:  movswl %ax,%edx
08668197 +0x299b:  mov    0x8(%ebp),%eax
0866819a +0x299e:  mov    %edx,0x4(%esp)
0866819e +0x29a2:  mov    %eax,(%esp)
086681a1 +0x29a5:  call   08687efc <_ZN15CUserCharacInfo21IncreasePowerWarPointEs>  ; CUserCharacInfo::IncreasePowerWarPoint(short)
086681a6 +0x29aa:  jmp    08668435 <+0x2c39>
086681ab +0x29af:  mov    0x8(%ebp),%eax
086681ae +0x29b2:  mov    %eax,(%esp)
086681b1 +0x29b5:  call   0822f46c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4b16>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4b16
086681b6 +0x29ba:  test   %eax,%eax
086681b8 +0x29bc:  setne  %al
086681bb +0x29bf:  test   %al,%al
086681bd +0x29c1:  je     0866842e <+0x2c32>
086681c3 +0x29c7:  mov    -0xd8(%ebp),%eax
086681c9 +0x29cd:  mov    %eax,%edi
086681cb +0x29cf:  movl   $0xffffffff,0x4(%esp)
086681d3 +0x29d7:  mov    0x8(%ebp),%eax
086681d6 +0x29da:  mov    %eax,(%esp)
086681d9 +0x29dd:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
086681de +0x29e2:  mov    %eax,%esi
086681e0 +0x29e4:  mov    0x8(%ebp),%eax
086681e3 +0x29e7:  mov    %eax,(%esp)
086681e6 +0x29ea:  call   0822f46c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4b16>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4b16
086681eb +0x29ef:  mov    %eax,%ebx
086681ed +0x29f1:  mov    0x8(%ebp),%eax
086681f0 +0x29f4:  mov    %eax,(%esp)
086681f3 +0x29f7:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
086681f8 +0x29fc:  mov    &_ZN10GlobalData17s_guild_proxy_mgrE,%edx
086681fe +0x2a02:  mov    %eax,0x4(%esp)
08668202 +0x2a06:  mov    %edx,(%esp)
08668205 +0x2a09:  call   0811d3b8 <_GLOBAL__I__ZN14CGuildWarEventC2Ev+0x1c>  ; global constructors keyed to CGuildWarEvent::CGuildWarEvent()+0x1c
0866820a +0x2a0e:  movl   $0x1,0x10(%esp)
08668212 +0x2a16:  mov    %edi,0xc(%esp)
08668216 +0x2a1a:  mov    %esi,0x8(%esp)
0866821a +0x2a1e:  mov    %ebx,0x4(%esp)
0866821e +0x2a22:  mov    %eax,(%esp)
08668221 +0x2a25:  call   0846ece2 <_ZN17CGuildServerProxy20SendIncreaseGuildExpEjjjc>  ; CGuildServerProxy::SendIncreaseGuildExp(unsigned int, unsigned int, unsigned int, char)
08668226 +0x2a2a:  jmp    08668435 <+0x2c39>
0866822b +0x2a2f:  mov    0x8(%ebp),%eax
0866822e +0x2a32:  mov    %eax,(%esp)
08668231 +0x2a35:  call   08664766 <_ZN5CUser18adjust_charac_statEv>  ; CUser::adjust_charac_stat()
08668236 +0x2a3a:  mov    0x8(%ebp),%eax
08668239 +0x2a3d:  mov    0x8cfc4(%eax),%eax
0866823f +0x2a43:  cmp    $0x3,%eax
08668242 +0x2a46:  jne    08668431 <+0x2c35>
08668248 +0x2a4c:  lea    -0xd0(%ebp),%eax
0866824e +0x2a52:  mov    %eax,(%esp)
08668251 +0x2a55:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
08668256 +0x2a5a:  movl   $0x2,0x8(%esp)
0866825e +0x2a62:  movl   $0x0,0x4(%esp)
08668266 +0x2a6a:  lea    -0xd0(%ebp),%eax
0866826c +0x2a70:  mov    %eax,(%esp)
0866826f +0x2a73:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
08668274 +0x2a78:  movl   $0x1,0x4(%esp)
0866827c +0x2a80:  lea    -0xd0(%ebp),%eax
08668282 +0x2a86:  mov    %eax,(%esp)
08668285 +0x2a89:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0866828a +0x2a8e:  movl   $0x1,0x4(%esp)
08668292 +0x2a96:  lea    -0xd0(%ebp),%eax
08668298 +0x2a9c:  mov    %eax,(%esp)
0866829b +0x2a9f:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
086682a0 +0x2aa4:  lea    -0xd0(%ebp),%eax
086682a6 +0x2aaa:  movl   $0x1,0x8(%esp)
086682ae +0x2ab2:  mov    %eax,0x4(%esp)
086682b2 +0x2ab6:  mov    0x8(%ebp),%eax
086682b5 +0x2ab9:  mov    %eax,(%esp)
086682b8 +0x2abc:  call   0865a44e <_ZN5CUser15make_basic_infoEPcc>  ; CUser::make_basic_info(char*, char)
086682bd +0x2ac1:  movl   $0x1,0x4(%esp)
086682c5 +0x2ac9:  lea    -0xd0(%ebp),%eax
086682cb +0x2acf:  mov    %eax,(%esp)
086682ce +0x2ad2:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
086682d3 +0x2ad7:  lea    -0xd0(%ebp),%eax
086682d9 +0x2add:  mov    %eax,0x4(%esp)
086682dd +0x2ae1:  mov    0x8(%ebp),%eax
086682e0 +0x2ae4:  mov    %eax,(%esp)
086682e3 +0x2ae7:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
086682e8 +0x2aec:  jmp    08668435 <+0x2c39>
086682ed +0x2af1:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
086682f2 +0x2af6:  mov    %eax,(%esp)
086682f5 +0x2af9:  call   08298e88 <_ZN12CGameManager22GetPremiumLetheManagerEv>  ; CGameManager::GetPremiumLetheManager()
086682fa +0x2afe:  mov    %eax,-0x24(%ebp)
086682fd +0x2b01:  mov    0x8(%ebp),%eax
08668300 +0x2b04:  mov    %eax,(%esp)
08668303 +0x2b07:  call   0822f33c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x49e6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x49e6
08668308 +0x2b0c:  mov    %eax,%edi
0866830a +0x2b0e:  mov    0x8(%ebp),%eax
0866830d +0x2b11:  mov    %eax,(%esp)
08668310 +0x2b14:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
08668315 +0x2b19:  mov    %eax,%esi
08668317 +0x2b1b:  mov    0x8(%ebp),%eax
0866831a +0x2b1e:  mov    %eax,(%esp)
0866831d +0x2b21:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
08668322 +0x2b26:  mov    %eax,%ebx
08668324 +0x2b28:  movl   $0x0,0xc(%esp)
0866832c +0x2b30:  movl   $0x4c0a,0x8(%esp)
08668334 +0x2b38:  movl   $&_ZZN5CUser15increase_statusEsE19__PRETTY_FUNCTION__,0x4(%esp)
0866833c +0x2b40:  lea    -0xbc(%ebp),%eax
08668342 +0x2b46:  mov    %eax,(%esp)
08668345 +0x2b49:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0866834a +0x2b4e:  mov    %edi,0x10(%esp)
0866834e +0x2b52:  mov    %esi,0xc(%esp)
08668352 +0x2b56:  mov    %ebx,0x8(%esp)
08668356 +0x2b5a:  movl   $"ONE_DAY_LETHE : BUY_SKILL_CONFIRM_TICKET, char(%s), char_no(%d), style(%d)",0x4(%esp)
0866835e +0x2b62:  lea    -0xbc(%ebp),%eax
08668364 +0x2b68:  mov    %eax,(%esp)
08668367 +0x2b6b:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0866836c +0x2b70:  cmpl   $0x0,-0x24(%ebp)
08668370 +0x2b74:  je     08668434 <+0x2c38>
08668376 +0x2b7a:  mov    0x8(%ebp),%eax
08668379 +0x2b7d:  mov    %eax,0x4(%esp)
0866837d +0x2b81:  mov    -0x24(%ebp),%eax
08668380 +0x2b84:  mov    %eax,(%esp)
08668383 +0x2b87:  call   085c3d70 <_ZN20CPremiumLetheManager15ConfirmSkillReqEP5CUser>  ; CPremiumLetheManager::ConfirmSkillReq(CUser*)
08668388 +0x2b8c:  jmp    08668435 <+0x2c39>
0866838d +0x2b91:  mov    0x8(%ebp),%eax
08668390 +0x2b94:  mov    %eax,(%esp)
08668393 +0x2b97:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
08668398 +0x2b9c:  mov    %eax,(%esp)
0866839b +0x2b9f:  call   0822d68a <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2d34>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2d34
086683a0 +0x2ba4:  mov    -0xd8(%ebp),%edx
086683a6 +0x2baa:  lea    (%eax,%edx,1),%ebx
086683a9 +0x2bad:  mov    0x8(%ebp),%eax
086683ac +0x2bb0:  mov    %eax,(%esp)
086683af +0x2bb3:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
086683b4 +0x2bb8:  mov    %ebx,0x4(%esp)
086683b8 +0x2bbc:  mov    %eax,(%esp)
086683bb +0x2bbf:  call   0822d67c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2d26>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2d26
086683c0 +0x2bc4:  mov    -0xd8(%ebp),%ebx
086683c6 +0x2bca:  mov    0x8(%ebp),%eax
086683c9 +0x2bcd:  mov    %eax,(%esp)
086683cc +0x2bd0:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
086683d1 +0x2bd5:  mov    %eax,(%esp)
086683d4 +0x2bd8:  call   0822d68a <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2d34>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2d34
086683d9 +0x2bdd:  mov    0x8(%ebp),%edx
086683dc +0x2be0:  add    $0x79700,%edx
086683e2 +0x2be6:  movl   $0x3,0xc(%esp)
086683ea +0x2bee:  mov    %ebx,0x8(%esp)
086683ee +0x2bf2:  mov    %eax,0x4(%esp)
086683f2 +0x2bf6:  mov    %edx,(%esp)
086683f5 +0x2bf9:  call   08683b90 <_ZN15cUserHistoryLog7CoinAddEii14eCoinAddReason>  ; cUserHistoryLog::CoinAdd(int, int, eCoinAddReason)
086683fa +0x2bfe:  movl   $0x1,0xc(%esp)
08668402 +0x2c06:  movl   $0x0,0x8(%esp)
0866840a +0x2c0e:  movl   $0x1,0x4(%esp)
08668412 +0x2c16:  mov    0x8(%ebp),%eax
08668415 +0x2c19:  mov    %eax,(%esp)
08668418 +0x2c1c:  call   0867c65a <_ZN5CUser18SendUpdateItemListENS_11eSendTargetE14ENUM_ITEMSPACEi>  ; CUser::SendUpdateItemList(CUser::eSendTarget, ENUM_ITEMSPACE, int)
0866841d +0x2c21:  jmp    08668435 <+0x2c39>
0866841f +0x2c23:  nop
08668420 +0x2c24:  jmp    08668435 <+0x2c39>
08668422 +0x2c26:  nop
08668423 +0x2c27:  jmp    08668435 <+0x2c39>
08668425 +0x2c29:  nop
08668426 +0x2c2a:  jmp    08668435 <+0x2c39>
08668428 +0x2c2c:  nop
08668429 +0x2c2d:  jmp    08668435 <+0x2c39>
0866842b +0x2c2f:  nop
0866842c +0x2c30:  jmp    08668435 <+0x2c39>
0866842e +0x2c32:  nop
0866842f +0x2c33:  jmp    08668435 <+0x2c39>
08668431 +0x2c35:  nop
08668432 +0x2c36:  jmp    08668435 <+0x2c39>
08668434 +0x2c38:  nop
08668435 +0x2c39:  lea    -0xd0(%ebp),%eax
0866843b +0x2c3f:  mov    %eax,(%esp)
0866843e +0x2c42:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
08668443 +0x2c47:  movl   $0x20,0x8(%esp)
0866844b +0x2c4f:  movl   $0x1,0x4(%esp)
08668453 +0x2c57:  lea    -0xd0(%ebp),%eax
08668459 +0x2c5d:  mov    %eax,(%esp)
0866845c +0x2c60:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
08668461 +0x2c65:  movl   $0x1,0x4(%esp)
08668469 +0x2c6d:  lea    -0xd0(%ebp),%eax
0866846f +0x2c73:  mov    %eax,(%esp)
08668472 +0x2c76:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08668477 +0x2c7b:  movswl -0x1ec(%ebp),%eax
0866847e +0x2c82:  mov    %eax,0x4(%esp)
08668482 +0x2c86:  lea    -0xd0(%ebp),%eax
08668488 +0x2c8c:  mov    %eax,(%esp)
0866848b +0x2c8f:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
08668490 +0x2c94:  movzbl -0xd1(%ebp),%eax
08668497 +0x2c9b:  movsbl %al,%eax
0866849a +0x2c9e:  mov    %eax,0x4(%esp)
0866849e +0x2ca2:  lea    -0xd0(%ebp),%eax
086684a4 +0x2ca8:  mov    %eax,(%esp)
086684a7 +0x2cab:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086684ac +0x2cb0:  mov    -0xd8(%ebp),%eax
086684b2 +0x2cb6:  mov    %eax,0x4(%esp)
086684b6 +0x2cba:  lea    -0xd0(%ebp),%eax
086684bc +0x2cc0:  mov    %eax,(%esp)
086684bf +0x2cc3:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
086684c4 +0x2cc8:  movl   $0x0,0x4(%esp)
086684cc +0x2cd0:  lea    -0xd0(%ebp),%eax
086684d2 +0x2cd6:  mov    %eax,(%esp)
086684d5 +0x2cd9:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
086684da +0x2cde:  movl   $0x0,0x4(%esp)
086684e2 +0x2ce6:  lea    -0xd0(%ebp),%eax
086684e8 +0x2cec:  mov    %eax,(%esp)
086684eb +0x2cef:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
086684f0 +0x2cf4:  movl   $0x1,0x4(%esp)
086684f8 +0x2cfc:  lea    -0xd0(%ebp),%eax
086684fe +0x2d02:  mov    %eax,(%esp)
08668501 +0x2d05:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
08668506 +0x2d0a:  lea    -0xd0(%ebp),%eax
0866850c +0x2d10:  mov    %eax,0x4(%esp)
08668510 +0x2d14:  mov    0x8(%ebp),%eax
08668513 +0x2d17:  mov    %eax,(%esp)
08668516 +0x2d1a:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
0866851b +0x2d1f:  mov    0x8(%ebp),%eax
0866851e +0x2d22:  mov    0x8cfc4(%eax),%eax
08668524 +0x2d28:  cmp    $0x5,%eax
08668527 +0x2d2b:  jne    086685ea <+0x2dee>
0866852d +0x2d31:  mov    0x8(%ebp),%eax
08668530 +0x2d34:  mov    %eax,(%esp)
08668533 +0x2d37:  call   0865514c <_ZN5CUser8GetPartyEv>  ; CUser::GetParty()
08668538 +0x2d3c:  mov    %eax,-0x20(%ebp)
0866853b +0x2d3f:  cmpl   $0x0,-0x20(%ebp)
0866853f +0x2d43:  je     086686d4 <+0x2ed8>
08668545 +0x2d49:  lea    -0xd0(%ebp),%eax
0866854b +0x2d4f:  mov    %eax,(%esp)
0866854e +0x2d52:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
08668553 +0x2d57:  movl   $0x2,0x8(%esp)
0866855b +0x2d5f:  movl   $0x0,0x4(%esp)
08668563 +0x2d67:  lea    -0xd0(%ebp),%eax
08668569 +0x2d6d:  mov    %eax,(%esp)
0866856c +0x2d70:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
08668571 +0x2d75:  movl   $0x1,0x4(%esp)
08668579 +0x2d7d:  lea    -0xd0(%ebp),%eax
0866857f +0x2d83:  mov    %eax,(%esp)
08668582 +0x2d86:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08668587 +0x2d8b:  movl   $0x1,0x4(%esp)
0866858f +0x2d93:  lea    -0xd0(%ebp),%eax
08668595 +0x2d99:  mov    %eax,(%esp)
08668598 +0x2d9c:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0866859d +0x2da1:  lea    -0xd0(%ebp),%eax
086685a3 +0x2da7:  movl   $0x1,0x8(%esp)
086685ab +0x2daf:  mov    %eax,0x4(%esp)
086685af +0x2db3:  mov    0x8(%ebp),%eax
086685b2 +0x2db6:  mov    %eax,(%esp)
086685b5 +0x2db9:  call   0865a44e <_ZN5CUser15make_basic_infoEPcc>  ; CUser::make_basic_info(char*, char)
086685ba +0x2dbe:  movl   $0x1,0x4(%esp)
086685c2 +0x2dc6:  lea    -0xd0(%ebp),%eax
086685c8 +0x2dcc:  mov    %eax,(%esp)
086685cb +0x2dcf:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
086685d0 +0x2dd4:  lea    -0xd0(%ebp),%eax
086685d6 +0x2dda:  mov    %eax,0x4(%esp)
086685da +0x2dde:  mov    -0x20(%ebp),%eax
086685dd +0x2de1:  mov    %eax,(%esp)
086685e0 +0x2de4:  call   0859d14e <_ZN6CParty13send_to_partyER11PacketGuard>  ; CParty::send_to_party(PacketGuard&)
086685e5 +0x2de9:  jmp    086686d4 <+0x2ed8>
086685ea +0x2dee:  mov    0x8(%ebp),%eax
086685ed +0x2df1:  mov    0x8cfc4(%eax),%eax
086685f3 +0x2df7:  cmp    $0x8,%eax
086685f6 +0x2dfa:  jne    086686d4 <+0x2ed8>
086685fc +0x2e00:  mov    0x8(%ebp),%eax
086685ff +0x2e03:  mov    %eax,(%esp)
08668602 +0x2e06:  call   086551de <_ZN5CUser10GetWarRoomEv>  ; CUser::GetWarRoom()
08668607 +0x2e0b:  mov    %eax,-0x1c(%ebp)
0866860a +0x2e0e:  cmpl   $0x0,-0x1c(%ebp)
0866860e +0x2e12:  je     086686d4 <+0x2ed8>
08668614 +0x2e18:  lea    -0xd0(%ebp),%eax
0866861a +0x2e1e:  mov    %eax,(%esp)
0866861d +0x2e21:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
08668622 +0x2e26:  movl   $0x2,0x8(%esp)
0866862a +0x2e2e:  movl   $0x0,0x4(%esp)
08668632 +0x2e36:  lea    -0xd0(%ebp),%eax
08668638 +0x2e3c:  mov    %eax,(%esp)
0866863b +0x2e3f:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
08668640 +0x2e44:  movl   $0x1,0x4(%esp)
08668648 +0x2e4c:  lea    -0xd0(%ebp),%eax
0866864e +0x2e52:  mov    %eax,(%esp)
08668651 +0x2e55:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08668656 +0x2e5a:  movl   $0x1,0x4(%esp)
0866865e +0x2e62:  lea    -0xd0(%ebp),%eax
08668664 +0x2e68:  mov    %eax,(%esp)
08668667 +0x2e6b:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0866866c +0x2e70:  lea    -0xd0(%ebp),%eax
08668672 +0x2e76:  movl   $0x1,0x8(%esp)
0866867a +0x2e7e:  mov    %eax,0x4(%esp)
0866867e +0x2e82:  mov    0x8(%ebp),%eax
08668681 +0x2e85:  mov    %eax,(%esp)
08668684 +0x2e88:  call   0865a44e <_ZN5CUser15make_basic_infoEPcc>  ; CUser::make_basic_info(char*, char)
08668689 +0x2e8d:  movl   $0x1,0x4(%esp)
08668691 +0x2e95:  lea    -0xd0(%ebp),%eax
08668697 +0x2e9b:  mov    %eax,(%esp)
0866869a +0x2e9e:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0866869f +0x2ea3:  lea    -0xd0(%ebp),%eax
086686a5 +0x2ea9:  mov    %eax,0x4(%esp)
086686a9 +0x2ead:  mov    -0x1c(%ebp),%eax
086686ac +0x2eb0:  mov    %eax,(%esp)
086686af +0x2eb3:  call   086be0cc <_ZN7WarRoom10SendToRoomER11PacketGuard>  ; WarRoom::SendToRoom(PacketGuard&)
086686b4 +0x2eb8:  jmp    086686d4 <+0x2ed8>
086686b6 +0x2eba:  mov    %edx,%ebx
086686b8 +0x2ebc:  mov    %eax,%esi
086686ba +0x2ebe:  lea    -0xd0(%ebp),%eax
086686c0 +0x2ec4:  mov    %eax,(%esp)
086686c3 +0x2ec7:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
086686c8 +0x2ecc:  mov    %esi,%eax
086686ca +0x2ece:  mov    %ebx,%edx
086686cc +0x2ed0:  mov    %eax,(%esp)
086686cf +0x2ed3:  call   08ae3750 <_Unwind_Resume>
086686d4 +0x2ed8:  lea    -0xd0(%ebp),%eax
086686da +0x2ede:  mov    %eax,(%esp)
086686dd +0x2ee1:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
086686e2 +0x2ee6:  lea    -0xc(%ebp),%esp
086686e5 +0x2ee9:  add    $0x0,%esp
086686e8 +0x2eec:  pop    %ebx
086686e9 +0x2eed:  pop    %esi
086686ea +0x2eee:  pop    %edi
086686eb +0x2eef:  pop    %ebp
086686ec +0x2ef0:  ret
```

## 反编译 C

```c
// CUser::increase_status @ 0x86657fc

/* CUser::increase_status(short) */

void __thiscall CUser::increase_status(CUser *this,short param_1)

{
  CUser CVar1;
  bool bVar2;
  char cVar3;
  char cVar4;
  short sVar5;
  int iVar6;
  CDataManager *pCVar7;
  uint uVar8;
  GameWorld *pGVar9;
  CInventory *pCVar10;
  int iVar11;
  SkillSlot *pSVar12;
  undefined4 uVar13;
  undefined4 *puVar14;
  undefined4 uVar15;
  CGameManager *pCVar16;
  int *piVar17;
  uint uVar18;
  uint uVar19;
  CGuildServerProxy *this_00;
  int iVar20;
  undefined4 uVar21;
  CSkillChanger local_1e8 [151];
  undefined1 local_151 [2];
  uint local_14f;
  undefined4 local_114;
  undefined4 local_110;
  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> local_10c [12];
  undefined4 local_100;
  undefined4 local_fc;
  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> local_f8 [12];
  int local_ec;
  int local_e8;
  int local_e4;
  undefined4 local_e0;
  uint local_dc;
  char local_d5;
  PacketGuard local_d4 [12];
  int local_c8;
  int local_c4;
  cMyTrace local_c0 [16];
  CItem *local_b0;
  int *local_ac;
  uint local_a8;
  CQuestShop *local_a4;
  uint local_a0;
  uint local_9c;
  int local_98;
  CItem *local_94;
  CItem *local_90;
  undefined4 local_8c;
  CItem *local_88;
  CItem *local_84;
  int local_80;
  int local_7c;
  undefined4 local_78;
  CPremiumLetheManager *local_74;
  int local_70;
  undefined4 local_6c;
  CPremiumLetheManager *local_68;
  undefined4 local_64;
  undefined4 local_60;
  char local_59;
  int local_58;
  CPremiumLetheManager *local_54;
  uint local_50;
  uint local_4c;
  undefined4 local_48;
  undefined4 local_44;
  char local_3d;
  int local_3c;
  int local_38;
  CPremiumLetheManager *local_34;
  uint local_30;
  uint local_2c;
  CPremiumLetheManager *local_28;
  CParty *local_24;
  WarRoom *local_20;
  
  PacketGuard::PacketGuard(local_d4);
  cVar3 = CheckInTrade(this);
  if (cVar3 != '\0') {
                    /* try { // try from 0866584f to 086671ba has its CatchHandler @ 086686b6 */
    SendCmdErrorPacket(this,0x20,0x13,local_d4);
    goto LAB_086686d4;
  }
  iVar20 = (int)param_1;
  iVar6 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)this);
  uVar21 = 1;
  CInventory::GetInvenSlot((int)local_151,iVar6);
  uVar8 = local_14f;
  local_d5 = -1;
  local_dc = 0;
  if (local_14f == 0x4b5) {
    local_d5 = '\x11';
    local_dc = 5;
  }
  else if (local_14f < 0x4b6) {
    if (local_14f == 0x40c) {
      local_d5 = '\x01';
      local_dc = 10000;
    }
    else {
      if (local_14f < 0x40d) {
        if (local_14f == 0xc9) goto LAB_08665e38;
        if (0xc9 < local_14f) {
          if (local_14f != 0x3c3) {
            if (0x3c3 < local_14f) {
              if (local_14f == 0x40a) {
                local_d5 = '\x01';
                local_dc = 100;
              }
              else if (local_14f < 0x40b) {
                if (local_14f != 0x407) goto LAB_08666751;
                local_d5 = '\0';
                local_dc = 5;
              }
              else {
                local_d5 = '\x01';
                local_dc = 1000;
              }
              goto LAB_08666990;
            }
            if ((local_14f != 0x394) && (local_14f != 0x3c0)) goto LAB_08666751;
          }
          goto LAB_0866607b;
        }
        if (local_14f == 0x2a) {
LAB_086665ed:
          local_d5 = '\x15';
          local_dc = 1;
          goto LAB_08666990;
        }
        if (local_14f < 0x2b) {
          if ((local_14f == 3) || (local_14f == 0x1c)) {
LAB_0866607b:
            local_a8 = CSecu_ProtectionField::Check
                                 (GlobalData::s_pSecuProtectionField,this,0x2c,iVar20);
            if (local_a8 != 0) {
              SendCmdErrorPacket(this,0x20,local_a8 & 0xff,local_d4);
              goto LAB_086686d4;
            }
            pGVar9 = (GameWorld *)G_GameWorld();
            cVar3 = GameWorld::IsPvPSkilTreeChannel(pGVar9);
            if (cVar3 != '\0') {
              SendCmdErrorPacket(this,0x20,0x17,local_d4);
              goto LAB_086686d4;
            }
            cVar3 = CheckItemLock(this,1,(int)param_1);
            if (cVar3 != '\0') {
              SendCmdErrorPacket(this,0x20,0xd5,local_d4);
              goto LAB_086686d4;
            }
            cVar3 = WongWork::CSkillChanger::CheckCondition(this);
            if (cVar3 != '\x01') {
              iVar6 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)this);
              pCVar7 = (CDataManager *)G_CDataManager();
              iVar6 = CDataManager::get_level_exp(pCVar7,iVar6);
              CUserCharacInfo::setCurCharacExp((CUserCharacInfo *)this,iVar6);
            }
            if ((local_14f == 0x4b6) || (local_14f == 0x4e5)) {
              iVar6 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)this);
              if (iVar6 < 0x32) goto LAB_086686d4;
              cVar3 = isAffectedPremium(this,0x21);
              if (cVar3 != '\0') {
                SendCmdErrorPacket(this,0x20,0xd8,local_d4);
                goto LAB_086686d4;
              }
              local_dc = 1;
              local_d5 = '\x12';
            }
            else if (local_14f == 0x394) {
              local_dc = 1;
              local_d5 = '\n';
            }
            else if (local_14f == 0x3c0) {
              local_dc = 1;
              local_d5 = '\x18';
              local_a4 = (CQuestShop *)GetCharacExpandData(this,0xb);
              if (local_a4 != (CQuestShop *)0x0) {
                CQuestShop::clearQP(local_a4,this);
                CQuestShop::sendCharacQp(local_a4,this,'\0');
              }
            }
            else if (local_14f == 0x3c3) {
              local_dc = 1;
              local_d5 = '\n';
            }
            else if (local_14f == 0x28982c) {
              local_dc = 1;
              local_d5 = '\n';
            }
            else {
              local_dc = 0;
              local_d5 = '\n';
            }
            goto LAB_08666990;
          }
        }
        else if ((local_14f == 0x6d) || ((0x6c < local_14f && (local_14f - 0xa1 < 2))))
        goto LAB_0866607b;
        goto LAB_08666751;
      }
      if (local_14f == 0x413) {
        local_d5 = '\x02';
        local_dc = 0xfa;
      }
      else if (local_14f < 0x414) {
        if (local_14f == 0x40f) {
          local_d5 = '\x04';
          local_dc = 0x32;
        }
        else if (local_14f < 0x410) {
          if (local_14f == 0x40d) {
            local_d5 = '\x01';
            local_dc = 100000;
          }
          else {
            if (local_14f != 0x40e) goto LAB_08666751;
            local_d5 = '\0';
            local_dc = 0x14;
          }
        }
        else if (local_14f == 0x411) {
          local_d5 = '\x05';
          local_dc = 0x32;
        }
        else if (local_14f < 0x412) {
          local_d5 = '\x06';
          local_dc = 0x32;
        }
        else {
          local_d5 = '\a';
          local_dc = 0x32;
        }
      }
      else if (local_14f == 0x416) {
        local_d5 = '\t';
        local_dc = 10;
      }
      else {
        if (0x416 < local_14f) {
          if (0x4af < local_14f) {
            if (local_14f < 0x4b3) goto LAB_0866662f;
            if (local_14f == 0x4b4) {
              local_d5 = '\x11';
              local_dc = 1;
              goto LAB_08666990;
            }
          }
          goto LAB_08666751;
        }
        if (local_14f == 0x414) {
          local_d5 = '\x03';
          local_dc = 0xfa;
        }
        else {
          if (local_14f != 0x415) goto LAB_08666751;
          local_d5 = '\b';
          local_dc = 10;
        }
      }
    }
  }
  else if (local_14f < 0x204d) {
    if (local_14f < 0x204b) {
      if (local_14f == 0x1bbd) {
        iVar6 = get_state(this);
        if (iVar6 != 3) {
          SendCmdErrorPacket(this,0x20,0x13,local_d4);
          goto LAB_086686d4;
        }
        local_d5 = '\r';
        local_dc = 8;
      }
      else if (local_14f < 0x1bbe) {
        if (local_14f == 0x4d0) {
          local_d5 = '\x01';
          local_dc = 10000000;
        }
        else if (local_14f < 0x4d1) {
          if (local_14f == 0x4b6) goto LAB_0866607b;
          if (local_14f != 0x4cf) goto LAB_08666751;
          local_d5 = '\x01';
          local_dc = 1000000;
        }
        else {
          if (local_14f == 0x4e5) goto LAB_0866607b;
          if (local_14f == 0xc84) {
            iVar6 = CUserCharacInfo::get_charac_guildkey((CUserCharacInfo *)this);
            if (iVar6 == 0) {
              SendCmdErrorPacket(this,0x20,0x40,local_d4);
              goto LAB_086686d4;
            }
            local_d5 = '\v';
            local_dc = 10;
          }
          else {
            if (local_14f != 0x4df) goto LAB_08666751;
            local_d5 = '\x13';
            local_dc = 10;
          }
        }
      }
      else if (local_14f == 0x1c0d) {
        local_d5 = '\r';
        local_dc = 5;
      }
      else if (local_14f < 0x1c0e) {
        if (local_14f == 0x1bc1) {
          iVar6 = CUserCharacInfo::get_charac_guildkey((CUserCharacInfo *)this);
          if (iVar6 == 0) {
            SendCmdErrorPacket(this,0x20,0x40,local_d4);
            goto LAB_086686d4;
          }
          local_d5 = '\v';
          local_dc = 0x32;
        }
        else {
          if (local_14f != 0x1c0c) goto LAB_08666751;
          local_d5 = '\r';
          local_dc = 1;
        }
      }
      else if (local_14f == 0x1f16) {
        local_d5 = '\x14';
        local_dc = 0;
      }
      else {
        if (local_14f == 0x1f71) goto LAB_08665c97;
        if (local_14f != 0x1c82) goto LAB_08666751;
        iVar6 = get_state(this);
        if (iVar6 != 3) {
          SendCmdErrorPacket(this,0x20,0x13,local_d4);
          goto LAB_086686d4;
        }
        local_d5 = '\r';
        local_dc = 2;
      }
    }
    else {
LAB_08665c97:
      cVar3 = CalLevelUpItemCheck(this,local_14f);
      if ((cVar3 == '\0') ||
         (cVar3 = CalLevelUpItemState(this,&local_d5,(int *)&local_dc,0x13,0x3b), cVar3 == '\x01'))
      {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        SendCmdErrorPacket(this,0x20,0x13,local_d4);
        goto LAB_086686d4;
      }
    }
  }
  else if (local_14f == 0x28bdb8) {
LAB_08665e38:
    local_ac = (int *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0xf);
    if ((local_ac == (int *)0x0) ||
       (cVar3 = (**(code **)(*local_ac + 0x34))(local_ac,0,uVar21), cVar3 == '\0')) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      InterfacePacketBuf::clear((InterfacePacketBuf *)local_d4);
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_d4,1,0x20);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_d4,0);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_d4,0x13);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_d4,true);
      Send(this,local_d4);
      goto LAB_086686d4;
    }
    sVar5 = getCurCharacTotalFatigue(this);
    if (sVar5 == 0) {
      InterfacePacketBuf::clear((InterfacePacketBuf *)local_d4);
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_d4,1,0x20);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_d4,0);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_d4,0x43);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_d4,true);
      Send(this,local_d4);
      goto LAB_086686d4;
    }
    local_d5 = '\x0e';
    local_dc = 0;
  }
  else if (local_14f < 0x28bdb9) {
    if (local_14f == 0x28974b) {
LAB_08666320:
      pGVar9 = (GameWorld *)G_GameWorld();
      cVar3 = GameWorld::IsPvPSkilTreeChannel(pGVar9);
      if (cVar3 != '\x01') {
        SendCmdErrorPacket(this,0x20,0x17,local_d4);
        goto LAB_086686d4;
      }
      local_a0 = CSecu_ProtectionField::Check(GlobalData::s_pSecuProtectionField,this,0x2c,iVar20);
      if (local_a0 != 0) {
        SendCmdErrorPacket(this,0x20,local_a0 & 0xff,local_d4);
        goto LAB_086686d4;
      }
      cVar3 = WongWork::CSkillChanger::CheckCondition(this);
      if (cVar3 != '\x01') {
        SendCmdErrorPacket(this,0x20,1,local_d4);
        goto LAB_086686d4;
      }
      local_dc = 0;
      local_d5 = '\x16';
      if (local_14f == 0x289788) {
        local_dc = 1;
      }
    }
    else {
      if (local_14f < 0x28974c) {
        if (local_14f - 0x204e < 2) goto LAB_08665c97;
      }
      else {
        if (local_14f == 0x289788) goto LAB_08666320;
        if (local_14f == 0x28982c) goto LAB_0866607b;
        if (local_14f == 0x28974c) {
          pGVar9 = (GameWorld *)G_GameWorld();
          cVar3 = GameWorld::IsPvPSkilTreeChannel(pGVar9);
          if (cVar3 != '\x01') {
            SendCmdErrorPacket(this,0x20,0x17,local_d4);
            goto LAB_086686d4;
          }
          local_9c = CSecu_ProtectionField::Check
                               (GlobalData::s_pSecuProtectionField,this,0x2c,iVar20);
          if (local_9c != 0) {
            SendCmdErrorPacket(this,0x20,local_9c & 0xff,local_d4);
            goto LAB_086686d4;
          }
          cVar3 = isAffectedPremium(this,0x21);
          if (cVar3 != '\x01') {
            SendCmdErrorPacket(this,0x20,0xd8,local_d4);
            goto LAB_086686d4;
          }
          local_dc = 0;
          local_d5 = '\x17';
          goto LAB_08666990;
        }
      }
LAB_08666751:
      iVar6 = G_CDataManager();
      uVar18 = local_14f;
      if (uVar8 == *(uint *)(iVar6 + 0x50cc)) {
        iVar6 = G_CDataManager();
        iVar6 = *(int *)(iVar6 + 0x50cc);
        pCVar7 = (CDataManager *)G_CDataManager();
        local_94 = (CItem *)CDataManager::find_item(pCVar7,iVar6);
        if (local_94 == (CItem *)0x0) {
          SendCmdErrorPacket(this,0x20,0x11,local_d4);
          goto LAB_086686d4;
        }
        cVar3 = CItem::is_stackable(local_94);
        if (cVar3 != '\x01') {
          SendCmdErrorPacket(this,0x20,0x11,local_d4);
          goto LAB_086686d4;
        }
        local_90 = local_94;
        iVar6 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)this);
        iVar20 = CItem::getUsableLevel(local_90);
        if (iVar6 < iVar20) {
          SendCmdErrorPacket(this,0x20,0x11,local_d4);
          goto LAB_086686d4;
        }
        iVar6 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)this);
        if (0x47 < iVar6) {
          SendCmdErrorPacket(this,0x20,0x11,local_d4);
          goto LAB_086686d4;
        }
        local_d5 = '\x01';
        local_8c = 0;
        cVar3 = CItem::GetIncreaseStatusIntData(local_90,0,(int *)&local_dc);
        if (cVar3 != '\x01') {
          SendCmdErrorPacket(this,0x20,0x11,local_d4);
          goto LAB_086686d4;
        }
      }
      else {
        pCVar7 = (CDataManager *)G_CDataManager();
        local_88 = (CItem *)CDataManager::find_item(pCVar7,uVar18);
        if ((((local_88 != (CItem *)0x0) && (local_84 = local_88, local_88 != (CItem *)0x0)) &&
            (iVar6 = CItem::GetIncreaseStatusType(local_88), iVar6 != 0)) &&
           (iVar6 = CItem::GetIncreaseStatusType(local_84), iVar6 == 1)) {
          CItem::GetIncreaseStatusIntData(local_84,0,(int *)&local_dc);
          local_d5 = '\x01';
        }
      }
    }
  }
  else if (local_14f == 0x989a13) {
LAB_08665d24:
    cVar3 = CalLevelUpItemState(this,&local_d5,(int *)&local_dc,1,0x54);
    if (cVar3 != '\x01') {
      SendCmdErrorPacket(this,0x20,0x13,local_d4);
      goto LAB_086686d4;
    }
  }
  else {
    if (local_14f < 0x989a14) {
      if (local_14f == 0x28d14d) goto LAB_086665ed;
      if (local_14f == 0x28d2bc) goto LAB_08665c97;
      goto LAB_08666751;
    }
    if (local_14f == 0x2920915c) {
LAB_0866662f:
      if ((local_14f == 0x2920915c) && (cVar3 = IsGuildMaster(this), cVar3 != '\x01')) {
        SendCmdErrorPacket(this,0x20,0xdb,local_d4);
        goto LAB_086686d4;
      }
      CVar1 = this[0x8d03b];
      iVar6 = G_CDataManager();
      local_98 = GuildParameterScript::getGuildLevelUpParam
                           ((GuildParameterScript *)(iVar6 + 0xa50c),(byte)CVar1 + 1);
      if (local_98 == 0) {
        SendCmdErrorPacket(this,0x20,0xd2,local_d4);
        goto LAB_086686d4;
      }
      iVar6 = GetGuildDBInfo(this);
      if (*(uint *)(local_98 + 4) <= *(uint *)(iVar6 + 0x29)) {
        SendCmdErrorPacket(this,0x20,0xd2,local_d4);
        goto LAB_086686d4;
      }
      local_d5 = '\x10';
      iVar6 = G_CDataManager();
      local_dc = GuildParameterScript::getGuildExpBook(iVar6 + 0xa50c);
    }
    else {
      if (local_14f != 0x292091ad) {
        if (local_14f == 0x292090e1) goto LAB_08665d24;
        goto LAB_08666751;
      }
      local_d5 = '\x19';
      local_dc = 1;
    }
  }
LAB_08666990:
  if (local_d5 == -1) {
    SendCmdErrorPacket(this,0x20,0x11,local_d4);
    goto LAB_086686d4;
  }
  if (local_d5 == '\x0f') {
    iVar6 = get_state(this);
    if (iVar6 != 3) {
      SendCmdErrorPacket(this,0x20,0x13,local_d4);
      goto LAB_086686d4;
    }
    uVar8 = CUserCharacInfo::getCurCharacFatigue((CUserCharacInfo *)this);
    if ((int)(uVar8 & 0xffff) < (int)local_dc) {
      SendCmdErrorPacket(this,0x20,0x5f,local_d4);
      goto LAB_086686d4;
    }
  }
  if (((local_d5 == '\0') || (local_d5 == '\x11')) || (local_d5 == '\x01')) {
    pGVar9 = (GameWorld *)G_GameWorld();
    cVar3 = GameWorld::IsPvPSkilTreeChannel(pGVar9);
    if (cVar3 != '\0') {
      SendCmdErrorPacket(this,0x20,0x13,local_d4);
      goto LAB_086686d4;
    }
  }
  uVar8 = local_14f;
  pCVar7 = (CDataManager *)G_CDataManager();
  local_b0 = (CItem *)CDataManager::find_item(pCVar7,uVar8);
  if (local_b0 == (CItem *)0x0) goto LAB_086686d4;
  iVar6 = CItem::GetUsablePvPRank(local_b0);
  iVar20 = CUserCharacInfo::get_pvp_grade((CUserCharacInfo *)this);
  if (iVar20 < iVar6) {
    SendCmdErrorPacket(this,0x20,1,local_d4);
    goto LAB_086686d4;
  }
  iVar6 = (**(code **)(*(int *)local_b0 + 0xc))(local_b0);
  if (iVar6 != 0x15) {
    pCVar10 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)this);
    cVar3 = CInventory::delete_item(pCVar10,1,(int)param_1,1,10,1);
    if (cVar3 != '\x01') {
      SendCmdErrorPacket(this,0x20,0x11,local_d4);
      goto LAB_086686d4;
    }
  }
  uVar8 = local_dc;
  switch(local_d5) {
  case '\0':
    gain_sp(this,local_dc);
    history_log_sp(this,0xffffffff,local_dc,1);
    InterfacePacketBuf::clear((InterfacePacketBuf *)local_d4);
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_d4,1,0x20);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_d4,1);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_d4,(int)param_1);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_d4,(int)local_d5);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_d4,local_dc);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_d4,0);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_d4,0);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_d4,true);
    Send(this,local_d4);
    goto LAB_086686d4;
  case '\x01':
    local_e0 = 0;
    local_e4 = 0;
    iVar6 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)this);
    if (0x54 < iVar6) {
      local_dc = 0;
    }
    iVar6 = G_CDataManager();
    if (local_14f == *(uint *)(iVar6 + 0x50cc)) {
      rewardExp(this,local_dc,&local_e0,&local_e4,&local_e8,&local_ec,3,1);
    }
    else {
      rewardExp(this,local_dc,&local_e0,&local_e4,&local_e8,&local_ec,0,1);
    }
    InterfacePacketBuf::clear((InterfacePacketBuf *)local_d4);
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_d4,1,0x20);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_d4,1);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_d4,(int)param_1);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_d4,(int)local_d5);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_d4,local_dc);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_d4,local_ec - local_e8);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_d4,local_e4);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_d4,true);
    Send(this,local_d4);
    goto LAB_086686d4;
  case '\x02':
    piVar17 = (int *)CUserCharacInfo::getCurCharacAddInfoRefW((CUserCharacInfo *)this);
    *piVar17 = *piVar17 + local_dc;
    break;
  case '\x03':
    iVar6 = CUserCharacInfo::getCurCharacAddInfoRefW((CUserCharacInfo *)this);
    *(uint *)(iVar6 + 4) = *(int *)(iVar6 + 4) + local_dc;
    break;
  case '\x04':
    iVar6 = CUserCharacInfo::getCurCharacAddInfoRefW((CUserCharacInfo *)this);
    *(short *)(iVar6 + 8) = *(short *)(iVar6 + 8) + (short)local_dc;
    break;
  case '\x05':
    iVar6 = CUserCharacInfo::getCurCharacAddInfoRefW((CUserCharacInfo *)this);
    *(short *)(iVar6 + 10) = *(short *)(iVar6 + 10) + (short)local_dc;
    break;
  case '\x06':
    iVar6 = CUserCharacInfo::getCurCharacAddInfoRefW((CUserCharacInfo *)this);
    *(short *)(iVar6 + 0xc) = *(short *)(iVar6 + 0xc) + (short)local_dc;
    break;
  case '\a':
    iVar6 = CUserCharacInfo::getCurCharacAddInfoRefW((CUserCharacInfo *)this);
    *(short *)(iVar6 + 0xe) = *(short *)(iVar6 + 0xe) + (short)local_dc;
    break;
  case '\b':
    iVar6 = CUserCharacInfo::getCurCharacAddInfoRefW((CUserCharacInfo *)this);
    *(uint *)(iVar6 + 0x42) = *(int *)(iVar6 + 0x42) + local_dc;
    break;
  case '\t':
    for (local_80 = 0; local_80 < 4; local_80 = local_80 + 1) {
      iVar6 = CUserCharacInfo::getCurCharacAddInfoRefW((CUserCharacInfo *)this);
      *(short *)(iVar6 + (local_80 + 8) * 2) =
           *(short *)(iVar6 + (local_80 + 8) * 2) + (short)local_dc;
    }
    break;
  case '\n':
  case '\x18':
    if (local_dc == 1) {
      pSVar12 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillW((CUserCharacInfo *)this);
      SkillSlot::clear_all_skills_both(pSVar12);
      pSVar12 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillW((CUserCharacInfo *)this);
      SkillSlot::set_parent(pSVar12,this);
      iVar6 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)this);
      iVar20 = CUserCharacInfo::getCurCharacSkillW((CUserCharacInfo *)this);
      addSkillOnCreateCharacter((_Mastered_skill *)(iVar20 + 0x46),iVar6);
      iVar6 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)this);
      iVar20 = CUserCharacInfo::getCurCharacSkillW((CUserCharacInfo *)this);
      addSkillOnCreateCharacter((_Mastered_skill *)(iVar20 + 0x1de),iVar6);
      std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::vector(local_f8);
      std::pair<int,int>::pair((pair<int,int> *)&local_100);
      cVar3 = CUserCharacInfo::getCurCharSecondGrowType((CUserCharacInfo *)this);
      cVar4 = CUserCharacInfo::getCurCharFirstGrowType((CUserCharacInfo *)this);
                    /* try { // try from 08667736 to 086679b1 has its CatchHandler @ 08667b07 */
      iVar6 = G_CDataManager();
      iVar6 = *(int *)(iVar6 + 0x14);
      iVar20 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)this);
      local_59 = CCharacter::get_give_skill
                           ((CCharacter *)(iVar6 + iVar20 * 0x7dc),(int)cVar4,(int)cVar3,
                            (vector *)local_f8,0);
      if (local_59 == '\x01') {
        local_50 = 0;
        while (iVar6 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::size
                                 (local_f8), (int)local_50 < iVar6) {
          puVar14 = (undefined4 *)
                    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::operator[]
                              (local_f8,local_50);
          local_fc = puVar14[1];
          local_100 = *puVar14;
          local_64 = local_100;
          local_60 = local_fc;
          uVar21 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)this);
          pSVar12 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillW((CUserCharacInfo *)this);
          SkillSlot::growtype_skill(pSVar12,uVar21,local_64,local_60,0);
          uVar21 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)this);
          pSVar12 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillW((CUserCharacInfo *)this);
          SkillSlot::growtype_skill(pSVar12,uVar21,local_64,local_60,1);
          local_50 = local_50 + 1;
        }
        CUserCharacInfo::GetCurCharacExpertJobType((CUserCharacInfo *)this);
        iVar6 = G_CDataManager();
        local_58 = CDataManager::GetExpertJobScript(iVar6);
        if (local_58 != 0) {
          local_4c = 0;
          while (uVar8 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::size
                                   ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *
                                    )(local_58 + 0xc)), local_4c < uVar8) {
            iVar6 = CUserCharacInfo::GetCurCharacExpertJobExp((CUserCharacInfo *)this);
            uVar13 = GetCurExpertJobLevel(this,iVar6);
            puVar14 = (undefined4 *)
                      std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::operator[]
                                ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)
                                 (local_58 + 0xc),local_4c);
            uVar21 = *puVar14;
            uVar15 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)this);
            pSVar12 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillW((CUserCharacInfo *)this);
            SkillSlot::growtype_skill(pSVar12,uVar15,uVar21,uVar13,0);
            iVar6 = CUserCharacInfo::GetCurCharacExpertJobExp((CUserCharacInfo *)this);
            uVar13 = GetCurExpertJobLevel(this,iVar6);
            puVar14 = (undefined4 *)
                      std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::operator[]
                                ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)
                                 (local_58 + 0xc),local_4c);
            uVar21 = *puVar14;
            uVar15 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)this);
            pSVar12 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillW((CUserCharacInfo *)this);
            SkillSlot::growtype_skill(pSVar12,uVar15,uVar21,uVar13,1);
            local_4c = local_4c + 1;
          }
        }
        WongWork::CSkillChanger::CSkillChanger(local_1e8);
                    /* try { // try from 08667a00 to 08667ad7 has its CatchHandler @ 08667ada */
        WongWork::CSkillChanger::SkillInitialize(local_1e8,this,0,false);
        send_skill_info(this);
        pCVar16 = (CGameManager *)G_CGameManager();
        local_54 = (CPremiumLetheManager *)CGameManager::GetPremiumLetheManager(pCVar16);
        cVar3 = isAffectedPremium(this,0x21);
        if (cVar3 == '\0') {
          if (local_54 != (CPremiumLetheManager *)0x0) {
            CPremiumLetheManager::UpdateBackupSkillFlag(local_54,this,0);
            CPremiumLetheManager::UpdateBackupSkillFlag(local_54,this,1);
          }
        }
        else {
          if ((local_54 == (CPremiumLetheManager *)0x0) ||
             (cVar3 = isAffectedPremium(this,0x21), cVar3 == '\0')) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (bVar2) {
            CPremiumLetheManager::InitLetheSkill(local_54,this,0);
            CPremiumLetheManager::InitLetheSkill(local_54,this,1);
          }
        }
        WongWork::CSkillChanger::~CSkillChanger(local_1e8);
        bVar2 = true;
      }
      else {
        iVar6 = (int)local_d5;
        uVar21 = CUserCharacInfo::getCurCharacName((CUserCharacInfo *)this);
        LogManager::logFormat
                  (1,"user.cpp","void CUser::increase_status(short int)",0x4aee,
                   "User %s - CUser::set_grow_type %d",uVar21,iVar6);
        bVar2 = false;
      }
                    /* try { // try from 08667b2b to 08667c09 has its CatchHandler @ 086686b6 */
      std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector(local_f8);
    }
    else {
      uVar21 = CUserCharacInfo::GetCurCharacSkillTreeIndex((CUserCharacInfo *)this);
      pSVar12 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillW((CUserCharacInfo *)this);
      SkillSlot::clear_all_skills(pSVar12,uVar21);
      pSVar12 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillW((CUserCharacInfo *)this);
      SkillSlot::set_parent(pSVar12,this);
      iVar6 = CUserCharacInfo::GetCurCharacSkillTreeIndex((CUserCharacInfo *)this);
      if ((iVar6 == -1) ||
         (iVar6 = CUserCharacInfo::GetCurCharacSkillTreeIndex((CUserCharacInfo *)this), iVar6 == 0))
      {
        bVar2 = true;
      }
      else {
        bVar2 = false;
      }
      if (bVar2) {
        iVar6 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)this);
        iVar20 = CUserCharacInfo::getCurCharacSkillW((CUserCharacInfo *)this);
        addSkillOnCreateCharacter((_Mastered_skill *)(iVar20 + 0x46),iVar6);
      }
      else {
        iVar6 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)this);
        iVar20 = CUserCharacInfo::getCurCharacSkillW((CUserCharacInfo *)this);
        addSkillOnCreateCharacter((_Mastered_skill *)(iVar20 + 0x1de),iVar6);
      }
      std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::vector(local_10c);
      std::pair<int,int>::pair((pair<int,int> *)&local_114);
      cVar3 = CUserCharacInfo::getCurCharSecondGrowType((CUserCharacInfo *)this);
      cVar4 = CUserCharacInfo::getCurCharFirstGrowType((CUserCharacInfo *)this);
                    /* try { // try from 08667c34 to 08667e7b has its CatchHandler @ 08667fec */
      iVar6 = G_CDataManager();
      iVar6 = *(int *)(iVar6 + 0x14);
      iVar20 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)this);
      local_3d = CCharacter::get_give_skill
                           ((CCharacter *)(iVar6 + iVar20 * 0x7dc),(int)cVar4,(int)cVar3,
                            (vector *)local_10c,0);
      if (local_3d == '\x01') {
        local_30 = 0;
        while (iVar6 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::size
                                 (local_10c), (int)local_30 < iVar6) {
          puVar14 = (undefined4 *)
                    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::operator[]
                              (local_10c,local_30);
          local_110 = puVar14[1];
          local_114 = *puVar14;
          local_48 = local_114;
          local_44 = local_110;
          uVar21 = CUserCharacInfo::GetCurCharacSkillTreeIndex((CUserCharacInfo *)this);
          uVar13 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)this);
          pSVar12 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillW((CUserCharacInfo *)this);
          SkillSlot::growtype_skill(pSVar12,uVar13,local_48,local_44,uVar21);
          local_30 = local_30 + 1;
        }
        CUserCharacInfo::GetCurCharacExpertJobType((CUserCharacInfo *)this);
        iVar6 = G_CDataManager();
        local_3c = CDataManager::GetExpertJobScript(iVar6);
        if (local_3c != 0) {
          local_2c = 0;
          while (uVar8 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::size
                                   ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *
                                    )(local_3c + 0xc)), local_2c < uVar8) {
            iVar6 = CUserCharacInfo::GetCurCharacExpertJobExp((CUserCharacInfo *)this);
            uVar13 = GetCurExpertJobLevel(this,iVar6);
            puVar14 = (undefined4 *)
                      std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::operator[]
                                ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)
                                 (local_3c + 0xc),local_2c);
            uVar21 = *puVar14;
            uVar15 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)this);
            pSVar12 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillW((CUserCharacInfo *)this);
            SkillSlot::growtype_skill(pSVar12,uVar15,uVar21,uVar13,0);
            iVar6 = CUserCharacInfo::GetCurCharacExpertJobExp((CUserCharacInfo *)this);
            uVar13 = GetCurExpertJobLevel(this,iVar6);
            puVar14 = (undefined4 *)
                      std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::operator[]
                                ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)
                                 (local_3c + 0xc),local_2c);
            uVar21 = *puVar14;
            uVar15 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)this);
            pSVar12 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillW((CUserCharacInfo *)this);
            SkillSlot::growtype_skill(pSVar12,uVar15,uVar21,uVar13,1);
            local_2c = local_2c + 1;
          }
        }
        WongWork::CSkillChanger::CSkillChanger(local_1e8);
        local_38 = 0;
        iVar6 = CUserCharacInfo::GetCurCharacSkillTreeIndex((CUserCharacInfo *)this);
        if ((iVar6 == -1) ||
           (iVar6 = CUserCharacInfo::GetCurCharacSkillTreeIndex((CUserCharacInfo *)this), iVar6 == 0
           )) {
          bVar2 = true;
        }
        else {
          bVar2 = false;
        }
        if (bVar2) {
          local_38 = 1;
        }
        else {
          local_38 = 2;
        }
                    /* try { // try from 08667f0f to 08667fbc has its CatchHandler @ 08667fbf */
        WongWork::CSkillChanger::SkillInitialize(local_1e8,this,local_38,false);
        send_skill_info(this);
        pCVar16 = (CGameManager *)G_CGameManager();
        local_34 = (CPremiumLetheManager *)CGameManager::GetPremiumLetheManager(pCVar16);
        cVar3 = isAffectedPremium(this,0x21);
        if (cVar3 == '\0') {
          if (local_34 != (CPremiumLetheManager *)0x0) {
            uVar21 = CUserCharacInfo::GetCurCharacSkillTreeIndex((CUserCharacInfo *)this);
            CPremiumLetheManager::UpdateBackupSkillFlag(local_34,this,uVar21);
          }
        }
        else {
          if ((local_34 == (CPremiumLetheManager *)0x0) ||
             (cVar3 = isAffectedPremium(this,0x21), cVar3 == '\0')) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (bVar2) {
            uVar21 = CUserCharacInfo::GetCurCharacSkillTreeIndex((CUserCharacInfo *)this);
            CPremiumLetheManager::InitLetheSkill(local_34,this,uVar21);
          }
        }
        WongWork::CSkillChanger::~CSkillChanger(local_1e8);
        bVar2 = true;
      }
      else {
        iVar6 = (int)local_d5;
        uVar21 = CUserCharacInfo::getCurCharacName((CUserCharacInfo *)this);
        LogManager::logFormat
                  (1,"user.cpp","void CUser::increase_status(short int)",0x4b48,
                   "User %s - CUser::set_grow_type %d",uVar21,iVar6);
        bVar2 = false;
      }
                    /* try { // try from 08668010 to 086686b3 has its CatchHandler @ 086686b6 */
      std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector(local_10c);
    }
    if (!bVar2) goto LAB_086686d4;
    break;
  case '\v':
    iVar6 = CUserCharacInfo::get_charac_guildkey((CUserCharacInfo *)this);
    if (iVar6 != 0) {
      CUserCharacInfo::add_guild_exp((CUserCharacInfo *)this,local_dc);
    }
    break;
  case '\f':
    CUserCharacInfo::setCurCharacStamina((CUserCharacInfo *)this,(uchar)local_dc);
    break;
  case '\r':
    pCVar10 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)this);
    iVar6 = CInventory::GetEventCoin(pCVar10);
    uVar8 = iVar6 + local_dc;
    pCVar10 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)this);
    CInventory::SetEventCoin(pCVar10,uVar8);
    uVar8 = local_dc;
    pCVar10 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)this);
    uVar21 = CInventory::GetEventCoin(pCVar10);
    cUserHistoryLog::EventCoinAdd((cUserHistoryLog *)(this + 0x79700),uVar21,uVar8,2);
    SendUpdateItemList(this,1,0,1);
    break;
  case '\x0e':
    RecoverFatigue(this,local_dc);
    SendFatigue(this);
    break;
  case '\x0f':
    uVar8 = CUserCharacInfo::getCurCharacFatigue((CUserCharacInfo *)this);
    local_c8 = (uVar8 & 0xffff) - local_dc;
    local_c4 = 0;
    piVar17 = std::max<int>(&local_c4,&local_c8);
    CUserCharacInfo::setCurCharacFatigue((CUserCharacInfo *)this,*piVar17);
    SendFatigue(this);
    break;
  case '\x10':
    iVar6 = CUserCharacInfo::get_charac_guildkey((CUserCharacInfo *)this);
    uVar8 = local_dc;
    if (iVar6 != 0) {
      uVar18 = get_charac_no(this,-1);
      uVar19 = CUserCharacInfo::get_charac_guildkey((CUserCharacInfo *)this);
      uVar21 = GetServerGroup(this);
      this_00 = (CGuildServerProxy *)
                CServerProxyMgr<CGuildServerProxy>::GetServerProxy
                          (GlobalData::s_guild_proxy_mgr,uVar21);
      CGuildServerProxy::SendIncreaseGuildExp(this_00,uVar19,uVar18,uVar8,'\x01');
    }
    break;
  case '\x11':
    gain_sfp(this,local_dc);
    history_log_sfp(this,0xffffffff,local_dc,1);
    InterfacePacketBuf::clear((InterfacePacketBuf *)local_d4);
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_d4,1,0x20);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_d4,1);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_d4,(int)param_1);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_d4,(int)local_d5);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_d4,local_dc);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_d4,0);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_d4,0);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_d4,true);
    Send(this,local_d4);
    goto LAB_086686d4;
  case '\x12':
    uVar21 = CUserCharacInfo::GetCurCharacSkillTreeIndex((CUserCharacInfo *)this);
    cVar3 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)this);
    pSVar12 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillW((CUserCharacInfo *)this);
    SkillSlot::clear_sfp_skills(pSVar12,(int)cVar3,uVar21);
    pSVar12 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillW((CUserCharacInfo *)this);
    SkillSlot::set_parent(pSVar12,this);
    local_7c = 0;
    iVar6 = CUserCharacInfo::GetCurCharacSkillTreeIndex((CUserCharacInfo *)this);
    if ((iVar6 == -1) ||
       (iVar6 = CUserCharacInfo::GetCurCharacSkillTreeIndex((CUserCharacInfo *)this), iVar6 == 0)) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    if (bVar2) {
      local_7c = 3;
    }
    else {
      local_7c = 4;
    }
    WongWork::CSkillChanger::CSkillChanger(local_1e8);
                    /* try { // try from 08667248 to 08667257 has its CatchHandler @ 0866725a */
    WongWork::CSkillChanger::SkillInitialize(local_1e8,this,local_7c,false);
    send_skill_info(this);
    WongWork::CSkillChanger::~CSkillChanger(local_1e8);
    break;
  case '\x13':
    CUserCharacInfo::IncreasePowerWarPoint((CUserCharacInfo *)this,(short)local_dc);
    break;
  case '\x14':
    adjust_charac_stat(this);
    if (*(int *)(this + 0x8cfc4) == 3) {
      InterfacePacketBuf::clear((InterfacePacketBuf *)local_d4);
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_d4,0,2);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_d4,1);
      InterfacePacketBuf::put_short((InterfacePacketBuf *)local_d4,1);
      make_basic_info(this,(char *)local_d4,'\x01');
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_d4,true);
      Send(this,local_d4);
    }
    break;
  case '\x15':
    pCVar10 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)this);
    iVar6 = CInventory::GetCoin(pCVar10);
    uVar8 = iVar6 + local_dc;
    pCVar10 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)this);
    CInventory::SetCoin(pCVar10,uVar8);
    uVar8 = local_dc;
    pCVar10 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)this);
    uVar21 = CInventory::GetCoin(pCVar10);
    cUserHistoryLog::CoinAdd((cUserHistoryLog *)(this + 0x79700),uVar21,uVar8,3);
    SendUpdateItemList(this,1,0,1);
    break;
  case '\x16':
    if (local_dc == 1) {
      pSVar12 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillW((CUserCharacInfo *)this);
                    /* try { // try from 086672a5 to 0866770b has its CatchHandler @ 086686b6 */
      SkillSlot::clear_all_skills_both(pSVar12);
      pSVar12 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillW((CUserCharacInfo *)this);
      SkillSlot::set_parent(pSVar12,this);
      givePvPSkillTree(this,0,true,3);
      iVar6 = CUserCharacInfo::get_pvp_grade((CUserCharacInfo *)this);
      cVar3 = CUserCharacInfo::getCurCharSecondGrowType((CUserCharacInfo *)this);
      cVar4 = CUserCharacInfo::getCurCharFirstGrowType((CUserCharacInfo *)this);
      iVar20 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)this);
      iVar11 = G_CDataManager();
      local_78 = PvPSkillTreeParameterScript::getPvPSkillPoint
                           ((PvPSkillTreeParameterScript *)(iVar11 + 0xa800),iVar20,(int)cVar4,
                            (int)cVar3,iVar6,false);
      pSVar12 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillW((CUserCharacInfo *)this);
      SkillSlot::set_remain_sp_at_index(pSVar12,local_78,0);
      pSVar12 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillW((CUserCharacInfo *)this);
      SkillSlot::set_remain_sp_at_index(pSVar12,local_78,1);
      send_skill_info(this);
      pCVar16 = (CGameManager *)G_CGameManager();
      local_74 = (CPremiumLetheManager *)CGameManager::GetPremiumLetheManager(pCVar16);
      cVar3 = isAffectedPremium(this,0x21);
      if (cVar3 == '\0') {
        if (local_74 != (CPremiumLetheManager *)0x0) {
          CPremiumLetheManager::UpdateBackupSkillFlag(local_74,this,0);
          CPremiumLetheManager::UpdateBackupSkillFlag(local_74,this,1);
        }
      }
      else {
        if ((local_74 == (CPremiumLetheManager *)0x0) ||
           (cVar3 = isAffectedPremium(this,0x21), cVar3 == '\0')) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          CPremiumLetheManager::InitLetheSkill(local_74,this,0);
          CPremiumLetheManager::InitLetheSkill(local_74,this,1);
        }
      }
    }
    else {
      uVar21 = CUserCharacInfo::GetCurCharacSkillTreeIndex((CUserCharacInfo *)this);
      pSVar12 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillW((CUserCharacInfo *)this);
      SkillSlot::clear_all_skills(pSVar12,uVar21);
      pSVar12 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillW((CUserCharacInfo *)this);
      SkillSlot::set_parent(pSVar12,this);
      local_70 = 0;
      iVar6 = CUserCharacInfo::GetCurCharacSkillTreeIndex((CUserCharacInfo *)this);
      if ((iVar6 == -1) ||
         (iVar6 = CUserCharacInfo::GetCurCharacSkillTreeIndex((CUserCharacInfo *)this), iVar6 == 0))
      {
        bVar2 = true;
      }
      else {
        bVar2 = false;
      }
      if (bVar2) {
        local_70 = 1;
      }
      else {
        local_70 = 2;
      }
      givePvPSkillTree(this,0,true,local_70);
      iVar6 = CUserCharacInfo::get_pvp_grade((CUserCharacInfo *)this);
      cVar3 = CUserCharacInfo::getCurCharSecondGrowType((CUserCharacInfo *)this);
      cVar4 = CUserCharacInfo::getCurCharFirstGrowType((CUserCharacInfo *)this);
      iVar20 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)this);
      iVar11 = G_CDataManager();
      local_6c = PvPSkillTreeParameterScript::getPvPSkillPoint
                           ((PvPSkillTreeParameterScript *)(iVar11 + 0xa800),iVar20,(int)cVar4,
                            (int)cVar3,iVar6,false);
      uVar21 = CUserCharacInfo::GetCurCharacSkillTreeIndex((CUserCharacInfo *)this);
      pSVar12 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillW((CUserCharacInfo *)this);
      SkillSlot::set_remain_sp_at_index(pSVar12,local_6c,uVar21);
      send_skill_info(this);
      pCVar16 = (CGameManager *)G_CGameManager();
      local_68 = (CPremiumLetheManager *)CGameManager::GetPremiumLetheManager(pCVar16);
      cVar3 = isAffectedPremium(this,0x21);
      if (cVar3 == '\0') {
        if (local_68 != (CPremiumLetheManager *)0x0) {
          uVar21 = CUserCharacInfo::GetCurCharacSkillTreeIndex((CUserCharacInfo *)this);
          CPremiumLetheManager::UpdateBackupSkillFlag(local_68,this,uVar21);
        }
      }
      else {
        if ((local_68 == (CPremiumLetheManager *)0x0) ||
           (cVar3 = isAffectedPremium(this,0x21), cVar3 == '\0')) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          uVar21 = CUserCharacInfo::GetCurCharacSkillTreeIndex((CUserCharacInfo *)this);
          CPremiumLetheManager::InitLetheSkill(local_68,this,uVar21);
        }
      }
    }
    break;
  case '\x17':
    pCVar16 = (CGameManager *)G_CGameManager();
    local_28 = (CPremiumLetheManager *)CGameManager::GetPremiumLetheManager(pCVar16);
    uVar21 = CUserCharacInfo::GetCurCharacSkillTreeIndex((CUserCharacInfo *)this);
    uVar13 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)this);
    uVar15 = CUserCharacInfo::getCurCharacName((CUserCharacInfo *)this);
    cMyTrace::cMyTrace(local_c0,"void CUser::increase_status(short int)",0x4c0a,0);
    cMyTrace::operator()
              (local_c0,"ONE_DAY_LETHE : BUY_SKILL_CONFIRM_TICKET, char(%s), char_no(%d), style(%d)"
               ,uVar15,uVar13,uVar21);
    if (local_28 != (CPremiumLetheManager *)0x0) {
      CPremiumLetheManager::ConfirmSkillReq(local_28,this);
    }
    break;
  case '\x19':
    iVar6 = CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)this);
    AvatarCoin::Add((AvatarCoin *)(iVar6 + 0x658),uVar8);
    AvatarCoin::SaveToDB(this);
    AvatarCoin::SendSyncPacket(this);
    AvatarCoin::HistoryLog::AddLog(this,local_dc);
  }
  InterfacePacketBuf::clear((InterfacePacketBuf *)local_d4);
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_d4,1,0x20);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_d4,1);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_d4,(int)param_1);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_d4,(int)local_d5);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_d4,local_dc);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_d4,0);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_d4,0);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_d4,true);
  Send(this,local_d4);
  if (*(int *)(this + 0x8cfc4) == 5) {
    local_24 = (CParty *)GetParty(this);
    if (local_24 != (CParty *)0x0) {
      InterfacePacketBuf::clear((InterfacePacketBuf *)local_d4);
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_d4,0,2);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_d4,1);
      InterfacePacketBuf::put_short((InterfacePacketBuf *)local_d4,1);
      make_basic_info(this,(char *)local_d4,'\x01');
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_d4,true);
      CParty::send_to_party(local_24,local_d4);
    }
  }
  else if ((*(int *)(this + 0x8cfc4) == 8) &&
          (local_20 = (WarRoom *)GetWarRoom(this), local_20 != (WarRoom *)0x0)) {
    InterfacePacketBuf::clear((InterfacePacketBuf *)local_d4);
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_d4,0,2);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_d4,1);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_d4,1);
    make_basic_info(this,(char *)local_d4,'\x01');
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_d4,true);
    WarRoom::SendToRoom(local_20,local_d4);
  }
LAB_086686d4:
  PacketGuard::~PacketGuard(local_d4);
  return;
}
```
