# dispatch_sig

`_ZN28Dispatcher_SetSubGuildMaster12dispatch_sigEP5CUserR9PacketBuf`

`Dispatcher_SetSubGuildMaster::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_SetSubGuildMaster` | `0x082053e6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082053e6  _ZN28Dispatcher_SetSubGuildMaster12dispatch_sigEP5CUserR9PacketBuf
#           Dispatcher_SetSubGuildMaster::dispatch_sig(CUser*, PacketBuf&)
# range [0x082053e6, 0x08205599]
082053e6 +0x000:  push   %ebp
082053e7 +0x001:  mov    %esp,%ebp
082053e9 +0x003:  push   %ebx
082053ea +0x004:  sub    $0x54,%esp
082053ed +0x007:  mov    0xc(%ebp),%eax
082053f0 +0x00a:  mov    %eax,(%esp)
082053f3 +0x00d:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
082053f8 +0x012:  cmp    $0x2,%eax
082053fb +0x015:  jle    0820540c <+0x26>
082053fd +0x017:  mov    0xc(%ebp),%eax
08205400 +0x01a:  mov    %eax,(%esp)
08205403 +0x01d:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
08205408 +0x022:  test   %eax,%eax
0820540a +0x024:  jne    08205413 <+0x2d>
0820540c +0x026:  mov    $0x1,%eax
08205411 +0x02b:  jmp    08205418 <+0x32>
08205413 +0x02d:  mov    $0x0,%eax
08205418 +0x032:  test   %al,%al
0820541a +0x034:  je     08205445 <+0x5f>
0820541c +0x036:  movl   $0x0,0xc(%esp)
08205424 +0x03e:  movl   $0x0,0x8(%esp)
0820542c +0x046:  movl   $&_ZZN28Dispatcher_SetSubGuildMaster12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08205434 +0x04e:  movl   $0x9d97,(%esp)
0820543b +0x055:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08205440 +0x05a:  jmp    08205594 <+0x1ae>
08205445 +0x05f:  lea    -0x3d(%ebp),%eax
08205448 +0x062:  mov    %eax,(%esp)
0820544b +0x065:  call   0822b978 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x1022>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x1022
08205450 +0x06a:  movl   $0xffffffff,0x4(%esp)
08205458 +0x072:  mov    0xc(%ebp),%eax
0820545b +0x075:  mov    %eax,(%esp)
0820545e +0x078:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
08205463 +0x07d:  mov    %eax,-0x33(%ebp)
08205466 +0x080:  mov    0xc(%ebp),%eax
08205469 +0x083:  mov    %eax,(%esp)
0820546c +0x086:  call   0822f46c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4b16>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4b16
08205471 +0x08b:  mov    %eax,-0x2f(%ebp)
08205474 +0x08e:  lea    -0xc(%ebp),%eax
08205477 +0x091:  mov    %eax,0x4(%esp)
0820547b +0x095:  mov    0x10(%ebp),%eax
0820547e +0x098:  mov    %eax,(%esp)
08205481 +0x09b:  call   0858d0f0 <_ZN9PacketBuf7get_intERi>  ; PacketBuf::get_int(int&)
08205486 +0x0a0:  xor    $0x1,%eax
08205489 +0x0a3:  test   %al,%al
0820548b +0x0a5:  je     082054b6 <+0xd0>
0820548d +0x0a7:  movl   $0x0,0xc(%esp)
08205495 +0x0af:  movl   $0x0,0x8(%esp)
0820549d +0x0b7:  movl   $&_ZZN28Dispatcher_SetSubGuildMaster12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
082054a5 +0x0bf:  movl   $0x9da1,(%esp)
082054ac +0x0c6:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
082054b1 +0x0cb:  jmp    08205594 <+0x1ae>
082054b6 +0x0d0:  mov    -0xc(%ebp),%eax
082054b9 +0x0d3:  mov    %eax,0xc(%esp)
082054bd +0x0d7:  movl   $0x1e,0x8(%esp)
082054c5 +0x0df:  lea    -0x3d(%ebp),%eax
082054c8 +0x0e2:  add    $0x12,%eax
082054cb +0x0e5:  mov    %eax,0x4(%esp)
082054cf +0x0e9:  mov    0x10(%ebp),%eax
082054d2 +0x0ec:  mov    %eax,(%esp)
082054d5 +0x0ef:  call   0858d2bc <_ZN9PacketBuf7get_strEPcii>  ; PacketBuf::get_str(char*, int, int)
082054da +0x0f4:  xor    $0x1,%eax
082054dd +0x0f7:  test   %al,%al
082054df +0x0f9:  je     0820550a <+0x124>
082054e1 +0x0fb:  movl   $0x0,0xc(%esp)
082054e9 +0x103:  movl   $0x0,0x8(%esp)
082054f1 +0x10b:  movl   $&_ZZN28Dispatcher_SetSubGuildMaster12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
082054f9 +0x113:  movl   $0x9da4,(%esp)
08205500 +0x11a:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08205505 +0x11f:  jmp    08205594 <+0x1ae>
0820550a +0x124:  lea    -0x3d(%ebp),%eax
0820550d +0x127:  add    $0x30,%eax
08205510 +0x12a:  mov    %eax,0x4(%esp)
08205514 +0x12e:  mov    0x10(%ebp),%eax
08205517 +0x131:  mov    %eax,(%esp)
0820551a +0x134:  call   0858cf22 <_ZN9PacketBuf8get_byteERc>  ; PacketBuf::get_byte(char&)
0820551f +0x139:  xor    $0x1,%eax
08205522 +0x13c:  test   %al,%al
08205524 +0x13e:  je     0820554c <+0x166>
08205526 +0x140:  movl   $0x0,0xc(%esp)
0820552e +0x148:  movl   $0x0,0x8(%esp)
08205536 +0x150:  movl   $&_ZZN28Dispatcher_SetSubGuildMaster12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
0820553e +0x158:  movl   $0x9da7,(%esp)
08205545 +0x15f:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0820554a +0x164:  jmp    08205594 <+0x1ae>
0820554c +0x166:  movzbl -0xd(%ebp),%eax
08205550 +0x16a:  cmp    $0x1,%al
08205552 +0x16c:  jne    0820555b <+0x175>
08205554 +0x16e:  mov    $0x0,%eax
08205559 +0x173:  jmp    08205594 <+0x1ae>
0820555b +0x175:  lea    -0x3d(%ebp),%ebx
0820555e +0x178:  mov    0xc(%ebp),%eax
08205561 +0x17b:  mov    %eax,(%esp)
08205564 +0x17e:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
08205569 +0x183:  mov    &_ZN10GlobalData17s_guild_proxy_mgrE,%edx
0820556f +0x189:  mov    %eax,0x4(%esp)
08205573 +0x18d:  mov    %edx,(%esp)
08205576 +0x190:  call   0811d3b8 <_GLOBAL__I__ZN14CGuildWarEventC2Ev+0x1c>  ; global constructors keyed to CGuildWarEvent::CGuildWarEvent()+0x1c
0820557b +0x195:  movl   $0x31,0x8(%esp)
08205583 +0x19d:  mov    %ebx,0x4(%esp)
08205587 +0x1a1:  mov    %eax,(%esp)
0820558a +0x1a4:  call   0846dc7e <_ZN17CGuildServerProxy10SendPacketEPci>  ; CGuildServerProxy::SendPacket(char*, int)
0820558f +0x1a9:  mov    $0x0,%eax
08205594 +0x1ae:  add    $0x54,%esp
08205597 +0x1b1:  pop    %ebx
08205598 +0x1b2:  pop    %ebp
08205599 +0x1b3:  ret
```

## 反编译 C

```c
// Dispatcher_SetSubGuildMaster::dispatch_sig @ 0x82053e6

/* Dispatcher_SetSubGuildMaster::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_SetSubGuildMaster::dispatch_sig
          (Dispatcher_SetSubGuildMaster *this,CUser *param_1,PacketBuf *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  CGuildServerProxy *this_00;
  Packet_Monitor_Set_Sub_Guild_Master local_41 [10];
  undefined4 local_37;
  undefined4 local_33;
  char acStack_2f [30];
  char local_11;
  int local_10 [2];
  
  iVar3 = CUser::get_state(param_1);
  if (2 < iVar3) {
    iVar3 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1);
    if (iVar3 != 0) {
      bVar1 = false;
      goto LAB_08205418;
    }
  }
  bVar1 = true;
LAB_08205418:
  if (bVar1) {
    uVar4 = LineFunc(0x9d97,
                     "virtual int Dispatcher_SetSubGuildMaster::dispatch_sig(CUser*, PacketBuf&)",0,
                     0);
  }
  else {
    Packet_Monitor_Set_Sub_Guild_Master::Packet_Monitor_Set_Sub_Guild_Master(local_41);
    local_37 = CUser::get_charac_no(param_1,-1);
    local_33 = CUserCharacInfo::get_charac_guildkey((CUserCharacInfo *)param_1);
    cVar2 = PacketBuf::get_int(param_2,local_10);
    if (cVar2 == '\x01') {
      cVar2 = PacketBuf::get_str(param_2,acStack_2f,0x1e,local_10[0]);
      if (cVar2 == '\x01') {
        cVar2 = PacketBuf::get_byte(param_2,&local_11);
        if (cVar2 == '\x01') {
          if (local_11 == '\x01') {
            uVar4 = 0;
          }
          else {
            uVar4 = CUser::GetServerGroup(param_1);
            this_00 = (CGuildServerProxy *)
                      CServerProxyMgr<CGuildServerProxy>::GetServerProxy
                                (GlobalData::s_guild_proxy_mgr,uVar4);
            CGuildServerProxy::SendPacket(this_00,(char *)local_41,0x31);
            uVar4 = 0;
          }
        }
        else {
          uVar4 = LineFunc(0x9da7,
                           "virtual int Dispatcher_SetSubGuildMaster::dispatch_sig(CUser*, PacketBuf&)"
                           ,0,0);
        }
      }
      else {
        uVar4 = LineFunc(0x9da4,
                         "virtual int Dispatcher_SetSubGuildMaster::dispatch_sig(CUser*, PacketBuf&)"
                         ,0,0);
      }
    }
    else {
      uVar4 = LineFunc(0x9da1,
                       "virtual int Dispatcher_SetSubGuildMaster::dispatch_sig(CUser*, PacketBuf&)",
                       0,0);
    }
  }
  return uVar4;
}
```
