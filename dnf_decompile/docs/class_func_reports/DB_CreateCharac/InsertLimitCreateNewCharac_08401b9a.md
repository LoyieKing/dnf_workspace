# InsertLimitCreateNewCharac

`_ZN15DB_CreateCharac26InsertLimitCreateNewCharacEP17SIG_CREATE_CHARACb`

`DB_CreateCharac::InsertLimitCreateNewCharac(SIG_CREATE_CHARAC*, bool)`

| 类 | 地址 |
|---|---|
| `DB_CreateCharac` | `0x08401b9a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08401b9a  _ZN15DB_CreateCharac26InsertLimitCreateNewCharacEP17SIG_CREATE_CHARACb
#           DB_CreateCharac::InsertLimitCreateNewCharac(SIG_CREATE_CHARAC*, bool)
# range [0x08401b9a, 0x08401dcb]
08401b9a +0x000:  push   %ebp
08401b9b +0x001:  mov    %esp,%ebp
08401b9d +0x003:  push   %edi
08401b9e +0x004:  push   %esi
08401b9f +0x005:  push   %ebx
08401ba0 +0x006:  sub    $0x18c,%esp
08401ba6 +0x00c:  mov    0x10(%ebp),%eax
08401ba9 +0x00f:  mov    %al,-0x16c(%ebp)
08401baf +0x015:  mov    0xc(%ebp),%eax
08401bb2 +0x018:  mov    (%eax),%edx
08401bb4 +0x01a:  mov    &_ZN10GlobalData14s_pGMAccounts_E,%eax
08401bb9 +0x01f:  mov    %edx,0x4(%esp)
08401bbd +0x023:  mov    %eax,(%esp)
08401bc0 +0x026:  call   08109346 <_ZN8WongWork11CGMAccounts4isGMEj>  ; WongWork::CGMAccounts::isGM(unsigned int)
08401bc5 +0x02b:  test   %al,%al
08401bc7 +0x02d:  je     08401bd3 <+0x39>
08401bc9 +0x02f:  mov    $0x1,%eax
08401bce +0x034:  jmp    08401dc1 <+0x227>
08401bd3 +0x039:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
08401bd8 +0x03e:  movl   $0x0,0x8(%esp)
08401be0 +0x046:  movl   $0x1,0x4(%esp)
08401be8 +0x04e:  mov    %eax,(%esp)
08401beb +0x051:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
08401bf0 +0x056:  mov    %eax,-0x20(%ebp)
08401bf3 +0x059:  mov    0xc(%ebp),%eax
08401bf6 +0x05c:  mov    (%eax),%eax
08401bf8 +0x05e:  movl   $0x0,0x4(%esp)
08401c00 +0x066:  mov    %eax,(%esp)
08401c03 +0x069:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
08401c08 +0x06e:  mov    %eax,0x8(%esp)
08401c0c +0x072:  movl   $"upDate limit_create_character set count=count+1, last_access_time=now() where m_id=%s",0x4(%esp)
08401c14 +0x07a:  mov    -0x20(%ebp),%eax
08401c17 +0x07d:  mov    %eax,(%esp)
08401c1a +0x080:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08401c1f +0x085:  movl   $0x1,0x4(%esp)
08401c27 +0x08d:  mov    -0x20(%ebp),%eax
08401c2a +0x090:  mov    %eax,(%esp)
08401c2d +0x093:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08401c32 +0x098:  xor    $0x1,%eax
08401c35 +0x09b:  test   %al,%al
08401c37 +0x09d:  je     08401c50 <+0xb6>
08401c39 +0x09f:  mov    0xc(%ebp),%eax
08401c3c +0x0a2:  movl   $0x2,0x5344(%eax)
08401c46 +0x0ac:  mov    $0x0,%eax
08401c4b +0x0b1:  jmp    08401dc1 <+0x227>
08401c50 +0x0b6:  mov    -0x20(%ebp),%eax
08401c53 +0x0b9:  mov    %eax,(%esp)
08401c56 +0x0bc:  call   083f4310 <_ZN5MySQL19getAffectedRowCountEv>  ; MySQL::getAffectedRowCount()
08401c5b +0x0c1:  or     %edx,%eax
08401c5d +0x0c3:  test   %eax,%eax
08401c5f +0x0c5:  sete   %al
08401c62 +0x0c8:  test   %al,%al
08401c64 +0x0ca:  je     08401cc3 <+0x129>
08401c66 +0x0cc:  mov    0xc(%ebp),%eax
08401c69 +0x0cf:  mov    (%eax),%eax
08401c6b +0x0d1:  movl   $0x0,0x4(%esp)
08401c73 +0x0d9:  mov    %eax,(%esp)
08401c76 +0x0dc:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
08401c7b +0x0e1:  mov    %eax,0x8(%esp)
08401c7f +0x0e5:  movl   $"inSert into limit_create_character(m_id, count, last_access_time) values(%s, 1, now() )",0x4(%esp)
08401c87 +0x0ed:  mov    -0x20(%ebp),%eax
08401c8a +0x0f0:  mov    %eax,(%esp)
08401c8d +0x0f3:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08401c92 +0x0f8:  movl   $0x1,0x4(%esp)
08401c9a +0x100:  mov    -0x20(%ebp),%eax
08401c9d +0x103:  mov    %eax,(%esp)
08401ca0 +0x106:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08401ca5 +0x10b:  xor    $0x1,%eax
08401ca8 +0x10e:  test   %al,%al
08401caa +0x110:  je     08401cc3 <+0x129>
08401cac +0x112:  mov    0xc(%ebp),%eax
08401caf +0x115:  movl   $0x2,0x5344(%eax)
08401cb9 +0x11f:  mov    $0x0,%eax
08401cbe +0x124:  jmp    08401dc1 <+0x227>
08401cc3 +0x129:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
08401cca +0x130:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
08401ccf +0x135:  mov    %eax,-0x34(%ebp)
08401cd2 +0x138:  lea    -0x60(%ebp),%eax
08401cd5 +0x13b:  mov    %eax,0x4(%esp)
08401cd9 +0x13f:  lea    -0x34(%ebp),%eax
08401cdc +0x142:  mov    %eax,(%esp)
08401cdf +0x145:  call   0807e360 <_init+0xc58>
08401ce4 +0x14a:  mov    %eax,-0x1c(%ebp)
08401ce7 +0x14d:  mov    -0x1c(%ebp),%eax
08401cea +0x150:  mov    (%eax),%ebx
08401cec +0x152:  mov    -0x1c(%ebp),%eax
08401cef +0x155:  mov    0x4(%eax),%ecx
08401cf2 +0x158:  mov    -0x1c(%ebp),%eax
08401cf5 +0x15b:  mov    0x8(%eax),%edx
08401cf8 +0x15e:  mov    -0x1c(%ebp),%eax
08401cfb +0x161:  mov    0xc(%eax),%eax
08401cfe +0x164:  mov    -0x1c(%ebp),%esi
08401d01 +0x167:  mov    0x10(%esi),%esi
08401d04 +0x16a:  lea    0x1(%esi),%edi
08401d07 +0x16d:  mov    -0x1c(%ebp),%esi
08401d0a +0x170:  mov    0x14(%esi),%esi
08401d0d +0x173:  add    $0x76c,%esi
08401d13 +0x179:  mov    %ebx,0x1c(%esp)
08401d17 +0x17d:  mov    %ecx,0x18(%esp)
08401d1b +0x181:  mov    %edx,0x14(%esp)
08401d1f +0x185:  mov    %eax,0x10(%esp)
08401d23 +0x189:  mov    %edi,0xc(%esp)
08401d27 +0x18d:  mov    %esi,0x8(%esp)
08401d2b +0x191:  movl   $"%04d-%02d-%02d %02d:%02d:%02d",0x4(%esp)
08401d33 +0x199:  lea    -0x160(%ebp),%eax
08401d39 +0x19f:  mov    %eax,(%esp)
08401d3c +0x1a2:  call   0807e440 <_init+0xd38>
08401d41 +0x1a7:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
08401d46 +0x1ac:  mov    %eax,(%esp)
08401d49 +0x1af:  call   08106ce0 <_GLOBAL__I__ZN15CmmChannelProxyC2ESsi+0x162>  ; global constructors keyed to CmmChannelProxy::CmmChannelProxy(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int)+0x162
08401d4e +0x1b4:  mov    %eax,%esi
08401d50 +0x1b6:  mov    0xc(%ebp),%eax
08401d53 +0x1b9:  mov    0x5348(%eax),%edi
08401d59 +0x1bf:  mov    0xc(%ebp),%eax
08401d5c +0x1c2:  mov    (%eax),%eax
08401d5e +0x1c4:  movl   $0x0,0x4(%esp)
08401d66 +0x1cc:  mov    %eax,(%esp)
08401d69 +0x1cf:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
08401d6e +0x1d4:  mov    %eax,%ebx
08401d70 +0x1d6:  movl   $0x0,0xc(%esp)
08401d78 +0x1de:  movl   $0xf61,0x8(%esp)
08401d80 +0x1e6:  movl   $&_ZZN15DB_CreateCharac26InsertLimitCreateNewCharacEP17SIG_CREATE_CHARACbE19__PRETTY_FUNCTION__,0x4(%esp)
08401d88 +0x1ee:  lea    -0x30(%ebp),%eax
08401d8b +0x1f1:  mov    %eax,(%esp)
08401d8e +0x1f4:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08401d93 +0x1f9:  mov    %esi,0x14(%esp)
08401d97 +0x1fd:  lea    -0x160(%ebp),%eax
08401d9d +0x203:  mov    %eax,0x10(%esp)
08401da1 +0x207:  mov    %edi,0xc(%esp)
08401da5 +0x20b:  mov    %ebx,0x8(%esp)
08401da9 +0x20f:  movl   $"[LIMIT NEW CHARAC] %s,%d,%s,%d",0x4(%esp)
08401db1 +0x217:  lea    -0x30(%ebp),%eax
08401db4 +0x21a:  mov    %eax,(%esp)
08401db7 +0x21d:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08401dbc +0x222:  mov    $0x1,%eax
08401dc1 +0x227:  add    $0x18c,%esp
08401dc7 +0x22d:  pop    %ebx
08401dc8 +0x22e:  pop    %esi
08401dc9 +0x22f:  pop    %edi
08401dca +0x230:  pop    %ebp
08401dcb +0x231:  ret
```

## 反编译 C

```c
// DB_CreateCharac::InsertLimitCreateNewCharac @ 0x8401b9a

/* DB_CreateCharac::InsertLimitCreateNewCharac(SIG_CREATE_CHARAC*, bool) */

undefined4 DB_CreateCharac::InsertLimitCreateNewCharac(SIG_CREATE_CHARAC *param_1,bool param_2)

{
  uint uVar1;
  char cVar2;
  undefined4 uVar3;
  CEnvironment *this;
  undefined4 uVar4;
  longlong lVar5;
  undefined3 in_stack_00000009;
  char local_164 [256];
  tm local_64;
  time_t local_38;
  cMyTrace local_34 [16];
  MySQL *local_24;
  tm *local_20;
  
  cVar2 = WongWork::CGMAccounts::isGM(GlobalData::s_pGMAccounts_,*_param_2);
  if (cVar2 == '\0') {
    local_24 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,1,0);
    uVar3 = NumberToString(*_param_2,0);
    MySQL::set_query(local_24,
                     "upDate limit_create_character set count=count+1, last_access_time=now() where m_id=%s"
                     ,uVar3);
    cVar2 = MySQL::exec(local_24,true);
    if (cVar2 == '\x01') {
      lVar5 = MySQL::getAffectedRowCount(local_24);
      if (lVar5 == 0) {
        uVar3 = NumberToString(*_param_2,0);
        MySQL::set_query(local_24,
                         "inSert into limit_create_character(m_id, count, last_access_time) values(%s, 1, now() )"
                         ,uVar3);
        cVar2 = MySQL::exec(local_24,true);
        if (cVar2 != '\x01') {
          _param_2[0x14d1] = 2;
          return 0;
        }
      }
      local_38 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
      local_20 = localtime_r(&local_38,&local_64);
      sprintf(local_164,"%04d-%02d-%02d %02d:%02d:%02d",local_20->tm_year + 0x76c,
              local_20->tm_mon + 1,local_20->tm_mday,local_20->tm_hour,local_20->tm_min,
              local_20->tm_sec);
      this = (CEnvironment *)G_CEnvironment();
      uVar3 = CEnvironment::get_server_group(this);
      uVar1 = _param_2[0x14d2];
      uVar4 = NumberToString(*_param_2,0);
      cMyTrace::cMyTrace(local_34,
                         "bool DB_CreateCharac::InsertLimitCreateNewCharac(SIG_CREATE_CHARAC*, bool)"
                         ,0xf61,0);
      cMyTrace::operator()(local_34,"[LIMIT NEW CHARAC] %s,%d,%s,%d",uVar4,uVar1,local_164,uVar3);
      uVar3 = 1;
    }
    else {
      _param_2[0x14d1] = 2;
      uVar3 = 0;
    }
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}
```
