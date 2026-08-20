# process

`_ZN18DisPatcher_UseCoin7processEP5CUserR8MSG_BASER9ParamBase`

`DisPatcher_UseCoin::process(CUser*, MSG_BASE&, ParamBase&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_UseCoin` | `0x081ca852` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081ca852  _ZN18DisPatcher_UseCoin7processEP5CUserR8MSG_BASER9ParamBase
#           DisPatcher_UseCoin::process(CUser*, MSG_BASE&, ParamBase&)
# range [0x081ca852, 0x081caa41]
081ca852 +0x000:  push   %ebp
081ca853 +0x001:  mov    %esp,%ebp
081ca855 +0x003:  sub    $0x28,%esp
081ca858 +0x006:  mov    0x14(%ebp),%eax
081ca85b +0x009:  mov    %eax,-0x18(%ebp)
081ca85e +0x00c:  mov    0x14(%ebp),%eax
081ca861 +0x00f:  mov    %eax,0xc(%esp)
081ca865 +0x013:  mov    0x10(%ebp),%eax
081ca868 +0x016:  mov    %eax,0x8(%esp)
081ca86c +0x01a:  mov    0xc(%ebp),%eax
081ca86f +0x01d:  mov    %eax,0x4(%esp)
081ca873 +0x021:  mov    0x8(%ebp),%eax
081ca876 +0x024:  mov    %eax,(%esp)
081ca879 +0x027:  call   081ca7d6 <_ZN18DisPatcher_UseCoin11check_errorEP5CUserR8MSG_BASER9ParamBase>  ; DisPatcher_UseCoin::check_error(CUser*, MSG_BASE&, ParamBase&)
081ca87e +0x02c:  mov    %eax,%edx
081ca880 +0x02e:  mov    -0x18(%ebp),%eax
081ca883 +0x031:  mov    %edx,0x4(%eax)
081ca886 +0x034:  mov    -0x18(%ebp),%eax
081ca889 +0x037:  mov    0x4(%eax),%eax
081ca88c +0x03a:  test   %eax,%eax
081ca88e +0x03c:  jle    081ca89a <+0x48>
081ca890 +0x03e:  mov    $0x0,%eax
081ca895 +0x043:  jmp    081caa40 <+0x1ee>
081ca89a +0x048:  mov    -0x18(%ebp),%eax
081ca89d +0x04b:  mov    0x4(%eax),%eax
081ca8a0 +0x04e:  test   %eax,%eax
081ca8a2 +0x050:  jns    081ca8d6 <+0x84>
081ca8a4 +0x052:  mov    0xc(%ebp),%eax
081ca8a7 +0x055:  mov    %eax,(%esp)
081ca8aa +0x058:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
081ca8af +0x05d:  mov    -0x18(%ebp),%edx
081ca8b2 +0x060:  mov    0x4(%edx),%edx
081ca8b5 +0x063:  mov    %eax,0xc(%esp)
081ca8b9 +0x067:  mov    %edx,0x8(%esp)
081ca8bd +0x06b:  movl   $&_ZZN18DisPatcher_UseCoin7processEP5CUserR8MSG_BASER9ParamBaseE19__PRETTY_FUNCTION__,0x4(%esp)
081ca8c5 +0x073:  movl   $0x1f4d,(%esp)
081ca8cc +0x07a:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081ca8d1 +0x07f:  jmp    081caa40 <+0x1ee>
081ca8d6 +0x084:  mov    0x10(%ebp),%eax
081ca8d9 +0x087:  mov    %eax,-0x14(%ebp)
081ca8dc +0x08a:  mov    -0x14(%ebp),%eax
081ca8df +0x08d:  movzwl 0xd(%eax),%edx
081ca8e3 +0x091:  mov    -0x18(%ebp),%eax
081ca8e6 +0x094:  mov    %dx,0x8(%eax)
081ca8ea +0x098:  mov    0xc(%ebp),%eax
081ca8ed +0x09b:  mov    %eax,(%esp)
081ca8f0 +0x09e:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081ca8f5 +0x0a3:  cmp    $0x5,%eax
081ca8f8 +0x0a6:  je     081ca908 <+0xb6>
081ca8fa +0x0a8:  cmp    $0x8,%eax
081ca8fd +0x0ab:  je     081ca9e7 <+0x195>
081ca903 +0x0b1:  jmp    081caa3b <+0x1e9>
081ca908 +0x0b6:  mov    0xc(%ebp),%eax
081ca90b +0x0b9:  mov    %eax,(%esp)
081ca90e +0x0bc:  call   0865514c <_ZN5CUser8GetPartyEv>  ; CUser::GetParty()
081ca913 +0x0c1:  mov    %eax,-0x10(%ebp)
081ca916 +0x0c4:  cmpl   $0x0,-0x10(%ebp)
081ca91a +0x0c8:  jne    081ca94c <+0xfa>
081ca91c +0x0ca:  mov    0xc(%ebp),%eax
081ca91f +0x0cd:  mov    %eax,(%esp)
081ca922 +0x0d0:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
081ca927 +0x0d5:  mov    %eax,0xc(%esp)
081ca92b +0x0d9:  movl   $0x0,0x8(%esp)
081ca933 +0x0e1:  movl   $&_ZZN18DisPatcher_UseCoin7processEP5CUserR8MSG_BASER9ParamBaseE19__PRETTY_FUNCTION__,0x4(%esp)
081ca93b +0x0e9:  movl   $0x1f5a,(%esp)
081ca942 +0x0f0:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081ca947 +0x0f5:  jmp    081caa40 <+0x1ee>
081ca94c +0x0fa:  movl   $0x0,0x4(%esp)
081ca954 +0x102:  mov    -0x10(%ebp),%eax
081ca957 +0x105:  mov    %eax,(%esp)
081ca95a +0x108:  call   085be39a <_ZN6CParty25checkFreeRevivalConditionEPK8CDungeon>  ; CParty::checkFreeRevivalCondition(CDungeon const*)
081ca95f +0x10d:  mov    %al,-0x9(%ebp)
081ca962 +0x110:  movzbl -0x9(%ebp),%eax
081ca966 +0x114:  xor    $0x1,%eax
081ca969 +0x117:  test   %al,%al
081ca96b +0x119:  je     081caa3a <+0x1e8>
081ca971 +0x11f:  mov    0xc(%ebp),%eax
081ca974 +0x122:  mov    %eax,(%esp)
081ca977 +0x125:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
081ca97c +0x12a:  movl   $0x0,0x4(%esp)
081ca984 +0x132:  mov    %eax,(%esp)
081ca987 +0x135:  call   084faa98 <_ZN10CInventory7UseCoinE14eCoinSubReason>  ; CInventory::UseCoin(eCoinSubReason)
081ca98c +0x13a:  mov    0xc(%ebp),%eax
081ca98f +0x13d:  mov    %eax,(%esp)
081ca992 +0x140:  call   0814aa5e <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x7fd>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x7fd
081ca997 +0x145:  movl   $0x0,0xc(%esp)
081ca99f +0x14d:  movl   $0x1,0x8(%esp)
081ca9a7 +0x155:  movl   $0x3,0x4(%esp)
081ca9af +0x15d:  mov    %eax,(%esp)
081ca9b2 +0x160:  call   086abdb0 <_ZN9UserQuest15set_authen_dataE15QUEST_CONDITIONii>  ; UserQuest::set_authen_data(QUEST_CONDITION, int, int)
081ca9b7 +0x165:  mov    -0x10(%ebp),%eax
081ca9ba +0x168:  mov    %eax,(%esp)
081ca9bd +0x16b:  call   0822d8ce <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2f78>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2f78
081ca9c2 +0x170:  movl   $0x0,0xc(%esp)
081ca9ca +0x178:  movl   $0x0,0x8(%esp)
081ca9d2 +0x180:  movl   $0x25,0x4(%esp)
081ca9da +0x188:  mov    0xc(%ebp),%eax
081ca9dd +0x18b:  mov    %eax,(%esp)
081ca9e0 +0x18e:  call   08122390 <_ZN8APSystem9CUserProc24ClearActionAndSendtoUserEP5CUserNS_17_ActionGroupIndexEi16ENUM_PACKETCLASS>  ; APSystem::CUserProc::ClearActionAndSendtoUser(CUser*, APSystem::_ActionGroupIndex, int, ENUM_PACKETCLASS)
081ca9e5 +0x193:  jmp    081caa3b <+0x1e9>
081ca9e7 +0x195:  mov    0xc(%ebp),%eax
081ca9ea +0x198:  mov    %eax,(%esp)
081ca9ed +0x19b:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
081ca9f2 +0x1a0:  movl   $0x4,0x4(%esp)
081ca9fa +0x1a8:  mov    %eax,(%esp)
081ca9fd +0x1ab:  call   084faa98 <_ZN10CInventory7UseCoinE14eCoinSubReason>  ; CInventory::UseCoin(eCoinSubReason)
081caa02 +0x1b0:  mov    0xc(%ebp),%eax
081caa05 +0x1b3:  mov    %eax,(%esp)
081caa08 +0x1b6:  call   0814aa5e <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x7fd>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x7fd
081caa0d +0x1bb:  movl   $0x0,0xc(%esp)
081caa15 +0x1c3:  movl   $0x1,0x8(%esp)
081caa1d +0x1cb:  movl   $0x3,0x4(%esp)
081caa25 +0x1d3:  mov    %eax,(%esp)
081caa28 +0x1d6:  call   086abdb0 <_ZN9UserQuest15set_authen_dataE15QUEST_CONDITIONii>  ; UserQuest::set_authen_data(QUEST_CONDITION, int, int)
081caa2d +0x1db:  mov    0xc(%ebp),%eax
081caa30 +0x1de:  mov    %eax,(%esp)
081caa33 +0x1e1:  call   0823082a <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5ed4>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5ed4
081caa38 +0x1e6:  jmp    081caa3b <+0x1e9>
081caa3a +0x1e8:  nop
081caa3b +0x1e9:  mov    $0x0,%eax
081caa40 +0x1ee:  leave
081caa41 +0x1ef:  ret
```

## 反编译 C

```c
// DisPatcher_UseCoin::process @ 0x81ca852

/* DisPatcher_UseCoin::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
DisPatcher_UseCoin::process
          (DisPatcher_UseCoin *this,CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  CParty *this_00;
  CInventory *pCVar5;
  UserQuest *pUVar6;
  MSG_BASE *pMVar7;
  ParamBase *pPVar8;
  
  pMVar7 = param_2;
  pPVar8 = param_3;
  uVar2 = check_error((CUser *)this,(MSG_BASE *)param_1,(ParamBase *)param_2);
  *(undefined4 *)(param_3 + 4) = uVar2;
  if (*(int *)(param_3 + 4) < 1) {
    if (*(int *)(param_3 + 4) < 0) {
      uVar3 = CUser::get_acc_id(param_1);
      uVar2 = LineFunc(0x1f4d,
                       "virtual int DisPatcher_UseCoin::process(CUser*, MSG_BASE&, ParamBase&)",
                       *(int *)(param_3 + 4),uVar3);
    }
    else {
      *(undefined2 *)(param_3 + 8) = *(undefined2 *)(param_2 + 0xd);
      iVar4 = CUser::get_state(param_1);
      if (iVar4 == 5) {
        this_00 = (CParty *)CUser::GetParty(param_1);
        if (this_00 == (CParty *)0x0) {
          uVar3 = CUser::get_acc_id(param_1);
          uVar2 = LineFunc(0x1f5a,
                           "virtual int DisPatcher_UseCoin::process(CUser*, MSG_BASE&, ParamBase&)",
                           0,uVar3);
          return uVar2;
        }
        cVar1 = CParty::checkFreeRevivalCondition(this_00,(CDungeon *)0x0);
        if (cVar1 != '\x01') {
          pCVar5 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
          CInventory::UseCoin(pCVar5,0);
          pUVar6 = (UserQuest *)CUser::getCurCharacQuestW(param_1);
          UserQuest::set_authen_data(pUVar6,3,1,0);
          CParty::IncreaseUsedCoinCount(this_00);
          APSystem::CUserProc::ClearActionAndSendtoUser(param_1,0x25,0,0);
        }
      }
      else if (iVar4 == 8) {
        pCVar5 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
        CInventory::UseCoin(pCVar5,4,pMVar7,pPVar8);
        pUVar6 = (UserQuest *)CUser::getCurCharacQuestW(param_1);
        UserQuest::set_authen_data(pUVar6,3,1,0);
        CUser::IncreaseUsedCoinCount(param_1);
      }
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
```
