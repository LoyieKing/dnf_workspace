# dispatch_sig

`_ZN29TimerCheckHumanCertifyTimeout12dispatch_sigEiij`

`TimerCheckHumanCertifyTimeout::dispatch_sig(int, int, unsigned int)`

| 类 | 地址 |
|---|---|
| `TimerCheckHumanCertifyTimeout` | `0x0863713a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0863713a  _ZN29TimerCheckHumanCertifyTimeout12dispatch_sigEiij
#           TimerCheckHumanCertifyTimeout::dispatch_sig(int, int, unsigned int)
# range [0x0863713a, 0x086372d3]
0863713a +0x000:  push   %ebp
0863713b +0x001:  mov    %esp,%ebp
0863713d +0x003:  sub    $0x38,%esp
08637140 +0x006:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
08637145 +0x00b:  movl   $0x2,0x8(%esp)
0863714d +0x013:  mov    0xc(%ebp),%edx
08637150 +0x016:  mov    %edx,0x4(%esp)
08637154 +0x01a:  mov    %eax,(%esp)
08637157 +0x01d:  call   082947a4 <_ZN12CGameManager7getUserEii>  ; CGameManager::getUser(int, int)
0863715c +0x022:  mov    %eax,-0xc(%ebp)
0863715f +0x025:  cmpl   $0x0,-0xc(%ebp)
08637163 +0x029:  je     08637175 <+0x3b>
08637165 +0x02b:  mov    -0xc(%ebp),%eax
08637168 +0x02e:  mov    %eax,(%esp)
0863716b +0x031:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
08637170 +0x036:  cmp    $0x1,%eax
08637173 +0x039:  jg     0863717c <+0x42>
08637175 +0x03b:  mov    $0x1,%eax
0863717a +0x040:  jmp    08637181 <+0x47>
0863717c +0x042:  mov    $0x0,%eax
08637181 +0x047:  test   %al,%al
08637183 +0x049:  je     0863718f <+0x55>
08637185 +0x04b:  mov    $0x0,%eax
0863718a +0x050:  jmp    086372d1 <+0x197>
0863718f +0x055:  mov    -0xc(%ebp),%eax
08637192 +0x058:  mov    %eax,(%esp)
08637195 +0x05b:  call   0823021a <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x58c4>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x58c4
0863719a +0x060:  test   %al,%al
0863719c +0x062:  je     086371b4 <+0x7a>
0863719e +0x064:  mov    -0xc(%ebp),%eax
086371a1 +0x067:  mov    %eax,(%esp)
086371a4 +0x06a:  call   0863bf72 <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x483>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x483
086371a9 +0x06f:  test   %al,%al
086371ab +0x071:  je     086371b4 <+0x7a>
086371ad +0x073:  mov    $0x1,%eax
086371b2 +0x078:  jmp    086371b9 <+0x7f>
086371b4 +0x07a:  mov    $0x0,%eax
086371b9 +0x07f:  test   %al,%al
086371bb +0x081:  je     086371c7 <+0x8d>
086371bd +0x083:  mov    $0x1,%eax
086371c2 +0x088:  jmp    086372d1 <+0x197>
086371c7 +0x08d:  mov    -0xc(%ebp),%eax
086371ca +0x090:  mov    %eax,(%esp)
086371cd +0x093:  call   0863bf82 <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x493>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x493
086371d2 +0x098:  mov    0x10(%ebp),%edx
086371d5 +0x09b:  cmp    %edx,%eax
086371d7 +0x09d:  seta   %al
086371da +0x0a0:  test   %al,%al
086371dc +0x0a2:  je     086371e8 <+0xae>
086371de +0x0a4:  mov    $0x1,%eax
086371e3 +0x0a9:  jmp    086372d1 <+0x197>
086371e8 +0x0ae:  mov    -0xc(%ebp),%eax
086371eb +0x0b1:  add    $0x8e3f0,%eax
086371f0 +0x0b6:  mov    %eax,(%esp)
086371f3 +0x0b9:  call   0822eea4 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x454e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x454e
086371f8 +0x0be:  mov    -0xc(%ebp),%edx
086371fb +0x0c1:  add    $0x79700,%edx
08637201 +0x0c7:  movl   $0x3,0x8(%esp)
08637209 +0x0cf:  mov    %eax,0x4(%esp)
0863720d +0x0d3:  mov    %edx,(%esp)
08637210 +0x0d6:  call   086853e6 <_ZN15cUserHistoryLog15RequestCleanPadEjc>  ; cUserHistoryLog::RequestCleanPad(unsigned int, char)
08637215 +0x0db:  movl   $0x0,-0x20(%ebp)
0863721c +0x0e2:  movl   $0x0,-0x1c(%ebp)
08637223 +0x0e9:  movl   $0x0,-0x18(%ebp)
0863722a +0x0f0:  movl   $0x0,-0x14(%ebp)
08637231 +0x0f7:  movl   $0x0,-0x10(%ebp)
08637238 +0x0fe:  lea    -0x20(%ebp),%eax
0863723b +0x101:  mov    %eax,0x8(%esp)
0863723f +0x105:  movl   $0x1,0x4(%esp)
08637247 +0x10d:  mov    -0xc(%ebp),%eax
0863724a +0x110:  mov    %eax,(%esp)
0863724d +0x113:  call   0867f4c8 <_ZN5CUser17checkHumanCertifyEiPt>  ; CUser::checkHumanCertify(int, unsigned short*)
08637252 +0x118:  xor    $0x1,%eax
08637255 +0x11b:  test   %al,%al
08637257 +0x11d:  je     086372cc <+0x192>
08637259 +0x11f:  mov    -0xc(%ebp),%eax
0863725c +0x122:  mov    %eax,(%esp)
0863725f +0x125:  call   0863bf72 <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x483>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x483
08637264 +0x12a:  xor    $0x1,%eax
08637267 +0x12d:  test   %al,%al
08637269 +0x12f:  je     086372a9 <+0x16f>
0863726b +0x131:  movl   $0x1,0x4(%esp)
08637273 +0x139:  mov    -0xc(%ebp),%eax
08637276 +0x13c:  mov    %eax,(%esp)
08637279 +0x13f:  call   0823022a <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x58d4>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x58d4
0863727e +0x144:  movl   $0x0,0x4(%esp)
08637286 +0x14c:  mov    -0xc(%ebp),%eax
08637289 +0x14f:  mov    %eax,(%esp)
0863728c +0x152:  call   08689f12 <_ZN5CUser8SendMailEb>  ; CUser::SendMail(bool)
08637291 +0x157:  mov    -0xc(%ebp),%eax
08637294 +0x15a:  mov    %eax,(%esp)
08637297 +0x15d:  call   082307da <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5e84>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5e84
0863729c +0x162:  mov    -0xc(%ebp),%eax
0863729f +0x165:  mov    %eax,(%esp)
086372a2 +0x168:  call   0867f720 <_ZN5CUser21resetHumanCertifyDataEv>  ; CUser::resetHumanCertifyData()
086372a7 +0x16d:  jmp    086372cc <+0x192>
086372a9 +0x16f:  movl   $0x0,0xc(%esp)
086372b1 +0x177:  movl   $0x1,0x8(%esp)
086372b9 +0x17f:  movl   $0x34,0x4(%esp)
086372c1 +0x187:  mov    -0xc(%ebp),%eax
086372c4 +0x18a:  mov    %eax,(%esp)
086372c7 +0x18d:  call   086489f4 <_ZN5CUser10DisConnSigE11DISCONN_SIGbi>  ; CUser::DisConnSig(DISCONN_SIG, bool, int)
086372cc +0x192:  mov    $0x1,%eax
086372d1 +0x197:  leave
086372d2 +0x198:  ret
086372d3 +0x199:  nop
```

## 反编译 C

```c
// TimerCheckHumanCertifyTimeout::dispatch_sig @ 0x863713a

/* TimerCheckHumanCertifyTimeout::dispatch_sig(int, int, unsigned int) */

undefined4 TimerCheckHumanCertifyTimeout::dispatch_sig(int param_1,int param_2,uint param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  ushort local_24 [10];
  CUser *local_10;
  
  iVar3 = G_CGameManager();
  local_10 = (CUser *)CGameManager::getUser(iVar3,param_2);
  if ((local_10 == (CUser *)0x0) || (iVar3 = CUser::get_state(local_10), iVar3 < 2)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (bVar1) {
    return 0;
  }
  cVar2 = CUser::isHumanCertified(local_10);
  if ((cVar2 == '\0') || (cVar2 = CUser::isSendMailCertified(local_10), cVar2 == '\0')) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if ((!bVar1) && (uVar4 = CUser::getHumanCertifyTimerKey(local_10), uVar4 <= param_3)) {
    uVar4 = WongWork::CMCAPManager::getPoint((CMCAPManager *)(local_10 + 0x8e3f0));
    cUserHistoryLog::RequestCleanPad((cUserHistoryLog *)(local_10 + 0x79700),uVar4,'\x03');
    local_24[0] = 0;
    local_24[1] = 0;
    local_24[2] = 0;
    local_24[3] = 0;
    local_24[4] = 0;
    local_24[5] = 0;
    local_24[6] = 0;
    local_24[7] = 0;
    local_24[8] = 0;
    local_24[9] = 0;
    cVar2 = CUser::checkHumanCertify(local_10,1,local_24);
    if (cVar2 != '\x01') {
      cVar2 = CUser::isSendMailCertified(local_10);
      if (cVar2 == '\x01') {
        CUser::DisConnSig(local_10,0x34,1,0);
      }
      else {
        CUser::setHumanCertified(local_10,true);
        CUser::SendMail(local_10,false);
        CUser::resetCleanpadFailCnt(local_10);
        CUser::resetHumanCertifyData(local_10);
      }
    }
  }
  return 1;
}
```
