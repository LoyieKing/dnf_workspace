# GetGrowthCreatureEvent

`_ZN8DB_Login22GetGrowthCreatureEventEP14SIG_LOGIN_DATA`

`DB_Login::GetGrowthCreatureEvent(SIG_LOGIN_DATA*)`

| 类 | 地址 |
|---|---|
| `DB_Login` | `0x08448102` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08448102  _ZN8DB_Login22GetGrowthCreatureEventEP14SIG_LOGIN_DATA
#           DB_Login::GetGrowthCreatureEvent(SIG_LOGIN_DATA*)
# range [0x08448102, 0x0844834d]
08448102 +0x000:  push   %ebp
08448103 +0x001:  mov    %esp,%ebp
08448105 +0x003:  sub    $0x48,%esp
08448108 +0x006:  mov    &_ZN10GlobalData15s_event_managerE,%eax
0844810d +0x00b:  movl   $0x67,0x4(%esp)
08448115 +0x013:  mov    %eax,(%esp)
08448118 +0x016:  call   08115998 <_ZN13CEventManager14GetRepeatEventEi>  ; CEventManager::GetRepeatEvent(int)
0844811d +0x01b:  mov    (%eax),%edx
0844811f +0x01d:  add    $0x34,%edx
08448122 +0x020:  mov    (%edx),%edx
08448124 +0x022:  movl   $0x0,0x4(%esp)
0844812c +0x02a:  mov    %eax,(%esp)
0844812f +0x02d:  call   *%edx
08448131 +0x02f:  xor    $0x1,%eax
08448134 +0x032:  test   %al,%al
08448136 +0x034:  je     08448142 <+0x40>
08448138 +0x036:  mov    $0x1,%eax
0844813d +0x03b:  jmp    0844834c <+0x24a>
08448142 +0x040:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
08448147 +0x045:  movl   $0x0,0x8(%esp)
0844814f +0x04d:  movl   $0x9,0x4(%esp)
08448157 +0x055:  mov    %eax,(%esp)
0844815a +0x058:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0844815f +0x05d:  mov    %eax,-0x18(%ebp)
08448162 +0x060:  mov    0xc(%ebp),%eax
08448165 +0x063:  mov    0xc0(%eax),%eax
0844816b +0x069:  mov    %eax,0x8(%esp)
0844816f +0x06d:  movl   $"seLect server_id, charac_no, job_type, charac_name from event_1208_growthcreature where m_id = %d",0x4(%esp)
08448177 +0x075:  mov    -0x18(%ebp),%eax
0844817a +0x078:  mov    %eax,(%esp)
0844817d +0x07b:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08448182 +0x080:  movl   $0x1,0x4(%esp)
0844818a +0x088:  mov    -0x18(%ebp),%eax
0844818d +0x08b:  mov    %eax,(%esp)
08448190 +0x08e:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08448195 +0x093:  mov    %al,-0x19(%ebp)
08448198 +0x096:  movzbl -0x19(%ebp),%eax
0844819c +0x09a:  xor    $0x1,%eax
0844819f +0x09d:  test   %al,%al
084481a1 +0x09f:  je     084481e6 <+0xe4>
084481a3 +0x0a1:  mov    0xc(%ebp),%eax
084481a6 +0x0a4:  mov    0xc0(%eax),%eax
084481ac +0x0aa:  mov    %eax,0x14(%esp)
084481b0 +0x0ae:  movl   $"LoadGrowthCreatureEvent Query Error : m_id(%d)",0x10(%esp)
084481b8 +0x0b6:  movl   $0xb4b9,0xc(%esp)
084481c0 +0x0be:  movl   $&_ZZN8DB_Login22GetGrowthCreatureEventEP14SIG_LOGIN_DATAE19__PRETTY_FUNCTION__,0x8(%esp)
084481c8 +0x0c6:  movl   $"DBThread.cpp",0x4(%esp)
084481d0 +0x0ce:  movl   $0x1,(%esp)
084481d7 +0x0d5:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
084481dc +0x0da:  mov    $0x0,%eax
084481e1 +0x0df:  jmp    0844834c <+0x24a>
084481e6 +0x0e4:  mov    -0x18(%ebp),%eax
084481e9 +0x0e7:  mov    %eax,(%esp)
084481ec +0x0ea:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
084481f1 +0x0ef:  test   %eax,%eax
084481f3 +0x0f1:  setne  %al
084481f6 +0x0f4:  test   %al,%al
084481f8 +0x0f6:  je     08448327 <+0x225>
084481fe +0x0fc:  movl   $0x0,-0x14(%ebp)
08448205 +0x103:  jmp    0844830c <+0x20a>
0844820a +0x108:  mov    -0x18(%ebp),%eax
0844820d +0x10b:  mov    %eax,(%esp)
08448210 +0x10e:  call   083f44bc <_ZN5MySQL5fetchEv>  ; MySQL::fetch()
08448215 +0x113:  xor    $0x1,%eax
08448218 +0x116:  test   %al,%al
0844821a +0x118:  je     08448226 <+0x124>
0844821c +0x11a:  mov    $0x0,%eax
08448221 +0x11f:  jmp    0844834c <+0x24a>
08448226 +0x124:  cmpl   $0xa,-0x14(%ebp)
0844822a +0x128:  jbe    08448236 <+0x134>
0844822c +0x12a:  mov    $0x0,%eax
08448231 +0x12f:  jmp    0844834c <+0x24a>
08448236 +0x134:  mov    -0x14(%ebp),%eax
08448239 +0x137:  imul   $0x2c,%eax,%eax
0844823c +0x13a:  add    $0x4150,%eax
08448241 +0x13f:  add    0xc(%ebp),%eax
08448244 +0x142:  add    $0x4,%eax
08448247 +0x145:  mov    %eax,-0x10(%ebp)
0844824a +0x148:  movl   $0x0,-0xc(%ebp)
08448251 +0x14f:  mov    -0x10(%ebp),%eax
08448254 +0x152:  mov    %eax,0x8(%esp)
08448258 +0x156:  movl   $0x0,0x4(%esp)
08448260 +0x15e:  mov    -0x18(%ebp),%eax
08448263 +0x161:  mov    %eax,(%esp)
08448266 +0x164:  call   080fddec <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x118>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x118
0844826b +0x169:  xor    $0x1,%eax
0844826e +0x16c:  test   %al,%al
08448270 +0x16e:  je     0844827c <+0x17a>
08448272 +0x170:  mov    $0x0,%eax
08448277 +0x175:  jmp    0844834c <+0x24a>
0844827c +0x17a:  mov    -0x10(%ebp),%eax
0844827f +0x17d:  add    $0x4,%eax
08448282 +0x180:  mov    %eax,0x8(%esp)
08448286 +0x184:  movl   $0x1,0x4(%esp)
0844828e +0x18c:  mov    -0x18(%ebp),%eax
08448291 +0x18f:  mov    %eax,(%esp)
08448294 +0x192:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
08448299 +0x197:  xor    $0x1,%eax
0844829c +0x19a:  test   %al,%al
0844829e +0x19c:  je     084482aa <+0x1a8>
084482a0 +0x19e:  mov    $0x0,%eax
084482a5 +0x1a3:  jmp    0844834c <+0x24a>
084482aa +0x1a8:  mov    -0x10(%ebp),%eax
084482ad +0x1ab:  add    $0x8,%eax
084482b0 +0x1ae:  mov    %eax,0x8(%esp)
084482b4 +0x1b2:  movl   $0x2,0x4(%esp)
084482bc +0x1ba:  mov    -0x18(%ebp),%eax
084482bf +0x1bd:  mov    %eax,(%esp)
084482c2 +0x1c0:  call   0814201c <_GLOBAL__I__ZN12advancealtar18convertZipToStringEP5MySQLiPcjS2_j+0x370>  ; global constructors keyed to advancealtar::convertZipToString(MySQL*, int, char*, unsigned int, char*, unsigned int)+0x370
084482c7 +0x1c5:  xor    $0x1,%eax
084482ca +0x1c8:  test   %al,%al
084482cc +0x1ca:  je     084482d5 <+0x1d3>
084482ce +0x1cc:  mov    $0x0,%eax
084482d3 +0x1d1:  jmp    0844834c <+0x24a>
084482d5 +0x1d3:  mov    -0x10(%ebp),%eax
084482d8 +0x1d6:  add    $0xc,%eax
084482db +0x1d9:  movl   $0x1d,0xc(%esp)
084482e3 +0x1e1:  mov    %eax,0x8(%esp)
084482e7 +0x1e5:  movl   $0x3,0x4(%esp)
084482ef +0x1ed:  mov    -0x18(%ebp),%eax
084482f2 +0x1f0:  mov    %eax,(%esp)
084482f5 +0x1f3:  call   080ecdea <_GLOBAL__I__ZN12CDBConnectorC2EP5DBMgr+0xcf>  ; global constructors keyed to CDBConnector::CDBConnector(DBMgr*)+0xcf
084482fa +0x1f8:  xor    $0x1,%eax
084482fd +0x1fb:  test   %al,%al
084482ff +0x1fd:  je     08448308 <+0x206>
08448301 +0x1ff:  mov    $0x0,%eax
08448306 +0x204:  jmp    0844834c <+0x24a>
08448308 +0x206:  addl   $0x1,-0x14(%ebp)
0844830c +0x20a:  mov    -0x18(%ebp),%eax
0844830f +0x20d:  mov    %eax,(%esp)
08448312 +0x210:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
08448317 +0x215:  cmp    -0x14(%ebp),%eax
0844831a +0x218:  seta   %al
0844831d +0x21b:  test   %al,%al
0844831f +0x21d:  jne    0844820a <+0x108>
08448325 +0x223:  jmp    08448347 <+0x245>
08448327 +0x225:  mov    0xc(%ebp),%eax
0844832a +0x228:  add    $0x4154,%eax
0844832f +0x22d:  movl   $0x1e4,0x8(%esp)
08448337 +0x235:  movl   $0x0,0x4(%esp)
0844833f +0x23d:  mov    %eax,(%esp)
08448342 +0x240:  call   0807dcc0 <_init+0x5b8>
08448347 +0x245:  mov    $0x1,%eax
0844834c +0x24a:  leave
0844834d +0x24b:  ret
```

## 反编译 C

```c
// DB_Login::GetGrowthCreatureEvent @ 0x8448102

/* DB_Login::GetGrowthCreatureEvent(SIG_LOGIN_DATA*) */

undefined4 __thiscall DB_Login::GetGrowthCreatureEvent(DB_Login *this,SIG_LOGIN_DATA *param_1)

{
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  MySQL *this_00;
  int iVar4;
  uint uVar5;
  uint local_18;
  
  piVar2 = (int *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0x67);
  cVar1 = (**(code **)(*piVar2 + 0x34))(piVar2,0);
  if (cVar1 == '\x01') {
    this_00 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,9,0);
    MySQL::set_query(this_00,
                     "seLect server_id, charac_no, job_type, charac_name from event_1208_growthcreature where m_id = %d"
                     ,*(undefined4 *)(param_1 + 0xc0));
    cVar1 = MySQL::exec(this_00,true);
    if (cVar1 == '\x01') {
      iVar4 = MySQL::get_n_rows(this_00);
      if (iVar4 == 0) {
        memset(param_1 + 0x4154,0,0x1e4);
      }
      else {
        for (local_18 = 0; uVar5 = MySQL::get_n_rows(this_00), local_18 < uVar5;
            local_18 = local_18 + 1) {
          cVar1 = MySQL::fetch(this_00);
          if (cVar1 != '\x01') {
            return 0;
          }
          if (10 < local_18) {
            return 0;
          }
          cVar1 = MySQL::get_short(this_00,0,(short *)(param_1 + local_18 * 0x2c + 0x4154));
          if (cVar1 != '\x01') {
            return 0;
          }
          cVar1 = MySQL::get_int(this_00,1,(int *)(param_1 + local_18 * 0x2c + 0x4158));
          if (cVar1 != '\x01') {
            return 0;
          }
          cVar1 = MySQL::get_short(this_00,2,(int *)(param_1 + local_18 * 0x2c + 0x415c));
          if (cVar1 != '\x01') {
            return 0;
          }
          cVar1 = MySQL::get_str(this_00,3,(char *)(param_1 + local_18 * 0x2c + 0x4160),0x1d);
          if (cVar1 != '\x01') {
            return 0;
          }
        }
      }
      uVar3 = 1;
    }
    else {
      LogManager::logFormat
                (1,"DBThread.cpp","bool DB_Login::GetGrowthCreatureEvent(SIG_LOGIN_DATA*)",0xb4b9,
                 "LoadGrowthCreatureEvent Query Error : m_id(%d)",*(undefined4 *)(param_1 + 0xc0));
      uVar3 = 0;
    }
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}
```
