# GetUserFatigueCount

`_ZN8DB_Login19GetUserFatigueCountEP14SIG_LOGIN_DATA`

`DB_Login::GetUserFatigueCount(SIG_LOGIN_DATA*)`

| 类 | 地址 |
|---|---|
| `DB_Login` | `0x084150e8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084150e8  _ZN8DB_Login19GetUserFatigueCountEP14SIG_LOGIN_DATA
#           DB_Login::GetUserFatigueCount(SIG_LOGIN_DATA*)
# range [0x084150e8, 0x084152af]
084150e8 +0x000:  push   %ebp
084150e9 +0x001:  mov    %esp,%ebp
084150eb +0x003:  push   %esi
084150ec +0x004:  push   %ebx
084150ed +0x005:  sub    $0x40,%esp
084150f0 +0x008:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
084150f5 +0x00d:  mov    %eax,(%esp)
084150f8 +0x010:  call   08110b62 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x74>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x74
084150fd +0x015:  movl   $0x56,0x4(%esp)
08415105 +0x01d:  mov    %eax,(%esp)
08415108 +0x020:  call   0810ba36 <_ZN13EventClassify15CEventScriptMng11is_eventingEi>  ; EventClassify::CEventScriptMng::is_eventing(int)
0841510d +0x025:  xor    $0x1,%eax
08415110 +0x028:  test   %al,%al
08415112 +0x02a:  je     0841511e <+0x36>
08415114 +0x02c:  mov    $0x0,%eax
08415119 +0x031:  jmp    084152a8 <+0x1c0>
0841511e +0x036:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
08415123 +0x03b:  movl   $0x0,0x8(%esp)
0841512b +0x043:  movl   $0x9,0x4(%esp)
08415133 +0x04b:  mov    %eax,(%esp)
08415136 +0x04e:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0841513b +0x053:  mov    %eax,-0x1c(%ebp)
0841513e +0x056:  mov    0xc(%ebp),%eax
08415141 +0x059:  movw   $0x0,0x3faa(%eax)
0841514a +0x062:  mov    0xc(%ebp),%eax
0841514d +0x065:  movb   $0x0,0x3fa9(%eax)
08415154 +0x06c:  movl   $0x0,-0x18(%ebp)
0841515b +0x073:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08415160 +0x078:  mov    %eax,(%esp)
08415163 +0x07b:  call   08110b62 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x74>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x74
08415168 +0x080:  movl   $0x56,0x4(%esp)
08415170 +0x088:  mov    %eax,(%esp)
08415173 +0x08b:  call   0810b96a <_ZN13EventClassify15CEventScriptMng16get_event_entityEi>  ; EventClassify::CEventScriptMng::get_event_entity(int)
08415178 +0x090:  mov    %eax,-0x18(%ebp)
0841517b +0x093:  cmpl   $0x0,-0x18(%ebp)
0841517f +0x097:  jne    0841518b <+0xa3>
08415181 +0x099:  mov    $0x0,%eax
08415186 +0x09e:  jmp    084152a8 <+0x1c0>
0841518b +0x0a3:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08415190 +0x0a8:  mov    %eax,(%esp)
08415193 +0x0ab:  call   08110b62 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x74>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x74
08415198 +0x0b0:  mov    %eax,(%esp)
0841519b +0x0b3:  call   0810c6ca <_ZN13EventClassify15CEventScriptMng18get_today_time_dayEv>  ; EventClassify::CEventScriptMng::get_today_time_day()
084151a0 +0x0b8:  mov    %al,-0x11(%ebp)
084151a3 +0x0bb:  movzbl -0x11(%ebp),%esi
084151a7 +0x0bf:  mov    0xc(%ebp),%eax
084151aa +0x0c2:  mov    0xc0(%eax),%eax
084151b0 +0x0c8:  movl   $0x0,0x4(%esp)
084151b8 +0x0d0:  mov    %eax,(%esp)
084151bb +0x0d3:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
084151c0 +0x0d8:  mov    %eax,%ebx
084151c2 +0x0da:  mov    -0x18(%ebp),%eax
084151c5 +0x0dd:  mov    (%eax),%eax
084151c7 +0x0df:  add    $0x20,%eax
084151ca +0x0e2:  mov    (%eax),%edx
084151cc +0x0e4:  mov    -0x18(%ebp),%eax
084151cf +0x0e7:  mov    %eax,(%esp)
084151d2 +0x0ea:  call   *%edx
084151d4 +0x0ec:  mov    %eax,(%esp)
084151d7 +0x0ef:  call   08adeab0 <_Z9toTStringRKSs>  ; toTString(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
084151dc +0x0f4:  mov    %esi,0x10(%esp)
084151e0 +0x0f8:  mov    %ebx,0xc(%esp)
084151e4 +0x0fc:  mov    %eax,0x8(%esp)
084151e8 +0x100:  movl   $"seLect fatigue from %s where m_id=%s and occ_day = %d",0x4(%esp)
084151f0 +0x108:  mov    -0x1c(%ebp),%eax
084151f3 +0x10b:  mov    %eax,(%esp)
084151f6 +0x10e:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
084151fb +0x113:  movl   $0x1,0x4(%esp)
08415203 +0x11b:  mov    -0x1c(%ebp),%eax
08415206 +0x11e:  mov    %eax,(%esp)
08415209 +0x121:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0841520e +0x126:  xor    $0x1,%eax
08415211 +0x129:  test   %al,%al
08415213 +0x12b:  je     0841521f <+0x137>
08415215 +0x12d:  mov    $0x0,%eax
0841521a +0x132:  jmp    084152a8 <+0x1c0>
0841521f +0x137:  mov    -0x1c(%ebp),%eax
08415222 +0x13a:  mov    %eax,(%esp)
08415225 +0x13d:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
0841522a +0x142:  mov    %eax,-0x10(%ebp)
0841522d +0x145:  cmpl   $0x0,-0x10(%ebp)
08415231 +0x149:  jle    084152a3 <+0x1bb>
08415233 +0x14b:  movw   $0x0,-0x1e(%ebp)
08415239 +0x151:  mov    -0x1c(%ebp),%eax
0841523c +0x154:  mov    %eax,(%esp)
0841523f +0x157:  call   083f44bc <_ZN5MySQL5fetchEv>  ; MySQL::fetch()
08415244 +0x15c:  mov    %al,-0x9(%ebp)
08415247 +0x15f:  movzbl -0x9(%ebp),%eax
0841524b +0x163:  xor    $0x1,%eax
0841524e +0x166:  test   %al,%al
08415250 +0x168:  je     08415259 <+0x171>
08415252 +0x16a:  mov    $0x0,%eax
08415257 +0x16f:  jmp    084152a8 <+0x1c0>
08415259 +0x171:  lea    -0x1e(%ebp),%eax
0841525c +0x174:  mov    %eax,0x8(%esp)
08415260 +0x178:  movl   $0x0,0x4(%esp)
08415268 +0x180:  mov    -0x1c(%ebp),%eax
0841526b +0x183:  mov    %eax,(%esp)
0841526e +0x186:  call   080fddec <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x118>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x118
08415273 +0x18b:  mov    %al,-0x9(%ebp)
08415276 +0x18e:  movzbl -0x9(%ebp),%eax
0841527a +0x192:  xor    $0x1,%eax
0841527d +0x195:  test   %al,%al
0841527f +0x197:  je     08415288 <+0x1a0>
08415281 +0x199:  mov    $0x0,%eax
08415286 +0x19e:  jmp    084152a8 <+0x1c0>
08415288 +0x1a0:  movzwl -0x1e(%ebp),%edx
0841528c +0x1a4:  mov    0xc(%ebp),%eax
0841528f +0x1a7:  mov    %dx,0x3faa(%eax)
08415296 +0x1ae:  mov    0xc(%ebp),%eax
08415299 +0x1b1:  movzbl -0x11(%ebp),%edx
0841529d +0x1b5:  mov    %dl,0x3fa9(%eax)
084152a3 +0x1bb:  mov    $0x1,%eax
084152a8 +0x1c0:  add    $0x40,%esp
084152ab +0x1c3:  pop    %ebx
084152ac +0x1c4:  pop    %esi
084152ad +0x1c5:  pop    %ebp
084152ae +0x1c6:  ret
084152af +0x1c7:  nop
```

## 反编译 C

```c
// DB_Login::GetUserFatigueCount @ 0x84150e8

/* DB_Login::GetUserFatigueCount(SIG_LOGIN_DATA*) */

undefined4 __thiscall DB_Login::GetUserFatigueCount(DB_Login *this,SIG_LOGIN_DATA *param_1)

{
  char cVar1;
  CDataManager *pCVar2;
  CEventScriptMng *pCVar3;
  undefined4 uVar4;
  int iVar5;
  string *sSrc;
  TCHAR *pTVar6;
  uint uVar7;
  short local_22;
  MySQL *local_20;
  int *local_1c;
  SIG_LOGIN_DATA local_15;
  int local_14;
  char local_d;
  
  pCVar2 = (CDataManager *)G_CDataManager();
  pCVar3 = (CEventScriptMng *)CDataManager::get_event_script_mng(pCVar2);
  cVar1 = EventClassify::CEventScriptMng::is_eventing(pCVar3,0x56);
  if (cVar1 == '\x01') {
    local_20 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,9,0);
    *(undefined2 *)(param_1 + 0x3faa) = 0;
    param_1[0x3fa9] = (SIG_LOGIN_DATA)0x0;
    local_1c = (int *)0x0;
    pCVar2 = (CDataManager *)G_CDataManager();
    iVar5 = CDataManager::get_event_script_mng(pCVar2);
    local_1c = (int *)EventClassify::CEventScriptMng::get_event_entity(iVar5);
    if (local_1c == (int *)0x0) {
      uVar4 = 0;
    }
    else {
      pCVar2 = (CDataManager *)G_CDataManager();
      pCVar3 = (CEventScriptMng *)CDataManager::get_event_script_mng(pCVar2);
      local_15 = (SIG_LOGIN_DATA)EventClassify::CEventScriptMng::get_today_time_day(pCVar3);
      uVar7 = (uint)(byte)local_15;
      uVar4 = NumberToString(*(uint *)(param_1 + 0xc0),0);
      sSrc = (string *)(**(code **)(*local_1c + 0x20))(local_1c);
      pTVar6 = toTString(sSrc);
      MySQL::set_query(local_20,"seLect fatigue from %s where m_id=%s and occ_day = %d",pTVar6,uVar4
                       ,uVar7);
      cVar1 = MySQL::exec(local_20,true);
      if (cVar1 == '\x01') {
        local_14 = MySQL::get_n_rows(local_20);
        if (0 < local_14) {
          local_22 = 0;
          local_d = MySQL::fetch(local_20);
          if (local_d != '\x01') {
            return 0;
          }
          cVar1 = MySQL::get_short(local_20,0,&local_22);
          if (cVar1 != '\x01') {
            return 0;
          }
          *(short *)(param_1 + 0x3faa) = local_22;
          param_1[0x3fa9] = local_15;
        }
        uVar4 = 1;
      }
      else {
        uVar4 = 0;
      }
    }
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}
```
