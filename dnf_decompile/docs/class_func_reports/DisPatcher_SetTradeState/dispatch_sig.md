# dispatch_sig

`_ZN24DisPatcher_SetTradeState12dispatch_sigEP5CUserR9PacketBuf`

`DisPatcher_SetTradeState::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_SetTradeState` | `0x081f6232` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081f6232  _ZN24DisPatcher_SetTradeState12dispatch_sigEP5CUserR9PacketBuf
#           DisPatcher_SetTradeState::dispatch_sig(CUser*, PacketBuf&)
# range [0x081f6232, 0x081f63bf]
081f6232 +0x000:  push   %ebp
081f6233 +0x001:  mov    %esp,%ebp
081f6235 +0x003:  push   %ebx
081f6236 +0x004:  sub    $0x44,%esp
081f6239 +0x007:  mov    0xc(%ebp),%eax
081f623c +0x00a:  mov    %eax,(%esp)
081f623f +0x00d:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081f6244 +0x012:  cmp    $0x3,%eax
081f6247 +0x015:  setne  %al
081f624a +0x018:  test   %al,%al
081f624c +0x01a:  je     081f6258 <+0x26>
081f624e +0x01c:  mov    $0x0,%eax
081f6253 +0x021:  jmp    081f63ba <+0x188>
081f6258 +0x026:  lea    -0x1a(%ebp),%eax
081f625b +0x029:  add    $0xd,%eax
081f625e +0x02c:  mov    %eax,0x4(%esp)
081f6262 +0x030:  mov    0x10(%ebp),%eax
081f6265 +0x033:  mov    %eax,(%esp)
081f6268 +0x036:  call   0858cf22 <_ZN9PacketBuf8get_byteERc>  ; PacketBuf::get_byte(char&)
081f626d +0x03b:  xor    $0x1,%eax
081f6270 +0x03e:  test   %al,%al
081f6272 +0x040:  je     081f629d <+0x6b>
081f6274 +0x042:  movl   $0x0,0xc(%esp)
081f627c +0x04a:  movl   $0x0,0x8(%esp)
081f6284 +0x052:  movl   $&_ZZN24DisPatcher_SetTradeState12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081f628c +0x05a:  movl   $0x82e6,(%esp)
081f6293 +0x061:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081f6298 +0x066:  jmp    081f63ba <+0x188>
081f629d +0x06b:  mov    0xc(%ebp),%eax
081f62a0 +0x06e:  mov    %eax,(%esp)
081f62a3 +0x071:  call   0822fe3e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x54e8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x54e8
081f62a8 +0x076:  mov    %eax,%ebx
081f62aa +0x078:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
081f62af +0x07d:  mov    %ebx,0x4(%esp)
081f62b3 +0x081:  mov    %eax,(%esp)
081f62b6 +0x084:  call   08294d8a <_ZN12CGameManager13GetTradeSpaceEi>  ; CGameManager::GetTradeSpace(int)
081f62bb +0x089:  mov    %eax,-0xc(%ebp)
081f62be +0x08c:  cmpl   $0x0,-0xc(%ebp)
081f62c2 +0x090:  jne    081f62e9 <+0xb7>
081f62c4 +0x092:  movl   $0x1,0x8(%esp)
081f62cc +0x09a:  movl   $0x1a,0x4(%esp)
081f62d4 +0x0a2:  mov    0xc(%ebp),%eax
081f62d7 +0x0a5:  mov    %eax,(%esp)
081f62da +0x0a8:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
081f62df +0x0ad:  mov    $0x0,%eax
081f62e4 +0x0b2:  jmp    081f63ba <+0x188>
081f62e9 +0x0b7:  mov    -0xc(%ebp),%eax
081f62ec +0x0ba:  mov    %eax,(%esp)
081f62ef +0x0bd:  call   0823439a <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9a44>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9a44
081f62f4 +0x0c2:  test   %al,%al
081f62f6 +0x0c4:  je     081f6360 <+0x12e>
081f62f8 +0x0c6:  mov    0xc(%ebp),%eax
081f62fb +0x0c9:  mov    %eax,(%esp)
081f62fe +0x0cc:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
081f6303 +0x0d1:  movzwl %ax,%ebx
081f6306 +0x0d4:  mov    -0xc(%ebp),%eax
081f6309 +0x0d7:  mov    %eax,(%esp)
081f630c +0x0da:  call   0823438e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9a38>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9a38
081f6311 +0x0df:  mov    %ebx,0x18(%esp)
081f6315 +0x0e3:  mov    %eax,0x14(%esp)
081f6319 +0x0e7:  movl   $"Trade Space[%d] is Empty User[%d]",0x10(%esp)
081f6321 +0x0ef:  movl   $0x82f1,0xc(%esp)
081f6329 +0x0f7:  movl   $&_ZZN24DisPatcher_SetTradeState12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x8(%esp)
081f6331 +0x0ff:  movl   $"PacketDispatcher_Impl_1.cpp",0x4(%esp)
081f6339 +0x107:  movl   $0x1,(%esp)
081f6340 +0x10e:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
081f6345 +0x113:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
081f634a +0x118:  mov    -0xc(%ebp),%edx
081f634d +0x11b:  mov    %edx,0x4(%esp)
081f6351 +0x11f:  mov    %eax,(%esp)
081f6354 +0x122:  call   08294dde <_ZN12CGameManager13PutTradeSpaceEP11CTradeSpace>  ; CGameManager::PutTradeSpace(CTradeSpace*)
081f6359 +0x127:  mov    $0x0,%eax
081f635e +0x12c:  jmp    081f63ba <+0x188>
081f6360 +0x12e:  mov    -0xc(%ebp),%eax
081f6363 +0x131:  mov    %eax,(%esp)
081f6366 +0x134:  call   0852993c <_ZN11CTradeSpace23check_trade_possibilityEv>  ; CTradeSpace::check_trade_possibility()
081f636b +0x139:  xor    $0x1,%eax
081f636e +0x13c:  test   %al,%al
081f6370 +0x13e:  je     081f6398 <+0x166>
081f6372 +0x140:  mov    -0xc(%ebp),%eax
081f6375 +0x143:  mov    %eax,(%esp)
081f6378 +0x146:  call   0852effa <_ZN11CTradeSpace12cancel_tradeEv>  ; CTradeSpace::cancel_trade()
081f637d +0x14b:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
081f6382 +0x150:  mov    -0xc(%ebp),%edx
081f6385 +0x153:  mov    %edx,0x4(%esp)
081f6389 +0x157:  mov    %eax,(%esp)
081f638c +0x15a:  call   08294dde <_ZN12CGameManager13PutTradeSpaceEP11CTradeSpace>  ; CGameManager::PutTradeSpace(CTradeSpace*)
081f6391 +0x15f:  mov    $0x0,%eax
081f6396 +0x164:  jmp    081f63ba <+0x188>
081f6398 +0x166:  movzbl -0xd(%ebp),%eax
081f639c +0x16a:  movsbl %al,%eax
081f639f +0x16d:  mov    %eax,0x8(%esp)
081f63a3 +0x171:  mov    0xc(%ebp),%eax
081f63a6 +0x174:  mov    %eax,0x4(%esp)
081f63aa +0x178:  mov    -0xc(%ebp),%eax
081f63ad +0x17b:  mov    %eax,(%esp)
081f63b0 +0x17e:  call   0852f134 <_ZN11CTradeSpace18change_trade_stateEP5CUseri>  ; CTradeSpace::change_trade_state(CUser*, int)
081f63b5 +0x183:  mov    $0x0,%eax
081f63ba +0x188:  add    $0x44,%esp
081f63bd +0x18b:  pop    %ebx
081f63be +0x18c:  pop    %ebp
081f63bf +0x18d:  ret
```

## 反编译 C

```c
// DisPatcher_SetTradeState::dispatch_sig @ 0x81f6232

/* DisPatcher_SetTradeState::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
DisPatcher_SetTradeState::dispatch_sig
          (DisPatcher_SetTradeState *this,CUser *param_1,PacketBuf *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  CGameManager *pCVar4;
  uint uVar5;
  char local_11;
  CTradeSpace *local_10;
  
  iVar2 = CUser::get_state(param_1);
  if (iVar2 == 3) {
    cVar1 = PacketBuf::get_byte(param_2,&local_11);
    if (cVar1 == '\x01') {
      iVar2 = CUser::GetTradeSpace(param_1);
      pCVar4 = (CGameManager *)G_CGameManager();
      local_10 = (CTradeSpace *)CGameManager::GetTradeSpace(pCVar4,iVar2);
      if (local_10 == (CTradeSpace *)0x0) {
        CUser::SendCmdErrorPacket(param_1,0x1a,1);
        uVar3 = 0;
      }
      else {
        cVar1 = CTradeSpace::is_empty(local_10);
        if (cVar1 == '\0') {
          cVar1 = CTradeSpace::check_trade_possibility(local_10);
          if (cVar1 == '\x01') {
            CTradeSpace::change_trade_state(local_10,param_1,(int)local_11);
            uVar3 = 0;
          }
          else {
            CTradeSpace::cancel_trade(local_10);
            pCVar4 = (CGameManager *)G_CGameManager();
            CGameManager::PutTradeSpace(pCVar4,local_10);
            uVar3 = 0;
          }
        }
        else {
          uVar5 = CUser::get_unique_id(param_1);
          uVar3 = CTradeSpace::get_index(local_10);
          LogManager::logFormat
                    (1,"PacketDispatcher_Impl_1.cpp",
                     "virtual int DisPatcher_SetTradeState::dispatch_sig(CUser*, PacketBuf&)",0x82f1
                     ,"Trade Space[%d] is Empty User[%d]",uVar3,uVar5 & 0xffff);
          pCVar4 = (CGameManager *)G_CGameManager();
          CGameManager::PutTradeSpace(pCVar4,local_10);
          uVar3 = 0;
        }
      }
    }
    else {
      uVar3 = LineFunc(0x82e6,
                       "virtual int DisPatcher_SetTradeState::dispatch_sig(CUser*, PacketBuf&)",0,0)
      ;
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}
```
