# dispatch_sig

`_ZN22Dispatcher_Select_Card12dispatch_sigEP5CUserR9PacketBuf`

`Dispatcher_Select_Card::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_Select_Card` | `0x081ff7de` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081ff7de  _ZN22Dispatcher_Select_Card12dispatch_sigEP5CUserR9PacketBuf
#           Dispatcher_Select_Card::dispatch_sig(CUser*, PacketBuf&)
# range [0x081ff7de, 0x081ffa55]
081ff7de +0x000:  push   %ebp
081ff7df +0x001:  mov    %esp,%ebp
081ff7e1 +0x003:  push   %ebx
081ff7e2 +0x004:  sub    $0x24,%esp
081ff7e5 +0x007:  mov    0xc(%ebp),%eax
081ff7e8 +0x00a:  mov    %eax,(%esp)
081ff7eb +0x00d:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081ff7f0 +0x012:  cmp    $0x5,%eax
081ff7f3 +0x015:  setne  %al
081ff7f6 +0x018:  test   %al,%al
081ff7f8 +0x01a:  je     081ff804 <+0x26>
081ff7fa +0x01c:  mov    $0x0,%eax
081ff7ff +0x021:  jmp    081ffa4f <+0x271>
081ff804 +0x026:  mov    0xc(%ebp),%eax
081ff807 +0x029:  mov    %eax,(%esp)
081ff80a +0x02c:  call   08690eca <_ZNK5CUser12getMoveSpaceEv>  ; CUser::getMoveSpace() const
081ff80f +0x031:  cmp    $0x1,%eax
081ff812 +0x034:  sete   %al
081ff815 +0x037:  test   %al,%al
081ff817 +0x039:  je     081ff823 <+0x45>
081ff819 +0x03b:  mov    $0x0,%eax
081ff81e +0x040:  jmp    081ffa4f <+0x271>
081ff823 +0x045:  mov    0xc(%ebp),%eax
081ff826 +0x048:  mov    %eax,(%esp)
081ff829 +0x04b:  call   0822fe4e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x54f8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x54f8
081ff82e +0x050:  movswl %ax,%ebx
081ff831 +0x053:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
081ff836 +0x058:  mov    %ebx,0x4(%esp)
081ff83a +0x05c:  mov    %eax,(%esp)
081ff83d +0x05f:  call   08294f32 <_ZN12CGameManager8GetPartyEi>  ; CGameManager::GetParty(int)
081ff842 +0x064:  mov    %eax,-0xc(%ebp)
081ff845 +0x067:  cmpl   $0x0,-0xc(%ebp)
081ff849 +0x06b:  sete   %al
081ff84c +0x06e:  test   %al,%al
081ff84e +0x070:  je     081ff879 <+0x9b>
081ff850 +0x072:  movl   $0x0,0xc(%esp)
081ff858 +0x07a:  movl   $0x0,0x8(%esp)
081ff860 +0x082:  movl   $&_ZZN22Dispatcher_Select_Card12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081ff868 +0x08a:  movl   $0x9371,(%esp)
081ff86f +0x091:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081ff874 +0x096:  jmp    081ffa4f <+0x271>
081ff879 +0x09b:  mov    -0xc(%ebp),%eax
081ff87c +0x09e:  mov    0xcac(%eax),%eax
081ff882 +0x0a4:  test   %eax,%eax
081ff884 +0x0a6:  je     081ff8a2 <+0xc4>
081ff886 +0x0a8:  mov    -0xc(%ebp),%eax
081ff889 +0x0ab:  mov    0xcac(%eax),%eax
081ff88f +0x0b1:  mov    %eax,(%esp)
081ff892 +0x0b4:  call   0822b4fa <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xba4>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xba4
081ff897 +0x0b9:  test   %al,%al
081ff899 +0x0bb:  je     081ff8a2 <+0xc4>
081ff89b +0x0bd:  mov    $0x1,%eax
081ff8a0 +0x0c2:  jmp    081ff8a7 <+0xc9>
081ff8a2 +0x0c4:  mov    $0x0,%eax
081ff8a7 +0x0c9:  test   %al,%al
081ff8a9 +0x0cb:  je     081ff8b5 <+0xd7>
081ff8ab +0x0cd:  mov    $0x0,%eax
081ff8b0 +0x0d2:  jmp    081ffa4f <+0x271>
081ff8b5 +0x0d7:  lea    -0xe(%ebp),%eax
081ff8b8 +0x0da:  mov    %eax,0x4(%esp)
081ff8bc +0x0de:  mov    0x10(%ebp),%eax
081ff8bf +0x0e1:  mov    %eax,(%esp)
081ff8c2 +0x0e4:  call   0858cf22 <_ZN9PacketBuf8get_byteERc>  ; PacketBuf::get_byte(char&)
081ff8c7 +0x0e9:  xor    $0x1,%eax
081ff8ca +0x0ec:  test   %al,%al
081ff8cc +0x0ee:  je     081ff8f7 <+0x119>
081ff8ce +0x0f0:  movl   $0x0,0xc(%esp)
081ff8d6 +0x0f8:  movl   $0x0,0x8(%esp)
081ff8de +0x100:  movl   $&_ZZN22Dispatcher_Select_Card12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081ff8e6 +0x108:  movl   $0x9382,(%esp)
081ff8ed +0x10f:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081ff8f2 +0x114:  jmp    081ffa4f <+0x271>
081ff8f7 +0x119:  movzbl -0xe(%ebp),%eax
081ff8fb +0x11d:  test   %al,%al
081ff8fd +0x11f:  js     081ff907 <+0x129>
081ff8ff +0x121:  movzbl -0xe(%ebp),%eax
081ff903 +0x125:  cmp    $0x1,%al
081ff905 +0x127:  jle    081ff930 <+0x152>
081ff907 +0x129:  movl   $0x0,0xc(%esp)
081ff90f +0x131:  movl   $0x0,0x8(%esp)
081ff917 +0x139:  movl   $&_ZZN22Dispatcher_Select_Card12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081ff91f +0x141:  movl   $0x9384,(%esp)
081ff926 +0x148:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081ff92b +0x14d:  jmp    081ffa4f <+0x271>
081ff930 +0x152:  lea    -0xd(%ebp),%eax
081ff933 +0x155:  mov    %eax,0x4(%esp)
081ff937 +0x159:  mov    0x10(%ebp),%eax
081ff93a +0x15c:  mov    %eax,(%esp)
081ff93d +0x15f:  call   0858cf22 <_ZN9PacketBuf8get_byteERc>  ; PacketBuf::get_byte(char&)
081ff942 +0x164:  xor    $0x1,%eax
081ff945 +0x167:  test   %al,%al
081ff947 +0x169:  je     081ff972 <+0x194>
081ff949 +0x16b:  movl   $0x0,0xc(%esp)
081ff951 +0x173:  movl   $0x0,0x8(%esp)
081ff959 +0x17b:  movl   $&_ZZN22Dispatcher_Select_Card12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081ff961 +0x183:  movl   $0x9392,(%esp)
081ff968 +0x18a:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081ff96d +0x18f:  jmp    081ffa4f <+0x271>
081ff972 +0x194:  mov    -0xc(%ebp),%eax
081ff975 +0x197:  mov    %eax,(%esp)
081ff978 +0x19a:  call   0822d89c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2f46>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2f46
081ff97d +0x19f:  cmp    $0x4,%al
081ff97f +0x1a1:  setg   %al
081ff982 +0x1a4:  test   %al,%al
081ff984 +0x1a6:  je     081ff990 <+0x1b2>
081ff986 +0x1a8:  mov    $0x0,%eax
081ff98b +0x1ad:  jmp    081ffa4f <+0x271>
081ff990 +0x1b2:  movl   $0x2,0x4(%esp)
081ff998 +0x1ba:  mov    -0xc(%ebp),%eax
081ff99b +0x1bd:  mov    %eax,(%esp)
081ff99e +0x1c0:  call   085b489c <_ZN6CParty29IsCompleteCardSelectOfMembersE22eClearRewardCardType_t>  ; CParty::IsCompleteCardSelectOfMembers(eClearRewardCardType_t)
081ff9a3 +0x1c5:  xor    $0x1,%eax
081ff9a6 +0x1c8:  test   %al,%al
081ff9a8 +0x1ca:  je     081ff9eb <+0x20d>
081ff9aa +0x1cc:  movzbl -0xe(%ebp),%eax
081ff9ae +0x1d0:  movsbl %al,%edx
081ff9b1 +0x1d3:  movzbl -0xd(%ebp),%eax
081ff9b5 +0x1d7:  movsbl %al,%eax
081ff9b8 +0x1da:  mov    %edx,0xc(%esp)
081ff9bc +0x1de:  mov    %eax,0x8(%esp)
081ff9c0 +0x1e2:  mov    0xc(%ebp),%eax
081ff9c3 +0x1e5:  mov    %eax,0x4(%esp)
081ff9c7 +0x1e9:  mov    -0xc(%ebp),%eax
081ff9ca +0x1ec:  mov    %eax,(%esp)
081ff9cd +0x1ef:  call   085b415a <_ZN6CParty13SetCardNumberEP5CUserc22eClearRewardCardType_t>  ; CParty::SetCardNumber(CUser*, char, eClearRewardCardType_t)
081ff9d2 +0x1f4:  xor    $0x1,%eax
081ff9d5 +0x1f7:  test   %al,%al
081ff9d7 +0x1f9:  je     081ff9e0 <+0x202>
081ff9d9 +0x1fb:  mov    $0x0,%eax
081ff9de +0x200:  jmp    081ffa4f <+0x271>
081ff9e0 +0x202:  mov    -0xc(%ebp),%eax
081ff9e3 +0x205:  mov    %eax,(%esp)
081ff9e6 +0x208:  call   085b44d6 <_ZN6CParty16SendEachCardInfoEv>  ; CParty::SendEachCardInfo()
081ff9eb +0x20d:  mov    0xc(%ebp),%eax
081ff9ee +0x210:  mov    %eax,0x4(%esp)
081ff9f2 +0x214:  mov    -0xc(%ebp),%eax
081ff9f5 +0x217:  mov    %eax,(%esp)
081ff9f8 +0x21a:  call   085b3fd8 <_ZN6CParty22CheckRecvFromAllMemberEP5CUser>  ; CParty::CheckRecvFromAllMember(CUser*)
081ff9fd +0x21f:  xor    $0x1,%eax
081ffa00 +0x222:  test   %al,%al
081ffa02 +0x224:  je     081ffa0b <+0x22d>
081ffa04 +0x226:  mov    $0x0,%eax
081ffa09 +0x22b:  jmp    081ffa4f <+0x271>
081ffa0b +0x22d:  movl   $0x2,0x4(%esp)
081ffa13 +0x235:  mov    -0xc(%ebp),%eax
081ffa16 +0x238:  mov    %eax,(%esp)
081ffa19 +0x23b:  call   085b489c <_ZN6CParty29IsCompleteCardSelectOfMembersE22eClearRewardCardType_t>  ; CParty::IsCompleteCardSelectOfMembers(eClearRewardCardType_t)
081ffa1e +0x240:  xor    $0x1,%eax
081ffa21 +0x243:  test   %al,%al
081ffa23 +0x245:  je     081ffa2c <+0x24e>
081ffa25 +0x247:  mov    $0x0,%eax
081ffa2a +0x24c:  jmp    081ffa4f <+0x271>
081ffa2c +0x24e:  movl   $0x5,0x4(%esp)
081ffa34 +0x256:  mov    -0xc(%ebp),%eax
081ffa37 +0x259:  mov    %eax,(%esp)
081ffa3a +0x25c:  call   0822d8ac <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2f56>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2f56
081ffa3f +0x261:  mov    -0xc(%ebp),%eax
081ffa42 +0x264:  mov    %eax,(%esp)
081ffa45 +0x267:  call   085ab736 <_ZN6CParty13dungeon_clearEv>  ; CParty::dungeon_clear()
081ffa4a +0x26c:  mov    $0x0,%eax
081ffa4f +0x271:  add    $0x24,%esp
081ffa52 +0x274:  pop    %ebx
081ffa53 +0x275:  pop    %ebp
081ffa54 +0x276:  ret
081ffa55 +0x277:  nop
```

## 反编译 C

```c
// Dispatcher_Select_Card::dispatch_sig @ 0x81ff7de

/* Dispatcher_Select_Card::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_Select_Card::dispatch_sig(Dispatcher_Select_Card *this,CUser *param_1,PacketBuf *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  char local_12;
  char local_11;
  CParty *local_10;
  
  iVar3 = CUser::get_state(param_1);
  if (iVar3 != 5) {
    return 0;
  }
  iVar3 = CUser::getMoveSpace(param_1);
  if (iVar3 != 1) {
    CUser::GetPartyIndex(param_1);
    iVar3 = G_CGameManager();
    local_10 = (CParty *)CGameManager::GetParty(iVar3);
    if (local_10 == (CParty *)0x0) {
      uVar4 = LineFunc(0x9371,"virtual int Dispatcher_Select_Card::dispatch_sig(CUser*, PacketBuf&)"
                       ,0,0);
      return uVar4;
    }
    if ((*(int *)(local_10 + 0xcac) == 0) ||
       (cVar2 = CDungeon::isTowerOfDespairDungeon(*(CDungeon **)(local_10 + 0xcac)), cVar2 == '\0'))
    {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      uVar4 = 0;
    }
    else {
      cVar2 = PacketBuf::get_byte(param_2,&local_12);
      if (cVar2 == '\x01') {
        if ((local_12 < '\0') || ('\x01' < local_12)) {
          uVar4 = LineFunc(0x9384,
                           "virtual int Dispatcher_Select_Card::dispatch_sig(CUser*, PacketBuf&)",0,
                           0);
        }
        else {
          cVar2 = PacketBuf::get_byte(param_2,&local_11);
          if (cVar2 == '\x01') {
            cVar2 = CParty::get_dungeon_clear_state(local_10);
            if (cVar2 < '\x05') {
              cVar2 = CParty::IsCompleteCardSelectOfMembers(local_10,2);
              if (cVar2 != '\x01') {
                cVar2 = CParty::SetCardNumber(local_10,param_1,(int)local_11,(int)local_12);
                if (cVar2 != '\x01') {
                  return 0;
                }
                CParty::SendEachCardInfo(local_10);
              }
              cVar2 = CParty::CheckRecvFromAllMember(local_10,param_1);
              if (cVar2 == '\x01') {
                cVar2 = CParty::IsCompleteCardSelectOfMembers(local_10,2);
                if (cVar2 == '\x01') {
                  CParty::set_dungeon_clear_state(local_10,'\x05');
                  CParty::dungeon_clear(local_10);
                  uVar4 = 0;
                }
                else {
                  uVar4 = 0;
                }
              }
              else {
                uVar4 = 0;
              }
            }
            else {
              uVar4 = 0;
            }
          }
          else {
            uVar4 = LineFunc(0x9392,
                             "virtual int Dispatcher_Select_Card::dispatch_sig(CUser*, PacketBuf&)",
                             0,0);
          }
        }
      }
      else {
        uVar4 = LineFunc(0x9382,
                         "virtual int Dispatcher_Select_Card::dispatch_sig(CUser*, PacketBuf&)",0,0)
        ;
      }
    }
    return uVar4;
  }
  return 0;
}
```
