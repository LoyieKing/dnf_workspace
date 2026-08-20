# dispatch

`_ZN25DB_Multi_MailBox_Req_Send8dispatchEiiP6Stream`

`DB_Multi_MailBox_Req_Send::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_Multi_MailBox_Req_Send` | `0x0843bada` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0843bada  _ZN25DB_Multi_MailBox_Req_Send8dispatchEiiP6Stream
#           DB_Multi_MailBox_Req_Send::dispatch(int, int, Stream*)
# range [0x0843bada, 0x0843bc15]
0843bada +0x000:  push   %ebp
0843badb +0x001:  mov    %esp,%ebp
0843badd +0x003:  push   %edi
0843bade +0x004:  push   %esi
0843badf +0x005:  push   %ebx
0843bae0 +0x006:  sub    $0x6c,%esp
0843bae3 +0x009:  mov    0x14(%ebp),%eax
0843bae6 +0x00c:  mov    %eax,(%esp)
0843bae9 +0x00f:  call   0845155a <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x4170>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x4170
0843baee +0x014:  mov    %eax,-0x28(%ebp)
0843baf1 +0x017:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
0843baf8 +0x01e:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
0843bafd +0x023:  mov    %eax,-0x2c(%ebp)
0843bb00 +0x026:  lea    -0x58(%ebp),%eax
0843bb03 +0x029:  mov    %eax,0x4(%esp)
0843bb07 +0x02d:  lea    -0x2c(%ebp),%eax
0843bb0a +0x030:  mov    %eax,(%esp)
0843bb0d +0x033:  call   0807e360 <_init+0xc58>
0843bb12 +0x038:  mov    %eax,-0x24(%ebp)
0843bb15 +0x03b:  mov    -0x24(%ebp),%eax
0843bb18 +0x03e:  mov    0x8(%eax),%eax
0843bb1b +0x041:  lea    0x1(%eax),%edx
0843bb1e +0x044:  mov    -0x24(%ebp),%eax
0843bb21 +0x047:  mov    %edx,0x8(%eax)
0843bb24 +0x04a:  mov    -0x24(%ebp),%eax
0843bb27 +0x04d:  movl   $0x0,0x4(%eax)
0843bb2e +0x054:  mov    -0x24(%ebp),%eax
0843bb31 +0x057:  movl   $0x0,(%eax)
0843bb37 +0x05d:  mov    -0x24(%ebp),%eax
0843bb3a +0x060:  mov    %eax,(%esp)
0843bb3d +0x063:  call   0807e820 <_init+0x1118>
0843bb42 +0x068:  mov    %eax,-0x20(%ebp)
0843bb45 +0x06b:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0843bb4a +0x070:  movl   $0x0,0x8(%esp)
0843bb52 +0x078:  movl   $0x3,0x4(%esp)
0843bb5a +0x080:  mov    %eax,(%esp)
0843bb5d +0x083:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0843bb62 +0x088:  mov    %eax,-0x1c(%ebp)
0843bb65 +0x08b:  mov    -0x28(%ebp),%eax
0843bb68 +0x08e:  lea    0x3fbd(%eax),%edi
0843bb6e +0x094:  mov    -0x28(%ebp),%eax
0843bb71 +0x097:  add    $0xdb,%eax
0843bb76 +0x09c:  mov    %eax,%ecx
0843bb78 +0x09e:  mov    -0x28(%ebp),%eax
0843bb7b +0x0a1:  lea    0x3fc1(%eax),%esi
0843bb81 +0x0a7:  mov    -0x28(%ebp),%eax
0843bb84 +0x0aa:  mov    0x2d(%eax),%eax
0843bb87 +0x0ad:  mov    %eax,%edx
0843bb89 +0x0af:  mov    -0x28(%ebp),%eax
0843bb8c +0x0b2:  mov    0x1d(%eax),%eax
0843bb8f +0x0b5:  movl   $0x0,0x1c(%esp)
0843bb97 +0x0bd:  mov    -0x20(%ebp),%ebx
0843bb9a +0x0c0:  mov    %ebx,0x18(%esp)
0843bb9e +0x0c4:  mov    %edi,0x14(%esp)
0843bba2 +0x0c8:  mov    %ecx,0x10(%esp)
0843bba6 +0x0cc:  mov    %esi,0xc(%esp)
0843bbaa +0x0d0:  mov    %edx,0x8(%esp)
0843bbae +0x0d4:  mov    %eax,0x4(%esp)
0843bbb2 +0x0d8:  mov    -0x1c(%ebp),%eax
0843bbb5 +0x0db:  mov    %eax,(%esp)
0843bbb8 +0x0de:  call   0841f15a <_ZN19DB_MailBox_Req_Send12InsertLetterEP5MySQLiiPKcS3_Ril16ENUM_LETTER_STAT>  ; DB_MailBox_Req_Send::InsertLetter(MySQL*, int, int, char const*, char const*, int&, long, ENUM_LETTER_STAT)
0843bbbd +0x0e3:  xor    $0x1,%eax
0843bbc0 +0x0e6:  test   %al,%al
0843bbc2 +0x0e8:  je     0843bbf0 <+0x116>
0843bbc4 +0x0ea:  movl   $"InsertLetter() error",0x10(%esp)
0843bbcc +0x0f2:  movl   $0x8e53,0xc(%esp)
0843bbd4 +0x0fa:  movl   $&_ZZN25DB_Multi_MailBox_Req_Send8dispatchEiiP6StreamE19__PRETTY_FUNCTION__,0x8(%esp)
0843bbdc +0x102:  movl   $"DBThread.cpp",0x4(%esp)
0843bbe4 +0x10a:  movl   $0x1,(%esp)
0843bbeb +0x111:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0843bbf0 +0x116:  mov    -0x28(%ebp),%eax
0843bbf3 +0x119:  mov    %eax,0x8(%esp)
0843bbf7 +0x11d:  mov    0x10(%ebp),%eax
0843bbfa +0x120:  mov    %eax,0x4(%esp)
0843bbfe +0x124:  mov    0x8(%ebp),%eax
0843bc01 +0x127:  mov    %eax,(%esp)
0843bc04 +0x12a:  call   0843bc16 <_ZN25DB_Multi_MailBox_Req_Send11_sendResultEiP26SIG_MAILBOX_CHECK_RECEIVER>  ; DB_Multi_MailBox_Req_Send::_sendResult(int, SIG_MAILBOX_CHECK_RECEIVER*)
0843bc09 +0x12f:  mov    $0x1,%eax
0843bc0e +0x134:  add    $0x6c,%esp
0843bc11 +0x137:  pop    %ebx
0843bc12 +0x138:  pop    %esi
0843bc13 +0x139:  pop    %edi
0843bc14 +0x13a:  pop    %ebp
0843bc15 +0x13b:  ret
```

## 反编译 C

```c
// DB_Multi_MailBox_Req_Send::dispatch @ 0x843bada

/* DB_Multi_MailBox_Req_Send::dispatch(int, int, Stream*) */

undefined4 __thiscall
DB_Multi_MailBox_Req_Send::dispatch
          (DB_Multi_MailBox_Req_Send *this,int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  tm local_5c;
  time_t local_30;
  SIG_MAILBOX_CHECK_RECEIVER *local_2c;
  tm *local_28;
  time_t local_24;
  undefined4 local_20;
  
  local_2c = Stream::GetOutBuffer<SIG_MAILBOX_CHECK_RECEIVER>(param_3);
  local_30 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  local_28 = localtime_r(&local_30,&local_5c);
  local_28->tm_hour = local_28->tm_hour + 1;
  local_28->tm_min = 0;
  local_28->tm_sec = 0;
  local_24 = mktime(local_28);
  local_20 = DBMgr::GetDBHandle(GlobalData::s_db_mgr,3,0);
  cVar1 = DB_MailBox_Req_Send::InsertLetter
                    (local_20,*(undefined4 *)(local_2c + 0x1d),*(undefined4 *)(local_2c + 0x2d),
                     local_2c + 0x3fc1,local_2c + 0xdb,local_2c + 0x3fbd,local_24,0);
  if (cVar1 != '\x01') {
    LogManager::logFormat
              (1,"DBThread.cpp",
               "virtual bool DB_Multi_MailBox_Req_Send::dispatch(int, int, Stream*)",0x8e53,
               "InsertLetter() error");
  }
  _sendResult(this,param_2,local_2c);
  return 1;
}
```
