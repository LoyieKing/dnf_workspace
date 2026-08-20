# LoadCharacOption

`_ZN10DB_LoadEtc16LoadCharacOptionEiiP12SIG_LOAD_ETC`

`DB_LoadEtc::LoadCharacOption(int, int, SIG_LOAD_ETC*)`

| 类 | 地址 |
|---|---|
| `DB_LoadEtc` | `0x084084e0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084084e0  _ZN10DB_LoadEtc16LoadCharacOptionEiiP12SIG_LOAD_ETC
#           DB_LoadEtc::LoadCharacOption(int, int, SIG_LOAD_ETC*)
# range [0x084084e0, 0x08408765]
084084e0 +0x000:  push   %ebp
084084e1 +0x001:  mov    %esp,%ebp
084084e3 +0x003:  push   %ebx
084084e4 +0x004:  sub    $0x54,%esp
084084e7 +0x007:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
084084ec +0x00c:  movl   $0x0,0x8(%esp)
084084f4 +0x014:  movl   $0x2,0x4(%esp)
084084fc +0x01c:  mov    %eax,(%esp)
084084ff +0x01f:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
08408504 +0x024:  mov    %eax,-0x1c(%ebp)
08408507 +0x027:  mov    0x14(%ebp),%eax
0840850a +0x02a:  mov    0x4(%eax),%eax
0840850d +0x02d:  mov    %eax,0x8(%esp)
08408511 +0x031:  movl   $"seLect options , best_clear_time, blue_marble_enter_count, charac_inform_notice from charac_option where charac_no=%u",0x4(%esp)
08408519 +0x039:  mov    -0x1c(%ebp),%eax
0840851c +0x03c:  mov    %eax,(%esp)
0840851f +0x03f:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08408524 +0x044:  movl   $0x1,0x4(%esp)
0840852c +0x04c:  mov    -0x1c(%ebp),%eax
0840852f +0x04f:  mov    %eax,(%esp)
08408532 +0x052:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08408537 +0x057:  xor    $0x1,%eax
0840853a +0x05a:  test   %al,%al
0840853c +0x05c:  je     08408548 <+0x68>
0840853e +0x05e:  mov    $0x0,%eax
08408543 +0x063:  jmp    08408760 <+0x280>
08408548 +0x068:  mov    -0x1c(%ebp),%eax
0840854b +0x06b:  mov    %eax,(%esp)
0840854e +0x06e:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
08408553 +0x073:  test   %eax,%eax
08408555 +0x075:  sete   %al
08408558 +0x078:  test   %al,%al
0840855a +0x07a:  je     08408566 <+0x86>
0840855c +0x07c:  mov    $0x1,%eax
08408561 +0x081:  jmp    08408760 <+0x280>
08408566 +0x086:  mov    -0x1c(%ebp),%eax
08408569 +0x089:  mov    %eax,(%esp)
0840856c +0x08c:  call   083f44bc <_ZN5MySQL5fetchEv>  ; MySQL::fetch()
08408571 +0x091:  xor    $0x1,%eax
08408574 +0x094:  test   %al,%al
08408576 +0x096:  je     08408582 <+0xa2>
08408578 +0x098:  mov    $0x0,%eax
0840857d +0x09d:  jmp    08408760 <+0x280>
08408582 +0x0a2:  movl   $0x0,-0x18(%ebp)
08408589 +0x0a9:  mov    0x14(%ebp),%eax
0840858c +0x0ac:  lea    0xeac8(%eax),%edx
08408592 +0x0b2:  mov    -0x18(%ebp),%eax
08408595 +0x0b5:  addl   $0x1,-0x18(%ebp)
08408599 +0x0b9:  movl   $0x200,0xc(%esp)
084085a1 +0x0c1:  mov    %edx,0x8(%esp)
084085a5 +0x0c5:  mov    %eax,0x4(%esp)
084085a9 +0x0c9:  mov    -0x1c(%ebp),%eax
084085ac +0x0cc:  mov    %eax,(%esp)
084085af +0x0cf:  call   0812531a <_GLOBAL__I__ZN8APSystem21g_szZipAP_CLEAR_STATEE+0x7d>  ; global constructors keyed to APSystem::g_szZipAP_CLEAR_STATE+0x7d
084085b4 +0x0d4:  xor    $0x1,%eax
084085b7 +0x0d7:  test   %al,%al
084085b9 +0x0d9:  je     084085c5 <+0xe5>
084085bb +0x0db:  mov    $0x0,%eax
084085c0 +0x0e0:  jmp    08408760 <+0x280>
084085c5 +0x0e5:  mov    0x14(%ebp),%eax
084085c8 +0x0e8:  add    $0xecd8,%eax
084085cd +0x0ed:  mov    %eax,%edx
084085cf +0x0ef:  mov    -0x18(%ebp),%eax
084085d2 +0x0f2:  addl   $0x1,-0x18(%ebp)
084085d6 +0x0f6:  movl   $0x0,0x10(%esp)
084085de +0x0fe:  movl   $0x5dc0,0xc(%esp)
084085e6 +0x106:  mov    %edx,0x8(%esp)
084085ea +0x10a:  mov    %eax,0x4(%esp)
084085ee +0x10e:  mov    -0x1c(%ebp),%eax
084085f1 +0x111:  mov    %eax,(%esp)
084085f4 +0x114:  call   083fbc79 <_Z24get_compressed_blob_dataP5MySQLiPcii>  ; get_compressed_blob_data(MySQL*, int, char*, int, int)
084085f9 +0x119:  xor    $0x1,%eax
084085fc +0x11c:  test   %al,%al
084085fe +0x11e:  je     08408651 <+0x171>
08408600 +0x120:  mov    0x14(%ebp),%eax
08408603 +0x123:  mov    0x4(%eax),%ebx
08408606 +0x126:  movl   $0x5,0xc(%esp)
0840860e +0x12e:  movl   $0x1f5d,0x8(%esp)
08408616 +0x136:  movl   $&_ZZN10DB_LoadEtc16LoadCharacOptionEiiP12SIG_LOAD_ETCE19__PRETTY_FUNCTION__,0x4(%esp)
0840861e +0x13e:  lea    -0x2c(%ebp),%eax
08408621 +0x141:  mov    %eax,(%esp)
08408624 +0x144:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08408629 +0x149:  mov    %ebx,0xc(%esp)
0840862d +0x14d:  mov    -0x18(%ebp),%eax
08408630 +0x150:  mov    %eax,0x8(%esp)
08408634 +0x154:  movl   $"DB_LoadEtc::LoadCharacOption best_clear_time, get(%d) ERROR charac_no=%u",0x4(%esp)
0840863c +0x15c:  lea    -0x2c(%ebp),%eax
0840863f +0x15f:  mov    %eax,(%esp)
08408642 +0x162:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08408647 +0x167:  mov    $0x0,%eax
0840864c +0x16c:  jmp    08408760 <+0x280>
08408651 +0x171:  movl   $0x0,-0x10(%ebp)
08408658 +0x178:  jmp    08408686 <+0x1a6>
0840865a +0x17a:  mov    -0x10(%ebp),%edx
0840865d +0x17d:  mov    0x14(%ebp),%eax
08408660 +0x180:  add    $0x3b34,%edx
08408666 +0x186:  mov    0xc(%eax,%edx,4),%eax
0840866a +0x18a:  test   %eax,%eax
0840866c +0x18c:  jns    08408682 <+0x1a2>
0840866e +0x18e:  mov    -0x10(%ebp),%edx
08408671 +0x191:  mov    0x14(%ebp),%eax
08408674 +0x194:  add    $0x3b34,%edx
0840867a +0x19a:  movl   $0x0,0xc(%eax,%edx,4)
08408682 +0x1a2:  addl   $0x1,-0x10(%ebp)
08408686 +0x1a6:  cmpl   $0x4,-0x10(%ebp)
0840868a +0x1aa:  setle  %al
0840868d +0x1ad:  test   %al,%al
0840868f +0x1af:  jne    0840865a <+0x17a>
08408691 +0x1b1:  mov    0x14(%ebp),%eax
08408694 +0x1b4:  movb   $0x0,&_ZL14gUnicodeBuffer+0xa56c(%eax)
0840869b +0x1bb:  mov    0x14(%ebp),%eax
0840869e +0x1be:  lea    &_ZL14gUnicodeBuffer+0xa56c(%eax),%edx
084086a4 +0x1c4:  mov    -0x18(%ebp),%eax
084086a7 +0x1c7:  addl   $0x1,-0x18(%ebp)
084086ab +0x1cb:  mov    %edx,0x8(%esp)
084086af +0x1cf:  mov    %eax,0x4(%esp)
084086b3 +0x1d3:  mov    -0x1c(%ebp),%eax
084086b6 +0x1d6:  mov    %eax,(%esp)
084086b9 +0x1d9:  call   080fdeba <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x1e6>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x1e6
084086be +0x1de:  xor    $0x1,%eax
084086c1 +0x1e1:  test   %al,%al
084086c3 +0x1e3:  je     084086cf <+0x1ef>
084086c5 +0x1e5:  mov    $0x0,%eax
084086ca +0x1ea:  jmp    08408760 <+0x280>
084086cf +0x1ef:  mov    0x14(%ebp),%eax
084086d2 +0x1f2:  lea    &_ZL14gUnicodeBuffer+0xa56e(%eax),%edx
084086d8 +0x1f8:  mov    -0x18(%ebp),%eax
084086db +0x1fb:  addl   $0x1,-0x18(%ebp)
084086df +0x1ff:  movl   $0x10,0xc(%esp)
084086e7 +0x207:  mov    %edx,0x8(%esp)
084086eb +0x20b:  mov    %eax,0x4(%esp)
084086ef +0x20f:  mov    -0x1c(%ebp),%eax
084086f2 +0x212:  mov    %eax,(%esp)
084086f5 +0x215:  call   080ecdea <_GLOBAL__I__ZN12CDBConnectorC2EP5DBMgr+0xcf>  ; global constructors keyed to CDBConnector::CDBConnector(DBMgr*)+0xcf
084086fa +0x21a:  xor    $0x1,%eax
084086fd +0x21d:  test   %al,%al
084086ff +0x21f:  je     08408708 <+0x228>
08408701 +0x221:  mov    $0x0,%eax
08408706 +0x226:  jmp    08408760 <+0x280>
08408708 +0x228:  movl   $0x0,-0x14(%ebp)
0840870f +0x22f:  movl   $0x0,-0xc(%ebp)
08408716 +0x236:  jmp    0840873e <+0x25e>
08408718 +0x238:  mov    -0xc(%ebp),%edx
0840871b +0x23b:  mov    0x14(%ebp),%ecx
0840871e +0x23e:  mov    %edx,%eax
08408720 +0x240:  add    %eax,%eax
08408722 +0x242:  add    %edx,%eax
08408724 +0x244:  shl    $0x3,%eax
08408727 +0x247:  lea    (%ecx,%eax,1),%eax
0840872a +0x24a:  add    $0xecd0,%eax
0840872f +0x24f:  mov    0x8(%eax),%eax
08408732 +0x252:  test   %eax,%eax
08408734 +0x254:  je     0840874e <+0x26e>
08408736 +0x256:  addl   $0x1,-0x14(%ebp)
0840873a +0x25a:  addl   $0x1,-0xc(%ebp)
0840873e +0x25e:  cmpl   $0x3e7,-0xc(%ebp)
08408745 +0x265:  setle  %al
08408748 +0x268:  test   %al,%al
0840874a +0x26a:  jne    08408718 <+0x238>
0840874c +0x26c:  jmp    0840874f <+0x26f>
0840874e +0x26e:  nop
0840874f +0x26f:  mov    0x14(%ebp),%eax
08408752 +0x272:  mov    -0x14(%ebp),%edx
08408755 +0x275:  mov    %edx,0xecd4(%eax)
0840875b +0x27b:  mov    $0x1,%eax
08408760 +0x280:  add    $0x54,%esp
08408763 +0x283:  pop    %ebx
08408764 +0x284:  pop    %ebp
08408765 +0x285:  ret
```

## 反编译 C

```c
// DB_LoadEtc::LoadCharacOption @ 0x84084e0

/* DB_LoadEtc::LoadCharacOption(int, int, SIG_LOAD_ETC*) */

undefined4 DB_LoadEtc::LoadCharacOption(int param_1,int param_2,SIG_LOAD_ETC *param_3)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int in_stack_00000010;
  cMyTrace local_30 [16];
  MySQL *local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  local_20 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
  MySQL::set_query(local_20,
                   "seLect options , best_clear_time, blue_marble_enter_count, charac_inform_notice from charac_option where charac_no=%u"
                   ,*(undefined4 *)(in_stack_00000010 + 4));
  cVar1 = MySQL::exec(local_20,true);
  if (cVar1 == '\x01') {
    iVar3 = MySQL::get_n_rows(local_20);
    if (iVar3 == 0) {
      uVar2 = 1;
    }
    else {
      cVar1 = MySQL::fetch(local_20);
      if (cVar1 == '\x01') {
        local_1c = 1;
        cVar1 = MySQL::get_binary(local_20,0,(void *)(in_stack_00000010 + 0xeac8),0x200);
        iVar3 = local_1c;
        if (cVar1 == '\x01') {
          local_1c = local_1c + 1;
          cVar1 = get_compressed_blob_data
                            (local_20,iVar3,(char *)(in_stack_00000010 + 0xecd8),24000,0);
          iVar3 = local_1c;
          if (cVar1 == '\x01') {
            for (local_14 = 0; local_14 < 5; local_14 = local_14 + 1) {
              if (*(int *)(in_stack_00000010 + 0xc + (local_14 + 0x3b34) * 4) < 0) {
                *(undefined4 *)(in_stack_00000010 + 0xc + (local_14 + 0x3b34) * 4) = 0;
              }
            }
            *(undefined1 *)(in_stack_00000010 + 0x14a98) = 0;
            local_1c = local_1c + 1;
            cVar1 = MySQL::get_ubyte(local_20,iVar3,(uchar *)(in_stack_00000010 + 0x14a98));
            iVar3 = local_1c;
            if (cVar1 == '\x01') {
              local_1c = local_1c + 1;
              cVar1 = MySQL::get_str(local_20,iVar3,(char *)(in_stack_00000010 + 0x14a9a),0x10);
              if (cVar1 == '\x01') {
                local_18 = 0;
                local_10 = 0;
                while ((local_10 < 1000 &&
                       (*(int *)(in_stack_00000010 + local_10 * 0x18 + 0xecd8) != 0))) {
                  local_18 = local_18 + 1;
                  local_10 = local_10 + 1;
                }
                *(int *)(in_stack_00000010 + 0xecd4) = local_18;
                uVar2 = 1;
              }
              else {
                uVar2 = 0;
              }
            }
            else {
              uVar2 = 0;
            }
          }
          else {
            uVar2 = *(undefined4 *)(in_stack_00000010 + 4);
            cMyTrace::cMyTrace(local_30,"bool DB_LoadEtc::LoadCharacOption(int, int, SIG_LOAD_ETC*)"
                               ,0x1f5d,5);
            cMyTrace::operator()
                      (local_30,
                       "DB_LoadEtc::LoadCharacOption best_clear_time, get(%d) ERROR charac_no=%u",
                       local_1c,uVar2);
            uVar2 = 0;
          }
        }
        else {
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
