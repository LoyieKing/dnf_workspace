# dispatch

`_ZN24DB_GoblinPadUpdateReward8dispatchEiiP6Stream`

`DB_GoblinPadUpdateReward::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_GoblinPadUpdateReward` | `0x0842413c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0842413c  _ZN24DB_GoblinPadUpdateReward8dispatchEiiP6Stream
#           DB_GoblinPadUpdateReward::dispatch(int, int, Stream*)
# range [0x0842413c, 0x08424451]
0842413c +0x000:  push   %ebp
0842413d +0x001:  mov    %esp,%ebp
0842413f +0x003:  push   %ebx
08424140 +0x004:  sub    $0xa4,%esp
08424146 +0x00a:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0842414b +0x00f:  movl   $0x0,0x8(%esp)
08424153 +0x017:  movl   $0x6,0x4(%esp)
0842415b +0x01f:  mov    %eax,(%esp)
0842415e +0x022:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
08424163 +0x027:  mov    %eax,-0x10(%ebp)
08424166 +0x02a:  mov    0x14(%ebp),%eax
08424169 +0x02d:  mov    %eax,(%esp)
0842416c +0x030:  call   08451e30 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x4a46>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x4a46
08424171 +0x035:  mov    %eax,-0xc(%ebp)
08424174 +0x038:  mov    -0xc(%ebp),%eax
08424177 +0x03b:  mov    (%eax),%eax
08424179 +0x03d:  movl   $0x0,0x4(%esp)
08424181 +0x045:  mov    %eax,(%esp)
08424184 +0x048:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
08424189 +0x04d:  mov    %eax,0x8(%esp)
0842418d +0x051:  movl   $"seLect mousepass from member_mousepass where m_id=%s",0x4(%esp)
08424195 +0x059:  mov    -0x10(%ebp),%eax
08424198 +0x05c:  mov    %eax,(%esp)
0842419b +0x05f:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
084241a0 +0x064:  movl   $0x1,0x4(%esp)
084241a8 +0x06c:  mov    -0x10(%ebp),%eax
084241ab +0x06f:  mov    %eax,(%esp)
084241ae +0x072:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
084241b3 +0x077:  xor    $0x1,%eax
084241b6 +0x07a:  test   %al,%al
084241b8 +0x07c:  jne    084241db <+0x9f>
084241ba +0x07e:  mov    -0x10(%ebp),%eax
084241bd +0x081:  mov    %eax,(%esp)
084241c0 +0x084:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
084241c5 +0x089:  test   %eax,%eax
084241c7 +0x08b:  je     084241db <+0x9f>
084241c9 +0x08d:  mov    -0x10(%ebp),%eax
084241cc +0x090:  mov    %eax,(%esp)
084241cf +0x093:  call   083f44bc <_ZN5MySQL5fetchEv>  ; MySQL::fetch()
084241d4 +0x098:  xor    $0x1,%eax
084241d7 +0x09b:  test   %al,%al
084241d9 +0x09d:  je     084241e2 <+0xa6>
084241db +0x09f:  mov    $0x1,%eax
084241e0 +0x0a4:  jmp    084241e7 <+0xab>
084241e2 +0x0a6:  mov    $0x0,%eax
084241e7 +0x0ab:  test   %al,%al
084241e9 +0x0ad:  je     084241f5 <+0xb9>
084241eb +0x0af:  mov    $0x0,%eax
084241f0 +0x0b4:  jmp    08424449 <+0x30d>
084241f5 +0x0b9:  movl   $0x24,0xc(%esp)
084241fd +0x0c1:  lea    -0x54(%ebp),%eax
08424200 +0x0c4:  mov    %eax,0x8(%esp)
08424204 +0x0c8:  movl   $0x0,0x4(%esp)
0842420c +0x0d0:  mov    -0x10(%ebp),%eax
0842420f +0x0d3:  mov    %eax,(%esp)
08424212 +0x0d6:  call   080ecdea <_GLOBAL__I__ZN12CDBConnectorC2EP5DBMgr+0xcf>  ; global constructors keyed to CDBConnector::CDBConnector(DBMgr*)+0xcf
08424217 +0x0db:  xor    $0x1,%eax
0842421a +0x0de:  test   %al,%al
0842421c +0x0e0:  je     08424228 <+0xec>
0842421e +0x0e2:  mov    $0x0,%eax
08424223 +0x0e7:  jmp    08424449 <+0x30d>
08424228 +0x0ec:  mov    -0xc(%ebp),%eax
0842422b +0x0ef:  movzbl 0x4(%eax),%eax
0842422f +0x0f3:  cmp    $0x2,%al
08424231 +0x0f5:  je     0842435f <+0x223>
08424237 +0x0fb:  mov    -0xc(%ebp),%eax
0842423a +0x0fe:  movzbl 0x5(%eax),%eax
0842423e +0x102:  test   %al,%al
08424240 +0x104:  je     0842435f <+0x223>
08424246 +0x10a:  movl   $0x0,-0x1a(%ebp)
0842424d +0x111:  movl   $0x0,-0x16(%ebp)
08424254 +0x118:  movw   $0x0,-0x12(%ebp)
0842425a +0x11e:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
08424261 +0x125:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
08424266 +0x12a:  mov    %eax,-0x20(%ebp)
08424269 +0x12d:  lea    -0x80(%ebp),%eax
0842426c +0x130:  mov    %eax,0x4(%esp)
08424270 +0x134:  lea    -0x20(%ebp),%eax
08424273 +0x137:  mov    %eax,(%esp)
08424276 +0x13a:  call   0807e360 <_init+0xc58>
0842427b +0x13f:  lea    -0x80(%ebp),%eax
0842427e +0x142:  mov    %eax,0xc(%esp)
08424282 +0x146:  movl   $"%Y%m",0x8(%esp)
0842428a +0x14e:  movl   $0xa,0x4(%esp)
08424292 +0x156:  lea    -0x1a(%ebp),%eax
08424295 +0x159:  mov    %eax,(%esp)
08424298 +0x15c:  call   0807dbc0 <_init+0x4b8>
0842429d +0x161:  mov    -0xc(%ebp),%eax
084242a0 +0x164:  mov    (%eax),%eax
084242a2 +0x166:  movl   $0x0,0x4(%esp)
084242aa +0x16e:  mov    %eax,(%esp)
084242ad +0x171:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
084242b2 +0x176:  mov    %eax,0x8(%esp)
084242b6 +0x17a:  movl   $"upDate member_mousepass set reward_time = unix_timestamp(now()) where m_id=%s and enable_flag = '1'",0x4(%esp)
084242be +0x182:  mov    -0x10(%ebp),%eax
084242c1 +0x185:  mov    %eax,(%esp)
084242c4 +0x188:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
084242c9 +0x18d:  movl   $0x1,0x4(%esp)
084242d1 +0x195:  mov    -0x10(%ebp),%eax
084242d4 +0x198:  mov    %eax,(%esp)
084242d7 +0x19b:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
084242dc +0x1a0:  xor    $0x1,%eax
084242df +0x1a3:  test   %al,%al
084242e1 +0x1a5:  jne    084242f4 <+0x1b8>
084242e3 +0x1a7:  mov    -0x10(%ebp),%eax
084242e6 +0x1aa:  mov    %eax,(%esp)
084242e9 +0x1ad:  call   083f4310 <_ZN5MySQL19getAffectedRowCountEv>  ; MySQL::getAffectedRowCount()
084242ee +0x1b2:  or     %edx,%eax
084242f0 +0x1b4:  test   %eax,%eax
084242f2 +0x1b6:  jne    084242fb <+0x1bf>
084242f4 +0x1b8:  mov    $0x1,%eax
084242f9 +0x1bd:  jmp    08424300 <+0x1c4>
084242fb +0x1bf:  mov    $0x0,%eax
08424300 +0x1c4:  test   %al,%al
08424302 +0x1c6:  je     0842430e <+0x1d2>
08424304 +0x1c8:  mov    $0x0,%eax
08424309 +0x1cd:  jmp    08424449 <+0x30d>
0842430e +0x1d2:  mov    -0xc(%ebp),%eax
08424311 +0x1d5:  lea    0x6(%eax),%ebx
08424314 +0x1d8:  mov    -0xc(%ebp),%eax
08424317 +0x1db:  mov    (%eax),%eax
08424319 +0x1dd:  movl   $0x0,0x4(%esp)
08424321 +0x1e5:  mov    %eax,(%esp)
08424324 +0x1e8:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
08424329 +0x1ed:  mov    %ebx,0x18(%esp)
0842432d +0x1f1:  movl   $0x10,0x14(%esp)
08424335 +0x1f9:  lea    -0x54(%ebp),%edx
08424338 +0x1fc:  mov    %edx,0x10(%esp)
0842433c +0x200:  mov    %eax,0xc(%esp)
08424340 +0x204:  lea    -0x1a(%ebp),%eax
08424343 +0x207:  mov    %eax,0x8(%esp)
08424347 +0x20b:  movl   $"inSert into member_mousepass_history_%s (occ_time, m_id, pre_mousepass, modify_type, ip_info, port_info) values (now(),%s,'%s',%d,'%s','')",0x4(%esp)
0842434f +0x213:  mov    -0x10(%ebp),%eax
08424352 +0x216:  mov    %eax,(%esp)
08424355 +0x219:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0842435a +0x21e:  jmp    08424402 <+0x2c6>
0842435f +0x223:  movl   $0x0,-0x2a(%ebp)
08424366 +0x22a:  movl   $0x0,-0x26(%ebp)
0842436d +0x231:  movw   $0x0,-0x22(%ebp)
08424373 +0x237:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
0842437a +0x23e:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
0842437f +0x243:  mov    %eax,-0x30(%ebp)
08424382 +0x246:  lea    -0x80(%ebp),%eax
08424385 +0x249:  mov    %eax,0x4(%esp)
08424389 +0x24d:  lea    -0x30(%ebp),%eax
0842438c +0x250:  mov    %eax,(%esp)
0842438f +0x253:  call   0807e360 <_init+0xc58>
08424394 +0x258:  lea    -0x80(%ebp),%eax
08424397 +0x25b:  mov    %eax,0xc(%esp)
0842439b +0x25f:  movl   $"%Y%m",0x8(%esp)
084243a3 +0x267:  movl   $0xa,0x4(%esp)
084243ab +0x26f:  lea    -0x2a(%ebp),%eax
084243ae +0x272:  mov    %eax,(%esp)
084243b1 +0x275:  call   0807dbc0 <_init+0x4b8>
084243b6 +0x27a:  mov    -0xc(%ebp),%eax
084243b9 +0x27d:  lea    0x6(%eax),%ebx
084243bc +0x280:  mov    -0xc(%ebp),%eax
084243bf +0x283:  mov    (%eax),%eax
084243c1 +0x285:  movl   $0x0,0x4(%esp)
084243c9 +0x28d:  mov    %eax,(%esp)
084243cc +0x290:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
084243d1 +0x295:  mov    %ebx,0x18(%esp)
084243d5 +0x299:  movl   $0xf,0x14(%esp)
084243dd +0x2a1:  lea    -0x54(%ebp),%edx
084243e0 +0x2a4:  mov    %edx,0x10(%esp)
084243e4 +0x2a8:  mov    %eax,0xc(%esp)
084243e8 +0x2ac:  lea    -0x2a(%ebp),%eax
084243eb +0x2af:  mov    %eax,0x8(%esp)
084243ef +0x2b3:  movl   $"inSert into member_mousepass_history_%s (occ_time, m_id, pre_mousepass, modify_type, ip_info, port_info) values (now(),%s,'%s',%d,'%s','')",0x4(%esp)
084243f7 +0x2bb:  mov    -0x10(%ebp),%eax
084243fa +0x2be:  mov    %eax,(%esp)
084243fd +0x2c1:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08424402 +0x2c6:  movl   $0x1,0x4(%esp)
0842440a +0x2ce:  mov    -0x10(%ebp),%eax
0842440d +0x2d1:  mov    %eax,(%esp)
08424410 +0x2d4:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08424415 +0x2d9:  xor    $0x1,%eax
08424418 +0x2dc:  test   %al,%al
0842441a +0x2de:  jne    0842442d <+0x2f1>
0842441c +0x2e0:  mov    -0x10(%ebp),%eax
0842441f +0x2e3:  mov    %eax,(%esp)
08424422 +0x2e6:  call   083f4310 <_ZN5MySQL19getAffectedRowCountEv>  ; MySQL::getAffectedRowCount()
08424427 +0x2eb:  or     %edx,%eax
08424429 +0x2ed:  test   %eax,%eax
0842442b +0x2ef:  jne    08424434 <+0x2f8>
0842442d +0x2f1:  mov    $0x1,%eax
08424432 +0x2f6:  jmp    08424439 <+0x2fd>
08424434 +0x2f8:  mov    $0x0,%eax
08424439 +0x2fd:  test   %al,%al
0842443b +0x2ff:  je     08424444 <+0x308>
0842443d +0x301:  mov    $0x0,%eax
08424442 +0x306:  jmp    08424449 <+0x30d>
08424444 +0x308:  mov    $0x1,%eax
08424449 +0x30d:  add    $0xa4,%esp
0842444f +0x313:  pop    %ebx
08424450 +0x314:  pop    %ebp
08424451 +0x315:  ret
```

## 反编译 C

```c
// DB_GoblinPadUpdateReward::dispatch @ 0x842413c

/* DB_GoblinPadUpdateReward::dispatch(int, int, Stream*) */

bool DB_GoblinPadUpdateReward::dispatch(int param_1,int param_2,Stream *param_3)

{
  SIG_GOBLIN_UPDATE_REWARD *pSVar1;
  bool bVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  longlong lVar6;
  Stream *in_stack_00000010;
  tm local_84;
  char local_58 [36];
  time_t local_34;
  char local_2e [10];
  time_t local_24;
  char local_1e [10];
  MySQL *local_14;
  SIG_GOBLIN_UPDATE_REWARD *local_10;
  
  local_14 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,6,0);
  local_10 = Stream::GetOutBuffer<SIG_GOBLIN_UPDATE_REWARD>(in_stack_00000010);
  uVar4 = NumberToString(*(uint *)local_10,0);
  MySQL::set_query(local_14,"seLect mousepass from member_mousepass where m_id=%s",uVar4);
  cVar3 = MySQL::exec(local_14,true);
  if (((cVar3 == '\x01') && (iVar5 = MySQL::get_n_rows(local_14), iVar5 != 0)) &&
     (cVar3 = MySQL::fetch(local_14), cVar3 == '\x01')) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (!bVar2) {
    cVar3 = MySQL::get_str(local_14,0,local_58,0x24);
    if (cVar3 != '\x01') {
      return false;
    }
    if ((local_10[4] == (SIG_GOBLIN_UPDATE_REWARD)0x2) ||
       (local_10[5] == (SIG_GOBLIN_UPDATE_REWARD)0x0)) {
      local_2e[0] = '\0';
      local_2e[1] = '\0';
      local_2e[2] = '\0';
      local_2e[3] = '\0';
      local_2e[4] = '\0';
      local_2e[5] = '\0';
      local_2e[6] = '\0';
      local_2e[7] = '\0';
      local_2e[8] = '\0';
      local_2e[9] = '\0';
      local_34 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
      localtime_r(&local_34,&local_84);
      strftime(local_2e,10,"%Y%m",&local_84);
      pSVar1 = local_10 + 6;
      uVar4 = NumberToString(*(uint *)local_10,0);
      MySQL::set_query(local_14,
                       "inSert into member_mousepass_history_%s (occ_time, m_id, pre_mousepass, modify_type, ip_info, port_info) values (now(),%s,\'%s\',%d,\'%s\',\'\')"
                       ,local_2e,uVar4,local_58,0xf,pSVar1);
    }
    else {
      local_1e[0] = '\0';
      local_1e[1] = '\0';
      local_1e[2] = '\0';
      local_1e[3] = '\0';
      local_1e[4] = '\0';
      local_1e[5] = '\0';
      local_1e[6] = '\0';
      local_1e[7] = '\0';
      local_1e[8] = '\0';
      local_1e[9] = '\0';
      local_24 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
      localtime_r(&local_24,&local_84);
      strftime(local_1e,10,"%Y%m",&local_84);
      uVar4 = NumberToString(*(uint *)local_10,0);
      MySQL::set_query(local_14,
                       "upDate member_mousepass set reward_time = unix_timestamp(now()) where m_id=%s and enable_flag = \'1\'"
                       ,uVar4);
      cVar3 = MySQL::exec(local_14,true);
      if ((cVar3 == '\x01') && (lVar6 = MySQL::getAffectedRowCount(local_14), lVar6 != 0)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        return false;
      }
      pSVar1 = local_10 + 6;
      uVar4 = NumberToString(*(uint *)local_10,0);
      MySQL::set_query(local_14,
                       "inSert into member_mousepass_history_%s (occ_time, m_id, pre_mousepass, modify_type, ip_info, port_info) values (now(),%s,\'%s\',%d,\'%s\',\'\')"
                       ,local_1e,uVar4,local_58,0x10,pSVar1);
    }
    cVar3 = MySQL::exec(local_14,true);
    if ((cVar3 == '\x01') && (lVar6 = MySQL::getAffectedRowCount(local_14), lVar6 != 0)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    return !bVar2;
  }
  return false;
}
```
