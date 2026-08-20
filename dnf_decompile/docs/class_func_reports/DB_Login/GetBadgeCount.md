# GetBadgeCount

`_ZN8DB_Login13GetBadgeCountEP14SIG_LOGIN_DATA`

`DB_Login::GetBadgeCount(SIG_LOGIN_DATA*)`

| 类 | 地址 |
|---|---|
| `DB_Login` | `0x08414512` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08414512  _ZN8DB_Login13GetBadgeCountEP14SIG_LOGIN_DATA
#           DB_Login::GetBadgeCount(SIG_LOGIN_DATA*)
# range [0x08414512, 0x08414771]
08414512 +0x000:  push   %ebp
08414513 +0x001:  mov    %esp,%ebp
08414515 +0x003:  push   %ebx
08414516 +0x004:  sub    $0x64,%esp
08414519 +0x007:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0841451e +0x00c:  movl   $0x0,0x8(%esp)
08414526 +0x014:  movl   $0x10,0x4(%esp)
0841452e +0x01c:  mov    %eax,(%esp)
08414531 +0x01f:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
08414536 +0x024:  mov    %eax,-0x14(%ebp)
08414539 +0x027:  movl   $0x0,-0xc(%ebp)
08414540 +0x02e:  jmp    08414559 <+0x47>
08414542 +0x030:  mov    -0xc(%ebp),%edx
08414545 +0x033:  mov    0xc(%ebp),%eax
08414548 +0x036:  add    $0x1cc8,%edx
0841454e +0x03c:  movw   $0x0,0xc(%eax,%edx,2)
08414555 +0x043:  addl   $0x1,-0xc(%ebp)
08414559 +0x047:  cmpl   $0x2,-0xc(%ebp)
0841455d +0x04b:  setle  %al
08414560 +0x04e:  test   %al,%al
08414562 +0x050:  jne    08414542 <+0x30>
08414564 +0x052:  movl   $0x0,0x8(%esp)
0841456c +0x05a:  movl   $0x0,0x4(%esp)
08414574 +0x062:  movl   $0x6,(%esp)
0841457b +0x069:  call   086b1f5a <_Z22getDailyInitializeTimeiii>  ; getDailyInitializeTime(int, int, int)
08414580 +0x06e:  mov    %eax,-0x10(%ebp)
08414583 +0x071:  mov    0xc(%ebp),%eax
08414586 +0x074:  mov    0xc0(%eax),%eax
0841458c +0x07a:  movl   $0x0,0x4(%esp)
08414594 +0x082:  mov    %eax,(%esp)
08414597 +0x085:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
0841459c +0x08a:  mov    0xc(%ebp),%edx
0841459f +0x08d:  mov    0x396c(%edx),%edx
084145a5 +0x093:  mov    -0x10(%ebp),%ecx
084145a8 +0x096:  mov    %ecx,0x10(%esp)
084145ac +0x09a:  mov    %eax,0xc(%esp)
084145b0 +0x09e:  mov    %edx,0x8(%esp)
084145b4 +0x0a2:  movl   $"seLect daily_green_badge, daily_red_badge, daily_blue_badge from school_member where school_id=%d and m_id = %s and  last_play_time >= from_unixtime(%d)",0x4(%esp)
084145bc +0x0aa:  mov    -0x14(%ebp),%eax
084145bf +0x0ad:  mov    %eax,(%esp)
084145c2 +0x0b0:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
084145c7 +0x0b5:  movl   $0x1,0x4(%esp)
084145cf +0x0bd:  mov    -0x14(%ebp),%eax
084145d2 +0x0c0:  mov    %eax,(%esp)
084145d5 +0x0c3:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
084145da +0x0c8:  xor    $0x1,%eax
084145dd +0x0cb:  test   %al,%al
084145df +0x0cd:  je     084145eb <+0xd9>
084145e1 +0x0cf:  mov    $0x0,%eax
084145e6 +0x0d4:  jmp    0841476b <+0x259>
084145eb +0x0d9:  mov    -0x14(%ebp),%eax
084145ee +0x0dc:  mov    %eax,(%esp)
084145f1 +0x0df:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
084145f6 +0x0e4:  test   %eax,%eax
084145f8 +0x0e6:  sete   %al
084145fb +0x0e9:  test   %al,%al
084145fd +0x0eb:  je     08414609 <+0xf7>
084145ff +0x0ed:  mov    $0x0,%eax
08414604 +0x0f2:  jmp    0841476b <+0x259>
08414609 +0x0f7:  mov    -0x14(%ebp),%eax
0841460c +0x0fa:  mov    %eax,(%esp)
0841460f +0x0fd:  call   083f44bc <_ZN5MySQL5fetchEv>  ; MySQL::fetch()
08414614 +0x102:  xor    $0x1,%eax
08414617 +0x105:  test   %al,%al
08414619 +0x107:  je     08414625 <+0x113>
0841461b +0x109:  mov    $0x0,%eax
08414620 +0x10e:  jmp    0841476b <+0x259>
08414625 +0x113:  mov    0xc(%ebp),%eax
08414628 +0x116:  add    $0x399c,%eax
0841462d +0x11b:  mov    %eax,0x8(%esp)
08414631 +0x11f:  movl   $0x0,0x4(%esp)
08414639 +0x127:  mov    -0x14(%ebp),%eax
0841463c +0x12a:  mov    %eax,(%esp)
0841463f +0x12d:  call   080fddec <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x118>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x118
08414644 +0x132:  xor    $0x1,%eax
08414647 +0x135:  test   %al,%al
08414649 +0x137:  je     08414692 <+0x180>
0841464b +0x139:  mov    0xc(%ebp),%ebx
0841464e +0x13c:  movl   $0x5,0xc(%esp)
08414656 +0x144:  movl   $0x3b60,0x8(%esp)
0841465e +0x14c:  movl   $&_ZZN8DB_Login13GetBadgeCountEP14SIG_LOGIN_DATAE19__PRETTY_FUNCTION__,0x4(%esp)
08414666 +0x154:  lea    -0x44(%ebp),%eax
08414669 +0x157:  mov    %eax,(%esp)
0841466c +0x15a:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08414671 +0x15f:  mov    %ebx,0x8(%esp)
08414675 +0x163:  movl   $"DB_Login::GetBadgeCount, get(0) ERROR m_id=%s",0x4(%esp)
0841467d +0x16b:  lea    -0x44(%ebp),%eax
08414680 +0x16e:  mov    %eax,(%esp)
08414683 +0x171:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08414688 +0x176:  mov    $0x0,%eax
0841468d +0x17b:  jmp    0841476b <+0x259>
08414692 +0x180:  mov    0xc(%ebp),%eax
08414695 +0x183:  add    $0x399e,%eax
0841469a +0x188:  mov    %eax,0x8(%esp)
0841469e +0x18c:  movl   $0x1,0x4(%esp)
084146a6 +0x194:  mov    -0x14(%ebp),%eax
084146a9 +0x197:  mov    %eax,(%esp)
084146ac +0x19a:  call   080fddec <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x118>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x118
084146b1 +0x19f:  xor    $0x1,%eax
084146b4 +0x1a2:  test   %al,%al
084146b6 +0x1a4:  je     084146fc <+0x1ea>
084146b8 +0x1a6:  mov    0xc(%ebp),%ebx
084146bb +0x1a9:  movl   $0x5,0xc(%esp)
084146c3 +0x1b1:  movl   $0x3b66,0x8(%esp)
084146cb +0x1b9:  movl   $&_ZZN8DB_Login13GetBadgeCountEP14SIG_LOGIN_DATAE19__PRETTY_FUNCTION__,0x4(%esp)
084146d3 +0x1c1:  lea    -0x34(%ebp),%eax
084146d6 +0x1c4:  mov    %eax,(%esp)
084146d9 +0x1c7:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
084146de +0x1cc:  mov    %ebx,0x8(%esp)
084146e2 +0x1d0:  movl   $"DB_Login::GetBadgeCount, get(1) ERROR m_id=%s",0x4(%esp)
084146ea +0x1d8:  lea    -0x34(%ebp),%eax
084146ed +0x1db:  mov    %eax,(%esp)
084146f0 +0x1de:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
084146f5 +0x1e3:  mov    $0x0,%eax
084146fa +0x1e8:  jmp    0841476b <+0x259>
084146fc +0x1ea:  mov    0xc(%ebp),%eax
084146ff +0x1ed:  add    $0x39a0,%eax
08414704 +0x1f2:  mov    %eax,0x8(%esp)
08414708 +0x1f6:  movl   $0x2,0x4(%esp)
08414710 +0x1fe:  mov    -0x14(%ebp),%eax
08414713 +0x201:  mov    %eax,(%esp)
08414716 +0x204:  call   080fddec <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x118>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x118
0841471b +0x209:  xor    $0x1,%eax
0841471e +0x20c:  test   %al,%al
08414720 +0x20e:  je     08414766 <+0x254>
08414722 +0x210:  mov    0xc(%ebp),%ebx
08414725 +0x213:  movl   $0x5,0xc(%esp)
0841472d +0x21b:  movl   $0x3b6b,0x8(%esp)
08414735 +0x223:  movl   $&_ZZN8DB_Login13GetBadgeCountEP14SIG_LOGIN_DATAE19__PRETTY_FUNCTION__,0x4(%esp)
0841473d +0x22b:  lea    -0x24(%ebp),%eax
08414740 +0x22e:  mov    %eax,(%esp)
08414743 +0x231:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08414748 +0x236:  mov    %ebx,0x8(%esp)
0841474c +0x23a:  movl   $"DB_Login::GetBadgeCount, get(2) ERROR m_id=%s",0x4(%esp)
08414754 +0x242:  lea    -0x24(%ebp),%eax
08414757 +0x245:  mov    %eax,(%esp)
0841475a +0x248:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0841475f +0x24d:  mov    $0x0,%eax
08414764 +0x252:  jmp    0841476b <+0x259>
08414766 +0x254:  mov    $0x1,%eax
0841476b +0x259:  add    $0x64,%esp
0841476e +0x25c:  pop    %ebx
0841476f +0x25d:  pop    %ebp
08414770 +0x25e:  ret
08414771 +0x25f:  nop
```

## 反编译 C

```c
// DB_Login::GetBadgeCount @ 0x8414512

/* DB_Login::GetBadgeCount(SIG_LOGIN_DATA*) */

undefined4 __thiscall DB_Login::GetBadgeCount(DB_Login *this,SIG_LOGIN_DATA *param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  cMyTrace local_48 [16];
  cMyTrace local_38 [16];
  cMyTrace local_28 [16];
  MySQL *local_18;
  undefined4 local_14;
  int local_10;
  
  local_18 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,0x10,0);
  for (local_10 = 0; local_10 < 3; local_10 = local_10 + 1) {
    *(undefined2 *)(param_1 + (local_10 + 0x1cc8) * 2 + 0xc) = 0;
  }
  local_14 = getDailyInitializeTime(6,0,0);
  uVar2 = NumberToString(*(uint *)(param_1 + 0xc0),0);
  MySQL::set_query(local_18,
                   "seLect daily_green_badge, daily_red_badge, daily_blue_badge from school_member where school_id=%d and m_id = %s and  last_play_time >= from_unixtime(%d)"
                   ,*(undefined4 *)(param_1 + 0x396c),uVar2,local_14);
  cVar1 = MySQL::exec(local_18,true);
  if (cVar1 == '\x01') {
    iVar3 = MySQL::get_n_rows(local_18);
    if (iVar3 == 0) {
      uVar2 = 0;
    }
    else {
      cVar1 = MySQL::fetch(local_18);
      if (cVar1 == '\x01') {
        cVar1 = MySQL::get_short(local_18,0,(short *)(param_1 + 0x399c));
        if (cVar1 == '\x01') {
          cVar1 = MySQL::get_short(local_18,1,(short *)(param_1 + 0x399e));
          if (cVar1 == '\x01') {
            cVar1 = MySQL::get_short(local_18,2,(short *)(param_1 + 0x39a0));
            if (cVar1 == '\x01') {
              uVar2 = 1;
            }
            else {
              cMyTrace::cMyTrace(local_28,"bool DB_Login::GetBadgeCount(SIG_LOGIN_DATA*)",0x3b6b,5);
              cMyTrace::operator()(local_28,"DB_Login::GetBadgeCount, get(2) ERROR m_id=%s",param_1)
              ;
              uVar2 = 0;
            }
          }
          else {
            cMyTrace::cMyTrace(local_38,"bool DB_Login::GetBadgeCount(SIG_LOGIN_DATA*)",0x3b66,5);
            cMyTrace::operator()(local_38,"DB_Login::GetBadgeCount, get(1) ERROR m_id=%s",param_1);
            uVar2 = 0;
          }
        }
        else {
          cMyTrace::cMyTrace(local_48,"bool DB_Login::GetBadgeCount(SIG_LOGIN_DATA*)",0x3b60,5);
          cMyTrace::operator()(local_48,"DB_Login::GetBadgeCount, get(0) ERROR m_id=%s",param_1);
          uVar2 = 0;
        }
      }
      else {
        uVar2 = 0;
      }
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
```
