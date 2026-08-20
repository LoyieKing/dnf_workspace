# LoadTODUserState

`_ZN10DB_LoadEtc16LoadTODUserStateEP12SIG_LOAD_ETC`

`DB_LoadEtc::LoadTODUserState(SIG_LOAD_ETC*)`

| 类 | 地址 |
|---|---|
| `DB_LoadEtc` | `0x08406eec` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08406eec  _ZN10DB_LoadEtc16LoadTODUserStateEP12SIG_LOAD_ETC
#           DB_LoadEtc::LoadTODUserState(SIG_LOAD_ETC*)
# range [0x08406eec, 0x08407295]
08406eec +0x000:  push   %ebp
08406eed +0x001:  mov    %esp,%ebp
08406eef +0x003:  push   %esi
08406ef0 +0x004:  push   %ebx
08406ef1 +0x005:  add    $0xffffff80,%esp
08406ef4 +0x008:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
08406ef9 +0x00d:  movl   $0x0,0x8(%esp)
08406f01 +0x015:  movl   $0x2,0x4(%esp)
08406f09 +0x01d:  mov    %eax,(%esp)
08406f0c +0x020:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
08406f11 +0x025:  mov    %eax,-0x14(%ebp)
08406f14 +0x028:  mov    0xc(%ebp),%eax
08406f17 +0x02b:  mov    0x4(%eax),%eax
08406f1a +0x02e:  mov    %eax,0x8(%esp)
08406f1e +0x032:  movl   $"seLect unix_timestamp(first_layer_start_date),today_enter_count,last_clear_layer,enter_count_by_week,unix_timestamp(m_date),unix_timestamp(last_clear_date) from charac_tower_despair where charac_no = %u",0x4(%esp)
08406f26 +0x03a:  mov    -0x14(%ebp),%eax
08406f29 +0x03d:  mov    %eax,(%esp)
08406f2c +0x040:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08406f31 +0x045:  movl   $0x1,0x4(%esp)
08406f39 +0x04d:  mov    -0x14(%ebp),%eax
08406f3c +0x050:  mov    %eax,(%esp)
08406f3f +0x053:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08406f44 +0x058:  test   %al,%al
08406f46 +0x05a:  je     0840728a <+0x39e>
08406f4c +0x060:  mov    -0x14(%ebp),%eax
08406f4f +0x063:  mov    %eax,(%esp)
08406f52 +0x066:  call   083f44bc <_ZN5MySQL5fetchEv>  ; MySQL::fetch()
08406f57 +0x06b:  test   %al,%al
08406f59 +0x06d:  je     0840728a <+0x39e>
08406f5f +0x073:  mov    -0x14(%ebp),%eax
08406f62 +0x076:  mov    %eax,(%esp)
08406f65 +0x079:  call   083f4310 <_ZN5MySQL19getAffectedRowCountEv>  ; MySQL::getAffectedRowCount()
08406f6a +0x07e:  mov    %eax,%ebx
08406f6c +0x080:  xor    $0x1,%ebx
08406f6f +0x083:  mov    %edx,%esi
08406f71 +0x085:  xor    $0x0,%esi
08406f74 +0x088:  mov    %ebx,%eax
08406f76 +0x08a:  or     %esi,%eax
08406f78 +0x08c:  test   %eax,%eax
08406f7a +0x08e:  sete   %al
08406f7d +0x091:  test   %al,%al
08406f7f +0x093:  je     0840728a <+0x39e>
08406f85 +0x099:  movl   $0x0,-0x10(%ebp)
08406f8c +0x0a0:  movb   $0x0,-0x9(%ebp)
08406f90 +0x0a4:  mov    0xc(%ebp),%eax
08406f93 +0x0a7:  lea    0xd71c(%eax),%edx
08406f99 +0x0ad:  mov    -0x10(%ebp),%eax
08406f9c +0x0b0:  addl   $0x1,-0x10(%ebp)
08406fa0 +0x0b4:  mov    %edx,0x8(%esp)
08406fa4 +0x0b8:  mov    %eax,0x4(%esp)
08406fa8 +0x0bc:  mov    -0x14(%ebp),%eax
08406fab +0x0bf:  mov    %eax,(%esp)
08406fae +0x0c2:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
08406fb3 +0x0c7:  mov    %al,-0x9(%ebp)
08406fb6 +0x0ca:  movzbl -0x9(%ebp),%eax
08406fba +0x0ce:  xor    $0x1,%eax
08406fbd +0x0d1:  test   %al,%al
08406fbf +0x0d3:  je     0840700b <+0x11f>
08406fc1 +0x0d5:  mov    0xc(%ebp),%eax
08406fc4 +0x0d8:  mov    0x4(%eax),%ebx
08406fc7 +0x0db:  movl   $0x5,0xc(%esp)
08406fcf +0x0e3:  movl   $0x1b77,0x8(%esp)
08406fd7 +0x0eb:  movl   $&_ZZN10DB_LoadEtc16LoadTODUserStateEP12SIG_LOAD_ETCE19__PRETTY_FUNCTION__,0x4(%esp)
08406fdf +0x0f3:  lea    -0x74(%ebp),%eax
08406fe2 +0x0f6:  mov    %eax,(%esp)
08406fe5 +0x0f9:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08406fea +0x0fe:  mov    %ebx,0x8(%esp)
08406fee +0x102:  movl   $"TOD : select from charac_tower_despair charac_no=%u",0x4(%esp)
08406ff6 +0x10a:  lea    -0x74(%ebp),%eax
08406ff9 +0x10d:  mov    %eax,(%esp)
08406ffc +0x110:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08407001 +0x115:  mov    $0x0,%eax
08407006 +0x11a:  jmp    0840728f <+0x3a3>
0840700b +0x11f:  mov    0xc(%ebp),%eax
0840700e +0x122:  lea    0xd720(%eax),%edx
08407014 +0x128:  mov    -0x10(%ebp),%eax
08407017 +0x12b:  addl   $0x1,-0x10(%ebp)
0840701b +0x12f:  mov    %edx,0x8(%esp)
0840701f +0x133:  mov    %eax,0x4(%esp)
08407023 +0x137:  mov    -0x14(%ebp),%eax
08407026 +0x13a:  mov    %eax,(%esp)
08407029 +0x13d:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
0840702e +0x142:  mov    %al,-0x9(%ebp)
08407031 +0x145:  movzbl -0x9(%ebp),%eax
08407035 +0x149:  xor    $0x1,%eax
08407038 +0x14c:  test   %al,%al
0840703a +0x14e:  je     08407086 <+0x19a>
0840703c +0x150:  mov    0xc(%ebp),%eax
0840703f +0x153:  mov    0x4(%eax),%ebx
08407042 +0x156:  movl   $0x5,0xc(%esp)
0840704a +0x15e:  movl   $0x1b7f,0x8(%esp)
08407052 +0x166:  movl   $&_ZZN10DB_LoadEtc16LoadTODUserStateEP12SIG_LOAD_ETCE19__PRETTY_FUNCTION__,0x4(%esp)
0840705a +0x16e:  lea    -0x64(%ebp),%eax
0840705d +0x171:  mov    %eax,(%esp)
08407060 +0x174:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08407065 +0x179:  mov    %ebx,0x8(%esp)
08407069 +0x17d:  movl   $"TOD select from charac_tower_despair charac_no=%u",0x4(%esp)
08407071 +0x185:  lea    -0x64(%ebp),%eax
08407074 +0x188:  mov    %eax,(%esp)
08407077 +0x18b:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0840707c +0x190:  mov    $0x0,%eax
08407081 +0x195:  jmp    0840728f <+0x3a3>
08407086 +0x19a:  mov    -0x10(%ebp),%eax
08407089 +0x19d:  addl   $0x1,-0x10(%ebp)
0840708d +0x1a1:  lea    -0x76(%ebp),%edx
08407090 +0x1a4:  mov    %edx,0x8(%esp)
08407094 +0x1a8:  mov    %eax,0x4(%esp)
08407098 +0x1ac:  mov    -0x14(%ebp),%eax
0840709b +0x1af:  mov    %eax,(%esp)
0840709e +0x1b2:  call   08116990 <_GLOBAL__I__ZN13CEventManagerC2Ev+0xa5>  ; global constructors keyed to CEventManager::CEventManager()+0xa5
084070a3 +0x1b7:  mov    %al,-0x9(%ebp)
084070a6 +0x1ba:  movzbl -0x9(%ebp),%eax
084070aa +0x1be:  xor    $0x1,%eax
084070ad +0x1c1:  test   %al,%al
084070af +0x1c3:  je     084070fb <+0x20f>
084070b1 +0x1c5:  mov    0xc(%ebp),%eax
084070b4 +0x1c8:  mov    0x4(%eax),%ebx
084070b7 +0x1cb:  movl   $0x5,0xc(%esp)
084070bf +0x1d3:  movl   $0x1b88,0x8(%esp)
084070c7 +0x1db:  movl   $&_ZZN10DB_LoadEtc16LoadTODUserStateEP12SIG_LOAD_ETCE19__PRETTY_FUNCTION__,0x4(%esp)
084070cf +0x1e3:  lea    -0x54(%ebp),%eax
084070d2 +0x1e6:  mov    %eax,(%esp)
084070d5 +0x1e9:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
084070da +0x1ee:  mov    %ebx,0x8(%esp)
084070de +0x1f2:  movl   $"[@TOD] select from charac_tower_despair charac_no=%d",0x4(%esp)
084070e6 +0x1fa:  lea    -0x54(%ebp),%eax
084070e9 +0x1fd:  mov    %eax,(%esp)
084070ec +0x200:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
084070f1 +0x205:  mov    $0x0,%eax
084070f6 +0x20a:  jmp    0840728f <+0x3a3>
084070fb +0x20f:  movzwl -0x76(%ebp),%eax
084070ff +0x213:  movzwl %ax,%eax
08407102 +0x216:  mov    %eax,0x4(%esp)
08407106 +0x21a:  lea    -0x78(%ebp),%eax
08407109 +0x21d:  mov    %eax,(%esp)
0840710c +0x220:  call   085fe7b4 <_ZN9TOD_LayerC1Et>  ; TOD_Layer::TOD_Layer(unsigned short)
08407111 +0x225:  mov    0xc(%ebp),%eax
08407114 +0x228:  movzwl -0x78(%ebp),%edx
08407118 +0x22c:  mov    %dx,0xd724(%eax)
0840711f +0x233:  mov    0xc(%ebp),%eax
08407122 +0x236:  lea    0xd726(%eax),%edx
08407128 +0x23c:  mov    -0x10(%ebp),%eax
0840712b +0x23f:  addl   $0x1,-0x10(%ebp)
0840712f +0x243:  mov    %edx,0x8(%esp)
08407133 +0x247:  mov    %eax,0x4(%esp)
08407137 +0x24b:  mov    -0x14(%ebp),%eax
0840713a +0x24e:  mov    %eax,(%esp)
0840713d +0x251:  call   080fddec <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x118>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x118
08407142 +0x256:  mov    %al,-0x9(%ebp)
08407145 +0x259:  movzbl -0x9(%ebp),%eax
08407149 +0x25d:  xor    $0x1,%eax
0840714c +0x260:  test   %al,%al
0840714e +0x262:  je     0840719a <+0x2ae>
08407150 +0x264:  mov    0xc(%ebp),%eax
08407153 +0x267:  mov    0x4(%eax),%ebx
08407156 +0x26a:  movl   $0x5,0xc(%esp)
0840715e +0x272:  movl   $0x1b92,0x8(%esp)
08407166 +0x27a:  movl   $&_ZZN10DB_LoadEtc16LoadTODUserStateEP12SIG_LOAD_ETCE19__PRETTY_FUNCTION__,0x4(%esp)
0840716e +0x282:  lea    -0x44(%ebp),%eax
08407171 +0x285:  mov    %eax,(%esp)
08407174 +0x288:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08407179 +0x28d:  mov    %ebx,0x8(%esp)
0840717d +0x291:  movl   $"[@TOD] select from charac_tower_despair charac_no=%d",0x4(%esp)
08407185 +0x299:  lea    -0x44(%ebp),%eax
08407188 +0x29c:  mov    %eax,(%esp)
0840718b +0x29f:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08407190 +0x2a4:  mov    $0x0,%eax
08407195 +0x2a9:  jmp    0840728f <+0x3a3>
0840719a +0x2ae:  mov    0xc(%ebp),%eax
0840719d +0x2b1:  lea    0xd728(%eax),%edx
084071a3 +0x2b7:  mov    -0x10(%ebp),%eax
084071a6 +0x2ba:  addl   $0x1,-0x10(%ebp)
084071aa +0x2be:  mov    %edx,0x8(%esp)
084071ae +0x2c2:  mov    %eax,0x4(%esp)
084071b2 +0x2c6:  mov    -0x14(%ebp),%eax
084071b5 +0x2c9:  mov    %eax,(%esp)
084071b8 +0x2cc:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
084071bd +0x2d1:  mov    %al,-0x9(%ebp)
084071c0 +0x2d4:  movzbl -0x9(%ebp),%eax
084071c4 +0x2d8:  xor    $0x1,%eax
084071c7 +0x2db:  test   %al,%al
084071c9 +0x2dd:  je     08407212 <+0x326>
084071cb +0x2df:  mov    0xc(%ebp),%eax
084071ce +0x2e2:  mov    0x4(%eax),%ebx
084071d1 +0x2e5:  movl   $0x5,0xc(%esp)
084071d9 +0x2ed:  movl   $0x1b9a,0x8(%esp)
084071e1 +0x2f5:  movl   $&_ZZN10DB_LoadEtc16LoadTODUserStateEP12SIG_LOAD_ETCE19__PRETTY_FUNCTION__,0x4(%esp)
084071e9 +0x2fd:  lea    -0x34(%ebp),%eax
084071ec +0x300:  mov    %eax,(%esp)
084071ef +0x303:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
084071f4 +0x308:  mov    %ebx,0x8(%esp)
084071f8 +0x30c:  movl   $"[@TOD] select from charac_tower_despair charac_no=%d",0x4(%esp)
08407200 +0x314:  lea    -0x34(%ebp),%eax
08407203 +0x317:  mov    %eax,(%esp)
08407206 +0x31a:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0840720b +0x31f:  mov    $0x0,%eax
08407210 +0x324:  jmp    0840728f <+0x3a3>
08407212 +0x326:  mov    0xc(%ebp),%eax
08407215 +0x329:  lea    0xd72c(%eax),%edx
0840721b +0x32f:  mov    -0x10(%ebp),%eax
0840721e +0x332:  addl   $0x1,-0x10(%ebp)
08407222 +0x336:  mov    %edx,0x8(%esp)
08407226 +0x33a:  mov    %eax,0x4(%esp)
0840722a +0x33e:  mov    -0x14(%ebp),%eax
0840722d +0x341:  mov    %eax,(%esp)
08407230 +0x344:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
08407235 +0x349:  mov    %al,-0x9(%ebp)
08407238 +0x34c:  movzbl -0x9(%ebp),%eax
0840723c +0x350:  xor    $0x1,%eax
0840723f +0x353:  test   %al,%al
08407241 +0x355:  je     0840728a <+0x39e>
08407243 +0x357:  mov    0xc(%ebp),%eax
08407246 +0x35a:  mov    0x4(%eax),%ebx
08407249 +0x35d:  movl   $0x5,0xc(%esp)
08407251 +0x365:  movl   $0x1ba2,0x8(%esp)
08407259 +0x36d:  movl   $&_ZZN10DB_LoadEtc16LoadTODUserStateEP12SIG_LOAD_ETCE19__PRETTY_FUNCTION__,0x4(%esp)
08407261 +0x375:  lea    -0x24(%ebp),%eax
08407264 +0x378:  mov    %eax,(%esp)
08407267 +0x37b:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0840726c +0x380:  mov    %ebx,0x8(%esp)
08407270 +0x384:  movl   $"[@TOD] select from charac_tower_despair charac_no=%d",0x4(%esp)
08407278 +0x38c:  lea    -0x24(%ebp),%eax
0840727b +0x38f:  mov    %eax,(%esp)
0840727e +0x392:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08407283 +0x397:  mov    $0x0,%eax
08407288 +0x39c:  jmp    0840728f <+0x3a3>
0840728a +0x39e:  mov    $0x1,%eax
0840728f +0x3a3:  sub    $0xffffff80,%esp
08407292 +0x3a6:  pop    %ebx
08407293 +0x3a7:  pop    %esi
08407294 +0x3a8:  pop    %ebp
08407295 +0x3a9:  ret
```

## 反编译 C

```c
// DB_LoadEtc::LoadTODUserState @ 0x8406eec

/* DB_LoadEtc::LoadTODUserState(SIG_LOAD_ETC*) */

undefined4 __thiscall DB_LoadEtc::LoadTODUserState(DB_LoadEtc *this,SIG_LOAD_ETC *param_1)

{
  undefined4 uVar1;
  int iVar2;
  char cVar3;
  longlong lVar4;
  undefined2 local_7c;
  ushort local_7a;
  cMyTrace local_78 [16];
  cMyTrace local_68 [16];
  cMyTrace local_58 [16];
  cMyTrace local_48 [16];
  cMyTrace local_38 [16];
  cMyTrace local_28 [16];
  MySQL *local_18;
  int local_14;
  char local_d;
  
  local_18 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
  MySQL::set_query(local_18,
                   "seLect unix_timestamp(first_layer_start_date),today_enter_count,last_clear_layer,enter_count_by_week,unix_timestamp(m_date),unix_timestamp(last_clear_date) from charac_tower_despair where charac_no = %u"
                   ,*(undefined4 *)(param_1 + 4));
  cVar3 = MySQL::exec(local_18,true);
  if (((cVar3 != '\0') && (cVar3 = MySQL::fetch(local_18), cVar3 != '\0')) &&
     (lVar4 = MySQL::getAffectedRowCount(local_18), lVar4 == 1)) {
    local_d = 0;
    local_14 = 1;
    local_d = MySQL::get_int(local_18,0,(int *)(param_1 + 0xd71c));
    iVar2 = local_14;
    if (local_d != '\x01') {
      uVar1 = *(undefined4 *)(param_1 + 4);
      cMyTrace::cMyTrace(local_78,"bool DB_LoadEtc::LoadTODUserState(SIG_LOAD_ETC*)",0x1b77,5);
      cMyTrace::operator()(local_78,"TOD : select from charac_tower_despair charac_no=%u",uVar1);
      return 0;
    }
    local_14 = local_14 + 1;
    local_d = MySQL::get_int(local_18,iVar2,(int *)(param_1 + 0xd720));
    iVar2 = local_14;
    if (local_d != '\x01') {
      uVar1 = *(undefined4 *)(param_1 + 4);
      cMyTrace::cMyTrace(local_68,"bool DB_LoadEtc::LoadTODUserState(SIG_LOAD_ETC*)",0x1b7f,5);
      cMyTrace::operator()(local_68,"TOD select from charac_tower_despair charac_no=%u",uVar1);
      return 0;
    }
    local_14 = local_14 + 1;
    local_d = MySQL::get_ushort(local_18,iVar2,&local_7a);
    if (local_d != '\x01') {
      uVar1 = *(undefined4 *)(param_1 + 4);
      cMyTrace::cMyTrace(local_58,"bool DB_LoadEtc::LoadTODUserState(SIG_LOAD_ETC*)",0x1b88,5);
      cMyTrace::operator()(local_58,"[@TOD] select from charac_tower_despair charac_no=%d",uVar1);
      return 0;
    }
    TOD_Layer::TOD_Layer((TOD_Layer *)&local_7c,local_7a);
    iVar2 = local_14;
    *(undefined2 *)(param_1 + 0xd724) = local_7c;
    local_14 = local_14 + 1;
    local_d = MySQL::get_short(local_18,iVar2,(short *)(param_1 + 0xd726));
    iVar2 = local_14;
    if (local_d != '\x01') {
      uVar1 = *(undefined4 *)(param_1 + 4);
      cMyTrace::cMyTrace(local_48,"bool DB_LoadEtc::LoadTODUserState(SIG_LOAD_ETC*)",0x1b92,5);
      cMyTrace::operator()(local_48,"[@TOD] select from charac_tower_despair charac_no=%d",uVar1);
      return 0;
    }
    local_14 = local_14 + 1;
    local_d = MySQL::get_int(local_18,iVar2,(int *)(param_1 + 0xd728));
    iVar2 = local_14;
    if (local_d != '\x01') {
      uVar1 = *(undefined4 *)(param_1 + 4);
      cMyTrace::cMyTrace(local_38,"bool DB_LoadEtc::LoadTODUserState(SIG_LOAD_ETC*)",0x1b9a,5);
      cMyTrace::operator()(local_38,"[@TOD] select from charac_tower_despair charac_no=%d",uVar1);
      return 0;
    }
    local_14 = local_14 + 1;
    local_d = MySQL::get_int(local_18,iVar2,(int *)(param_1 + 0xd72c));
    if (local_d != '\x01') {
      uVar1 = *(undefined4 *)(param_1 + 4);
      cMyTrace::cMyTrace(local_28,"bool DB_LoadEtc::LoadTODUserState(SIG_LOAD_ETC*)",0x1ba2,5);
      cMyTrace::operator()(local_28,"[@TOD] select from charac_tower_despair charac_no=%d",uVar1);
      return 0;
    }
  }
  return 1;
}
```
