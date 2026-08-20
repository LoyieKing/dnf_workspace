# dispatch_sig

`_ZN28DisPatcher_ReportClient4Hack12dispatch_sigEP5CUserR9PacketBuf`

`DisPatcher_ReportClient4Hack::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_ReportClient4Hack` | `0x082041a0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082041a0  _ZN28DisPatcher_ReportClient4Hack12dispatch_sigEP5CUserR9PacketBuf
#           DisPatcher_ReportClient4Hack::dispatch_sig(CUser*, PacketBuf&)
# range [0x082041a0, 0x08204399]
082041a0 +0x000:  push   %ebp
082041a1 +0x001:  mov    %esp,%ebp
082041a3 +0x003:  push   %ebx
082041a4 +0x004:  sub    $0x14,%esp
082041a7 +0x007:  mov    0xc(%ebp),%eax
082041aa +0x00a:  mov    %eax,(%esp)
082041ad +0x00d:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
082041b2 +0x012:  cmp    $0x1,%eax
082041b5 +0x015:  jle    082041c6 <+0x26>
082041b7 +0x017:  mov    0xc(%ebp),%eax
082041ba +0x01a:  mov    %eax,(%esp)
082041bd +0x01d:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
082041c2 +0x022:  test   %eax,%eax
082041c4 +0x024:  jne    082041cd <+0x2d>
082041c6 +0x026:  mov    $0x1,%eax
082041cb +0x02b:  jmp    082041d2 <+0x32>
082041cd +0x02d:  mov    $0x0,%eax
082041d2 +0x032:  test   %al,%al
082041d4 +0x034:  je     082041e0 <+0x40>
082041d6 +0x036:  mov    $0x0,%eax
082041db +0x03b:  jmp    08204394 <+0x1f4>
082041e0 +0x040:  mov    0xc(%ebp),%eax
082041e3 +0x043:  mov    %eax,(%esp)
082041e6 +0x046:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
082041eb +0x04b:  cmp    $0x6,%eax
082041ee +0x04e:  je     08204364 <+0x1c4>
082041f4 +0x054:  cmp    $0x6,%eax
082041f7 +0x057:  jg     08204203 <+0x63>
082041f9 +0x059:  cmp    $0x5,%eax
082041fc +0x05c:  je     08204216 <+0x76>
082041fe +0x05e:  jmp    082042fc <+0x15c>
08204203 +0x063:  cmp    $0x7,%eax
08204206 +0x066:  je     08204257 <+0xb7>
08204208 +0x068:  cmp    $0x8,%eax
0820420b +0x06b:  je     082042bb <+0x11b>
08204211 +0x071:  jmp    082042fc <+0x15c>
08204216 +0x076:  mov    0xc(%ebp),%eax
08204219 +0x079:  mov    %eax,(%esp)
0820421c +0x07c:  call   0865514c <_ZN5CUser8GetPartyEv>  ; CUser::GetParty()
08204221 +0x081:  test   %eax,%eax
08204223 +0x083:  sete   %al
08204226 +0x086:  test   %al,%al
08204228 +0x088:  je     08204367 <+0x1c7>
0820422e +0x08e:  movl   $0x0,0xc(%esp)
08204236 +0x096:  movl   $0x0,0x8(%esp)
0820423e +0x09e:  movl   $&_ZZN28DisPatcher_ReportClient4Hack12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08204246 +0x0a6:  movl   $0x9bb7,(%esp)
0820424d +0x0ad:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08204252 +0x0b2:  jmp    08204394 <+0x1f4>
08204257 +0x0b7:  mov    0xc(%ebp),%eax
0820425a +0x0ba:  mov    %eax,(%esp)
0820425d +0x0bd:  call   0822fe74 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x551e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x551e
08204262 +0x0c2:  movswl %ax,%ebx
08204265 +0x0c5:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
0820426a +0x0ca:  movl   $0x0,0xc(%esp)
08204272 +0x0d2:  mov    0xc(%ebp),%edx
08204275 +0x0d5:  mov    %edx,0x8(%esp)
08204279 +0x0d9:  mov    %ebx,0x4(%esp)
0820427d +0x0dd:  mov    %eax,(%esp)
08204280 +0x0e0:  call   08295206 <_ZN12CGameManager6GetPvpEiP5CUseri>  ; CGameManager::GetPvp(int, CUser*, int)
08204285 +0x0e5:  test   %eax,%eax
08204287 +0x0e7:  sete   %al
0820428a +0x0ea:  test   %al,%al
0820428c +0x0ec:  je     0820436a <+0x1ca>
08204292 +0x0f2:  movl   $0x0,0xc(%esp)
0820429a +0x0fa:  movl   $0x0,0x8(%esp)
082042a2 +0x102:  movl   $&_ZZN28DisPatcher_ReportClient4Hack12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
082042aa +0x10a:  movl   $0x9bc1,(%esp)
082042b1 +0x111:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
082042b6 +0x116:  jmp    08204394 <+0x1f4>
082042bb +0x11b:  mov    0xc(%ebp),%eax
082042be +0x11e:  mov    %eax,(%esp)
082042c1 +0x121:  call   086551de <_ZN5CUser10GetWarRoomEv>  ; CUser::GetWarRoom()
082042c6 +0x126:  test   %eax,%eax
082042c8 +0x128:  sete   %al
082042cb +0x12b:  test   %al,%al
082042cd +0x12d:  je     0820436d <+0x1cd>
082042d3 +0x133:  movl   $0x0,0xc(%esp)
082042db +0x13b:  movl   $0x0,0x8(%esp)
082042e3 +0x143:  movl   $&_ZZN28DisPatcher_ReportClient4Hack12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
082042eb +0x14b:  movl   $0x9bc5,(%esp)
082042f2 +0x152:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
082042f7 +0x157:  jmp    08204394 <+0x1f4>
082042fc +0x15c:  mov    0xc(%ebp),%eax
082042ff +0x15f:  mov    %eax,(%esp)
08204302 +0x162:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
08204307 +0x167:  mov    0xc(%ebp),%edx
0820430a +0x16a:  mov    %edx,0x4(%esp)
0820430e +0x16e:  mov    %eax,(%esp)
08204311 +0x171:  call   080f79e8 <_ZN8WongWork13CHackAnalyzer20beginCollectHackInfoEP5CUser>  ; WongWork::CHackAnalyzer::beginCollectHackInfo(CUser*)
08204316 +0x176:  mov    0xc(%ebp),%eax
08204319 +0x179:  mov    %eax,(%esp)
0820431c +0x17c:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
08204321 +0x181:  mov    0x10(%ebp),%edx
08204324 +0x184:  mov    %edx,0x8(%esp)
08204328 +0x188:  mov    0xc(%ebp),%edx
0820432b +0x18b:  mov    %edx,0x4(%esp)
0820432f +0x18f:  mov    %eax,(%esp)
08204332 +0x192:  call   080f7a22 <_ZN8WongWork13CHackAnalyzer17analyzeHackReportEP5CUserP9PacketBuf>  ; WongWork::CHackAnalyzer::analyzeHackReport(CUser*, PacketBuf*)
08204337 +0x197:  mov    0xc(%ebp),%eax
0820433a +0x19a:  mov    %eax,(%esp)
0820433d +0x19d:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
08204342 +0x1a2:  mov    %eax,(%esp)
08204345 +0x1a5:  call   080f8080 <_ZN8WongWork13CHackAnalyzer14reportHackInfoEv>  ; WongWork::CHackAnalyzer::reportHackInfo()
0820434a +0x1aa:  mov    0xc(%ebp),%eax
0820434d +0x1ad:  mov    %eax,(%esp)
08204350 +0x1b0:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
08204355 +0x1b5:  mov    %eax,(%esp)
08204358 +0x1b8:  call   080f81a6 <_ZN8WongWork13CHackAnalyzer13resetHackInfoEv>  ; WongWork::CHackAnalyzer::resetHackInfo()
0820435d +0x1bd:  mov    $0x0,%eax
08204362 +0x1c2:  jmp    08204394 <+0x1f4>
08204364 +0x1c4:  nop
08204365 +0x1c5:  jmp    0820436e <+0x1ce>
08204367 +0x1c7:  nop
08204368 +0x1c8:  jmp    0820436e <+0x1ce>
0820436a +0x1ca:  nop
0820436b +0x1cb:  jmp    0820436e <+0x1ce>
0820436d +0x1cd:  nop
0820436e +0x1ce:  mov    0xc(%ebp),%eax
08204371 +0x1d1:  mov    %eax,(%esp)
08204374 +0x1d4:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
08204379 +0x1d9:  mov    0x10(%ebp),%edx
0820437c +0x1dc:  mov    %edx,0x8(%esp)
08204380 +0x1e0:  mov    0xc(%ebp),%edx
08204383 +0x1e3:  mov    %edx,0x4(%esp)
08204387 +0x1e7:  mov    %eax,(%esp)
0820438a +0x1ea:  call   080f7a22 <_ZN8WongWork13CHackAnalyzer17analyzeHackReportEP5CUserP9PacketBuf>  ; WongWork::CHackAnalyzer::analyzeHackReport(CUser*, PacketBuf*)
0820438f +0x1ef:  mov    $0x0,%eax
08204394 +0x1f4:  add    $0x14,%esp
08204397 +0x1f7:  pop    %ebx
08204398 +0x1f8:  pop    %ebp
08204399 +0x1f9:  ret
```

## 反编译 C

```c
// DisPatcher_ReportClient4Hack::dispatch_sig @ 0x82041a0

/* DisPatcher_ReportClient4Hack::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
DisPatcher_ReportClient4Hack::dispatch_sig
          (DisPatcher_ReportClient4Hack *this,CUser *param_1,PacketBuf *param_2)

{
  bool bVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  CGameManager *this_00;
  CHackAnalyzer *pCVar5;
  
  iVar3 = CUser::get_state(param_1);
  if ((iVar3 < 2) ||
     (iVar3 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1), iVar3 == 0)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (bVar1) {
    return 0;
  }
  iVar3 = CUser::get_state(param_1);
  if (iVar3 != 6) {
    if (iVar3 < 7) {
      if (iVar3 != 5) {
LAB_082042fc:
        pCVar5 = (CHackAnalyzer *)CUser::getHackAnalyzer(param_1);
        WongWork::CHackAnalyzer::beginCollectHackInfo(pCVar5,param_1);
        pCVar5 = (CHackAnalyzer *)CUser::getHackAnalyzer(param_1);
        WongWork::CHackAnalyzer::analyzeHackReport(pCVar5,param_1,param_2);
        CUser::getHackAnalyzer(param_1);
        WongWork::CHackAnalyzer::reportHackInfo();
        pCVar5 = (CHackAnalyzer *)CUser::getHackAnalyzer(param_1);
        WongWork::CHackAnalyzer::resetHackInfo(pCVar5);
        return 0;
      }
      iVar3 = CUser::GetParty(param_1);
      if (iVar3 == 0) {
        uVar4 = LineFunc(0x9bb7,
                         "virtual int DisPatcher_ReportClient4Hack::dispatch_sig(CUser*, PacketBuf&)"
                         ,0,0);
        return uVar4;
      }
    }
    else if (iVar3 == 7) {
      sVar2 = CUser::GetPvpIndex(param_1);
      this_00 = (CGameManager *)G_CGameManager();
      iVar3 = CGameManager::GetPvp(this_00,(int)sVar2,param_1,0);
      if (iVar3 == 0) {
        uVar4 = LineFunc(0x9bc1,
                         "virtual int DisPatcher_ReportClient4Hack::dispatch_sig(CUser*, PacketBuf&)"
                         ,0,0);
        return uVar4;
      }
    }
    else {
      if (iVar3 != 8) goto LAB_082042fc;
      iVar3 = CUser::GetWarRoom(param_1);
      if (iVar3 == 0) {
        uVar4 = LineFunc(0x9bc5,
                         "virtual int DisPatcher_ReportClient4Hack::dispatch_sig(CUser*, PacketBuf&)"
                         ,0,0);
        return uVar4;
      }
    }
  }
  pCVar5 = (CHackAnalyzer *)CUser::getHackAnalyzer(param_1);
  WongWork::CHackAnalyzer::analyzeHackReport(pCVar5,param_1,param_2);
  return 0;
}
```
