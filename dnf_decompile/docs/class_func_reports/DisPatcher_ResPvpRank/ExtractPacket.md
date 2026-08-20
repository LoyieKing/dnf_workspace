# ExtractPacket

`_ZN21DisPatcher_ResPvpRank13ExtractPacketER16MSG_RES_PVP_RANKR9PacketBuf`

`DisPatcher_ResPvpRank::ExtractPacket(MSG_RES_PVP_RANK&, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_ResPvpRank` | `0x081f039e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081f039e  _ZN21DisPatcher_ResPvpRank13ExtractPacketER16MSG_RES_PVP_RANKR9PacketBuf
#           DisPatcher_ResPvpRank::ExtractPacket(MSG_RES_PVP_RANK&, PacketBuf&)
# range [0x081f039e, 0x081f05e9]
081f039e +0x000:  push   %ebp
081f039f +0x001:  mov    %esp,%ebp
081f03a1 +0x003:  sub    $0x38,%esp
081f03a4 +0x006:  mov    0xc(%ebp),%eax
081f03a7 +0x009:  add    $0xd,%eax
081f03aa +0x00c:  mov    %eax,(%esp)
081f03ad +0x00f:  call   085d5dc0 <_ZN13PvpResultType5ClearEv>  ; PvpResultType::Clear()
081f03b2 +0x014:  mov    0xc(%ebp),%eax
081f03b5 +0x017:  add    $0xd,%eax
081f03b8 +0x01a:  mov    %eax,-0xc(%ebp)
081f03bb +0x01d:  lea    -0xe(%ebp),%eax
081f03be +0x020:  mov    %eax,0x4(%esp)
081f03c2 +0x024:  mov    0x10(%ebp),%eax
081f03c5 +0x027:  mov    %eax,(%esp)
081f03c8 +0x02a:  call   0858cfc0 <_ZN9PacketBuf9get_shortERs>  ; PacketBuf::get_short(short&)
081f03cd +0x02f:  lea    -0x10(%ebp),%eax
081f03d0 +0x032:  mov    %eax,0x4(%esp)
081f03d4 +0x036:  mov    0x10(%ebp),%eax
081f03d7 +0x039:  mov    %eax,(%esp)
081f03da +0x03c:  call   0858cfc0 <_ZN9PacketBuf9get_shortERs>  ; PacketBuf::get_short(short&)
081f03df +0x041:  lea    -0x12(%ebp),%eax
081f03e2 +0x044:  mov    %eax,0x4(%esp)
081f03e6 +0x048:  mov    0x10(%ebp),%eax
081f03e9 +0x04b:  mov    %eax,(%esp)
081f03ec +0x04e:  call   0858cfc0 <_ZN9PacketBuf9get_shortERs>  ; PacketBuf::get_short(short&)
081f03f1 +0x053:  lea    -0x14(%ebp),%eax
081f03f4 +0x056:  mov    %eax,0x4(%esp)
081f03f8 +0x05a:  mov    0x10(%ebp),%eax
081f03fb +0x05d:  mov    %eax,(%esp)
081f03fe +0x060:  call   0858cfc0 <_ZN9PacketBuf9get_shortERs>  ; PacketBuf::get_short(short&)
081f0403 +0x065:  lea    -0x16(%ebp),%eax
081f0406 +0x068:  mov    %eax,0x4(%esp)
081f040a +0x06c:  mov    0x10(%ebp),%eax
081f040d +0x06f:  mov    %eax,(%esp)
081f0410 +0x072:  call   0858cfc0 <_ZN9PacketBuf9get_shortERs>  ; PacketBuf::get_short(short&)
081f0415 +0x077:  lea    -0x18(%ebp),%eax
081f0418 +0x07a:  mov    %eax,0x4(%esp)
081f041c +0x07e:  mov    0x10(%ebp),%eax
081f041f +0x081:  mov    %eax,(%esp)
081f0422 +0x084:  call   0858cfc0 <_ZN9PacketBuf9get_shortERs>  ; PacketBuf::get_short(short&)
081f0427 +0x089:  lea    -0x1a(%ebp),%eax
081f042a +0x08c:  mov    %eax,0x4(%esp)
081f042e +0x090:  mov    0x10(%ebp),%eax
081f0431 +0x093:  mov    %eax,(%esp)
081f0434 +0x096:  call   0858cfc0 <_ZN9PacketBuf9get_shortERs>  ; PacketBuf::get_short(short&)
081f0439 +0x09b:  lea    -0x1c(%ebp),%eax
081f043c +0x09e:  mov    %eax,0x4(%esp)
081f0440 +0x0a2:  mov    0x10(%ebp),%eax
081f0443 +0x0a5:  mov    %eax,(%esp)
081f0446 +0x0a8:  call   0858cfc0 <_ZN9PacketBuf9get_shortERs>  ; PacketBuf::get_short(short&)
081f044b +0x0ad:  lea    -0x1e(%ebp),%eax
081f044e +0x0b0:  mov    %eax,0x4(%esp)
081f0452 +0x0b4:  mov    0x10(%ebp),%eax
081f0455 +0x0b7:  mov    %eax,(%esp)
081f0458 +0x0ba:  call   0858cfc0 <_ZN9PacketBuf9get_shortERs>  ; PacketBuf::get_short(short&)
081f045d +0x0bf:  lea    -0x20(%ebp),%eax
081f0460 +0x0c2:  mov    %eax,0x4(%esp)
081f0464 +0x0c6:  mov    0x10(%ebp),%eax
081f0467 +0x0c9:  mov    %eax,(%esp)
081f046a +0x0cc:  call   0858cfc0 <_ZN9PacketBuf9get_shortERs>  ; PacketBuf::get_short(short&)
081f046f +0x0d1:  lea    -0x22(%ebp),%eax
081f0472 +0x0d4:  mov    %eax,0x4(%esp)
081f0476 +0x0d8:  mov    0x10(%ebp),%eax
081f0479 +0x0db:  mov    %eax,(%esp)
081f047c +0x0de:  call   0858cfc0 <_ZN9PacketBuf9get_shortERs>  ; PacketBuf::get_short(short&)
081f0481 +0x0e3:  mov    -0xc(%ebp),%eax
081f0484 +0x0e6:  add    $0x44,%eax
081f0487 +0x0e9:  mov    %eax,0x4(%esp)
081f048b +0x0ed:  mov    0x10(%ebp),%eax
081f048e +0x0f0:  mov    %eax,(%esp)
081f0491 +0x0f3:  call   0858d0f0 <_ZN9PacketBuf7get_intERi>  ; PacketBuf::get_int(int&)
081f0496 +0x0f8:  mov    -0xc(%ebp),%eax
081f0499 +0x0fb:  add    $0x6c,%eax
081f049c +0x0fe:  mov    %eax,0x4(%esp)
081f04a0 +0x102:  mov    0x10(%ebp),%eax
081f04a3 +0x105:  mov    %eax,(%esp)
081f04a6 +0x108:  call   0858d0f0 <_ZN9PacketBuf7get_intERi>  ; PacketBuf::get_int(int&)
081f04ab +0x10d:  mov    -0xc(%ebp),%eax
081f04ae +0x110:  add    $0x70,%eax
081f04b1 +0x113:  mov    %eax,0x4(%esp)
081f04b5 +0x117:  mov    0x10(%ebp),%eax
081f04b8 +0x11a:  mov    %eax,(%esp)
081f04bb +0x11d:  call   0858d0f0 <_ZN9PacketBuf7get_intERi>  ; PacketBuf::get_int(int&)
081f04c0 +0x122:  mov    -0xc(%ebp),%eax
081f04c3 +0x125:  add    $0x74,%eax
081f04c6 +0x128:  mov    %eax,0x4(%esp)
081f04ca +0x12c:  mov    0x10(%ebp),%eax
081f04cd +0x12f:  mov    %eax,(%esp)
081f04d0 +0x132:  call   0858d0f0 <_ZN9PacketBuf7get_intERi>  ; PacketBuf::get_int(int&)
081f04d5 +0x137:  mov    -0xc(%ebp),%eax
081f04d8 +0x13a:  add    $0x78,%eax
081f04db +0x13d:  mov    %eax,0x4(%esp)
081f04df +0x141:  mov    0x10(%ebp),%eax
081f04e2 +0x144:  mov    %eax,(%esp)
081f04e5 +0x147:  call   0858d0f0 <_ZN9PacketBuf7get_intERi>  ; PacketBuf::get_int(int&)
081f04ea +0x14c:  mov    -0xc(%ebp),%eax
081f04ed +0x14f:  add    $0x48,%eax
081f04f0 +0x152:  mov    %eax,0x4(%esp)
081f04f4 +0x156:  mov    0x10(%ebp),%eax
081f04f7 +0x159:  mov    %eax,(%esp)
081f04fa +0x15c:  call   0858d0f0 <_ZN9PacketBuf7get_intERi>  ; PacketBuf::get_int(int&)
081f04ff +0x161:  mov    -0xc(%ebp),%eax
081f0502 +0x164:  add    $0x4c,%eax
081f0505 +0x167:  mov    %eax,0x4(%esp)
081f0509 +0x16b:  mov    0x10(%ebp),%eax
081f050c +0x16e:  mov    %eax,(%esp)
081f050f +0x171:  call   0858d0f0 <_ZN9PacketBuf7get_intERi>  ; PacketBuf::get_int(int&)
081f0514 +0x176:  mov    -0xc(%ebp),%eax
081f0517 +0x179:  add    $0x50,%eax
081f051a +0x17c:  mov    %eax,0x4(%esp)
081f051e +0x180:  mov    0x10(%ebp),%eax
081f0521 +0x183:  mov    %eax,(%esp)
081f0524 +0x186:  call   0858d0f0 <_ZN9PacketBuf7get_intERi>  ; PacketBuf::get_int(int&)
081f0529 +0x18b:  mov    -0xc(%ebp),%eax
081f052c +0x18e:  add    $0x7c,%eax
081f052f +0x191:  mov    %eax,0x4(%esp)
081f0533 +0x195:  mov    0x10(%ebp),%eax
081f0536 +0x198:  mov    %eax,(%esp)
081f0539 +0x19b:  call   0858d0f0 <_ZN9PacketBuf7get_intERi>  ; PacketBuf::get_int(int&)
081f053e +0x1a0:  mov    -0xc(%ebp),%eax
081f0541 +0x1a3:  sub    $0xffffff80,%eax
081f0544 +0x1a6:  mov    %eax,0x4(%esp)
081f0548 +0x1aa:  mov    0x10(%ebp),%eax
081f054b +0x1ad:  mov    %eax,(%esp)
081f054e +0x1b0:  call   0858d0f0 <_ZN9PacketBuf7get_intERi>  ; PacketBuf::get_int(int&)
081f0553 +0x1b5:  movzwl -0xe(%ebp),%eax
081f0557 +0x1b9:  movswl %ax,%edx
081f055a +0x1bc:  mov    -0xc(%ebp),%eax
081f055d +0x1bf:  mov    %edx,0x18(%eax)
081f0560 +0x1c2:  movzwl -0x10(%ebp),%eax
081f0564 +0x1c6:  movswl %ax,%edx
081f0567 +0x1c9:  mov    -0xc(%ebp),%eax
081f056a +0x1cc:  mov    %edx,0x1c(%eax)
081f056d +0x1cf:  movzwl -0x12(%ebp),%eax
081f0571 +0x1d3:  movswl %ax,%edx
081f0574 +0x1d6:  mov    -0xc(%ebp),%eax
081f0577 +0x1d9:  mov    %edx,0x20(%eax)
081f057a +0x1dc:  movzwl -0x14(%ebp),%eax
081f057e +0x1e0:  movswl %ax,%edx
081f0581 +0x1e3:  mov    -0xc(%ebp),%eax
081f0584 +0x1e6:  mov    %edx,0x24(%eax)
081f0587 +0x1e9:  movzwl -0x16(%ebp),%eax
081f058b +0x1ed:  movswl %ax,%edx
081f058e +0x1f0:  mov    -0xc(%ebp),%eax
081f0591 +0x1f3:  mov    %edx,0x38(%eax)
081f0594 +0x1f6:  movzwl -0x18(%ebp),%eax
081f0598 +0x1fa:  movswl %ax,%edx
081f059b +0x1fd:  mov    -0xc(%ebp),%eax
081f059e +0x200:  mov    %edx,0x3c(%eax)
081f05a1 +0x203:  movzwl -0x1a(%ebp),%eax
081f05a5 +0x207:  movswl %ax,%edx
081f05a8 +0x20a:  mov    -0xc(%ebp),%eax
081f05ab +0x20d:  mov    %edx,0x30(%eax)
081f05ae +0x210:  movzwl -0x1c(%ebp),%eax
081f05b2 +0x214:  movswl %ax,%edx
081f05b5 +0x217:  mov    -0xc(%ebp),%eax
081f05b8 +0x21a:  mov    %edx,0x34(%eax)
081f05bb +0x21d:  movzwl -0x1e(%ebp),%eax
081f05bf +0x221:  movswl %ax,%edx
081f05c2 +0x224:  mov    -0xc(%ebp),%eax
081f05c5 +0x227:  mov    %edx,0x28(%eax)
081f05c8 +0x22a:  movzwl -0x20(%ebp),%eax
081f05cc +0x22e:  movswl %ax,%edx
081f05cf +0x231:  mov    -0xc(%ebp),%eax
081f05d2 +0x234:  mov    %edx,0x2c(%eax)
081f05d5 +0x237:  movzwl -0x22(%ebp),%eax
081f05d9 +0x23b:  movswl %ax,%edx
081f05dc +0x23e:  mov    -0xc(%ebp),%eax
081f05df +0x241:  mov    %edx,0x40(%eax)
081f05e2 +0x244:  mov    $0x1,%eax
081f05e7 +0x249:  leave
081f05e8 +0x24a:  ret
081f05e9 +0x24b:  nop
```

## 反编译 C

```c
// DisPatcher_ResPvpRank::ExtractPacket @ 0x81f039e

/* DisPatcher_ResPvpRank::ExtractPacket(MSG_RES_PVP_RANK&, PacketBuf&) */

undefined4 __thiscall
DisPatcher_ResPvpRank::ExtractPacket
          (DisPatcher_ResPvpRank *this,MSG_RES_PVP_RANK *param_1,PacketBuf *param_2)

{
  short local_26;
  short local_24;
  short local_22;
  short local_20;
  short local_1e;
  short local_1c;
  short local_1a;
  short local_18;
  short local_16;
  short local_14;
  short local_12;
  MSG_RES_PVP_RANK *local_10;
  
  PvpResultType::Clear((PvpResultType *)(param_1 + 0xd));
  local_10 = param_1 + 0xd;
  PacketBuf::get_short(param_2,&local_12);
  PacketBuf::get_short(param_2,&local_14);
  PacketBuf::get_short(param_2,&local_16);
  PacketBuf::get_short(param_2,&local_18);
  PacketBuf::get_short(param_2,&local_1a);
  PacketBuf::get_short(param_2,&local_1c);
  PacketBuf::get_short(param_2,&local_1e);
  PacketBuf::get_short(param_2,&local_20);
  PacketBuf::get_short(param_2,&local_22);
  PacketBuf::get_short(param_2,&local_24);
  PacketBuf::get_short(param_2,&local_26);
  PacketBuf::get_int(param_2,(int *)(local_10 + 0x44));
  PacketBuf::get_int(param_2,(int *)(local_10 + 0x6c));
  PacketBuf::get_int(param_2,(int *)(local_10 + 0x70));
  PacketBuf::get_int(param_2,(int *)(local_10 + 0x74));
  PacketBuf::get_int(param_2,(int *)(local_10 + 0x78));
  PacketBuf::get_int(param_2,(int *)(local_10 + 0x48));
  PacketBuf::get_int(param_2,(int *)(local_10 + 0x4c));
  PacketBuf::get_int(param_2,(int *)(local_10 + 0x50));
  PacketBuf::get_int(param_2,(int *)(local_10 + 0x7c));
  PacketBuf::get_int(param_2,(int *)(local_10 + 0x80));
  *(int *)(local_10 + 0x18) = (int)local_12;
  *(int *)(local_10 + 0x1c) = (int)local_14;
  *(int *)(local_10 + 0x20) = (int)local_16;
  *(int *)(local_10 + 0x24) = (int)local_18;
  *(int *)(local_10 + 0x38) = (int)local_1a;
  *(int *)(local_10 + 0x3c) = (int)local_1c;
  *(int *)(local_10 + 0x30) = (int)local_1e;
  *(int *)(local_10 + 0x34) = (int)local_20;
  *(int *)(local_10 + 0x28) = (int)local_22;
  *(int *)(local_10 + 0x2c) = (int)local_24;
  *(int *)(local_10 + 0x40) = (int)local_26;
  return 1;
}
```
