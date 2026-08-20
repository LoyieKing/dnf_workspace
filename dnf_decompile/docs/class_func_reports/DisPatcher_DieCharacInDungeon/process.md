# process

`_ZN29DisPatcher_DieCharacInDungeon7processEP5CUserR8MSG_BASER9ParamBase`

`DisPatcher_DieCharacInDungeon::process(CUser*, MSG_BASE&, ParamBase&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_DieCharacInDungeon` | `0x081c2a12` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081c2a12  _ZN29DisPatcher_DieCharacInDungeon7processEP5CUserR8MSG_BASER9ParamBase
#           DisPatcher_DieCharacInDungeon::process(CUser*, MSG_BASE&, ParamBase&)
# range [0x081c2a12, 0x081c2ba9]
081c2a12 +0x000:  push   %ebp
081c2a13 +0x001:  mov    %esp,%ebp
081c2a15 +0x003:  push   %esi
081c2a16 +0x004:  push   %ebx
081c2a17 +0x005:  sub    $0x30,%esp
081c2a1a +0x008:  mov    0x14(%ebp),%eax
081c2a1d +0x00b:  mov    %eax,-0x1c(%ebp)
081c2a20 +0x00e:  mov    0x10(%ebp),%eax
081c2a23 +0x011:  mov    %eax,0x8(%esp)
081c2a27 +0x015:  mov    0xc(%ebp),%eax
081c2a2a +0x018:  mov    %eax,0x4(%esp)
081c2a2e +0x01c:  mov    0x8(%ebp),%eax
081c2a31 +0x01f:  mov    %eax,(%esp)
081c2a34 +0x022:  call   081c2bc0 <_ZN29DisPatcher_DieCharacInDungeon11check_errorEP5CUserR8MSG_BASE>  ; DisPatcher_DieCharacInDungeon::check_error(CUser*, MSG_BASE&)
081c2a39 +0x027:  mov    %eax,%edx
081c2a3b +0x029:  mov    -0x1c(%ebp),%eax
081c2a3e +0x02c:  mov    %edx,0x4(%eax)
081c2a41 +0x02f:  mov    -0x1c(%ebp),%eax
081c2a44 +0x032:  mov    0x4(%eax),%eax
081c2a47 +0x035:  test   %eax,%eax
081c2a49 +0x037:  jle    081c2a55 <+0x43>
081c2a4b +0x039:  mov    $0x0,%eax
081c2a50 +0x03e:  jmp    081c2ba2 <+0x190>
081c2a55 +0x043:  mov    -0x1c(%ebp),%eax
081c2a58 +0x046:  mov    0x4(%eax),%eax
081c2a5b +0x049:  test   %eax,%eax
081c2a5d +0x04b:  jns    081c2a91 <+0x7f>
081c2a5f +0x04d:  mov    0xc(%ebp),%eax
081c2a62 +0x050:  mov    %eax,(%esp)
081c2a65 +0x053:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
081c2a6a +0x058:  mov    -0x1c(%ebp),%edx
081c2a6d +0x05b:  mov    0x4(%edx),%edx
081c2a70 +0x05e:  mov    %eax,0xc(%esp)
081c2a74 +0x062:  mov    %edx,0x8(%esp)
081c2a78 +0x066:  movl   $&_ZZN29DisPatcher_DieCharacInDungeon7processEP5CUserR8MSG_BASER9ParamBaseE19__PRETTY_FUNCTION__,0x4(%esp)
081c2a80 +0x06e:  movl   $0xcbb,(%esp)
081c2a87 +0x075:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081c2a8c +0x07a:  jmp    081c2ba2 <+0x190>
081c2a91 +0x07f:  mov    0x10(%ebp),%eax
081c2a94 +0x082:  mov    %eax,-0x18(%ebp)
081c2a97 +0x085:  mov    -0x18(%ebp),%eax
081c2a9a +0x088:  movzwl 0xf(%eax),%eax
081c2a9e +0x08c:  movzwl %ax,%esi
081c2aa1 +0x08f:  mov    -0x18(%ebp),%eax
081c2aa4 +0x092:  movzwl 0xd(%eax),%eax
081c2aa8 +0x096:  movzwl %ax,%ebx
081c2aab +0x099:  mov    0xc(%ebp),%eax
081c2aae +0x09c:  mov    %eax,(%esp)
081c2ab1 +0x09f:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
081c2ab6 +0x0a4:  mov    0xc(%ebp),%edx
081c2ab9 +0x0a7:  add    $0x79700,%edx
081c2abf +0x0ad:  mov    %esi,0xc(%esp)
081c2ac3 +0x0b1:  mov    %ebx,0x8(%esp)
081c2ac7 +0x0b5:  mov    %eax,0x4(%esp)
081c2acb +0x0b9:  mov    %edx,(%esp)
081c2ace +0x0bc:  call   08684dfa <_ZN15cUserHistoryLog9CharacDieEPKctt>  ; cUserHistoryLog::CharacDie(char const*, unsigned short, unsigned short)
081c2ad3 +0x0c1:  mov    0xc(%ebp),%eax
081c2ad6 +0x0c4:  mov    %eax,(%esp)
081c2ad9 +0x0c7:  call   0822fe4e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x54f8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x54f8
081c2ade +0x0cc:  movswl %ax,%ebx
081c2ae1 +0x0cf:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
081c2ae6 +0x0d4:  mov    %ebx,0x4(%esp)
081c2aea +0x0d8:  mov    %eax,(%esp)
081c2aed +0x0db:  call   08294f32 <_ZN12CGameManager8GetPartyEi>  ; CGameManager::GetParty(int)
081c2af2 +0x0e0:  mov    %eax,-0x14(%ebp)
081c2af5 +0x0e3:  mov    0xc(%ebp),%eax
081c2af8 +0x0e6:  mov    %eax,(%esp)
081c2afb +0x0e9:  call   08146824 <_ZN6Global14CBossTowerFunc18DieCharacInDungeonEP5CUser>  ; Global::CBossTowerFunc::DieCharacInDungeon(CUser*)
081c2b00 +0x0ee:  test   %al,%al
081c2b02 +0x0f0:  je     081c2b0e <+0xfc>
081c2b04 +0x0f2:  mov    $0x0,%eax
081c2b09 +0x0f7:  jmp    081c2ba2 <+0x190>
081c2b0e +0x0fc:  mov    0xc(%ebp),%eax
081c2b11 +0x0ff:  mov    %eax,(%esp)
081c2b14 +0x102:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081c2b19 +0x107:  cmp    $0xd,%eax
081c2b1c +0x10a:  sete   %al
081c2b1f +0x10d:  test   %al,%al
081c2b21 +0x10f:  je     081c2b2e <+0x11c>
081c2b23 +0x111:  mov    0xc(%ebp),%eax
081c2b26 +0x114:  mov    %eax,(%esp)
081c2b29 +0x117:  call   08130ab2 <_ZN12advancealtar7Manager9dieCharacEP5CUser>  ; advancealtar::Manager::dieCharac(CUser*)
081c2b2e +0x11c:  mov    0xc(%ebp),%eax
081c2b31 +0x11f:  mov    %eax,(%esp)
081c2b34 +0x122:  call   0865514c <_ZN5CUser8GetPartyEv>  ; CUser::GetParty()
081c2b39 +0x127:  mov    %eax,-0x10(%ebp)
081c2b3c +0x12a:  cmpl   $0x0,-0x10(%ebp)
081c2b40 +0x12e:  je     081c2b85 <+0x173>
081c2b42 +0x130:  mov    -0x10(%ebp),%eax
081c2b45 +0x133:  mov    0xcac(%eax),%eax
081c2b4b +0x139:  mov    %eax,-0xc(%ebp)
081c2b4e +0x13c:  cmpl   $0x0,-0xc(%ebp)
081c2b52 +0x140:  je     081c2b85 <+0x173>
081c2b54 +0x142:  mov    -0xc(%ebp),%eax
081c2b57 +0x145:  movzbl 0x89f(%eax),%eax
081c2b5e +0x14c:  test   %al,%al
081c2b60 +0x14e:  jle    081c2b85 <+0x173>
081c2b62 +0x150:  mov    0xc(%ebp),%eax
081c2b65 +0x153:  mov    %eax,0x4(%esp)
081c2b69 +0x157:  mov    -0x10(%ebp),%eax
081c2b6c +0x15a:  mov    %eax,(%esp)
081c2b6f +0x15d:  call   085b8e5c <_ZN6CParty18BloodHandleDieUserEP5CUser>  ; CParty::BloodHandleDieUser(CUser*)
081c2b74 +0x162:  mov    -0x1c(%ebp),%eax
081c2b77 +0x165:  movl   $0x7fffffff,0x4(%eax)
081c2b7e +0x16c:  mov    $0x0,%eax
081c2b83 +0x171:  jmp    081c2ba2 <+0x190>
081c2b85 +0x173:  cmpl   $0x0,-0x14(%ebp)
081c2b89 +0x177:  je     081c2b9d <+0x18b>
081c2b8b +0x179:  mov    0xc(%ebp),%eax
081c2b8e +0x17c:  mov    %eax,0x4(%esp)
081c2b92 +0x180:  mov    -0x14(%ebp),%eax
081c2b95 +0x183:  mov    %eax,(%esp)
081c2b98 +0x186:  call   085a7828 <_ZN6CParty8die_userEP5CUser>  ; CParty::die_user(CUser*)
081c2b9d +0x18b:  mov    $0x0,%eax
081c2ba2 +0x190:  add    $0x30,%esp
081c2ba5 +0x193:  pop    %ebx
081c2ba6 +0x194:  pop    %esi
081c2ba7 +0x195:  pop    %ebp
081c2ba8 +0x196:  ret
081c2ba9 +0x197:  nop
```

## 反编译 C

```c
// DisPatcher_DieCharacInDungeon::process @ 0x81c2a12

/* DisPatcher_DieCharacInDungeon::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
DisPatcher_DieCharacInDungeon::process
          (DisPatcher_DieCharacInDungeon *this,CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  ushort uVar1;
  ushort uVar2;
  char cVar3;
  undefined4 uVar4;
  uint uVar5;
  char *pcVar6;
  int iVar7;
  CParty *this_00;
  CParty *this_01;
  
  uVar4 = check_error((CUser *)this,(MSG_BASE *)param_1);
  *(undefined4 *)(param_3 + 4) = uVar4;
  if (*(int *)(param_3 + 4) < 1) {
    if (*(int *)(param_3 + 4) < 0) {
      uVar5 = CUser::get_acc_id(param_1);
      uVar4 = LineFunc(0xcbb,
                       "virtual int DisPatcher_DieCharacInDungeon::process(CUser*, MSG_BASE&, ParamBase&)"
                       ,*(int *)(param_3 + 4),uVar5);
    }
    else {
      uVar1 = *(ushort *)(param_2 + 0xf);
      uVar2 = *(ushort *)(param_2 + 0xd);
      pcVar6 = (char *)CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
      cUserHistoryLog::CharacDie((cUserHistoryLog *)(param_1 + 0x79700),pcVar6,uVar2,uVar1);
      CUser::GetPartyIndex(param_1);
      iVar7 = G_CGameManager();
      this_00 = (CParty *)CGameManager::GetParty(iVar7);
      cVar3 = Global::CBossTowerFunc::DieCharacInDungeon(param_1);
      if (cVar3 == '\0') {
        iVar7 = CUser::get_state(param_1);
        if (iVar7 == 0xd) {
          advancealtar::Manager::dieCharac(param_1);
        }
        this_01 = (CParty *)CUser::GetParty(param_1);
        if (((this_01 == (CParty *)0x0) || (*(int *)(this_01 + 0xcac) == 0)) ||
           (*(char *)(*(int *)(this_01 + 0xcac) + 0x89f) < '\x01')) {
          if (this_00 != (CParty *)0x0) {
            CParty::die_user(this_00,param_1);
          }
          uVar4 = 0;
        }
        else {
          CParty::BloodHandleDieUser(this_01,param_1);
          *(undefined4 *)(param_3 + 4) = 0x7fffffff;
          uVar4 = 0;
        }
      }
      else {
        uVar4 = 0;
      }
    }
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}
```
