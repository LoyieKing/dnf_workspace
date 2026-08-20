# GiftGrowthWeaponBox

`_ZNK16GrowthEquipEvent19GiftGrowthWeaponBoxER5CUser`

`GrowthEquipEvent::GiftGrowthWeaponBox(CUser&) const`

| 类 | 地址 |
|---|---|
| `GrowthEquipEvent` | `0x080f7050` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080f7050  _ZNK16GrowthEquipEvent19GiftGrowthWeaponBoxER5CUser
#           GrowthEquipEvent::GiftGrowthWeaponBox(CUser&) const
# range [0x080f7050, 0x080f7225]
080f7050 +0x000:  push   %ebp
080f7051 +0x001:  mov    %esp,%ebp
080f7053 +0x003:  push   %esi
080f7054 +0x004:  push   %ebx
080f7055 +0x005:  sub    $0x180,%esp
080f705b +0x00b:  mov    0xc(%ebp),%eax
080f705e +0x00e:  mov    %eax,(%esp)
080f7061 +0x011:  call   08691cd0 <_ZN5CUser24getGrowthWeaponEventdataEv>  ; CUser::getGrowthWeaponEventdata()
080f7066 +0x016:  mov    %eax,-0x18(%ebp)
080f7069 +0x019:  mov    -0x18(%ebp),%eax
080f706c +0x01c:  movzbl (%eax),%eax
080f706f +0x01f:  xor    $0x1,%eax
080f7072 +0x022:  test   %al,%al
080f7074 +0x024:  je     080f721c <+0x1cc>
080f707a +0x02a:  mov    -0x18(%ebp),%eax
080f707d +0x02d:  movb   $0x1,(%eax)
080f7080 +0x030:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
080f7085 +0x035:  mov    0x4bc4(%eax),%eax
080f708b +0x03b:  mov    %eax,-0x14(%ebp)
080f708e +0x03e:  lea    -0x55(%ebp),%eax
080f7091 +0x041:  mov    %eax,(%esp)
080f7094 +0x044:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
080f7099 +0x049:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
080f709e +0x04e:  mov    -0x14(%ebp),%edx
080f70a1 +0x051:  mov    %edx,0x4(%esp)
080f70a5 +0x055:  mov    %eax,(%esp)
080f70a8 +0x058:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
080f70ad +0x05d:  mov    %eax,-0x10(%ebp)
080f70b0 +0x060:  movl   $0x0,-0xc(%ebp)
080f70b7 +0x067:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
080f70bc +0x06c:  mov    %eax,(%esp)
080f70bf +0x06f:  call   080f131e <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x3a0>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x3a0
080f70c4 +0x074:  test   %al,%al
080f70c6 +0x076:  je     080f70d8 <+0x88>
080f70c8 +0x078:  mov    0xc(%ebp),%eax
080f70cb +0x07b:  mov    %eax,(%esp)
080f70ce +0x07e:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
080f70d3 +0x083:  mov    %eax,-0xc(%ebp)
080f70d6 +0x086:  jmp    080f70e6 <+0x96>
080f70d8 +0x088:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
080f70dd +0x08d:  mov    0x378(%eax),%eax
080f70e3 +0x093:  mov    %eax,-0xc(%ebp)
080f70e6 +0x096:  cmpl   $0x0,-0x10(%ebp)
080f70ea +0x09a:  je     080f721c <+0x1cc>
080f70f0 +0x0a0:  mov    -0x14(%ebp),%eax
080f70f3 +0x0a3:  mov    %eax,-0x53(%ebp)
080f70f6 +0x0a6:  mov    -0x10(%ebp),%eax
080f70f9 +0x0a9:  mov    (%eax),%eax
080f70fb +0x0ab:  add    $0x8,%eax
080f70fe +0x0ae:  mov    (%eax),%edx
080f7100 +0x0b0:  lea    -0x55(%ebp),%eax
080f7103 +0x0b3:  mov    %eax,0x4(%esp)
080f7107 +0x0b7:  mov    -0x10(%ebp),%eax
080f710a +0x0ba:  mov    %eax,(%esp)
080f710d +0x0bd:  call   *%edx
080f710f +0x0bf:  movl   $0x1,0x4(%esp)
080f7117 +0x0c7:  lea    -0x55(%ebp),%eax
080f711a +0x0ca:  mov    %eax,(%esp)
080f711d +0x0cd:  call   080cb884 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6d1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6d1
080f7122 +0x0d2:  movl   $0x0,0xc(%esp)
080f712a +0x0da:  movl   $"game_server_msg_278",0x8(%esp)
080f7132 +0x0e2:  movl   $0x4,0x4(%esp)
080f713a +0x0ea:  movl   $&g_scriptStringManager_,(%esp)
080f7141 +0x0f1:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
080f7146 +0x0f6:  movl   $0xff,0x8(%esp)
080f714e +0x0fe:  mov    %eax,0x4(%esp)
080f7152 +0x102:  lea    -0x155(%ebp),%eax
080f7158 +0x108:  mov    %eax,(%esp)
080f715b +0x10b:  call   0807d8d0 <_init+0x1c8>
080f7160 +0x110:  mov    -0x53(%ebp),%eax
080f7163 +0x113:  test   %eax,%eax
080f7165 +0x115:  je     080f71f4 <+0x1a4>
080f716b +0x11b:  lea    -0x155(%ebp),%eax
080f7171 +0x121:  mov    %eax,(%esp)
080f7174 +0x124:  call   0807e3b0 <_init+0xca8>
080f7179 +0x129:  mov    %eax,%esi
080f717b +0x12b:  mov    0xc(%ebp),%eax
080f717e +0x12e:  mov    %eax,(%esp)
080f7181 +0x131:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
080f7186 +0x136:  mov    %eax,%ebx
080f7188 +0x138:  movl   $0x0,0xc(%esp)
080f7190 +0x140:  movl   $"game_server_msg_277",0x8(%esp)
080f7198 +0x148:  movl   $0x4,0x4(%esp)
080f71a0 +0x150:  movl   $&g_scriptStringManager_,(%esp)
080f71a7 +0x157:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
080f71ac +0x15c:  movl   $0x0,0x24(%esp)
080f71b4 +0x164:  movl   $0x0,0x20(%esp)
080f71bc +0x16c:  mov    -0xc(%ebp),%edx
080f71bf +0x16f:  mov    %edx,0x1c(%esp)
080f71c3 +0x173:  movl   $0x0,0x18(%esp)
080f71cb +0x17b:  mov    %esi,0x14(%esp)
080f71cf +0x17f:  lea    -0x155(%ebp),%edx
080f71d5 +0x185:  mov    %edx,0x10(%esp)
080f71d9 +0x189:  mov    %ebx,0xc(%esp)
080f71dd +0x18d:  movl   $0x0,0x8(%esp)
080f71e5 +0x195:  lea    -0x55(%ebp),%edx
080f71e8 +0x198:  mov    %edx,0x4(%esp)
080f71ec +0x19c:  mov    %eax,(%esp)
080f71ef +0x19f:  call   085555e8 <_ZN8WongWork14CMailBoxHelper22ReqDBSendNewSystemMailEPKcRK10Inven_ItemjjS2_ij17ENUM_SERVER_GROUPbb>  ; WongWork::CMailBoxHelper::ReqDBSendNewSystemMail(char const*, Inven_Item const&, unsigned int, unsigned int, char const*, int, unsigned int, ENUM_SERVER_GROUP, bool, bool)
080f71f4 +0x1a4:  mov    -0xc(%ebp),%eax
080f71f7 +0x1a7:  movswl %ax,%ebx
080f71fa +0x1aa:  mov    0xc(%ebp),%eax
080f71fd +0x1ad:  mov    %eax,(%esp)
080f7200 +0x1b0:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
080f7205 +0x1b5:  mov    %ebx,0x4(%esp)
080f7209 +0x1b9:  mov    %eax,(%esp)
080f720c +0x1bc:  call   084493e8 <_ZN24DB_EventSaveGrowthWeapon11makeRequestEjs>  ; DB_EventSaveGrowthWeapon::makeRequest(unsigned int, short)
080f7211 +0x1c1:  mov    0xc(%ebp),%eax
080f7214 +0x1c4:  mov    %eax,(%esp)
080f7217 +0x1c7:  call   08690e36 <_ZN5CUser26SendEventMailAlaramTooltipEv>  ; CUser::SendEventMailAlaramTooltip()
080f721c +0x1cc:  add    $0x180,%esp
080f7222 +0x1d2:  pop    %ebx
080f7223 +0x1d3:  pop    %esi
080f7224 +0x1d4:  pop    %ebp
080f7225 +0x1d5:  ret
```

## 反编译 C

```c
// GrowthEquipEvent::GiftGrowthWeaponBox @ 0x80f7050

/* GrowthEquipEvent::GiftGrowthWeaponBox(CUser&) const */

void __thiscall GrowthEquipEvent::GiftGrowthWeaponBox(GrowthEquipEvent *this,CUser *param_1)

{
  char cVar1;
  short sVar2;
  int iVar3;
  CDataManager *this_00;
  GameWorld *this_01;
  char *__src;
  size_t sVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  char local_159 [256];
  Inven_Item local_59 [2];
  int local_57;
  char *local_1c;
  int local_18;
  int *local_14;
  undefined4 local_10;
  
  local_1c = (char *)CUser::getGrowthWeaponEventdata(param_1);
  if (*local_1c != '\x01') {
    *local_1c = '\x01';
    iVar3 = G_CDataManager();
    local_18 = *(int *)(iVar3 + 0x4bc4);
    Inven_Item::Inven_Item(local_59);
    this_00 = (CDataManager *)G_CDataManager();
    local_14 = (int *)CDataManager::find_item(this_00,local_18);
    local_10 = 0;
    this_01 = (GameWorld *)G_GameWorld();
    cVar1 = GameWorld::IsIntegratedPvPBaseChannel(this_01);
    if (cVar1 == '\0') {
      iVar3 = G_CEnvironment();
      local_10 = *(undefined4 *)(iVar3 + 0x378);
    }
    else {
      local_10 = CUser::GetServerGroup(param_1);
    }
    if (local_14 != (int *)0x0) {
      local_57 = local_18;
      (**(code **)(*local_14 + 8))(local_14,local_59);
      Inven_Item::set_add_info(local_59,1);
      __src = (char *)RDARScriptStringManager::findString
                                ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                 "game_server_msg_278",(bool *)0x0);
      strncpy(local_159,__src,0xff);
      if (local_57 != 0) {
        sVar4 = strlen(local_159);
        uVar5 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
        uVar6 = RDARScriptStringManager::findString
                          ((RDARScriptStringManager *)g_scriptStringManager_,4,"game_server_msg_277"
                           ,(bool *)0x0);
        WongWork::CMailBoxHelper::ReqDBSendNewSystemMail
                  (uVar6,local_59,0,uVar5,local_159,sVar4,0,local_10,0,0);
      }
      sVar2 = (short)local_10;
      uVar7 = CUser::get_acc_id(param_1);
      DB_EventSaveGrowthWeapon::makeRequest(uVar7,sVar2);
      CUser::SendEventMailAlaramTooltip(param_1);
    }
  }
  return;
}
```
