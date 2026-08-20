# InsertAvatarItem

`_ZN19DB_AvatarItemInsert16InsertAvatarItemEP17SIG_AVATAR_INSERT`

`DB_AvatarItemInsert::InsertAvatarItem(SIG_AVATAR_INSERT*)`

| 类 | 地址 |
|---|---|
| `DB_AvatarItemInsert` | `0x083ffe0e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 083ffe0e  _ZN19DB_AvatarItemInsert16InsertAvatarItemEP17SIG_AVATAR_INSERT
#           DB_AvatarItemInsert::InsertAvatarItem(SIG_AVATAR_INSERT*)
# range [0x083ffe0e, 0x084001fd]
083ffe0e +0x000:  push   %ebp
083ffe0f +0x001:  mov    %esp,%ebp
083ffe11 +0x003:  push   %edi
083ffe12 +0x004:  push   %esi
083ffe13 +0x005:  push   %ebx
083ffe14 +0x006:  sub    $0xc0ec,%esp
083ffe1a +0x00c:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
083ffe1f +0x011:  movl   $0x0,0x8(%esp)
083ffe27 +0x019:  movl   $0x3,0x4(%esp)
083ffe2f +0x021:  mov    %eax,(%esp)
083ffe32 +0x024:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
083ffe37 +0x029:  mov    %eax,-0x24(%ebp)
083ffe3a +0x02c:  lea    -0xc094(%ebp),%eax
083ffe40 +0x032:  mov    $0xc000,%edx
083ffe45 +0x037:  mov    %edx,0x8(%esp)
083ffe49 +0x03b:  movl   $0x0,0x4(%esp)
083ffe51 +0x043:  mov    %eax,(%esp)
083ffe54 +0x046:  call   0807dcc0 <_init+0x5b8>
083ffe59 +0x04b:  lea    -0xc094(%ebp),%edx
083ffe5f +0x051:  mov    $"inSert into user_items (charac_no,slot,it_id,expire_date,obtain_from,reg_date,ability_no,ipg_agency_no,stat,jewel_socket,hidden_option,emblem_endurance) values(%u,%d,%u,'%s',%d,now(),%d,'%s',%d,'%s',%d,%d)",%eax
083ffe64 +0x056:  mov    $0x33,%ecx
083ffe69 +0x05b:  mov    %edx,%edi
083ffe6b +0x05d:  mov    %eax,%esi
083ffe6d +0x05f:  rep movsl %ds:(%esi),%es:(%edi)
083ffe6f +0x061:  mov    %esi,%eax
083ffe71 +0x063:  mov    %edi,%edx
083ffe73 +0x065:  movzwl (%eax),%ecx
083ffe76 +0x068:  mov    %cx,(%edx)
083ffe79 +0x06b:  add    $0x2,%edx
083ffe7c +0x06e:  add    $0x2,%eax
083ffe7f +0x071:  lea    -0xbfc6(%ebp),%eax
083ffe85 +0x077:  mov    $0x5f32,%edx
083ffe8a +0x07c:  mov    %edx,0x8(%esp)
083ffe8e +0x080:  movl   $0x0,0x4(%esp)
083ffe96 +0x088:  mov    %eax,(%esp)
083ffe99 +0x08b:  call   0807dcc0 <_init+0x5b8>
083ffe9e +0x090:  lea    -0x6094(%ebp),%edx
083ffea4 +0x096:  mov    $"inSert into user_items (charac_no,slot,it_id,expire_date,obtain_from,reg_date,ability_no,ipg_agency_no,stat,jewel_socket,hidden_option,emblem_endurance) values(%u,%d,%u,from_unixtime('%s'),%d,now(),%d,'%s',%d,'%s',%d,%d)",%eax
083ffea9 +0x09b:  mov    $0x37,%ecx
083ffeae +0x0a0:  mov    %edx,%edi
083ffeb0 +0x0a2:  mov    %eax,%esi
083ffeb2 +0x0a4:  rep movsl %ds:(%esi),%es:(%edi)
083ffeb4 +0x0a6:  mov    %esi,%eax
083ffeb6 +0x0a8:  mov    %edi,%edx
083ffeb8 +0x0aa:  movzbl (%eax),%ecx
083ffebb +0x0ad:  mov    %cl,(%edx)
083ffebd +0x0af:  add    $0x1,%edx
083ffec0 +0x0b2:  add    $0x1,%eax
083ffec3 +0x0b5:  lea    -0x5fb7(%ebp),%eax
083ffec9 +0x0bb:  mov    $0x5f23,%edx
083ffece +0x0c0:  mov    %edx,0x8(%esp)
083ffed2 +0x0c4:  movl   $0x0,0x4(%esp)
083ffeda +0x0cc:  mov    %eax,(%esp)
083ffedd +0x0cf:  call   0807dcc0 <_init+0x5b8>
083ffee2 +0x0d4:  movl   $0x0,-0x1c(%ebp)
083ffee9 +0x0db:  movl   $0x39393939,-0x94(%ebp)
083ffef3 +0x0e5:  movl   $0x2d32312d,-0x90(%ebp)
083ffefd +0x0ef:  movl   $0x32203133,-0x8c(%ebp)
083fff07 +0x0f9:  movl   $0x39353a33,-0x88(%ebp)
083fff11 +0x103:  movl   $0x39353a,-0x84(%ebp)
083fff1b +0x10d:  lea    -0x80(%ebp),%ebx
083fff1e +0x110:  mov    $0x0,%eax
083fff23 +0x115:  mov    $0xb,%edx
083fff28 +0x11a:  mov    %ebx,%edi
083fff2a +0x11c:  mov    %edx,%ecx
083fff2c +0x11e:  rep stos %eax,%es:(%edi)
083fff2e +0x120:  mov    0x8(%ebp),%eax
083fff31 +0x123:  mov    0xa(%eax),%eax
083fff34 +0x126:  test   %eax,%eax
083fff36 +0x128:  jne    083fff46 <+0x138>
083fff38 +0x12a:  lea    -0xc094(%ebp),%eax
083fff3e +0x130:  mov    %eax,-0x1c(%ebp)
083fff41 +0x133:  jmp    084000a2 <+0x294>
083fff46 +0x138:  lea    -0xc094(%ebp),%eax
083fff4c +0x13e:  add    $0x6000,%eax
083fff51 +0x143:  mov    %eax,-0x1c(%ebp)
083fff54 +0x146:  movl   $0x40,0x8(%esp)
083fff5c +0x14e:  movl   $0x0,0x4(%esp)
083fff64 +0x156:  lea    -0x94(%ebp),%eax
083fff6a +0x15c:  mov    %eax,(%esp)
083fff6d +0x15f:  call   0807dcc0 <_init+0x5b8>
083fff72 +0x164:  mov    0x8(%ebp),%eax
083fff75 +0x167:  mov    0xa(%eax),%ebx
083fff78 +0x16a:  movl   $0x0,0xc(%esp)
083fff80 +0x172:  movl   $0xae1,0x8(%esp)
083fff88 +0x17a:  movl   $&_ZZN19DB_AvatarItemInsert16InsertAvatarItemEP17SIG_AVATAR_INSERTE19__PRETTY_FUNCTION__,0x4(%esp)
083fff90 +0x182:  lea    -0x54(%ebp),%eax
083fff93 +0x185:  mov    %eax,(%esp)
083fff96 +0x188:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
083fff9b +0x18d:  mov    %ebx,0x8(%esp)
083fff9f +0x191:  movl   $"[InsertAvatarItem] pContext->nExpireTime : %d",0x4(%esp)
083fffa7 +0x199:  lea    -0x54(%ebp),%eax
083fffaa +0x19c:  mov    %eax,(%esp)
083fffad +0x19f:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
083fffb2 +0x1a4:  mov    0x8(%ebp),%eax
083fffb5 +0x1a7:  mov    0xa(%eax),%eax
083fffb8 +0x1aa:  cmp    $0x1e,%eax
083fffbb +0x1ad:  jg     08400042 <+0x234>
083fffc1 +0x1b3:  mov    0x8(%ebp),%eax
083fffc4 +0x1b6:  mov    0xa(%eax),%eax
083fffc7 +0x1b9:  cmp    $0x6,%eax
083fffca +0x1bc:  jle    08400042 <+0x234>
083fffcc +0x1be:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
083fffd3 +0x1c5:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
083fffd8 +0x1ca:  mov    0x8(%ebp),%edx
083fffdb +0x1cd:  mov    0xa(%edx),%edx
083fffde +0x1d0:  imul   $&_ZL14gUnicodeBuffer+0xac54,%edx,%edx
083fffe4 +0x1d6:  add    %edx,%eax
083fffe6 +0x1d8:  mov    %eax,0x8(%esp)
083fffea +0x1dc:  movl   $"%d",0x4(%esp)
083ffff2 +0x1e4:  lea    -0x94(%ebp),%eax
083ffff8 +0x1ea:  mov    %eax,(%esp)
083ffffb +0x1ed:  call   0807e440 <_init+0xd38>
08400000 +0x1f2:  movl   $0x0,0xc(%esp)
08400008 +0x1fa:  movl   $0xae5,0x8(%esp)
08400010 +0x202:  movl   $&_ZZN19DB_AvatarItemInsert16InsertAvatarItemEP17SIG_AVATAR_INSERTE19__PRETTY_FUNCTION__,0x4(%esp)
08400018 +0x20a:  lea    -0x44(%ebp),%eax
0840001b +0x20d:  mov    %eax,(%esp)
0840001e +0x210:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08400023 +0x215:  lea    -0x94(%ebp),%eax
08400029 +0x21b:  mov    %eax,0x8(%esp)
0840002d +0x21f:  movl   $"[InsertAvatarItem] period value : %s",0x4(%esp)
08400035 +0x227:  lea    -0x44(%ebp),%eax
08400038 +0x22a:  mov    %eax,(%esp)
0840003b +0x22d:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08400040 +0x232:  jmp    084000a2 <+0x294>
08400042 +0x234:  mov    0x8(%ebp),%eax
08400045 +0x237:  mov    0xa(%eax),%eax
08400048 +0x23a:  mov    %eax,0x8(%esp)
0840004c +0x23e:  movl   $"%d",0x4(%esp)
08400054 +0x246:  lea    -0x94(%ebp),%eax
0840005a +0x24c:  mov    %eax,(%esp)
0840005d +0x24f:  call   0807e440 <_init+0xd38>
08400062 +0x254:  movl   $0x0,0xc(%esp)
0840006a +0x25c:  movl   $0xaea,0x8(%esp)
08400072 +0x264:  movl   $&_ZZN19DB_AvatarItemInsert16InsertAvatarItemEP17SIG_AVATAR_INSERTE19__PRETTY_FUNCTION__,0x4(%esp)
0840007a +0x26c:  lea    -0x34(%ebp),%eax
0840007d +0x26f:  mov    %eax,(%esp)
08400080 +0x272:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08400085 +0x277:  lea    -0x94(%ebp),%eax
0840008b +0x27d:  mov    %eax,0x8(%esp)
0840008f +0x281:  movl   $"[InsertAvatarItem] period value : %s",0x4(%esp)
08400097 +0x289:  lea    -0x34(%ebp),%eax
0840009a +0x28c:  mov    %eax,(%esp)
0840009d +0x28f:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
084000a2 +0x294:  mov    0x8(%ebp),%eax
084000a5 +0x297:  movzwl 0x51(%eax),%eax
084000a9 +0x29b:  movswl %ax,%edi
084000ac +0x29e:  mov    0x8(%ebp),%eax
084000af +0x2a1:  movzwl 0x4f(%eax),%eax
084000b3 +0x2a5:  cwtl
084000b4 +0x2a6:  mov    %eax,-0xc0b4(%ebp)
084000ba +0x2ac:  mov    0x8(%ebp),%eax
084000bd +0x2af:  movzwl 0x2a(%eax),%eax
084000c1 +0x2b3:  movzwl %ax,%eax
084000c4 +0x2b6:  mov    %eax,-0xc0b0(%ebp)
084000ca +0x2bc:  mov    0x8(%ebp),%eax
084000cd +0x2bf:  movzwl 0x28(%eax),%eax
084000d1 +0x2c3:  movzwl %ax,%eax
084000d4 +0x2c6:  mov    %eax,-0xc0ac(%ebp)
084000da +0x2cc:  mov    0x8(%ebp),%eax
084000dd +0x2cf:  add    $0x2d,%eax
084000e0 +0x2d2:  movl   $0x1e,0xc(%esp)
084000e8 +0x2da:  mov    %eax,0x8(%esp)
084000ec +0x2de:  movl   $0x0,0x4(%esp)
084000f4 +0x2e6:  mov    -0x24(%ebp),%eax
084000f7 +0x2e9:  mov    %eax,(%esp)
084000fa +0x2ec:  call   083f452a <_ZN5MySQL11blob_to_strEiPvi>  ; MySQL::blob_to_str(int, void*, int)
084000ff +0x2f1:  mov    %eax,-0xc0a8(%ebp)
08400105 +0x2f7:  mov    0x8(%ebp),%eax
08400108 +0x2fa:  movzbl 0x2c(%eax),%eax
0840010c +0x2fe:  movsbl %al,%eax
0840010f +0x301:  mov    %eax,-0xc0a4(%ebp)
08400115 +0x307:  mov    0x8(%ebp),%eax
08400118 +0x30a:  add    $0xf,%eax
0840011b +0x30d:  mov    %eax,-0xc0a0(%ebp)
08400121 +0x313:  mov    0x8(%ebp),%eax
08400124 +0x316:  movzbl 0x9(%eax),%eax
08400128 +0x31a:  movzbl %al,%eax
0840012b +0x31d:  mov    %eax,-0xc09c(%ebp)
08400131 +0x323:  mov    0x8(%ebp),%eax
08400134 +0x326:  movzbl 0xe(%eax),%eax
08400138 +0x32a:  movzbl %al,%esi
0840013b +0x32d:  mov    0x8(%ebp),%eax
0840013e +0x330:  mov    0x4(%eax),%ebx
08400141 +0x333:  mov    0x8(%ebp),%eax
08400144 +0x336:  movzbl 0x8(%eax),%eax
08400148 +0x33a:  movzbl %al,%ecx
0840014b +0x33d:  mov    0x8(%ebp),%eax
0840014e +0x340:  mov    (%eax),%edx
08400150 +0x342:  mov    %edi,0x38(%esp)
08400154 +0x346:  mov    -0xc0b4(%ebp),%eax
0840015a +0x34c:  mov    %eax,0x34(%esp)
0840015e +0x350:  mov    -0xc0b0(%ebp),%edi
08400164 +0x356:  mov    %edi,0x30(%esp)
08400168 +0x35a:  mov    -0xc0ac(%ebp),%eax
0840016e +0x360:  mov    %eax,0x2c(%esp)
08400172 +0x364:  mov    -0xc0a8(%ebp),%edi
08400178 +0x36a:  mov    %edi,0x28(%esp)
0840017c +0x36e:  mov    -0xc0a4(%ebp),%eax
08400182 +0x374:  mov    %eax,0x24(%esp)
08400186 +0x378:  mov    -0xc0a0(%ebp),%edi
0840018c +0x37e:  mov    %edi,0x20(%esp)
08400190 +0x382:  mov    -0xc09c(%ebp),%eax
08400196 +0x388:  mov    %eax,0x1c(%esp)
0840019a +0x38c:  mov    %esi,0x18(%esp)
0840019e +0x390:  lea    -0x94(%ebp),%eax
084001a4 +0x396:  mov    %eax,0x14(%esp)
084001a8 +0x39a:  mov    %ebx,0x10(%esp)
084001ac +0x39e:  mov    %ecx,0xc(%esp)
084001b0 +0x3a2:  mov    %edx,0x8(%esp)
084001b4 +0x3a6:  mov    -0x1c(%ebp),%eax
084001b7 +0x3a9:  mov    %eax,0x4(%esp)
084001bb +0x3ad:  mov    -0x24(%ebp),%eax
084001be +0x3b0:  mov    %eax,(%esp)
084001c1 +0x3b3:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
084001c6 +0x3b8:  movl   $0x1,0x4(%esp)
084001ce +0x3c0:  mov    -0x24(%ebp),%eax
084001d1 +0x3c3:  mov    %eax,(%esp)
084001d4 +0x3c6:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
084001d9 +0x3cb:  mov    %al,-0x1d(%ebp)
084001dc +0x3ce:  movzbl -0x1d(%ebp),%eax
084001e0 +0x3d2:  xor    $0x1,%eax
084001e3 +0x3d5:  test   %al,%al
084001e5 +0x3d7:  je     084001ee <+0x3e0>
084001e7 +0x3d9:  mov    $0x0,%eax
084001ec +0x3de:  jmp    084001f3 <+0x3e5>
084001ee +0x3e0:  mov    $0x1,%eax
084001f3 +0x3e5:  add    $0xc0ec,%esp
084001f9 +0x3eb:  pop    %ebx
084001fa +0x3ec:  pop    %esi
084001fb +0x3ed:  pop    %edi
084001fc +0x3ee:  pop    %ebp
084001fd +0x3ef:  ret
```

## 反编译 C

```c
// DB_AvatarItemInsert::InsertAvatarItem @ 0x83ffe0e

/* DB_AvatarItemInsert::InsertAvatarItem(SIG_AVATAR_INSERT*) */

bool DB_AvatarItemInsert::InsertAvatarItem(SIG_AVATAR_INSERT *param_1)

{
  short sVar1;
  short sVar2;
  ushort uVar3;
  ushort uVar4;
  char cVar5;
  undefined4 uVar6;
  int iVar7;
  char *pcVar8;
  char *pcVar9;
  undefined4 *puVar10;
  byte bVar11;
  char local_c098 [206];
  undefined1 local_bfca [24370];
  char local_6098 [221];
  undefined1 local_5fbb [24355];
  char local_98 [20];
  undefined4 local_84 [11];
  cMyTrace local_58 [16];
  cMyTrace local_48 [16];
  cMyTrace local_38 [16];
  MySQL *local_28;
  char *local_20;
  
  bVar11 = 0;
  local_28 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,3,0);
  memset(local_c098,0,0xc000);
  pcVar8 = 
  "inSert into user_items (charac_no,slot,it_id,expire_date,obtain_from,reg_date,ability_no,ipg_agency_no,stat,jewel_socket,hidden_option,emblem_endurance) values(%u,%d,%u,\'%s\',%d,now(),%d,\'%s\',%d,\'%s\',%d,%d)"
  ;
  pcVar9 = local_c098;
  for (iVar7 = 0x33; iVar7 != 0; iVar7 = iVar7 + -1) {
    *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
    pcVar8 = pcVar8 + ((uint)bVar11 * -2 + 1) * 4;
    pcVar9 = pcVar9 + ((uint)bVar11 * -2 + 1) * 4;
  }
  *(undefined2 *)pcVar9 = *(undefined2 *)pcVar8;
  memset(local_bfca,0,0x5f32);
  pcVar8 = 
  "inSert into user_items (charac_no,slot,it_id,expire_date,obtain_from,reg_date,ability_no,ipg_agency_no,stat,jewel_socket,hidden_option,emblem_endurance) values(%u,%d,%u,from_unixtime(\'%s\'),%d,now(),%d,\'%s\',%d,\'%s\',%d,%d)"
  ;
  pcVar9 = local_6098;
  for (iVar7 = 0x37; iVar7 != 0; iVar7 = iVar7 + -1) {
    *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
    pcVar8 = pcVar8 + ((uint)bVar11 * -2 + 1) * 4;
    pcVar9 = pcVar9 + ((uint)bVar11 * -2 + 1) * 4;
  }
  *pcVar9 = *pcVar8;
  memset(local_5fbb,0,0x5f23);
  builtin_strncpy(local_98,"9999-12-31 23:59:59",0x14);
  puVar10 = local_84;
  for (iVar7 = 0xb; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar10 = 0;
    puVar10 = puVar10 + (uint)bVar11 * -2 + 1;
  }
  if (*(int *)(param_1 + 10) == 0) {
    local_20 = local_c098;
  }
  else {
    local_20 = local_6098;
    memset(local_98,0,0x40);
    uVar6 = *(undefined4 *)(param_1 + 10);
    cMyTrace::cMyTrace(local_58,
                       "static bool DB_AvatarItemInsert::InsertAvatarItem(SIG_AVATAR_INSERT*)",0xae1
                       ,0);
    cMyTrace::operator()(local_58,"[InsertAvatarItem] pContext->nExpireTime : %d",uVar6);
    if ((*(int *)(param_1 + 10) < 0x1f) && (6 < *(int *)(param_1 + 10))) {
      iVar7 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
      sprintf(local_98,"%d",iVar7 + *(int *)(param_1 + 10) * 0x15180);
      cMyTrace::cMyTrace(local_48,
                         "static bool DB_AvatarItemInsert::InsertAvatarItem(SIG_AVATAR_INSERT*)",
                         0xae5,0);
      cMyTrace::operator()(local_48,"[InsertAvatarItem] period value : %s",local_98);
    }
    else {
      sprintf(local_98,"%d",*(undefined4 *)(param_1 + 10));
      cMyTrace::cMyTrace(local_38,
                         "static bool DB_AvatarItemInsert::InsertAvatarItem(SIG_AVATAR_INSERT*)",
                         0xaea,0);
      cMyTrace::operator()(local_38,"[InsertAvatarItem] period value : %s",local_98);
    }
  }
  sVar1 = *(short *)(param_1 + 0x51);
  sVar2 = *(short *)(param_1 + 0x4f);
  uVar3 = *(ushort *)(param_1 + 0x2a);
  uVar4 = *(ushort *)(param_1 + 0x28);
  uVar6 = MySQL::blob_to_str(local_28,0,param_1 + 0x2d,0x1e);
  MySQL::set_query(local_28,local_20,*(undefined4 *)param_1,(uint)(byte)param_1[8],
                   *(undefined4 *)(param_1 + 4),local_98,(uint)(byte)param_1[0xe],
                   (uint)(byte)param_1[9],param_1 + 0xf,(int)(char)param_1[0x2c],uVar6,(uint)uVar4,
                   (uint)uVar3,(int)sVar2,(int)sVar1);
  cVar5 = MySQL::exec(local_28,true);
  return cVar5 == '\x01';
}
```
