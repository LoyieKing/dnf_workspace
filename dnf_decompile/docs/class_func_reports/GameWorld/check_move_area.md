# check_move_area

`_ZN9GameWorld15check_move_areaEP5CUseriiiiibi`

`GameWorld::check_move_area(CUser*, int, int, int, int, int, bool, int)`

| 类 | 地址 |
|---|---|
| `GameWorld` | `0x086d1002` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086d1002  _ZN9GameWorld15check_move_areaEP5CUseriiiiibi
#           GameWorld::check_move_area(CUser*, int, int, int, int, int, bool, int)
# range [0x086d1002, 0x086d12b1]
086d1002 +0x000:  push   %ebp
086d1003 +0x001:  mov    %esp,%ebp
086d1005 +0x003:  sub    $0x48,%esp
086d1008 +0x006:  mov    0x24(%ebp),%eax
086d100b +0x009:  mov    %al,-0x2c(%ebp)
086d100e +0x00c:  mov    0xc(%ebp),%eax
086d1011 +0x00f:  mov    %eax,(%esp)
086d1014 +0x012:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
086d1019 +0x017:  cmp    $0x3,%eax
086d101c +0x01a:  setne  %al
086d101f +0x01d:  test   %al,%al
086d1021 +0x01f:  je     086d102d <+0x2b>
086d1023 +0x021:  mov    $0x13,%eax
086d1028 +0x026:  jmp    086d12af <+0x2ad>
086d102d +0x02b:  mov    0xc(%ebp),%eax
086d1030 +0x02e:  mov    %eax,(%esp)
086d1033 +0x031:  call   080da2fe <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x49b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x49b
086d1038 +0x036:  test   %al,%al
086d103a +0x038:  je     086d1046 <+0x44>
086d103c +0x03a:  mov    $0xda,%eax
086d1041 +0x03f:  jmp    086d12af <+0x2ad>
086d1046 +0x044:  mov    0xc(%ebp),%eax
086d1049 +0x047:  mov    %eax,(%esp)
086d104c +0x04a:  call   0864781e <_ZN15CUserCharacInfo19IsBusyDisjointStoreEv>  ; CUserCharacInfo::IsBusyDisjointStore()
086d1051 +0x04f:  test   %al,%al
086d1053 +0x051:  je     086d105f <+0x5d>
086d1055 +0x053:  mov    $0xbf,%eax
086d105a +0x058:  jmp    086d12af <+0x2ad>
086d105f +0x05d:  call   085c4be8 <_ZN13private_store26GetInstancePrivateStoreMgrEv>  ; private_store::GetInstancePrivateStoreMgr()
086d1064 +0x062:  mov    0xc(%ebp),%edx
086d1067 +0x065:  mov    %edx,0x4(%esp)
086d106b +0x069:  mov    %eax,(%esp)
086d106e +0x06c:  call   085cad5e <_ZN13private_store16CPrivateStoreMgr18IsBusyPrivateStoreEP5CUser>  ; private_store::CPrivateStoreMgr::IsBusyPrivateStore(CUser*)
086d1073 +0x071:  test   %al,%al
086d1075 +0x073:  je     086d1081 <+0x7f>
086d1077 +0x075:  mov    $0x3c,%eax
086d107c +0x07a:  jmp    086d12af <+0x2ad>
086d1081 +0x07f:  mov    0xc(%ebp),%eax
086d1084 +0x082:  mov    %eax,(%esp)
086d1087 +0x085:  call   0822f8d4 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4f7e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4f7e
086d108c +0x08a:  test   %eax,%eax
086d108e +0x08c:  setne  %al
086d1091 +0x08f:  test   %al,%al
086d1093 +0x091:  je     086d10bc <+0xba>
086d1095 +0x093:  mov    0xc(%ebp),%eax
086d1098 +0x096:  mov    %eax,(%esp)
086d109b +0x099:  call   0822f8d4 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4f7e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4f7e
086d10a0 +0x09e:  mov    %eax,(%esp)
086d10a3 +0x0a1:  call   08234796 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9e40>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9e40
086d10a8 +0x0a6:  cmp    $0x1,%eax
086d10ab +0x0a9:  sete   %al
086d10ae +0x0ac:  test   %al,%al
086d10b0 +0x0ae:  je     086d10bc <+0xba>
086d10b2 +0x0b0:  mov    $0x38,%eax
086d10b7 +0x0b5:  jmp    086d12af <+0x2ad>
086d10bc +0x0ba:  movl   $0x0,-0x1c(%ebp)
086d10c3 +0x0c1:  mov    0xc(%ebp),%eax
086d10c6 +0x0c4:  mov    %eax,(%esp)
086d10c9 +0x0c7:  call   0822f6d2 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4d7c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4d7c
086d10ce +0x0cc:  test   %eax,%eax
086d10d0 +0x0ce:  setne  %al
086d10d3 +0x0d1:  test   %al,%al
086d10d5 +0x0d3:  je     086d10e1 <+0xdf>
086d10d7 +0x0d5:  mov    $0x9c,%eax
086d10dc +0x0da:  jmp    086d12af <+0x2ad>
086d10e1 +0x0df:  mov    0xc(%ebp),%eax
086d10e4 +0x0e2:  mov    %eax,(%esp)
086d10e7 +0x0e5:  call   080da2da <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x477>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x477
086d10ec +0x0ea:  test   %al,%al
086d10ee +0x0ec:  je     086d111a <+0x118>
086d10f0 +0x0ee:  mov    &_ZN10GlobalData15s_power_managerE,%eax
086d10f5 +0x0f3:  mov    %eax,(%esp)
086d10f8 +0x0f6:  call   0847f910 <_ZN13CPowerManager17IsPowerWarEventOnEv>  ; CPowerManager::IsPowerWarEventOn()
086d10fd +0x0fb:  xor    $0x1,%eax
086d1100 +0x0fe:  test   %al,%al
086d1102 +0x100:  je     086d111a <+0x118>
086d1104 +0x102:  mov    0xc(%ebp),%eax
086d1107 +0x105:  mov    %eax,(%esp)
086d110a +0x108:  call   08645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>  ; CUserCharacInfo::getCurCharacVill() const
086d110f +0x10d:  cmp    $0x7,%al
086d1111 +0x10f:  je     086d111a <+0x118>
086d1113 +0x111:  mov    $0x1,%eax
086d1118 +0x116:  jmp    086d111f <+0x11d>
086d111a +0x118:  mov    $0x0,%eax
086d111f +0x11d:  test   %al,%al
086d1121 +0x11f:  je     086d112d <+0x12b>
086d1123 +0x121:  mov    $0x9f,%eax
086d1128 +0x126:  jmp    086d12af <+0x2ad>
086d112d +0x12b:  mov    0xc(%ebp),%eax
086d1130 +0x12e:  mov    %eax,(%esp)
086d1133 +0x131:  call   0814589c <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x31f>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x31f
086d1138 +0x136:  xor    $0x1,%eax
086d113b +0x139:  test   %al,%al
086d113d +0x13b:  je     086d1175 <+0x173>
086d113f +0x13d:  mov    0xc(%ebp),%eax
086d1142 +0x140:  mov    %eax,(%esp)
086d1145 +0x143:  call   0822fcc6 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5370>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5370
086d114a +0x148:  movsbl %al,%eax
086d114d +0x14b:  mov    %eax,0xc(%esp)
086d1151 +0x14f:  mov    0x14(%ebp),%eax
086d1154 +0x152:  mov    %eax,0x8(%esp)
086d1158 +0x156:  mov    0x10(%ebp),%eax
086d115b +0x159:  mov    %eax,0x4(%esp)
086d115f +0x15d:  mov    0x8(%ebp),%eax
086d1162 +0x160:  mov    %eax,(%esp)
086d1165 +0x163:  call   086c592c <_ZN9GameWorld18IsPowerWarSafeZoneEii20ENUM_POWER_SIDE_TYPE>  ; GameWorld::IsPowerWarSafeZone(int, int, ENUM_POWER_SIDE_TYPE)
086d116a +0x168:  test   %al,%al
086d116c +0x16a:  je     086d1175 <+0x173>
086d116e +0x16c:  mov    $0x1,%eax
086d1173 +0x171:  jmp    086d117a <+0x178>
086d1175 +0x173:  mov    $0x0,%eax
086d117a +0x178:  test   %al,%al
086d117c +0x17a:  je     086d1188 <+0x186>
086d117e +0x17c:  mov    $0x4,%eax
086d1183 +0x181:  jmp    086d12af <+0x2ad>
086d1188 +0x186:  mov    0xc(%ebp),%eax
086d118b +0x189:  mov    %eax,(%esp)
086d118e +0x18c:  call   08645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>  ; CUserCharacInfo::getCurCharacVill() const
086d1193 +0x191:  movsbl %al,%eax
086d1196 +0x194:  mov    %eax,-0x18(%ebp)
086d1199 +0x197:  movl   $0x0,0x4(%esp)
086d11a1 +0x19f:  mov    0xc(%ebp),%eax
086d11a4 +0x1a2:  mov    %eax,(%esp)
086d11a7 +0x1a5:  call   086813be <_ZN5CUser8get_areaEb>  ; CUser::get_area(bool)
086d11ac +0x1aa:  mov    %eax,-0x14(%ebp)
086d11af +0x1ad:  mov    0xc(%ebp),%eax
086d11b2 +0x1b0:  mov    %eax,(%esp)
086d11b5 +0x1b3:  call   0865514c <_ZN5CUser8GetPartyEv>  ; CUser::GetParty()
086d11ba +0x1b8:  mov    %eax,-0x1c(%ebp)
086d11bd +0x1bb:  cmpl   $0x0,-0x1c(%ebp)
086d11c1 +0x1bf:  je     086d11f8 <+0x1f6>
086d11c3 +0x1c1:  mov    -0x1c(%ebp),%eax
086d11c6 +0x1c4:  mov    %eax,(%esp)
086d11c9 +0x1c7:  call   08145780 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x203>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x203
086d11ce +0x1cc:  cmp    0xc(%ebp),%eax
086d11d1 +0x1cf:  sete   %al
086d11d4 +0x1d2:  test   %al,%al
086d11d6 +0x1d4:  je     086d11f8 <+0x1f6>
086d11d8 +0x1d6:  mov    0x10(%ebp),%eax
086d11db +0x1d9:  cmp    -0x18(%ebp),%eax
086d11de +0x1dc:  jne    086d11f8 <+0x1f6>
086d11e0 +0x1de:  mov    0x14(%ebp),%eax
086d11e3 +0x1e1:  cmp    -0x14(%ebp),%eax
086d11e6 +0x1e4:  jne    086d11f8 <+0x1f6>
086d11e8 +0x1e6:  cmpl   $0x2,0x28(%ebp)
086d11ec +0x1ea:  je     086d11f8 <+0x1f6>
086d11ee +0x1ec:  mov    $0x13,%eax
086d11f3 +0x1f1:  jmp    086d12af <+0x2ad>
086d11f8 +0x1f6:  mov    0x14(%ebp),%eax
086d11fb +0x1f9:  mov    %eax,0x8(%esp)
086d11ff +0x1fd:  mov    0x10(%ebp),%eax
086d1202 +0x200:  mov    %eax,0x4(%esp)
086d1206 +0x204:  mov    0x8(%ebp),%eax
086d1209 +0x207:  mov    %eax,(%esp)
086d120c +0x20a:  call   086c49ee <_ZN9GameWorld16check_valid_areaEii>  ; GameWorld::check_valid_area(int, int)
086d1211 +0x20f:  xor    $0x1,%eax
086d1214 +0x212:  test   %al,%al
086d1216 +0x214:  jne    086d1238 <+0x236>
086d1218 +0x216:  mov    -0x14(%ebp),%eax
086d121b +0x219:  mov    %eax,0x8(%esp)
086d121f +0x21d:  mov    -0x18(%ebp),%eax
086d1222 +0x220:  mov    %eax,0x4(%esp)
086d1226 +0x224:  mov    0x8(%ebp),%eax
086d1229 +0x227:  mov    %eax,(%esp)
086d122c +0x22a:  call   086c49ee <_ZN9GameWorld16check_valid_areaEii>  ; GameWorld::check_valid_area(int, int)
086d1231 +0x22f:  xor    $0x1,%eax
086d1234 +0x232:  test   %al,%al
086d1236 +0x234:  je     086d123f <+0x23d>
086d1238 +0x236:  mov    $0x1,%eax
086d123d +0x23b:  jmp    086d1244 <+0x242>
086d123f +0x23d:  mov    $0x0,%eax
086d1244 +0x242:  test   %al,%al
086d1246 +0x244:  je     086d124f <+0x24d>
086d1248 +0x246:  mov    $0x13,%eax
086d124d +0x24b:  jmp    086d12af <+0x2ad>
086d124f +0x24d:  movl   $0x0,-0x10(%ebp)
086d1256 +0x254:  cmpl   $0x0,0x10(%ebp)
086d125a +0x258:  js     086d12aa <+0x2a8>
086d125c +0x25a:  mov    &MAX_VILLAGE_NUM,%eax
086d1261 +0x25f:  cmp    %eax,0x10(%ebp)
086d1264 +0x262:  jge    086d12aa <+0x2a8>
086d1266 +0x264:  mov    0x8(%ebp),%eax
086d1269 +0x267:  mov    0x1c(%eax),%edx
086d126c +0x26a:  mov    0x10(%ebp),%eax
086d126f +0x26d:  imul   $0x34,%eax,%eax
086d1272 +0x270:  lea    (%edx,%eax,1),%eax
086d1275 +0x273:  mov    %eax,-0x10(%ebp)
086d1278 +0x276:  cmpl   $0x0,-0x10(%ebp)
086d127c +0x27a:  je     086d12aa <+0x2a8>
086d127e +0x27c:  movl   $0x0,-0xc(%ebp)
086d1285 +0x283:  mov    0x10(%ebp),%eax
086d1288 +0x286:  mov    %eax,0x4(%esp)
086d128c +0x28a:  mov    0xc(%ebp),%eax
086d128f +0x28d:  mov    %eax,(%esp)
086d1292 +0x290:  call   08678526 <_ZN5CUser13CheckMoveTownEi>  ; CUser::CheckMoveTown(int)
086d1297 +0x295:  mov    %eax,-0xc(%ebp)
086d129a +0x298:  cmpl   $0x0,-0xc(%ebp)
086d129e +0x29c:  setne  %al
086d12a1 +0x29f:  test   %al,%al
086d12a3 +0x2a1:  je     086d12aa <+0x2a8>
086d12a5 +0x2a3:  mov    -0xc(%ebp),%eax
086d12a8 +0x2a6:  jmp    086d12af <+0x2ad>
086d12aa +0x2a8:  mov    $0x0,%eax
086d12af +0x2ad:  leave
086d12b0 +0x2ae:  ret
086d12b1 +0x2af:  nop
```

## 反编译 C

```c
// GameWorld::check_move_area @ 0x86d1002

/* GameWorld::check_move_area(CUser*, int, int, int, int, int, bool, int) */

int GameWorld::check_move_area
              (CUser *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
              bool param_7,int param_8)

{
  bool bVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  CPrivateStoreMgr *this;
  CExpertJob *this_00;
  CParty *this_01;
  int iVar5;
  int in_stack_00000024;
  
  iVar4 = CUser::get_state((CUser *)param_2);
  if (iVar4 != 3) {
    return 0x13;
  }
  cVar2 = CUser::CheckInTrade((CUser *)param_2);
  if (cVar2 != '\0') {
    return 0xda;
  }
  cVar2 = CUserCharacInfo::IsBusyDisjointStore((CUserCharacInfo *)param_2);
  if (cVar2 != '\0') {
    return 0xbf;
  }
  this = (CPrivateStoreMgr *)private_store::GetInstancePrivateStoreMgr();
  cVar2 = private_store::CPrivateStoreMgr::IsBusyPrivateStore(this,(CUser *)param_2);
  if (cVar2 != '\0') {
    return 0x3c;
  }
  iVar4 = CUserCharacInfo::GetCurCharacExpertJob((CUserCharacInfo *)param_2);
  if (iVar4 != 0) {
    this_00 = (CExpertJob *)CUserCharacInfo::GetCurCharacExpertJob((CUserCharacInfo *)param_2);
    iVar4 = expert_job::CExpertJob::GetType(this_00);
    if (iVar4 == 1) {
      return 0x38;
    }
  }
  iVar4 = CUserCharacInfo::GetAssaultPlace((CUserCharacInfo *)param_2);
  if (iVar4 != 0) {
    return 0x9c;
  }
  cVar2 = CUserCharacInfo::IsCurCharacGhost((CUserCharacInfo *)param_2);
  if (((cVar2 == '\0') || (cVar2 = CPowerManager::IsPowerWarEventOn(), cVar2 == '\x01')) ||
     (cVar2 = CUserCharacInfo::getCurCharacVill((CUserCharacInfo *)param_2), cVar2 == '\a')) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    return 0x9f;
  }
  cVar2 = CUser::isGMUser((CUser *)param_2);
  if (cVar2 != '\x01') {
    cVar2 = CUser::getPowerSide((CUser *)param_2);
    cVar2 = IsPowerWarSafeZone((GameWorld *)param_1,param_3,param_4,(int)cVar2);
    if (cVar2 != '\0') {
      bVar1 = true;
      goto LAB_086d117a;
    }
  }
  bVar1 = false;
LAB_086d117a:
  if (bVar1) {
    iVar4 = 4;
  }
  else {
    cVar2 = CUserCharacInfo::getCurCharacVill((CUserCharacInfo *)param_2);
    iVar4 = CUser::get_area((CUser *)param_2,false);
    this_01 = (CParty *)CUser::GetParty((CUser *)param_2);
    if (((this_01 == (CParty *)0x0) || (iVar5 = CParty::getManager(this_01), iVar5 != param_2)) ||
       ((param_3 != cVar2 || ((param_4 != iVar4 || (in_stack_00000024 == 2)))))) {
      cVar3 = check_valid_area((GameWorld *)param_1,param_3,param_4);
      if ((cVar3 == '\x01') &&
         (cVar2 = check_valid_area((GameWorld *)param_1,(int)cVar2,iVar4), cVar2 == '\x01')) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        iVar4 = 0x13;
      }
      else if ((((param_3 < 0) || (MAX_VILLAGE_NUM <= param_3)) ||
               (*(int *)(param_1 + 0x1c) + param_3 * 0x34 == 0)) ||
              (iVar4 = CUser::CheckMoveTown((CUser *)param_2,param_3), iVar4 == 0)) {
        iVar4 = 0;
      }
    }
    else {
      iVar4 = 0x13;
    }
  }
  return iVar4;
}
```
