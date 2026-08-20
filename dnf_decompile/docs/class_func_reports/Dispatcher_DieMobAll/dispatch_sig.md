# dispatch_sig

`_ZN20Dispatcher_DieMobAll12dispatch_sigEP5CUserR9PacketBuf`

`Dispatcher_DieMobAll::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_DieMobAll` | `0x081ecce6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081ecce6  _ZN20Dispatcher_DieMobAll12dispatch_sigEP5CUserR9PacketBuf
#           Dispatcher_DieMobAll::dispatch_sig(CUser*, PacketBuf&)
# range [0x081ecce6, 0x081ece63]
081ecce6 +0x000:  push   %ebp
081ecce7 +0x001:  mov    %esp,%ebp
081ecce9 +0x003:  push   %ebx
081eccea +0x004:  sub    $0x34,%esp
081ecced +0x007:  mov    0xc(%ebp),%eax
081eccf0 +0x00a:  mov    %eax,(%esp)
081eccf3 +0x00d:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081eccf8 +0x012:  cmp    $0x5,%eax
081eccfb +0x015:  sete   %al
081eccfe +0x018:  test   %al,%al
081ecd00 +0x01a:  je     081ece59 <+0x173>
081ecd06 +0x020:  mov    0xc(%ebp),%eax
081ecd09 +0x023:  mov    %eax,(%esp)
081ecd0c +0x026:  call   0822fe4e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x54f8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x54f8
081ecd11 +0x02b:  movswl %ax,%ebx
081ecd14 +0x02e:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
081ecd19 +0x033:  mov    %ebx,0x4(%esp)
081ecd1d +0x037:  mov    %eax,(%esp)
081ecd20 +0x03a:  call   08294f32 <_ZN12CGameManager8GetPartyEi>  ; CGameManager::GetParty(int)
081ecd25 +0x03f:  mov    %eax,-0xc(%ebp)
081ecd28 +0x042:  cmpl   $0x0,-0xc(%ebp)
081ecd2c +0x046:  jne    081ecd57 <+0x71>
081ecd2e +0x048:  movl   $0x0,0xc(%esp)
081ecd36 +0x050:  movl   $0x0,0x8(%esp)
081ecd3e +0x058:  movl   $&_ZZN20Dispatcher_DieMobAll12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081ecd46 +0x060:  movl   $0x6ef6,(%esp)
081ecd4d +0x067:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081ecd52 +0x06c:  jmp    081ece5e <+0x178>
081ecd57 +0x071:  mov    -0xc(%ebp),%eax
081ecd5a +0x074:  add    $0xb24,%eax
081ecd5f +0x079:  mov    %eax,(%esp)
081ecd62 +0x07c:  call   0822d08c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2736>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2736
081ecd67 +0x081:  xor    $0x1,%eax
081ecd6a +0x084:  test   %al,%al
081ecd6c +0x086:  je     081ece59 <+0x173>
081ecd72 +0x08c:  mov    -0xc(%ebp),%eax
081ecd75 +0x08f:  mov    0xcac(%eax),%eax
081ecd7b +0x095:  test   %eax,%eax
081ecd7d +0x097:  jne    081ecdbe <+0xd8>
081ecd7f +0x099:  mov    0xc(%ebp),%eax
081ecd82 +0x09c:  mov    %eax,(%esp)
081ecd85 +0x09f:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
081ecd8a +0x0a4:  movl   $0x0,0x14(%esp)
081ecd92 +0x0ac:  movl   $0x0,0x10(%esp)
081ecd9a +0x0b4:  movl   $0x1,0xc(%esp)
081ecda2 +0x0bc:  movl   $0xcc,0x8(%esp)
081ecdaa +0x0c4:  mov    0xc(%ebp),%edx
081ecdad +0x0c7:  mov    %edx,0x4(%esp)
081ecdb1 +0x0cb:  mov    %eax,(%esp)
081ecdb4 +0x0ce:  call   080f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>  ; WongWork::CHackAnalyzer::addServerHackCnt(CUser*, WongWork::ENUM_HACKTYPE, unsigned int, unsigned int, unsigned int)
081ecdb9 +0x0d3:  jmp    081ece59 <+0x173>
081ecdbe +0x0d8:  mov    0xc(%ebp),%eax
081ecdc1 +0x0db:  mov    %eax,(%esp)
081ecdc4 +0x0de:  call   0865514c <_ZN5CUser8GetPartyEv>  ; CUser::GetParty()
081ecdc9 +0x0e3:  mov    0xcac(%eax),%eax
081ecdcf +0x0e9:  mov    %eax,(%esp)
081ecdd2 +0x0ec:  call   080fdcf0 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x1c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x1c
081ecdd7 +0x0f1:  cmp    $0x2afe,%eax
081ecddc +0x0f6:  sete   %al
081ecddf +0x0f9:  test   %al,%al
081ecde1 +0x0fb:  je     081ece1f <+0x139>
081ecde3 +0x0fd:  mov    0xc(%ebp),%eax
081ecde6 +0x100:  mov    %eax,(%esp)
081ecde9 +0x103:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
081ecdee +0x108:  movl   $0x0,0x14(%esp)
081ecdf6 +0x110:  movl   $0x2,0x10(%esp)
081ecdfe +0x118:  movl   $0x1,0xc(%esp)
081ece06 +0x120:  movl   $0xcc,0x8(%esp)
081ece0e +0x128:  mov    0xc(%ebp),%edx
081ece11 +0x12b:  mov    %edx,0x4(%esp)
081ece15 +0x12f:  mov    %eax,(%esp)
081ece18 +0x132:  call   080f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>  ; WongWork::CHackAnalyzer::addServerHackCnt(CUser*, WongWork::ENUM_HACKTYPE, unsigned int, unsigned int, unsigned int)
081ece1d +0x137:  jmp    081ece59 <+0x173>
081ece1f +0x139:  mov    0xc(%ebp),%eax
081ece22 +0x13c:  mov    %eax,(%esp)
081ece25 +0x13f:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
081ece2a +0x144:  movl   $0x0,0x14(%esp)
081ece32 +0x14c:  movl   $0x0,0x10(%esp)
081ece3a +0x154:  movl   $0x1,0xc(%esp)
081ece42 +0x15c:  movl   $0xcc,0x8(%esp)
081ece4a +0x164:  mov    0xc(%ebp),%edx
081ece4d +0x167:  mov    %edx,0x4(%esp)
081ece51 +0x16b:  mov    %eax,(%esp)
081ece54 +0x16e:  call   080f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>  ; WongWork::CHackAnalyzer::addServerHackCnt(CUser*, WongWork::ENUM_HACKTYPE, unsigned int, unsigned int, unsigned int)
081ece59 +0x173:  mov    $0x0,%eax
081ece5e +0x178:  add    $0x34,%esp
081ece61 +0x17b:  pop    %ebx
081ece62 +0x17c:  pop    %ebp
081ece63 +0x17d:  ret
```

## 反编译 C

```c
// Dispatcher_DieMobAll::dispatch_sig @ 0x81ecce6

/* Dispatcher_DieMobAll::dispatch_sig(CUser*, PacketBuf&) */

undefined4 Dispatcher_DieMobAll::dispatch_sig(CUser *param_1,PacketBuf *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  CHackAnalyzer *pCVar4;
  
  iVar2 = CUser::get_state((CUser *)param_2);
  if (iVar2 == 5) {
    CUser::GetPartyIndex((CUser *)param_2);
    iVar2 = G_CGameManager();
    iVar2 = CGameManager::GetParty(iVar2);
    if (iVar2 == 0) {
      uVar3 = LineFunc(0x6ef6,"virtual int Dispatcher_DieMobAll::dispatch_sig(CUser*, PacketBuf&)",0
                       ,0);
      return uVar3;
    }
    cVar1 = CBattle_Field::IsClearDungeon((CBattle_Field *)(iVar2 + 0xb24));
    if (cVar1 != '\x01') {
      if (*(int *)(iVar2 + 0xcac) == 0) {
        pCVar4 = (CHackAnalyzer *)CUser::getHackAnalyzer((CUser *)param_2);
        WongWork::CHackAnalyzer::addServerHackCnt(pCVar4,param_2,0xcc,1,0,0);
      }
      else {
        iVar2 = CUser::GetParty((CUser *)param_2);
        iVar2 = CDungeon::get_index(*(CDungeon **)(iVar2 + 0xcac));
        if (iVar2 == 0x2afe) {
          pCVar4 = (CHackAnalyzer *)CUser::getHackAnalyzer((CUser *)param_2);
          WongWork::CHackAnalyzer::addServerHackCnt(pCVar4,param_2,0xcc,1,2,0);
        }
        else {
          pCVar4 = (CHackAnalyzer *)CUser::getHackAnalyzer((CUser *)param_2);
          WongWork::CHackAnalyzer::addServerHackCnt(pCVar4,param_2,0xcc,1,0,0);
        }
      }
    }
  }
  return 0;
}
```
