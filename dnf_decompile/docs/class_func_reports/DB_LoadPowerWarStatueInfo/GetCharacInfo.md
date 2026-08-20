# GetCharacInfo

`_ZN25DB_LoadPowerWarStatueInfo13GetCharacInfoEP30SIG_LOAD_POWER_WAR_STATUE_INFOj`

`DB_LoadPowerWarStatueInfo::GetCharacInfo(SIG_LOAD_POWER_WAR_STATUE_INFO*, unsigned int)`

| 类 | 地址 |
|---|---|
| `DB_LoadPowerWarStatueInfo` | `0x08434a8a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08434a8a  _ZN25DB_LoadPowerWarStatueInfo13GetCharacInfoEP30SIG_LOAD_POWER_WAR_STATUE_INFOj
#           DB_LoadPowerWarStatueInfo::GetCharacInfo(SIG_LOAD_POWER_WAR_STATUE_INFO*, unsigned int)
# range [0x08434a8a, 0x08434d35]
08434a8a +0x000:  push   %ebp
08434a8b +0x001:  mov    %esp,%ebp
08434a8d +0x003:  sub    $0x28,%esp
08434a90 +0x006:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
08434a95 +0x00b:  movl   $0x0,0x8(%esp)
08434a9d +0x013:  movl   $0x2,0x4(%esp)
08434aa5 +0x01b:  mov    %eax,(%esp)
08434aa8 +0x01e:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
08434aad +0x023:  mov    %eax,-0x18(%ebp)
08434ab0 +0x026:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
08434ab5 +0x02b:  movl   $0x0,0x8(%esp)
08434abd +0x033:  movl   $0x8,0x4(%esp)
08434ac5 +0x03b:  mov    %eax,(%esp)
08434ac8 +0x03e:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
08434acd +0x043:  mov    %eax,-0x14(%ebp)
08434ad0 +0x046:  mov    0x10(%ebp),%eax
08434ad3 +0x049:  mov    %eax,0x8(%esp)
08434ad7 +0x04d:  movl   $"seLect charac_name,job,lev,grow_type,guild_id from charac_info where charac_no=%d and delete_flag!=1",0x4(%esp)
08434adf +0x055:  mov    -0x18(%ebp),%eax
08434ae2 +0x058:  mov    %eax,(%esp)
08434ae5 +0x05b:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08434aea +0x060:  movl   $0x1,0x4(%esp)
08434af2 +0x068:  mov    -0x18(%ebp),%eax
08434af5 +0x06b:  mov    %eax,(%esp)
08434af8 +0x06e:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08434afd +0x073:  movl   $0x1,0x4(%esp)
08434b05 +0x07b:  mov    -0x18(%ebp),%eax
08434b08 +0x07e:  mov    %eax,(%esp)
08434b0b +0x081:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08434b10 +0x086:  xor    $0x1,%eax
08434b13 +0x089:  test   %al,%al
08434b15 +0x08b:  jne    08434b29 <+0x9f>
08434b17 +0x08d:  mov    -0x18(%ebp),%eax
08434b1a +0x090:  mov    %eax,(%esp)
08434b1d +0x093:  call   083f44bc <_ZN5MySQL5fetchEv>  ; MySQL::fetch()
08434b22 +0x098:  xor    $0x1,%eax
08434b25 +0x09b:  test   %al,%al
08434b27 +0x09d:  je     08434b30 <+0xa6>
08434b29 +0x09f:  mov    $0x1,%eax
08434b2e +0x0a4:  jmp    08434b35 <+0xab>
08434b30 +0x0a6:  mov    $0x0,%eax
08434b35 +0x0ab:  test   %al,%al
08434b37 +0x0ad:  je     08434b43 <+0xb9>
08434b39 +0x0af:  mov    $0x0,%eax
08434b3e +0x0b4:  jmp    08434d34 <+0x2aa>
08434b43 +0x0b9:  mov    -0x18(%ebp),%eax
08434b46 +0x0bc:  mov    %eax,(%esp)
08434b49 +0x0bf:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
08434b4e +0x0c4:  cmp    $0x1,%eax
08434b51 +0x0c7:  setne  %al
08434b54 +0x0ca:  test   %al,%al
08434b56 +0x0cc:  je     08434b62 <+0xd8>
08434b58 +0x0ce:  mov    $0x0,%eax
08434b5d +0x0d3:  jmp    08434d34 <+0x2aa>
08434b62 +0x0d8:  mov    0xc(%ebp),%eax
08434b65 +0x0db:  add    $0x4,%eax
08434b68 +0x0de:  movl   $0x1d,0xc(%esp)
08434b70 +0x0e6:  mov    %eax,0x8(%esp)
08434b74 +0x0ea:  movl   $0x0,0x4(%esp)
08434b7c +0x0f2:  mov    -0x18(%ebp),%eax
08434b7f +0x0f5:  mov    %eax,(%esp)
08434b82 +0x0f8:  call   080ecdea <_GLOBAL__I__ZN12CDBConnectorC2EP5DBMgr+0xcf>  ; global constructors keyed to CDBConnector::CDBConnector(DBMgr*)+0xcf
08434b87 +0x0fd:  xor    $0x1,%eax
08434b8a +0x100:  test   %al,%al
08434b8c +0x102:  je     08434b98 <+0x10e>
08434b8e +0x104:  mov    $0x0,%eax
08434b93 +0x109:  jmp    08434d34 <+0x2aa>
08434b98 +0x10e:  mov    0xc(%ebp),%eax
08434b9b +0x111:  add    $0x23,%eax
08434b9e +0x114:  mov    %eax,0x8(%esp)
08434ba2 +0x118:  movl   $0x1,0x4(%esp)
08434baa +0x120:  mov    -0x18(%ebp),%eax
08434bad +0x123:  mov    %eax,(%esp)
08434bb0 +0x126:  call   080fde54 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x180>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x180
08434bb5 +0x12b:  xor    $0x1,%eax
08434bb8 +0x12e:  test   %al,%al
08434bba +0x130:  je     08434bc6 <+0x13c>
08434bbc +0x132:  mov    $0x0,%eax
08434bc1 +0x137:  jmp    08434d34 <+0x2aa>
08434bc6 +0x13c:  mov    0xc(%ebp),%eax
08434bc9 +0x13f:  add    $0x22,%eax
08434bcc +0x142:  mov    %eax,0x8(%esp)
08434bd0 +0x146:  movl   $0x2,0x4(%esp)
08434bd8 +0x14e:  mov    -0x18(%ebp),%eax
08434bdb +0x151:  mov    %eax,(%esp)
08434bde +0x154:  call   080fde54 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x180>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x180
08434be3 +0x159:  xor    $0x1,%eax
08434be6 +0x15c:  test   %al,%al
08434be8 +0x15e:  je     08434bf4 <+0x16a>
08434bea +0x160:  mov    $0x0,%eax
08434bef +0x165:  jmp    08434d34 <+0x2aa>
08434bf4 +0x16a:  mov    0xc(%ebp),%eax
08434bf7 +0x16d:  add    $0x24,%eax
08434bfa +0x170:  mov    %eax,0x8(%esp)
08434bfe +0x174:  movl   $0x3,0x4(%esp)
08434c06 +0x17c:  mov    -0x18(%ebp),%eax
08434c09 +0x17f:  mov    %eax,(%esp)
08434c0c +0x182:  call   080fde54 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x180>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x180
08434c11 +0x187:  xor    $0x1,%eax
08434c14 +0x18a:  test   %al,%al
08434c16 +0x18c:  je     08434c22 <+0x198>
08434c18 +0x18e:  mov    $0x0,%eax
08434c1d +0x193:  jmp    08434d34 <+0x2aa>
08434c22 +0x198:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
08434c27 +0x19d:  mov    0x378(%eax),%eax
08434c2d +0x1a3:  mov    %eax,-0x10(%ebp)
08434c30 +0x1a6:  movl   $0x0,-0xc(%ebp)
08434c37 +0x1ad:  mov    0xc(%ebp),%eax
08434c3a +0x1b0:  add    $0x50,%eax
08434c3d +0x1b3:  mov    %eax,0x8(%esp)
08434c41 +0x1b7:  movl   $0x4,0x4(%esp)
08434c49 +0x1bf:  mov    -0x18(%ebp),%eax
08434c4c +0x1c2:  mov    %eax,(%esp)
08434c4f +0x1c5:  call   080e22f2 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x98>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x98
08434c54 +0x1ca:  xor    $0x1,%eax
08434c57 +0x1cd:  test   %al,%al
08434c59 +0x1cf:  je     08434c65 <+0x1db>
08434c5b +0x1d1:  mov    $0x0,%eax
08434c60 +0x1d6:  jmp    08434d34 <+0x2aa>
08434c65 +0x1db:  mov    0xc(%ebp),%eax
08434c68 +0x1de:  mov    0x50(%eax),%eax
08434c6b +0x1e1:  test   %eax,%eax
08434c6d +0x1e3:  jne    08434c79 <+0x1ef>
08434c6f +0x1e5:  mov    $0x1,%eax
08434c74 +0x1ea:  jmp    08434d34 <+0x2aa>
08434c79 +0x1ef:  mov    0xc(%ebp),%eax
08434c7c +0x1f2:  mov    0x50(%eax),%eax
08434c7f +0x1f5:  mov    -0x10(%ebp),%edx
08434c82 +0x1f8:  mov    %edx,0xc(%esp)
08434c86 +0x1fc:  mov    %eax,0x8(%esp)
08434c8a +0x200:  movl   $"seLect guild_name from guild_info where guild_id=%d and server_id=%d",0x4(%esp)
08434c92 +0x208:  mov    -0x14(%ebp),%eax
08434c95 +0x20b:  mov    %eax,(%esp)
08434c98 +0x20e:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08434c9d +0x213:  movl   $0x1,0x4(%esp)
08434ca5 +0x21b:  mov    -0x14(%ebp),%eax
08434ca8 +0x21e:  mov    %eax,(%esp)
08434cab +0x221:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08434cb0 +0x226:  xor    $0x1,%eax
08434cb3 +0x229:  test   %al,%al
08434cb5 +0x22b:  jne    08434cc9 <+0x23f>
08434cb7 +0x22d:  mov    -0x14(%ebp),%eax
08434cba +0x230:  mov    %eax,(%esp)
08434cbd +0x233:  call   083f44bc <_ZN5MySQL5fetchEv>  ; MySQL::fetch()
08434cc2 +0x238:  xor    $0x1,%eax
08434cc5 +0x23b:  test   %al,%al
08434cc7 +0x23d:  je     08434cd0 <+0x246>
08434cc9 +0x23f:  mov    $0x1,%eax
08434cce +0x244:  jmp    08434cd5 <+0x24b>
08434cd0 +0x246:  mov    $0x0,%eax
08434cd5 +0x24b:  test   %al,%al
08434cd7 +0x24d:  je     08434ce0 <+0x256>
08434cd9 +0x24f:  mov    $0x0,%eax
08434cde +0x254:  jmp    08434d34 <+0x2aa>
08434ce0 +0x256:  mov    -0x14(%ebp),%eax
08434ce3 +0x259:  mov    %eax,(%esp)
08434ce6 +0x25c:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
08434ceb +0x261:  cmp    $0x1,%eax
08434cee +0x264:  setne  %al
08434cf1 +0x267:  test   %al,%al
08434cf3 +0x269:  je     08434cfc <+0x272>
08434cf5 +0x26b:  mov    $0x0,%eax
08434cfa +0x270:  jmp    08434d34 <+0x2aa>
08434cfc +0x272:  mov    0xc(%ebp),%eax
08434cff +0x275:  add    $0x25,%eax
08434d02 +0x278:  movl   $0x28,0xc(%esp)
08434d0a +0x280:  mov    %eax,0x8(%esp)
08434d0e +0x284:  movl   $0x0,0x4(%esp)
08434d16 +0x28c:  mov    -0x14(%ebp),%eax
08434d19 +0x28f:  mov    %eax,(%esp)
08434d1c +0x292:  call   080ecdea <_GLOBAL__I__ZN12CDBConnectorC2EP5DBMgr+0xcf>  ; global constructors keyed to CDBConnector::CDBConnector(DBMgr*)+0xcf
08434d21 +0x297:  xor    $0x1,%eax
08434d24 +0x29a:  test   %al,%al
08434d26 +0x29c:  je     08434d2f <+0x2a5>
08434d28 +0x29e:  mov    $0x0,%eax
08434d2d +0x2a3:  jmp    08434d34 <+0x2aa>
08434d2f +0x2a5:  mov    $0x1,%eax
08434d34 +0x2aa:  leave
08434d35 +0x2ab:  ret
```

## 反编译 C

```c
// DB_LoadPowerWarStatueInfo::GetCharacInfo @ 0x8434a8a

/* DB_LoadPowerWarStatueInfo::GetCharacInfo(SIG_LOAD_POWER_WAR_STATUE_INFO*, unsigned int) */

undefined4 __thiscall
DB_LoadPowerWarStatueInfo::GetCharacInfo
          (DB_LoadPowerWarStatueInfo *this,SIG_LOAD_POWER_WAR_STATUE_INFO *param_1,uint param_2)

{
  bool bVar1;
  char cVar2;
  MySQL *this_00;
  MySQL *this_01;
  int iVar3;
  undefined4 uVar4;
  
  this_00 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
  this_01 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,8,0);
  MySQL::set_query(this_00,
                   "seLect charac_name,job,lev,grow_type,guild_id from charac_info where charac_no=%d and delete_flag!=1"
                   ,param_2);
  MySQL::exec(this_00,true);
  cVar2 = MySQL::exec(this_00,true);
  if ((cVar2 == '\x01') && (cVar2 = MySQL::fetch(this_00), cVar2 == '\x01')) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    return 0;
  }
  iVar3 = MySQL::get_n_rows(this_00);
  if (iVar3 != 1) {
    return 0;
  }
  cVar2 = MySQL::get_str(this_00,0,(char *)(param_1 + 4),0x1d);
  if (cVar2 != '\x01') {
    return 0;
  }
  cVar2 = MySQL::get_byte(this_00,1,(char *)(param_1 + 0x23));
  if (cVar2 != '\x01') {
    return 0;
  }
  cVar2 = MySQL::get_byte(this_00,2,(char *)(param_1 + 0x22));
  if (cVar2 != '\x01') {
    return 0;
  }
  cVar2 = MySQL::get_byte(this_00,3,(char *)(param_1 + 0x24));
  if (cVar2 != '\x01') {
    return 0;
  }
  iVar3 = G_CEnvironment();
  uVar4 = *(undefined4 *)(iVar3 + 0x378);
  cVar2 = MySQL::get_uint(this_00,4,(uint *)(param_1 + 0x50));
  if (cVar2 == '\x01') {
    if (*(int *)(param_1 + 0x50) != 0) {
      MySQL::set_query(this_01,
                       "seLect guild_name from guild_info where guild_id=%d and server_id=%d",
                       *(undefined4 *)(param_1 + 0x50),uVar4);
      cVar2 = MySQL::exec(this_01,true);
      if ((cVar2 == '\x01') && (cVar2 = MySQL::fetch(this_01), cVar2 == '\x01')) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        uVar4 = 0;
      }
      else {
        iVar3 = MySQL::get_n_rows(this_01);
        if (iVar3 == 1) {
          cVar2 = MySQL::get_str(this_01,0,(char *)(param_1 + 0x25),0x28);
          if (cVar2 == '\x01') {
            uVar4 = 1;
          }
          else {
            uVar4 = 0;
          }
        }
        else {
          uVar4 = 0;
        }
      }
      return uVar4;
    }
    return 1;
  }
  return 0;
}
```
