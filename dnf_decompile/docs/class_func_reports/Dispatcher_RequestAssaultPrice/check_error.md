# check_error

`_ZN30Dispatcher_RequestAssaultPrice11check_errorEP5CUserR8MSG_BASE`

`Dispatcher_RequestAssaultPrice::check_error(CUser*, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_RequestAssaultPrice` | `0x081df084` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081df084  _ZN30Dispatcher_RequestAssaultPrice11check_errorEP5CUserR8MSG_BASE
#           Dispatcher_RequestAssaultPrice::check_error(CUser*, MSG_BASE&)
# range [0x081df084, 0x081df293]
081df084 +0x000:  push   %ebp
081df085 +0x001:  mov    %esp,%ebp
081df087 +0x003:  push   %ebx
081df088 +0x004:  sub    $0x34,%esp
081df08b +0x007:  cmpl   $0x0,0xc(%ebp)
081df08f +0x00b:  jne    081df09b <+0x17>
081df091 +0x00d:  mov    $0xffffffff,%eax
081df096 +0x012:  jmp    081df28e <+0x20a>
081df09b +0x017:  mov    0xc(%ebp),%eax
081df09e +0x01a:  mov    %eax,(%esp)
081df0a1 +0x01d:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081df0a6 +0x022:  cmp    $0x2,%eax
081df0a9 +0x025:  setle  %al
081df0ac +0x028:  test   %al,%al
081df0ae +0x02a:  je     081df0ba <+0x36>
081df0b0 +0x02c:  mov    $0xffffffff,%eax
081df0b5 +0x031:  jmp    081df28e <+0x20a>
081df0ba +0x036:  mov    0x10(%ebp),%eax
081df0bd +0x039:  mov    %eax,-0x14(%ebp)
081df0c0 +0x03c:  mov    -0x14(%ebp),%eax
081df0c3 +0x03f:  movzwl 0xd(%eax),%eax
081df0c7 +0x043:  movzwl %ax,%ebx
081df0ca +0x046:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
081df0cf +0x04b:  mov    %ebx,0x4(%esp)
081df0d3 +0x04f:  mov    %eax,(%esp)
081df0d6 +0x052:  call   086c4b9c <_ZN9GameWorld15find_from_worldEt>  ; GameWorld::find_from_world(unsigned short)
081df0db +0x057:  mov    %eax,-0x10(%ebp)
081df0de +0x05a:  call   085c4be8 <_ZN13private_store26GetInstancePrivateStoreMgrEv>  ; private_store::GetInstancePrivateStoreMgr()
081df0e3 +0x05f:  mov    0xc(%ebp),%edx
081df0e6 +0x062:  mov    %edx,0x4(%esp)
081df0ea +0x066:  mov    %eax,(%esp)
081df0ed +0x069:  call   085cad5e <_ZN13private_store16CPrivateStoreMgr18IsBusyPrivateStoreEP5CUser>  ; private_store::CPrivateStoreMgr::IsBusyPrivateStore(CUser*)
081df0f2 +0x06e:  test   %al,%al
081df0f4 +0x070:  je     081df100 <+0x7c>
081df0f6 +0x072:  mov    $0x3c,%eax
081df0fb +0x077:  jmp    081df28e <+0x20a>
081df100 +0x07c:  mov    0xc(%ebp),%eax
081df103 +0x07f:  mov    %eax,(%esp)
081df106 +0x082:  call   0864781e <_ZN15CUserCharacInfo19IsBusyDisjointStoreEv>  ; CUserCharacInfo::IsBusyDisjointStore()
081df10b +0x087:  test   %al,%al
081df10d +0x089:  je     081df119 <+0x95>
081df10f +0x08b:  mov    $0xbf,%eax
081df114 +0x090:  jmp    081df28e <+0x20a>
081df119 +0x095:  mov    0xc(%ebp),%eax
081df11c +0x098:  mov    %eax,(%esp)
081df11f +0x09b:  call   080da2da <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x477>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x477
081df124 +0x0a0:  test   %al,%al
081df126 +0x0a2:  je     081df132 <+0xae>
081df128 +0x0a4:  mov    $0x13,%eax
081df12d +0x0a9:  jmp    081df28e <+0x20a>
081df132 +0x0ae:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
081df137 +0x0b3:  mov    %eax,(%esp)
081df13a +0x0b6:  call   080f131e <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x3a0>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x3a0
081df13f +0x0bb:  test   %al,%al
081df141 +0x0bd:  je     081df14d <+0xc9>
081df143 +0x0bf:  mov    $0x13,%eax
081df148 +0x0c4:  jmp    081df28e <+0x20a>
081df14d +0x0c9:  cmpl   $0x0,-0x10(%ebp)
081df151 +0x0cd:  jne    081df15d <+0xd9>
081df153 +0x0cf:  mov    $0x3,%eax
081df158 +0x0d4:  jmp    081df28e <+0x20a>
081df15d +0x0d9:  mov    -0x10(%ebp),%eax
081df160 +0x0dc:  mov    %eax,(%esp)
081df163 +0x0df:  call   0864781e <_ZN15CUserCharacInfo19IsBusyDisjointStoreEv>  ; CUserCharacInfo::IsBusyDisjointStore()
081df168 +0x0e4:  test   %al,%al
081df16a +0x0e6:  je     081df176 <+0xf2>
081df16c +0x0e8:  mov    $0xc0,%eax
081df171 +0x0ed:  jmp    081df28e <+0x20a>
081df176 +0x0f2:  call   082350a0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xa74a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xa74a
081df17b +0x0f7:  movl   $0x0,0x10(%esp)
081df183 +0x0ff:  mov    -0x10(%ebp),%edx
081df186 +0x102:  mov    %edx,0xc(%esp)
081df18a +0x106:  mov    0xc(%ebp),%edx
081df18d +0x109:  mov    %edx,0x8(%esp)
081df191 +0x10d:  movl   $0x4,0x4(%esp)
081df199 +0x115:  mov    %eax,(%esp)
081df19c +0x118:  call   082efe14 <_ZN11pvp_assault11CAssaultMgr25check_party_teleport_userEcP5CUserS2_b>  ; pvp_assault::CAssaultMgr::check_party_teleport_user(char, CUser*, CUser*, bool)
081df1a1 +0x11d:  mov    %eax,-0x18(%ebp)
081df1a4 +0x120:  mov    -0x18(%ebp),%eax
081df1a7 +0x123:  test   %eax,%eax
081df1a9 +0x125:  jle    081df1b3 <+0x12f>
081df1ab +0x127:  mov    -0x18(%ebp),%eax
081df1ae +0x12a:  jmp    081df28e <+0x20a>
081df1b3 +0x12f:  mov    &_ZN10GlobalData22s_pSecuProtectionFieldE,%eax
081df1b8 +0x134:  movl   $0x37,0x8(%esp)
081df1c0 +0x13c:  mov    0xc(%ebp),%edx
081df1c3 +0x13f:  mov    %edx,0x4(%esp)
081df1c7 +0x143:  mov    %eax,(%esp)
081df1ca +0x146:  call   08288a02 <_ZN21CSecu_ProtectionField5CheckEP5CUser18SECURITY_PROTCTION>  ; CSecu_ProtectionField::Check(CUser*, SECURITY_PROTCTION)
081df1cf +0x14b:  mov    %eax,-0xc(%ebp)
081df1d2 +0x14e:  cmpl   $0x0,-0xc(%ebp)
081df1d6 +0x152:  je     081df1e0 <+0x15c>
081df1d8 +0x154:  mov    -0xc(%ebp),%eax
081df1db +0x157:  jmp    081df28e <+0x20a>
081df1e0 +0x15c:  mov    -0x10(%ebp),%eax
081df1e3 +0x15f:  mov    %eax,(%esp)
081df1e6 +0x162:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081df1eb +0x167:  cmp    $0x4,%eax
081df1ee +0x16a:  setg   %al
081df1f1 +0x16d:  test   %al,%al
081df1f3 +0x16f:  je     081df1ff <+0x17b>
081df1f5 +0x171:  mov    $0x7fffffff,%eax
081df1fa +0x176:  jmp    081df28e <+0x20a>
081df1ff +0x17b:  mov    0xc(%ebp),%eax
081df202 +0x17e:  mov    %eax,(%esp)
081df205 +0x181:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
081df20a +0x186:  mov    &_ZN10GlobalData14s_pGMAccounts_E,%edx
081df210 +0x18c:  mov    %eax,0x4(%esp)
081df214 +0x190:  mov    %edx,(%esp)
081df217 +0x193:  call   08109346 <_ZN8WongWork11CGMAccounts4isGMEj>  ; WongWork::CGMAccounts::isGM(unsigned int)
081df21c +0x198:  xor    $0x1,%eax
081df21f +0x19b:  test   %al,%al
081df221 +0x19d:  je     081df24b <+0x1c7>
081df223 +0x19f:  mov    -0x10(%ebp),%eax
081df226 +0x1a2:  mov    %eax,(%esp)
081df229 +0x1a5:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
081df22e +0x1aa:  mov    &_ZN10GlobalData14s_pGMAccounts_E,%edx
081df234 +0x1b0:  mov    %eax,0x4(%esp)
081df238 +0x1b4:  mov    %edx,(%esp)
081df23b +0x1b7:  call   08109346 <_ZN8WongWork11CGMAccounts4isGMEj>  ; WongWork::CGMAccounts::isGM(unsigned int)
081df240 +0x1bc:  test   %al,%al
081df242 +0x1be:  je     081df24b <+0x1c7>
081df244 +0x1c0:  mov    $0x1,%eax
081df249 +0x1c5:  jmp    081df250 <+0x1cc>
081df24b +0x1c7:  mov    $0x0,%eax
081df250 +0x1cc:  test   %al,%al
081df252 +0x1ce:  je     081df25b <+0x1d7>
081df254 +0x1d0:  mov    $0x7fffffff,%eax
081df259 +0x1d5:  jmp    081df28e <+0x20a>
081df25b +0x1d7:  call   082350a0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xa74a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xa74a
081df260 +0x1dc:  lea    -0x18(%ebp),%edx
081df263 +0x1df:  mov    %edx,0xc(%esp)
081df267 +0x1e3:  mov    -0x10(%ebp),%edx
081df26a +0x1e6:  mov    %edx,0x8(%esp)
081df26e +0x1ea:  mov    0xc(%ebp),%edx
081df271 +0x1ed:  mov    %edx,0x4(%esp)
081df275 +0x1f1:  mov    %eax,(%esp)
081df278 +0x1f4:  call   082edfba <_ZN11pvp_assault11CAssaultMgr16OnRequestAssaultEP5CUserS2_Pi>  ; pvp_assault::CAssaultMgr::OnRequestAssault(CUser*, CUser*, int*)
081df27d +0x1f9:  mov    -0x18(%ebp),%eax
081df280 +0x1fc:  test   %eax,%eax
081df282 +0x1fe:  je     081df289 <+0x205>
081df284 +0x200:  mov    -0x18(%ebp),%eax
081df287 +0x203:  jmp    081df28e <+0x20a>
081df289 +0x205:  mov    $0x0,%eax
081df28e +0x20a:  add    $0x34,%esp
081df291 +0x20d:  pop    %ebx
081df292 +0x20e:  pop    %ebp
081df293 +0x20f:  ret
```

## 反编译 C

```c
// Dispatcher_RequestAssaultPrice::check_error @ 0x81df084

/* Dispatcher_RequestAssaultPrice::check_error(CUser*, MSG_BASE&) */

int __thiscall
Dispatcher_RequestAssaultPrice::check_error
          (Dispatcher_RequestAssaultPrice *this,CUser *param_1,MSG_BASE *param_2)

{
  ushort uVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  GameWorld *pGVar5;
  CPrivateStoreMgr *this_00;
  CAssaultMgr *pCVar6;
  uint uVar7;
  int local_1c;
  MSG_BASE *local_18;
  CUserCharacInfo *local_14;
  int local_10;
  
  if (param_1 == (CUser *)0x0) {
    return -1;
  }
  iVar4 = CUser::get_state(param_1);
  if (iVar4 < 3) {
    return -1;
  }
  local_18 = param_2;
  uVar1 = *(ushort *)(param_2 + 0xd);
  pGVar5 = (GameWorld *)G_GameWorld();
  local_14 = (CUserCharacInfo *)GameWorld::find_from_world(pGVar5,uVar1);
  this_00 = (CPrivateStoreMgr *)private_store::GetInstancePrivateStoreMgr();
  cVar3 = private_store::CPrivateStoreMgr::IsBusyPrivateStore(this_00,param_1);
  if (cVar3 != '\0') {
    return 0x3c;
  }
  cVar3 = CUserCharacInfo::IsBusyDisjointStore((CUserCharacInfo *)param_1);
  if (cVar3 != '\0') {
    return 0xbf;
  }
  cVar3 = CUserCharacInfo::IsCurCharacGhost((CUserCharacInfo *)param_1);
  if (cVar3 != '\0') {
    return 0x13;
  }
  pGVar5 = (GameWorld *)G_GameWorld();
  cVar3 = GameWorld::IsIntegratedPvPBaseChannel(pGVar5);
  if (cVar3 != '\0') {
    return 0x13;
  }
  if (local_14 == (CUserCharacInfo *)0x0) {
    return 3;
  }
  cVar3 = CUserCharacInfo::IsBusyDisjointStore(local_14);
  if (cVar3 != '\0') {
    return 0xc0;
  }
  pCVar6 = (CAssaultMgr *)pvp_assault::GetInstanceAssaultMgr();
  local_1c = pvp_assault::CAssaultMgr::check_party_teleport_user
                       (pCVar6,'\x04',param_1,(CUser *)local_14,false);
  if (0 < local_1c) {
    return local_1c;
  }
  local_10 = CSecu_ProtectionField::Check(GlobalData::s_pSecuProtectionField,param_1,0x37);
  if (local_10 != 0) {
    return local_10;
  }
  iVar4 = CUser::get_state((CUser *)local_14);
  if (4 < iVar4) {
    return 0x7fffffff;
  }
  uVar7 = CUser::get_acc_id(param_1);
  cVar3 = WongWork::CGMAccounts::isGM(GlobalData::s_pGMAccounts_,uVar7);
  if (cVar3 != '\x01') {
    uVar7 = CUser::get_acc_id((CUser *)local_14);
    cVar3 = WongWork::CGMAccounts::isGM(GlobalData::s_pGMAccounts_,uVar7);
    if (cVar3 != '\0') {
      bVar2 = true;
      goto LAB_081df250;
    }
  }
  bVar2 = false;
LAB_081df250:
  if (bVar2) {
    local_1c = 0x7fffffff;
  }
  else {
    pCVar6 = (CAssaultMgr *)pvp_assault::GetInstanceAssaultMgr();
    pvp_assault::CAssaultMgr::OnRequestAssault(pCVar6,param_1,(CUser *)local_14,&local_1c);
    if (local_1c == 0) {
      local_1c = 0;
    }
  }
  return local_1c;
}
```
