# GetBingoEvent

`_ZN8DB_Login13GetBingoEventEP14SIG_LOGIN_DATA`

`DB_Login::GetBingoEvent(SIG_LOGIN_DATA*)`

| 类 | 地址 |
|---|---|
| `DB_Login` | `0x08448bee` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08448bee  _ZN8DB_Login13GetBingoEventEP14SIG_LOGIN_DATA
#           DB_Login::GetBingoEvent(SIG_LOGIN_DATA*)
# range [0x08448bee, 0x08448eb7]
08448bee +0x000:  push   %ebp
08448bef +0x001:  mov    %esp,%ebp
08448bf1 +0x003:  push   %ebx
08448bf2 +0x004:  sub    $0x64,%esp
08448bf5 +0x007:  mov    0xc(%ebp),%eax
08448bf8 +0x00a:  add    $0x4138,%eax
08448bfd +0x00f:  mov    %eax,(%esp)
08448c00 +0x012:  call   0844d600 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x216>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x216
08448c05 +0x017:  mov    &_ZN10GlobalData15s_event_managerE,%eax
08448c0a +0x01c:  movl   $0x6a,0x4(%esp)
08448c12 +0x024:  mov    %eax,(%esp)
08448c15 +0x027:  call   08115998 <_ZN13CEventManager14GetRepeatEventEi>  ; CEventManager::GetRepeatEvent(int)
08448c1a +0x02c:  mov    (%eax),%edx
08448c1c +0x02e:  add    $0x34,%edx
08448c1f +0x031:  mov    (%edx),%edx
08448c21 +0x033:  movl   $0x0,0x4(%esp)
08448c29 +0x03b:  mov    %eax,(%esp)
08448c2c +0x03e:  call   *%edx
08448c2e +0x040:  xor    $0x1,%eax
08448c31 +0x043:  test   %al,%al
08448c33 +0x045:  je     08448c3f <+0x51>
08448c35 +0x047:  mov    $0x1,%eax
08448c3a +0x04c:  jmp    08448eb1 <+0x2c3>
08448c3f +0x051:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
08448c44 +0x056:  movl   $0x0,0x8(%esp)
08448c4c +0x05e:  movl   $0x9,0x4(%esp)
08448c54 +0x066:  mov    %eax,(%esp)
08448c57 +0x069:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
08448c5c +0x06e:  mov    %eax,-0x1c(%ebp)
08448c5f +0x071:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
08448c64 +0x076:  mov    0x37c(%eax),%ebx
08448c6a +0x07c:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
08448c71 +0x083:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
08448c76 +0x088:  mov    %ebx,0x4(%esp)
08448c7a +0x08c:  mov    %eax,(%esp)
08448c7d +0x08f:  call   0810912a <_Z23GetCurrentResetBaseTimeli>  ; GetCurrentResetBaseTime(long, int)
08448c82 +0x094:  mov    %eax,-0x18(%ebp)
08448c85 +0x097:  mov    0xc(%ebp),%eax
08448c88 +0x09a:  mov    0xc0(%eax),%eax
08448c8e +0x0a0:  movl   $0x0,0x4(%esp)
08448c96 +0x0a8:  mov    %eax,(%esp)
08448c99 +0x0ab:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
08448c9e +0x0b0:  mov    -0x18(%ebp),%edx
08448ca1 +0x0b3:  mov    %edx,0xc(%esp)
08448ca5 +0x0b7:  mov    %eax,0x8(%esp)
08448ca9 +0x0bb:  movl   $"seLect board,reward from event_1208_bingo where m_id = %s and occ_date > from_unixtime(%u)",0x4(%esp)
08448cb1 +0x0c3:  mov    -0x1c(%ebp),%eax
08448cb4 +0x0c6:  mov    %eax,(%esp)
08448cb7 +0x0c9:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08448cbc +0x0ce:  movl   $0x1,0x4(%esp)
08448cc4 +0x0d6:  mov    -0x1c(%ebp),%eax
08448cc7 +0x0d9:  mov    %eax,(%esp)
08448cca +0x0dc:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08448ccf +0x0e1:  xor    $0x1,%eax
08448cd2 +0x0e4:  test   %al,%al
08448cd4 +0x0e6:  je     08448ce0 <+0xf2>
08448cd6 +0x0e8:  mov    $0x0,%eax
08448cdb +0x0ed:  jmp    08448eb1 <+0x2c3>
08448ce0 +0x0f2:  mov    -0x1c(%ebp),%eax
08448ce3 +0x0f5:  mov    %eax,(%esp)
08448ce6 +0x0f8:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
08448ceb +0x0fd:  mov    %eax,-0x14(%ebp)
08448cee +0x100:  cmpl   $0x0,-0x14(%ebp)
08448cf2 +0x104:  jne    08448cfe <+0x110>
08448cf4 +0x106:  mov    $0x1,%eax
08448cf9 +0x10b:  jmp    08448eb1 <+0x2c3>
08448cfe +0x110:  movb   $0x0,-0xd(%ebp)
08448d02 +0x114:  mov    -0x1c(%ebp),%eax
08448d05 +0x117:  mov    %eax,(%esp)
08448d08 +0x11a:  call   083f44bc <_ZN5MySQL5fetchEv>  ; MySQL::fetch()
08448d0d +0x11f:  mov    %al,-0xd(%ebp)
08448d10 +0x122:  movzbl -0xd(%ebp),%eax
08448d14 +0x126:  xor    $0x1,%eax
08448d17 +0x129:  test   %al,%al
08448d19 +0x12b:  je     08448d7a <+0x18c>
08448d1b +0x12d:  mov    0xc(%ebp),%eax
08448d1e +0x130:  mov    0xc0(%eax),%eax
08448d24 +0x136:  movl   $0x0,0x4(%esp)
08448d2c +0x13e:  mov    %eax,(%esp)
08448d2f +0x141:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
08448d34 +0x146:  mov    %eax,%ebx
08448d36 +0x148:  movl   $0x5,0xc(%esp)
08448d3e +0x150:  movl   $0xb71b,0x8(%esp)
08448d46 +0x158:  movl   $&_ZZN8DB_Login13GetBingoEventEP14SIG_LOGIN_DATAE19__PRETTY_FUNCTION__,0x4(%esp)
08448d4e +0x160:  lea    -0x4c(%ebp),%eax
08448d51 +0x163:  mov    %eax,(%esp)
08448d54 +0x166:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08448d59 +0x16b:  mov    %ebx,0x8(%esp)
08448d5d +0x16f:  movl   $"DB_Login::GetBingoEvent, fetch() ERROR m_id=%s",0x4(%esp)
08448d65 +0x177:  lea    -0x4c(%ebp),%eax
08448d68 +0x17a:  mov    %eax,(%esp)
08448d6b +0x17d:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08448d70 +0x182:  mov    $0x0,%eax
08448d75 +0x187:  jmp    08448eb1 <+0x2c3>
08448d7a +0x18c:  movl   $0x0,-0xc(%ebp)
08448d81 +0x193:  mov    0xc(%ebp),%eax
08448d84 +0x196:  lea    0x413c(%eax),%edx
08448d8a +0x19c:  mov    -0xc(%ebp),%eax
08448d8d +0x19f:  addl   $0x1,-0xc(%ebp)
08448d91 +0x1a3:  mov    %edx,0x8(%esp)
08448d95 +0x1a7:  mov    %eax,0x4(%esp)
08448d99 +0x1ab:  mov    -0x1c(%ebp),%eax
08448d9c +0x1ae:  mov    %eax,(%esp)
08448d9f +0x1b1:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
08448da4 +0x1b6:  mov    %al,-0xd(%ebp)
08448da7 +0x1b9:  movzbl -0xd(%ebp),%eax
08448dab +0x1bd:  xor    $0x1,%eax
08448dae +0x1c0:  test   %al,%al
08448db0 +0x1c2:  je     08448e18 <+0x22a>
08448db2 +0x1c4:  mov    0xc(%ebp),%eax
08448db5 +0x1c7:  mov    0xc0(%eax),%eax
08448dbb +0x1cd:  movl   $0x0,0x4(%esp)
08448dc3 +0x1d5:  mov    %eax,(%esp)
08448dc6 +0x1d8:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
08448dcb +0x1dd:  mov    %eax,%ebx
08448dcd +0x1df:  movl   $0x5,0xc(%esp)
08448dd5 +0x1e7:  movl   $0xb723,0x8(%esp)
08448ddd +0x1ef:  movl   $&_ZZN8DB_Login13GetBingoEventEP14SIG_LOGIN_DATAE19__PRETTY_FUNCTION__,0x4(%esp)
08448de5 +0x1f7:  lea    -0x3c(%ebp),%eax
08448de8 +0x1fa:  mov    %eax,(%esp)
08448deb +0x1fd:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08448df0 +0x202:  mov    %ebx,0xc(%esp)
08448df4 +0x206:  mov    -0xc(%ebp),%eax
08448df7 +0x209:  mov    %eax,0x8(%esp)
08448dfb +0x20d:  movl   $"DB_Login::GetBingoEvent, get(%d) ERROR m_id=%s",0x4(%esp)
08448e03 +0x215:  lea    -0x3c(%ebp),%eax
08448e06 +0x218:  mov    %eax,(%esp)
08448e09 +0x21b:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08448e0e +0x220:  mov    $0x0,%eax
08448e13 +0x225:  jmp    08448eb1 <+0x2c3>
08448e18 +0x22a:  mov    0xc(%ebp),%eax
08448e1b +0x22d:  lea    0x4138(%eax),%edx
08448e21 +0x233:  mov    -0xc(%ebp),%eax
08448e24 +0x236:  addl   $0x1,-0xc(%ebp)
08448e28 +0x23a:  mov    %edx,0x8(%esp)
08448e2c +0x23e:  mov    %eax,0x4(%esp)
08448e30 +0x242:  mov    -0x1c(%ebp),%eax
08448e33 +0x245:  mov    %eax,(%esp)
08448e36 +0x248:  call   080fde54 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x180>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x180
08448e3b +0x24d:  mov    %al,-0xd(%ebp)
08448e3e +0x250:  movzbl -0xd(%ebp),%eax
08448e42 +0x254:  xor    $0x1,%eax
08448e45 +0x257:  test   %al,%al
08448e47 +0x259:  je     08448eac <+0x2be>
08448e49 +0x25b:  mov    0xc(%ebp),%eax
08448e4c +0x25e:  mov    0xc0(%eax),%eax
08448e52 +0x264:  movl   $0x0,0x4(%esp)
08448e5a +0x26c:  mov    %eax,(%esp)
08448e5d +0x26f:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
08448e62 +0x274:  mov    %eax,%ebx
08448e64 +0x276:  movl   $0x5,0xc(%esp)
08448e6c +0x27e:  movl   $0xb729,0x8(%esp)
08448e74 +0x286:  movl   $&_ZZN8DB_Login13GetBingoEventEP14SIG_LOGIN_DATAE19__PRETTY_FUNCTION__,0x4(%esp)
08448e7c +0x28e:  lea    -0x2c(%ebp),%eax
08448e7f +0x291:  mov    %eax,(%esp)
08448e82 +0x294:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08448e87 +0x299:  mov    %ebx,0xc(%esp)
08448e8b +0x29d:  mov    -0xc(%ebp),%eax
08448e8e +0x2a0:  mov    %eax,0x8(%esp)
08448e92 +0x2a4:  movl   $"DB_Login::GetBingoEvent, get(%d) ERROR m_id=%s",0x4(%esp)
08448e9a +0x2ac:  lea    -0x2c(%ebp),%eax
08448e9d +0x2af:  mov    %eax,(%esp)
08448ea0 +0x2b2:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08448ea5 +0x2b7:  mov    $0x0,%eax
08448eaa +0x2bc:  jmp    08448eb1 <+0x2c3>
08448eac +0x2be:  mov    $0x0,%eax
08448eb1 +0x2c3:  add    $0x64,%esp
08448eb4 +0x2c6:  pop    %ebx
08448eb5 +0x2c7:  pop    %ebp
08448eb6 +0x2c8:  ret
08448eb7 +0x2c9:  nop
```

## 反编译 C

```c
// DB_Login::GetBingoEvent @ 0x8448bee

/* DB_Login::GetBingoEvent(SIG_LOGIN_DATA*) */

undefined4 __thiscall DB_Login::GetBingoEvent(DB_Login *this,SIG_LOGIN_DATA *param_1)

{
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  cMyTrace local_50 [16];
  cMyTrace local_40 [16];
  cMyTrace local_30 [16];
  MySQL *local_20;
  undefined4 local_1c;
  int local_18;
  char local_11;
  int local_10;
  
  SIG_BINGO_EVENT::clear((SIG_BINGO_EVENT *)(param_1 + 0x4138));
  piVar2 = (int *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0x6a);
  cVar1 = (**(code **)(*piVar2 + 0x34))(piVar2,0);
  if (cVar1 == '\x01') {
    local_20 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,9,0);
    iVar4 = G_CEnvironment();
    iVar4 = *(int *)(iVar4 + 0x37c);
    lVar5 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
    local_1c = GetCurrentResetBaseTime(lVar5,iVar4);
    uVar3 = NumberToString(*(uint *)(param_1 + 0xc0),0);
    MySQL::set_query(local_20,
                     "seLect board,reward from event_1208_bingo where m_id = %s and occ_date > from_unixtime(%u)"
                     ,uVar3,local_1c);
    cVar1 = MySQL::exec(local_20,true);
    if (cVar1 == '\x01') {
      local_18 = MySQL::get_n_rows(local_20);
      if (local_18 == 0) {
        uVar3 = 1;
      }
      else {
        local_11 = 0;
        local_11 = MySQL::fetch(local_20);
        if (local_11 == '\x01') {
          local_10 = 1;
          local_11 = MySQL::get_int(local_20,0,(int *)(param_1 + 0x413c));
          iVar4 = local_10;
          if (local_11 == '\x01') {
            local_10 = local_10 + 1;
            local_11 = MySQL::get_byte(local_20,iVar4,(char *)(param_1 + 0x4138));
            if (local_11 == '\x01') {
              uVar3 = 0;
            }
            else {
              uVar3 = NumberToString(*(uint *)(param_1 + 0xc0),0);
              cMyTrace::cMyTrace(local_30,"bool DB_Login::GetBingoEvent(SIG_LOGIN_DATA*)",0xb729,5);
              cMyTrace::operator()
                        (local_30,"DB_Login::GetBingoEvent, get(%d) ERROR m_id=%s",local_10,uVar3);
              uVar3 = 0;
            }
          }
          else {
            uVar3 = NumberToString(*(uint *)(param_1 + 0xc0),0);
            cMyTrace::cMyTrace(local_40,"bool DB_Login::GetBingoEvent(SIG_LOGIN_DATA*)",0xb723,5);
            cMyTrace::operator()
                      (local_40,"DB_Login::GetBingoEvent, get(%d) ERROR m_id=%s",local_10,uVar3);
            uVar3 = 0;
          }
        }
        else {
          uVar3 = NumberToString(*(uint *)(param_1 + 0xc0),0);
          cMyTrace::cMyTrace(local_50,"bool DB_Login::GetBingoEvent(SIG_LOGIN_DATA*)",0xb71b,5);
          cMyTrace::operator()(local_50,"DB_Login::GetBingoEvent, fetch() ERROR m_id=%s",uVar3);
          uVar3 = 0;
        }
      }
    }
    else {
      uVar3 = 0;
    }
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}
```
