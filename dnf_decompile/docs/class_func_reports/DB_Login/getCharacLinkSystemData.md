# getCharacLinkSystemData

`_ZN8DB_Login23getCharacLinkSystemDataEP14SIG_LOGIN_DATA`

`DB_Login::getCharacLinkSystemData(SIG_LOGIN_DATA*)`

| 类 | 地址 |
|---|---|
| `DB_Login` | `0x0840ffca` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0840ffca  _ZN8DB_Login23getCharacLinkSystemDataEP14SIG_LOGIN_DATA
#           DB_Login::getCharacLinkSystemData(SIG_LOGIN_DATA*)
# range [0x0840ffca, 0x084101ad]
0840ffca +0x000:  push   %ebp
0840ffcb +0x001:  mov    %esp,%ebp
0840ffcd +0x003:  push   %ebx
0840ffce +0x004:  sub    $0x44,%esp
0840ffd1 +0x007:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0840ffd6 +0x00c:  movl   $0x0,0x8(%esp)
0840ffde +0x014:  movl   $0x2,0x4(%esp)
0840ffe6 +0x01c:  mov    %eax,(%esp)
0840ffe9 +0x01f:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0840ffee +0x024:  mov    %eax,-0xc(%ebp)
0840fff1 +0x027:  mov    0xc(%ebp),%eax
0840fff4 +0x02a:  mov    0xc0(%eax),%eax
0840fffa +0x030:  movl   $0x0,0x4(%esp)
08410002 +0x038:  mov    %eax,(%esp)
08410005 +0x03b:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
0841000a +0x040:  mov    %eax,0x8(%esp)
0841000e +0x044:  movl   $"seLect message_flag from charac_link_message where m_id=%s",0x4(%esp)
08410016 +0x04c:  mov    -0xc(%ebp),%eax
08410019 +0x04f:  mov    %eax,(%esp)
0841001c +0x052:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08410021 +0x057:  movl   $0x1,0x4(%esp)
08410029 +0x05f:  mov    -0xc(%ebp),%eax
0841002c +0x062:  mov    %eax,(%esp)
0841002f +0x065:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08410034 +0x06a:  xor    $0x1,%eax
08410037 +0x06d:  test   %al,%al
08410039 +0x06f:  je     0841006c <+0xa2>
0841003b +0x071:  movl   $"LINK_LOG : charac_link_message DB ERROR!!",0x10(%esp)
08410043 +0x079:  movl   $0x2f54,0xc(%esp)
0841004b +0x081:  movl   $&_ZZN8DB_Login23getCharacLinkSystemDataEP14SIG_LOGIN_DATAE19__PRETTY_FUNCTION__,0x8(%esp)
08410053 +0x089:  movl   $"DBThread.cpp",0x4(%esp)
0841005b +0x091:  movl   $0x1,(%esp)
08410062 +0x098:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08410067 +0x09d:  jmp    084101a8 <+0x1de>
0841006c +0x0a2:  mov    -0xc(%ebp),%eax
0841006f +0x0a5:  mov    %eax,(%esp)
08410072 +0x0a8:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
08410077 +0x0ad:  test   %eax,%eax
08410079 +0x0af:  sete   %al
0841007c +0x0b2:  test   %al,%al
0841007e +0x0b4:  je     084100ff <+0x135>
08410080 +0x0b6:  mov    0xc(%ebp),%eax
08410083 +0x0b9:  mov    0xc0(%eax),%eax
08410089 +0x0bf:  movl   $0x0,0x4(%esp)
08410091 +0x0c7:  mov    %eax,(%esp)
08410094 +0x0ca:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
08410099 +0x0cf:  mov    %eax,0x8(%esp)
0841009d +0x0d3:  movl   $"inSert into charac_link_message(m_id,message_flag) values(%s,0)",0x4(%esp)
084100a5 +0x0db:  mov    -0xc(%ebp),%eax
084100a8 +0x0de:  mov    %eax,(%esp)
084100ab +0x0e1:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
084100b0 +0x0e6:  movl   $0x1,0x4(%esp)
084100b8 +0x0ee:  mov    -0xc(%ebp),%eax
084100bb +0x0f1:  mov    %eax,(%esp)
084100be +0x0f4:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
084100c3 +0x0f9:  xor    $0x1,%eax
084100c6 +0x0fc:  test   %al,%al
084100c8 +0x0fe:  je     084101a8 <+0x1de>
084100ce +0x104:  movl   $"LINK_LOG : charac_link_message DB INSERT FAIL!!",0x10(%esp)
084100d6 +0x10c:  movl   $0x2f5d,0xc(%esp)
084100de +0x114:  movl   $&_ZZN8DB_Login23getCharacLinkSystemDataEP14SIG_LOGIN_DATAE19__PRETTY_FUNCTION__,0x8(%esp)
084100e6 +0x11c:  movl   $"DBThread.cpp",0x4(%esp)
084100ee +0x124:  movl   $0x1,(%esp)
084100f5 +0x12b:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
084100fa +0x130:  jmp    084101a8 <+0x1de>
084100ff +0x135:  mov    -0xc(%ebp),%eax
08410102 +0x138:  mov    %eax,(%esp)
08410105 +0x13b:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
0841010a +0x140:  cmp    $0x1,%eax
0841010d +0x143:  sete   %al
08410110 +0x146:  test   %al,%al
08410112 +0x148:  je     084101a7 <+0x1dd>
08410118 +0x14e:  mov    -0xc(%ebp),%eax
0841011b +0x151:  mov    %eax,(%esp)
0841011e +0x154:  call   083f44bc <_ZN5MySQL5fetchEv>  ; MySQL::fetch()
08410123 +0x159:  xor    $0x1,%eax
08410126 +0x15c:  test   %al,%al
08410128 +0x15e:  je     08410181 <+0x1b7>
0841012a +0x160:  mov    0xc(%ebp),%eax
0841012d +0x163:  mov    0xc0(%eax),%eax
08410133 +0x169:  movl   $0x0,0x4(%esp)
0841013b +0x171:  mov    %eax,(%esp)
0841013e +0x174:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
08410143 +0x179:  mov    %eax,%ebx
08410145 +0x17b:  movl   $0x5,0xc(%esp)
0841014d +0x183:  movl   $0x2f65,0x8(%esp)
08410155 +0x18b:  movl   $&_ZZN8DB_Login23getCharacLinkSystemDataEP14SIG_LOGIN_DATAE19__PRETTY_FUNCTION__,0x4(%esp)
0841015d +0x193:  lea    -0x1c(%ebp),%eax
08410160 +0x196:  mov    %eax,(%esp)
08410163 +0x199:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08410168 +0x19e:  mov    %ebx,0x8(%esp)
0841016c +0x1a2:  movl   $"LINK_LOG : charac_link_message DB ERROR!! M_ID(%s)",0x4(%esp)
08410174 +0x1aa:  lea    -0x1c(%ebp),%eax
08410177 +0x1ad:  mov    %eax,(%esp)
0841017a +0x1b0:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0841017f +0x1b5:  jmp    084101a8 <+0x1de>
08410181 +0x1b7:  mov    0xc(%ebp),%eax
08410184 +0x1ba:  add    $0x3f5c,%eax
08410189 +0x1bf:  mov    %eax,0x8(%esp)
0841018d +0x1c3:  movl   $0x0,0x4(%esp)
08410195 +0x1cb:  mov    -0xc(%ebp),%eax
08410198 +0x1ce:  mov    %eax,(%esp)
0841019b +0x1d1:  call   080fde54 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x180>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x180
084101a0 +0x1d6:  xor    $0x1,%eax
084101a3 +0x1d9:  test   %al,%al
084101a5 +0x1db:  jmp    084101a8 <+0x1de>
084101a7 +0x1dd:  nop
084101a8 +0x1de:  add    $0x44,%esp
084101ab +0x1e1:  pop    %ebx
084101ac +0x1e2:  pop    %ebp
084101ad +0x1e3:  ret
```

## 反编译 C

```c
// DB_Login::getCharacLinkSystemData @ 0x840ffca

/* DB_Login::getCharacLinkSystemData(SIG_LOGIN_DATA*) */

byte __thiscall DB_Login::getCharacLinkSystemData(DB_Login *this,SIG_LOGIN_DATA *param_1)

{
  char cVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  cMyTrace local_20 [16];
  MySQL *local_10;
  
  local_10 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
  uVar3 = NumberToString(*(uint *)(param_1 + 0xc0),0);
  MySQL::set_query(local_10,"seLect message_flag from charac_link_message where m_id=%s",uVar3);
  cVar1 = MySQL::exec(local_10,true);
  if (cVar1 == '\x01') {
    iVar4 = MySQL::get_n_rows(local_10);
    if (iVar4 == 0) {
      uVar3 = NumberToString(*(uint *)(param_1 + 0xc0),0);
      MySQL::set_query(local_10,"inSert into charac_link_message(m_id,message_flag) values(%s,0)",
                       uVar3);
      cVar1 = MySQL::exec(local_10,true);
      bVar2 = 0;
      if (cVar1 != '\x01') {
        bVar2 = LogManager::logFormat
                          (1,"DBThread.cpp",
                           "void DB_Login::getCharacLinkSystemData(SIG_LOGIN_DATA*)",0x2f5d,
                           "LINK_LOG : charac_link_message DB INSERT FAIL!!");
      }
    }
    else {
      iVar4 = MySQL::get_n_rows(local_10);
      bVar2 = 0;
      if (iVar4 == 1) {
        cVar1 = MySQL::fetch(local_10);
        if (cVar1 == '\x01') {
          bVar2 = MySQL::get_byte(local_10,0,(char *)(param_1 + 0x3f5c));
          bVar2 = bVar2 ^ 1;
        }
        else {
          uVar3 = NumberToString(*(uint *)(param_1 + 0xc0),0);
          cMyTrace::cMyTrace(local_20,"void DB_Login::getCharacLinkSystemData(SIG_LOGIN_DATA*)",
                             0x2f65,5);
          bVar2 = cMyTrace::operator()
                            (local_20,"LINK_LOG : charac_link_message DB ERROR!! M_ID(%s)",uVar3);
        }
      }
    }
  }
  else {
    bVar2 = LogManager::logFormat
                      (1,"DBThread.cpp","void DB_Login::getCharacLinkSystemData(SIG_LOGIN_DATA*)",
                       0x2f54,"LINK_LOG : charac_link_message DB ERROR!!");
  }
  return bVar2;
}
```
