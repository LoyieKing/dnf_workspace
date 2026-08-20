# CheckLimitCreateNewCharac

`_ZN15DB_CreateCharac25CheckLimitCreateNewCharacEP17SIG_CREATE_CHARAC`

`DB_CreateCharac::CheckLimitCreateNewCharac(SIG_CREATE_CHARAC*)`

| 类 | 地址 |
|---|---|
| `DB_CreateCharac` | `0x08401504` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08401504  _ZN15DB_CreateCharac25CheckLimitCreateNewCharacEP17SIG_CREATE_CHARAC
#           DB_CreateCharac::CheckLimitCreateNewCharac(SIG_CREATE_CHARAC*)
# range [0x08401504, 0x084016ad]
08401504 +0x000:  push   %ebp
08401505 +0x001:  mov    %esp,%ebp
08401507 +0x003:  sub    $0x68,%esp
0840150a +0x006:  mov    0xc(%ebp),%eax
0840150d +0x009:  mov    (%eax),%edx
0840150f +0x00b:  mov    &_ZN10GlobalData14s_pGMAccounts_E,%eax
08401514 +0x010:  mov    %edx,0x4(%esp)
08401518 +0x014:  mov    %eax,(%esp)
0840151b +0x017:  call   08109346 <_ZN8WongWork11CGMAccounts4isGMEj>  ; WongWork::CGMAccounts::isGM(unsigned int)
08401520 +0x01c:  test   %al,%al
08401522 +0x01e:  je     0840152e <+0x2a>
08401524 +0x020:  mov    $0x1,%eax
08401529 +0x025:  jmp    084016ab <+0x1a7>
0840152e +0x02a:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
08401533 +0x02f:  movl   $0x0,0x8(%esp)
0840153b +0x037:  movl   $0x1,0x4(%esp)
08401543 +0x03f:  mov    %eax,(%esp)
08401546 +0x042:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0840154b +0x047:  mov    %eax,-0x18(%ebp)
0840154e +0x04a:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
08401555 +0x051:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
0840155a +0x056:  mov    %eax,-0x20(%ebp)
0840155d +0x059:  lea    -0x50(%ebp),%eax
08401560 +0x05c:  mov    %eax,0x4(%esp)
08401564 +0x060:  lea    -0x20(%ebp),%eax
08401567 +0x063:  mov    %eax,(%esp)
0840156a +0x066:  call   0807e360 <_init+0xc58>
0840156f +0x06b:  movl   $0x0,-0x48(%ebp)
08401576 +0x072:  movl   $0x0,-0x4c(%ebp)
0840157d +0x079:  movl   $0x0,-0x50(%ebp)
08401584 +0x080:  lea    -0x50(%ebp),%eax
08401587 +0x083:  mov    %eax,(%esp)
0840158a +0x086:  call   0807e820 <_init+0x1118>
0840158f +0x08b:  mov    %eax,-0x20(%ebp)
08401592 +0x08e:  movl   $0x0,-0x24(%ebp)
08401599 +0x095:  mov    0xc(%ebp),%eax
0840159c +0x098:  mov    (%eax),%eax
0840159e +0x09a:  movl   $0x0,0x4(%esp)
084015a6 +0x0a2:  mov    %eax,(%esp)
084015a9 +0x0a5:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
084015ae +0x0aa:  mov    %eax,0x8(%esp)
084015b2 +0x0ae:  movl   $"seLect unix_timestamp(create_time) from limit_create_character where m_id=%s",0x4(%esp)
084015ba +0x0b6:  mov    -0x18(%ebp),%eax
084015bd +0x0b9:  mov    %eax,(%esp)
084015c0 +0x0bc:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
084015c5 +0x0c1:  movl   $0x1,0x4(%esp)
084015cd +0x0c9:  mov    -0x18(%ebp),%eax
084015d0 +0x0cc:  mov    %eax,(%esp)
084015d3 +0x0cf:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
084015d8 +0x0d4:  xor    $0x1,%eax
084015db +0x0d7:  test   %al,%al
084015dd +0x0d9:  je     084015f6 <+0xf2>
084015df +0x0db:  mov    0xc(%ebp),%eax
084015e2 +0x0de:  movl   $0x2,0x5344(%eax)
084015ec +0x0e8:  mov    $0x0,%eax
084015f1 +0x0ed:  jmp    084016ab <+0x1a7>
084015f6 +0x0f2:  mov    -0x18(%ebp),%eax
084015f9 +0x0f5:  mov    %eax,(%esp)
084015fc +0x0f8:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
08401601 +0x0fd:  mov    %eax,-0x14(%ebp)
08401604 +0x100:  cmpl   $0x0,-0x14(%ebp)
08401608 +0x104:  jne    08401614 <+0x110>
0840160a +0x106:  mov    $0x1,%eax
0840160f +0x10b:  jmp    084016ab <+0x1a7>
08401614 +0x110:  movl   $0x0,-0x10(%ebp)
0840161b +0x117:  movl   $0x0,-0xc(%ebp)
08401622 +0x11e:  jmp    08401693 <+0x18f>
08401624 +0x120:  mov    -0x18(%ebp),%eax
08401627 +0x123:  mov    %eax,(%esp)
0840162a +0x126:  call   083f44bc <_ZN5MySQL5fetchEv>  ; MySQL::fetch()
0840162f +0x12b:  mov    %al,-0x19(%ebp)
08401632 +0x12e:  movzbl -0x19(%ebp),%eax
08401636 +0x132:  xor    $0x1,%eax
08401639 +0x135:  test   %al,%al
0840163b +0x137:  jne    084016a2 <+0x19e>
0840163d +0x139:  lea    -0x24(%ebp),%eax
08401640 +0x13c:  mov    %eax,0x8(%esp)
08401644 +0x140:  movl   $0x0,0x4(%esp)
0840164c +0x148:  mov    -0x18(%ebp),%eax
0840164f +0x14b:  mov    %eax,(%esp)
08401652 +0x14e:  call   080e22f2 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x98>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x98
08401657 +0x153:  mov    %al,-0x19(%ebp)
0840165a +0x156:  movzbl -0x19(%ebp),%eax
0840165e +0x15a:  xor    $0x1,%eax
08401661 +0x15d:  test   %al,%al
08401663 +0x15f:  jne    084016a5 <+0x1a1>
08401665 +0x161:  mov    -0x20(%ebp),%eax
08401668 +0x164:  mov    %eax,%edx
0840166a +0x166:  mov    -0x24(%ebp),%eax
0840166d +0x169:  cmp    %eax,%edx
0840166f +0x16b:  ja     0840168f <+0x18b>
08401671 +0x16d:  addl   $0x1,-0x10(%ebp)
08401675 +0x171:  cmpl   $0x1,-0x10(%ebp)
08401679 +0x175:  jle    0840168f <+0x18b>
0840167b +0x177:  mov    0xc(%ebp),%eax
0840167e +0x17a:  movl   $0x5,0x5344(%eax)
08401688 +0x184:  mov    $0x0,%eax
0840168d +0x189:  jmp    084016ab <+0x1a7>
0840168f +0x18b:  addl   $0x1,-0xc(%ebp)
08401693 +0x18f:  mov    -0xc(%ebp),%eax
08401696 +0x192:  cmp    -0x14(%ebp),%eax
08401699 +0x195:  setl   %al
0840169c +0x198:  test   %al,%al
0840169e +0x19a:  jne    08401624 <+0x120>
084016a0 +0x19c:  jmp    084016a6 <+0x1a2>
084016a2 +0x19e:  nop
084016a3 +0x19f:  jmp    084016a6 <+0x1a2>
084016a5 +0x1a1:  nop
084016a6 +0x1a2:  mov    $0x1,%eax
084016ab +0x1a7:  leave
084016ac +0x1a8:  ret
084016ad +0x1a9:  nop
```

## 反编译 C

```c
// DB_CreateCharac::CheckLimitCreateNewCharac @ 0x8401504

/* DB_CreateCharac::CheckLimitCreateNewCharac(SIG_CREATE_CHARAC*) */

undefined4 __thiscall
DB_CreateCharac::CheckLimitCreateNewCharac(DB_CreateCharac *this,SIG_CREATE_CHARAC *param_1)

{
  char cVar1;
  undefined4 uVar2;
  tm local_54;
  uint local_28;
  uint local_24;
  char local_1d;
  MySQL *local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  cVar1 = WongWork::CGMAccounts::isGM(GlobalData::s_pGMAccounts_,*(uint *)param_1);
  if (cVar1 == '\0') {
    local_1c = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,1,0);
    local_24 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
    localtime_r((time_t *)&local_24,&local_54);
    local_54.tm_hour = 0;
    local_54.tm_min = 0;
    local_54.tm_sec = 0;
    local_24 = mktime(&local_54);
    local_28 = 0;
    uVar2 = NumberToString(*(uint *)param_1,0);
    MySQL::set_query(local_1c,
                     "seLect unix_timestamp(create_time) from limit_create_character where m_id=%s",
                     uVar2);
    cVar1 = MySQL::exec(local_1c,true);
    if (cVar1 == '\x01') {
      local_18 = MySQL::get_n_rows(local_1c);
      if (local_18 == 0) {
        uVar2 = 1;
      }
      else {
        local_14 = 0;
        local_10 = 0;
        while (((local_10 < local_18 && (local_1d = MySQL::fetch(local_1c), local_1d == '\x01')) &&
               (cVar1 = MySQL::get_uint(local_1c,0,&local_28), cVar1 == '\x01'))) {
          if ((local_24 <= local_28) && (local_14 = local_14 + 1, 1 < local_14)) {
            *(undefined4 *)(param_1 + 0x5344) = 5;
            return 0;
          }
          local_10 = local_10 + 1;
          local_1d = 1;
        }
        uVar2 = 1;
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x5344) = 2;
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}
```
