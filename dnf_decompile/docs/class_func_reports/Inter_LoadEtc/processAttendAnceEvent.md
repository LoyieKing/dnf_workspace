# processAttendAnceEvent

`_ZN13Inter_LoadEtc22processAttendAnceEventEP20SIG_ATTENDANCE_EVENTR5CUser`

`Inter_LoadEtc::processAttendAnceEvent(SIG_ATTENDANCE_EVENT*, CUser&)`

| 类 | 地址 |
|---|---|
| `Inter_LoadEtc` | `0x084e807e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084e807e  _ZN13Inter_LoadEtc22processAttendAnceEventEP20SIG_ATTENDANCE_EVENTR5CUser
#           Inter_LoadEtc::processAttendAnceEvent(SIG_ATTENDANCE_EVENT*, CUser&)
# range [0x084e807e, 0x084e8349]
084e807e +0x000:  push   %ebp
084e807f +0x001:  mov    %esp,%ebp
084e8081 +0x003:  push   %edi
084e8082 +0x004:  push   %esi
084e8083 +0x005:  push   %ebx
084e8084 +0x006:  sub    $0x1ac,%esp
084e808a +0x00c:  mov    0xc(%ebp),%eax
084e808d +0x00f:  movzbl (%eax),%eax
084e8090 +0x012:  xor    $0x1,%eax
084e8093 +0x015:  test   %al,%al
084e8095 +0x017:  jne    084e8335 <+0x2b7>
084e809b +0x01d:  mov    &_ZN10GlobalData15s_event_managerE,%eax
084e80a0 +0x022:  movl   $0x60,0x4(%esp)
084e80a8 +0x02a:  mov    %eax,(%esp)
084e80ab +0x02d:  call   08115998 <_ZN13CEventManager14GetRepeatEventEi>  ; CEventManager::GetRepeatEvent(int)
084e80b0 +0x032:  mov    (%eax),%edx
084e80b2 +0x034:  add    $0x34,%edx
084e80b5 +0x037:  mov    (%edx),%edx
084e80b7 +0x039:  movl   $0x0,0x4(%esp)
084e80bf +0x041:  mov    %eax,(%esp)
084e80c2 +0x044:  call   *%edx
084e80c4 +0x046:  xor    $0x1,%eax
084e80c7 +0x049:  test   %al,%al
084e80c9 +0x04b:  jne    084e8338 <+0x2ba>
084e80cf +0x051:  mov    &_ZN10GlobalData15s_event_managerE,%eax
084e80d4 +0x056:  movl   $0x60,0x4(%esp)
084e80dc +0x05e:  mov    %eax,(%esp)
084e80df +0x061:  call   08115998 <_ZN13CEventManager14GetRepeatEventEi>  ; CEventManager::GetRepeatEvent(int)
084e80e4 +0x066:  mov    %eax,-0x28(%ebp)
084e80e7 +0x069:  cmpl   $0x0,-0x28(%ebp)
084e80eb +0x06d:  je     084e833b <+0x2bd>
084e80f1 +0x073:  lea    -0x7a(%ebp),%eax
084e80f4 +0x076:  mov    %eax,(%esp)
084e80f7 +0x079:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
084e80fc +0x07e:  mov    -0x28(%ebp),%eax
084e80ff +0x081:  mov    %eax,(%esp)
084e8102 +0x084:  call   080c8446 <_ZN15AttendanceEvent13getRewordItemEv>  ; AttendanceEvent::getRewordItem()
084e8107 +0x089:  mov    %eax,-0x24(%ebp)
084e810a +0x08c:  movl   $0x1,-0x20(%ebp)
084e8111 +0x093:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
084e8116 +0x098:  mov    -0x24(%ebp),%edx
084e8119 +0x09b:  mov    %edx,0x4(%esp)
084e811d +0x09f:  mov    %eax,(%esp)
084e8120 +0x0a2:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
084e8125 +0x0a7:  mov    %eax,-0x1c(%ebp)
084e8128 +0x0aa:  cmpl   $0x0,-0x1c(%ebp)
084e812c +0x0ae:  je     084e833e <+0x2c0>
084e8132 +0x0b4:  mov    -0x24(%ebp),%eax
084e8135 +0x0b7:  mov    %eax,-0x78(%ebp)
084e8138 +0x0ba:  mov    -0x1c(%ebp),%eax
084e813b +0x0bd:  mov    (%eax),%eax
084e813d +0x0bf:  add    $0x8,%eax
084e8140 +0x0c2:  mov    (%eax),%edx
084e8142 +0x0c4:  lea    -0x7a(%ebp),%eax
084e8145 +0x0c7:  mov    %eax,0x4(%esp)
084e8149 +0x0cb:  mov    -0x1c(%ebp),%eax
084e814c +0x0ce:  mov    %eax,(%esp)
084e814f +0x0d1:  call   *%edx
084e8151 +0x0d3:  movl   $0x1,0x4(%esp)
084e8159 +0x0db:  lea    -0x7a(%ebp),%eax
084e815c +0x0de:  mov    %eax,(%esp)
084e815f +0x0e1:  call   080cb884 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6d1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6d1
084e8164 +0x0e6:  lea    -0x17a(%ebp),%edx
084e816a +0x0ec:  mov    $0x100,%ebx
084e816f +0x0f1:  mov    $0x0,%eax
084e8174 +0x0f6:  mov    %edx,%ecx
084e8176 +0x0f8:  and    $0x2,%ecx
084e8179 +0x0fb:  test   %ecx,%ecx
084e817b +0x0fd:  je     084e8186 <+0x108>
084e817d +0x0ff:  mov    %ax,(%edx)
084e8180 +0x102:  add    $0x2,%edx
084e8183 +0x105:  sub    $0x2,%ebx
084e8186 +0x108:  mov    %ebx,%ecx
084e8188 +0x10a:  shr    $0x2,%ecx
084e818b +0x10d:  mov    %edx,%edi
084e818d +0x10f:  rep stos %eax,%es:(%edi)
084e818f +0x111:  mov    %edi,%edx
084e8191 +0x113:  mov    %ebx,%ecx
084e8193 +0x115:  and    $0x2,%ecx
084e8196 +0x118:  test   %ecx,%ecx
084e8198 +0x11a:  je     084e81a0 <+0x122>
084e819a +0x11c:  mov    %ax,(%edx)
084e819d +0x11f:  add    $0x2,%edx
084e81a0 +0x122:  mov    %ebx,%ecx
084e81a2 +0x124:  and    $0x1,%ecx
084e81a5 +0x127:  test   %ecx,%ecx
084e81a7 +0x129:  je     084e81ae <+0x130>
084e81a9 +0x12b:  mov    %al,(%edx)
084e81ab +0x12d:  add    $0x1,%edx
084e81ae +0x130:  lea    -0x3d(%ebp),%eax
084e81b1 +0x133:  mov    $0x15,%edx
084e81b6 +0x138:  mov    $0x0,%ecx
084e81bb +0x13d:  mov    %eax,%ebx
084e81bd +0x13f:  and    $0x1,%ebx
084e81c0 +0x142:  test   %ebx,%ebx
084e81c2 +0x144:  je     084e81cc <+0x14e>
084e81c4 +0x146:  mov    %cl,(%eax)
084e81c6 +0x148:  add    $0x1,%eax
084e81c9 +0x14b:  sub    $0x1,%edx
084e81cc +0x14e:  mov    %eax,%ebx
084e81ce +0x150:  and    $0x2,%ebx
084e81d1 +0x153:  test   %ebx,%ebx
084e81d3 +0x155:  je     084e81de <+0x160>
084e81d5 +0x157:  mov    %cx,(%eax)
084e81d8 +0x15a:  add    $0x2,%eax
084e81db +0x15d:  sub    $0x2,%edx
084e81de +0x160:  mov    %edx,%esi
084e81e0 +0x162:  and    $0xfffffffc,%esi
084e81e3 +0x165:  mov    $0x0,%ebx
084e81e8 +0x16a:  mov    %ecx,(%eax,%ebx,1)
084e81eb +0x16d:  add    $0x4,%ebx
084e81ee +0x170:  cmp    %esi,%ebx
084e81f0 +0x172:  jb     084e81e8 <+0x16a>
084e81f2 +0x174:  add    %ebx,%eax
084e81f4 +0x176:  mov    %edx,%ebx
084e81f6 +0x178:  and    $0x2,%ebx
084e81f9 +0x17b:  test   %ebx,%ebx
084e81fb +0x17d:  je     084e8203 <+0x185>
084e81fd +0x17f:  mov    %cx,(%eax)
084e8200 +0x182:  add    $0x2,%eax
084e8203 +0x185:  and    $0x1,%edx
084e8206 +0x188:  test   %edx,%edx
084e8208 +0x18a:  je     084e820f <+0x191>
084e820a +0x18c:  mov    %cl,(%eax)
084e820c +0x18e:  add    $0x1,%eax
084e820f +0x191:  movl   $0x0,0xc(%esp)
084e8217 +0x199:  movl   $"game_server_msg_276",0x8(%esp)
084e821f +0x1a1:  movl   $0x4,0x4(%esp)
084e8227 +0x1a9:  movl   $&g_scriptStringManager_,(%esp)
084e822e +0x1b0:  call   08aa6448 <_ZN23RDARScriptStringManager17findChangedStringEiPKcPb>  ; RDARScriptStringManager::findChangedString(int, char const*, bool*)
084e8233 +0x1b5:  movl   $0xff,0x8(%esp)
084e823b +0x1bd:  mov    %eax,0x4(%esp)
084e823f +0x1c1:  lea    -0x17a(%ebp),%eax
084e8245 +0x1c7:  mov    %eax,(%esp)
084e8248 +0x1ca:  call   0807d8d0 <_init+0x1c8>
084e824d +0x1cf:  movl   $0x0,0xc(%esp)
084e8255 +0x1d7:  movl   $"game_server_msg_275",0x8(%esp)
084e825d +0x1df:  movl   $0x4,0x4(%esp)
084e8265 +0x1e7:  movl   $&g_scriptStringManager_,(%esp)
084e826c +0x1ee:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
084e8271 +0x1f3:  movl   $0x14,0x8(%esp)
084e8279 +0x1fb:  mov    %eax,0x4(%esp)
084e827d +0x1ff:  lea    -0x3d(%ebp),%eax
084e8280 +0x202:  mov    %eax,(%esp)
084e8283 +0x205:  call   0807d8d0 <_init+0x1c8>
084e8288 +0x20a:  mov    0x10(%ebp),%eax
084e828b +0x20d:  mov    %eax,(%esp)
084e828e +0x210:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
084e8293 +0x215:  mov    %eax,%ebx
084e8295 +0x217:  lea    -0x17a(%ebp),%eax
084e829b +0x21d:  mov    %eax,(%esp)
084e829e +0x220:  call   0807e3b0 <_init+0xca8>
084e82a3 +0x225:  mov    %eax,%esi
084e82a5 +0x227:  mov    0x10(%ebp),%eax
084e82a8 +0x22a:  mov    %eax,(%esp)
084e82ab +0x22d:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
084e82b0 +0x232:  movl   $0x0,0x24(%esp)
084e82b8 +0x23a:  movl   $0x0,0x20(%esp)
084e82c0 +0x242:  mov    %ebx,0x1c(%esp)
084e82c4 +0x246:  movl   $0x0,0x18(%esp)
084e82cc +0x24e:  mov    %esi,0x14(%esp)
084e82d0 +0x252:  lea    -0x17a(%ebp),%edx
084e82d6 +0x258:  mov    %edx,0x10(%esp)
084e82da +0x25c:  mov    %eax,0xc(%esp)
084e82de +0x260:  movl   $0x0,0x8(%esp)
084e82e6 +0x268:  lea    -0x7a(%ebp),%eax
084e82e9 +0x26b:  mov    %eax,0x4(%esp)
084e82ed +0x26f:  lea    -0x3d(%ebp),%eax
084e82f0 +0x272:  mov    %eax,(%esp)
084e82f3 +0x275:  call   085555e8 <_ZN8WongWork14CMailBoxHelper22ReqDBSendNewSystemMailEPKcRK10Inven_ItemjjS2_ij17ENUM_SERVER_GROUPbb>  ; WongWork::CMailBoxHelper::ReqDBSendNewSystemMail(char const*, Inven_Item const&, unsigned int, unsigned int, char const*, int, unsigned int, ENUM_SERVER_GROUP, bool, bool)
084e82f8 +0x27a:  mov    0x10(%ebp),%eax
084e82fb +0x27d:  mov    %eax,(%esp)
084e82fe +0x280:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
084e8303 +0x285:  mov    %eax,%esi
084e8305 +0x287:  mov    0x10(%ebp),%eax
084e8308 +0x28a:  mov    %eax,(%esp)
084e830b +0x28d:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
084e8310 +0x292:  mov    %eax,%ebx
084e8312 +0x294:  mov    0x10(%ebp),%eax
084e8315 +0x297:  mov    %eax,(%esp)
084e8318 +0x29a:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
084e831d +0x29f:  mov    %esi,0x8(%esp)
084e8321 +0x2a3:  mov    %ebx,0x4(%esp)
084e8325 +0x2a7:  mov    %eax,(%esp)
084e8328 +0x2aa:  call   08448afe <_ZN24DB_InsertAttendanceEvent11makeRequestEijj>  ; DB_InsertAttendanceEvent::makeRequest(int, unsigned int, unsigned int)
084e832d +0x2af:  mov    0xc(%ebp),%eax
084e8330 +0x2b2:  movb   $0x0,(%eax)
084e8333 +0x2b5:  jmp    084e833f <+0x2c1>
084e8335 +0x2b7:  nop
084e8336 +0x2b8:  jmp    084e833f <+0x2c1>
084e8338 +0x2ba:  nop
084e8339 +0x2bb:  jmp    084e833f <+0x2c1>
084e833b +0x2bd:  nop
084e833c +0x2be:  jmp    084e833f <+0x2c1>
084e833e +0x2c0:  nop
084e833f +0x2c1:  add    $0x1ac,%esp
084e8345 +0x2c7:  pop    %ebx
084e8346 +0x2c8:  pop    %esi
084e8347 +0x2c9:  pop    %edi
084e8348 +0x2ca:  pop    %ebp
084e8349 +0x2cb:  ret
```

## 反编译 C

```c
// Inter_LoadEtc::processAttendAnceEvent @ 0x84e807e

/* WARNING: Removing unreachable block (ram,0x084e81a9) */
/* Inter_LoadEtc::processAttendAnceEvent(SIG_ATTENDANCE_EVENT*, CUser&) */

void __thiscall
Inter_LoadEtc::processAttendAnceEvent
          (Inter_LoadEtc *this,SIG_ATTENDANCE_EVENT *param_1,CUser *param_2)

{
  char *pcVar1;
  char cVar2;
  int *piVar3;
  CDataManager *this_00;
  char *pcVar4;
  undefined4 uVar5;
  size_t sVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  byte bVar12;
  char local_17e [256];
  Inven_Item local_7e [2];
  int local_7c;
  char local_41;
  char local_40 [20];
  int local_2c;
  int local_28;
  undefined4 local_24;
  int *local_20;
  
  bVar12 = 0;
  if (*param_1 == (SIG_ATTENDANCE_EVENT)0x1) {
    piVar3 = (int *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0x60);
    cVar2 = (**(code **)(*piVar3 + 0x34))(piVar3,0);
    if ((cVar2 == '\x01') &&
       (local_2c = CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0x60), local_2c != 0))
    {
      Inven_Item::Inven_Item(local_7e);
      local_28 = AttendanceEvent::getRewordItem();
      local_24 = 1;
      this_00 = (CDataManager *)G_CDataManager();
      local_20 = (int *)CDataManager::find_item(this_00,local_28);
      if (local_20 != (int *)0x0) {
        local_7c = local_28;
        (**(code **)(*local_20 + 8))(local_20,local_7e);
        Inven_Item::set_add_info(local_7e,1);
        pcVar4 = local_17e;
        uVar9 = 0x100;
        bVar11 = ((uint)pcVar4 & 2) != 0;
        if (bVar11) {
          local_17e[0] = '\0';
          local_17e[1] = '\0';
          pcVar4 = local_17e + 2;
          uVar9 = 0xfe;
        }
        for (uVar9 = uVar9 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
          pcVar4[0] = '\0';
          pcVar4[1] = '\0';
          pcVar4[2] = '\0';
          pcVar4[3] = '\0';
          pcVar4 = pcVar4 + ((uint)bVar12 * -2 + 1) * 4;
        }
        if (bVar11) {
          pcVar4[0] = '\0';
          pcVar4[1] = '\0';
        }
        pcVar4 = &local_41;
        uVar9 = 0x15;
        bVar11 = ((uint)pcVar4 & 1) != 0;
        if (bVar11) {
          local_41 = '\0';
          pcVar4 = local_40;
          uVar9 = 0x14;
        }
        if (((uint)pcVar4 & 2) != 0) {
          pcVar4[0] = '\0';
          pcVar4[1] = '\0';
          pcVar4 = pcVar4 + 2;
          uVar9 = uVar9 - 2;
        }
        uVar10 = 0;
        do {
          pcVar1 = pcVar4 + uVar10;
          pcVar1[0] = '\0';
          pcVar1[1] = '\0';
          pcVar1[2] = '\0';
          pcVar1[3] = '\0';
          uVar10 = uVar10 + 4;
        } while (uVar10 < (uVar9 & 0xfffffffc));
        pcVar4 = pcVar4 + uVar10;
        if ((uVar9 & 2) != 0) {
          pcVar4[0] = '\0';
          pcVar4[1] = '\0';
          pcVar4 = pcVar4 + 2;
        }
        if (!bVar11) {
          *pcVar4 = '\0';
        }
        pcVar4 = (char *)RDARScriptStringManager::findChangedString
                                   ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                    "game_server_msg_276",(bool *)0x0);
        strncpy(local_17e,pcVar4,0xff);
        pcVar4 = (char *)RDARScriptStringManager::findString
                                   ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                    "game_server_msg_275",(bool *)0x0);
        strncpy(&local_41,pcVar4,0x14);
        uVar5 = CUser::GetServerGroup(param_2);
        sVar6 = strlen(local_17e);
        uVar7 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2);
        WongWork::CMailBoxHelper::ReqDBSendNewSystemMail
                  (&local_41,local_7e,0,uVar7,local_17e,sVar6,0,uVar5,0,0);
        uVar9 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2);
        uVar10 = CUser::get_acc_id(param_2);
        iVar8 = CUser::GetUID(param_2);
        DB_InsertAttendanceEvent::makeRequest(iVar8,uVar10,uVar9);
        *param_1 = (SIG_ATTENDANCE_EVENT)0x0;
      }
    }
  }
  return;
}
```
