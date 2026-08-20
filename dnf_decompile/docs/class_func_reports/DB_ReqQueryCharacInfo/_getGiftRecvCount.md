# _getGiftRecvCount

`_ZN21DB_ReqQueryCharacInfo17_getGiftRecvCountEj`

`DB_ReqQueryCharacInfo::_getGiftRecvCount(unsigned int)`

| 类 | 地址 |
|---|---|
| `DB_ReqQueryCharacInfo` | `0x08426f46` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08426f46  _ZN21DB_ReqQueryCharacInfo17_getGiftRecvCountEj
#           DB_ReqQueryCharacInfo::_getGiftRecvCount(unsigned int)
# range [0x08426f46, 0x08427111]
08426f46 +0x000:  push   %ebp
08426f47 +0x001:  mov    %esp,%ebp
08426f49 +0x003:  sub    $0x98,%esp
08426f4f +0x009:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
08426f54 +0x00e:  movl   $0x0,0x8(%esp)
08426f5c +0x016:  movl   $0x6,0x4(%esp)
08426f64 +0x01e:  mov    %eax,(%esp)
08426f67 +0x021:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
08426f6c +0x026:  mov    %eax,-0xc(%ebp)
08426f6f +0x029:  movl   $0x0,-0x10(%ebp)
08426f76 +0x030:  movl   $0xffffffff,-0x14(%ebp)
08426f7d +0x037:  movl   $0x14,0x8(%esp)
08426f85 +0x03f:  movl   $0x0,0x4(%esp)
08426f8d +0x047:  lea    -0x28(%ebp),%eax
08426f90 +0x04a:  mov    %eax,(%esp)
08426f93 +0x04d:  call   0807dcc0 <_init+0x5b8>
08426f98 +0x052:  movl   $0xd,0x8(%esp)
08426fa0 +0x05a:  movl   $"member_login",0x4(%esp)
08426fa8 +0x062:  lea    -0x28(%ebp),%eax
08426fab +0x065:  mov    %eax,(%esp)
08426fae +0x068:  call   0807d8a0 <_init+0x198>
08426fb3 +0x06d:  movl   $0x0,0x4(%esp)
08426fbb +0x075:  mov    0xc(%ebp),%eax
08426fbe +0x078:  mov    %eax,(%esp)
08426fc1 +0x07b:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
08426fc6 +0x080:  mov    %eax,0xc(%esp)
08426fca +0x084:  lea    -0x28(%ebp),%eax
08426fcd +0x087:  mov    %eax,0x8(%esp)
08426fd1 +0x08b:  movl   $"seLect last_gift_time,gift_cnt from %s where m_id=%s",0x4(%esp)
08426fd9 +0x093:  mov    -0xc(%ebp),%eax
08426fdc +0x096:  mov    %eax,(%esp)
08426fdf +0x099:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08426fe4 +0x09e:  movl   $0x1,0x4(%esp)
08426fec +0x0a6:  mov    -0xc(%ebp),%eax
08426fef +0x0a9:  mov    %eax,(%esp)
08426ff2 +0x0ac:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08426ff7 +0x0b1:  xor    $0x1,%eax
08426ffa +0x0b4:  test   %al,%al
08426ffc +0x0b6:  je     08427008 <+0xc2>
08426ffe +0x0b8:  mov    $0x0,%eax
08427003 +0x0bd:  jmp    0842710f <+0x1c9>
08427008 +0x0c2:  mov    -0xc(%ebp),%eax
0842700b +0x0c5:  mov    %eax,(%esp)
0842700e +0x0c8:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
08427013 +0x0cd:  test   %eax,%eax
08427015 +0x0cf:  setne  %al
08427018 +0x0d2:  test   %al,%al
0842701a +0x0d4:  je     0842710c <+0x1c6>
08427020 +0x0da:  mov    -0xc(%ebp),%eax
08427023 +0x0dd:  mov    %eax,(%esp)
08427026 +0x0e0:  call   083f44bc <_ZN5MySQL5fetchEv>  ; MySQL::fetch()
0842702b +0x0e5:  xor    $0x1,%eax
0842702e +0x0e8:  test   %al,%al
08427030 +0x0ea:  je     0842703c <+0xf6>
08427032 +0x0ec:  mov    $0xffffffff,%eax
08427037 +0x0f1:  jmp    0842710f <+0x1c9>
0842703c +0x0f6:  lea    -0x10(%ebp),%eax
0842703f +0x0f9:  mov    %eax,0x8(%esp)
08427043 +0x0fd:  movl   $0x0,0x4(%esp)
0842704b +0x105:  mov    -0xc(%ebp),%eax
0842704e +0x108:  mov    %eax,(%esp)
08427051 +0x10b:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
08427056 +0x110:  lea    -0x14(%ebp),%eax
08427059 +0x113:  mov    %eax,0x8(%esp)
0842705d +0x117:  movl   $0x1,0x4(%esp)
08427065 +0x11f:  mov    -0xc(%ebp),%eax
08427068 +0x122:  mov    %eax,(%esp)
0842706b +0x125:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
08427070 +0x12a:  mov    -0x14(%ebp),%eax
08427073 +0x12d:  test   %eax,%eax
08427075 +0x12f:  je     0842710c <+0x1c6>
0842707b +0x135:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
08427082 +0x13c:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
08427087 +0x141:  mov    %eax,-0x2c(%ebp)
0842708a +0x144:  mov    -0x10(%ebp),%eax
0842708d +0x147:  mov    %eax,-0x30(%ebp)
08427090 +0x14a:  lea    -0x5c(%ebp),%eax
08427093 +0x14d:  mov    %eax,0x4(%esp)
08427097 +0x151:  lea    -0x30(%ebp),%eax
0842709a +0x154:  mov    %eax,(%esp)
0842709d +0x157:  call   0807e360 <_init+0xc58>
084270a2 +0x15c:  lea    -0x88(%ebp),%eax
084270a8 +0x162:  mov    %eax,0x4(%esp)
084270ac +0x166:  lea    -0x2c(%ebp),%eax
084270af +0x169:  mov    %eax,(%esp)
084270b2 +0x16c:  call   0807e360 <_init+0xc58>
084270b7 +0x171:  mov    -0x4c(%ebp),%edx
084270ba +0x174:  mov    -0x78(%ebp),%eax
084270bd +0x177:  cmp    %eax,%edx
084270bf +0x179:  je     0842710c <+0x1c6>
084270c1 +0x17b:  movl   $0x0,0x4(%esp)
084270c9 +0x183:  mov    0xc(%ebp),%eax
084270cc +0x186:  mov    %eax,(%esp)
084270cf +0x189:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
084270d4 +0x18e:  mov    %eax,0xc(%esp)
084270d8 +0x192:  lea    -0x28(%ebp),%eax
084270db +0x195:  mov    %eax,0x8(%esp)
084270df +0x199:  movl   $"upDate %s set last_gift_time=unix_timestamp(now()),gift_cnt=0 where m_id=%s",0x4(%esp)
084270e7 +0x1a1:  mov    -0xc(%ebp),%eax
084270ea +0x1a4:  mov    %eax,(%esp)
084270ed +0x1a7:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
084270f2 +0x1ac:  movl   $0x1,0x4(%esp)
084270fa +0x1b4:  mov    -0xc(%ebp),%eax
084270fd +0x1b7:  mov    %eax,(%esp)
08427100 +0x1ba:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08427105 +0x1bf:  movl   $0x0,-0x14(%ebp)
0842710c +0x1c6:  mov    -0x14(%ebp),%eax
0842710f +0x1c9:  leave
08427110 +0x1ca:  ret
08427111 +0x1cb:  nop
```

## 反编译 C

```c
// DB_ReqQueryCharacInfo::_getGiftRecvCount @ 0x8426f46

/* DB_ReqQueryCharacInfo::_getGiftRecvCount(unsigned int) */

int __thiscall DB_ReqQueryCharacInfo::_getGiftRecvCount(DB_ReqQueryCharacInfo *this,uint param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  tm local_8c;
  tm local_60;
  int local_34;
  time_t local_30;
  undefined1 local_2c [20];
  int local_18;
  int local_14;
  MySQL *local_10;
  
  local_10 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,6,0);
  local_14 = 0;
  local_18 = -1;
  memset(local_2c,0,0x14);
  memcpy(local_2c,"member_login",0xd);
  uVar2 = NumberToString(param_1,0);
  MySQL::set_query(local_10,"seLect last_gift_time,gift_cnt from %s where m_id=%s",local_2c,uVar2);
  cVar1 = MySQL::exec(local_10,true);
  if (cVar1 == '\x01') {
    iVar3 = MySQL::get_n_rows(local_10);
    if (iVar3 != 0) {
      cVar1 = MySQL::fetch(local_10);
      if (cVar1 == '\x01') {
        MySQL::get_int(local_10,0,&local_14);
        MySQL::get_int(local_10,1,&local_18);
        if (local_18 != 0) {
          local_30 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
          local_34 = local_14;
          localtime_r(&local_34,&local_60);
          localtime_r(&local_30,&local_8c);
          if (local_60.tm_mon != local_8c.tm_mon) {
            uVar2 = NumberToString(param_1,0);
            MySQL::set_query(local_10,
                             "upDate %s set last_gift_time=unix_timestamp(now()),gift_cnt=0 where m_id=%s"
                             ,local_2c,uVar2);
            MySQL::exec(local_10,true);
            local_18 = 0;
          }
        }
      }
      else {
        local_18 = -1;
      }
    }
  }
  else {
    local_18 = 0;
  }
  return local_18;
}
```
