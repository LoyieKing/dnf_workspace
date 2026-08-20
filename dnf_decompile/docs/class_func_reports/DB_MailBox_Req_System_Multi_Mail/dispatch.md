# dispatch

`_ZN32DB_MailBox_Req_System_Multi_Mail8dispatchEiiP6Stream`

`DB_MailBox_Req_System_Multi_Mail::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_MailBox_Req_System_Multi_Mail` | `0x0844346a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0844346a  _ZN32DB_MailBox_Req_System_Multi_Mail8dispatchEiiP6Stream
#           DB_MailBox_Req_System_Multi_Mail::dispatch(int, int, Stream*)
# range [0x0844346a, 0x084435d3]
0844346a +0x000:  push   %ebp
0844346b +0x001:  mov    %esp,%ebp
0844346d +0x003:  sub    $0x58,%esp
08443470 +0x006:  mov    0x14(%ebp),%eax
08443473 +0x009:  mov    %eax,(%esp)
08443476 +0x00c:  call   08453f08 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x6b1e>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x6b1e
0844347b +0x011:  mov    %eax,-0x18(%ebp)
0844347e +0x014:  mov    -0x18(%ebp),%eax
08443481 +0x017:  mov    0x395(%eax),%edx
08443487 +0x01d:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0844348c +0x022:  mov    %edx,0x8(%esp)
08443490 +0x026:  movl   $0x3,0x4(%esp)
08443498 +0x02e:  mov    %eax,(%esp)
0844349b +0x031:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
084434a0 +0x036:  mov    %eax,-0x14(%ebp)
084434a3 +0x039:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
084434aa +0x040:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
084434af +0x045:  mov    %eax,-0x1c(%ebp)
084434b2 +0x048:  lea    -0x48(%ebp),%eax
084434b5 +0x04b:  mov    %eax,0x4(%esp)
084434b9 +0x04f:  lea    -0x1c(%ebp),%eax
084434bc +0x052:  mov    %eax,(%esp)
084434bf +0x055:  call   0807e360 <_init+0xc58>
084434c4 +0x05a:  mov    %eax,-0x10(%ebp)
084434c7 +0x05d:  mov    -0x10(%ebp),%eax
084434ca +0x060:  mov    0x8(%eax),%eax
084434cd +0x063:  lea    0x1(%eax),%edx
084434d0 +0x066:  mov    -0x10(%ebp),%eax
084434d3 +0x069:  mov    %edx,0x8(%eax)
084434d6 +0x06c:  mov    -0x10(%ebp),%eax
084434d9 +0x06f:  movl   $0x0,0x4(%eax)
084434e0 +0x076:  mov    -0x10(%ebp),%eax
084434e3 +0x079:  movl   $0x0,(%eax)
084434e9 +0x07f:  mov    -0x10(%ebp),%eax
084434ec +0x082:  mov    %eax,(%esp)
084434ef +0x085:  call   0807e820 <_init+0x1118>
084434f4 +0x08a:  mov    %eax,-0xc(%ebp)
084434f7 +0x08d:  mov    -0x18(%ebp),%eax
084434fa +0x090:  mov    0x390(%eax),%eax
08443500 +0x096:  cmp    $0xe,%eax
08443503 +0x099:  ja     08443522 <+0xb8>
08443505 +0x09b:  mov    -0xc(%ebp),%edx
08443508 +0x09e:  mov    -0x18(%ebp),%eax
0844350b +0x0a1:  mov    0x390(%eax),%eax
08443511 +0x0a7:  imul   $&_ZL14gUnicodeBuffer+0xac54,%eax,%eax
08443517 +0x0ad:  mov    %edx,%ecx
08443519 +0x0af:  sub    %eax,%ecx
0844351b +0x0b1:  mov    %ecx,%eax
0844351d +0x0b3:  mov    %eax,-0xc(%ebp)
08443520 +0x0b6:  jmp    0844354d <+0xe3>
08443522 +0x0b8:  mov    -0x18(%ebp),%eax
08443525 +0x0bb:  mov    0x390(%eax),%eax
0844352b +0x0c1:  cmp    $0xf,%eax
0844352e +0x0c4:  jbe    0844354d <+0xe3>
08443530 +0x0c6:  mov    -0x18(%ebp),%eax
08443533 +0x0c9:  mov    0x390(%eax),%eax
08443539 +0x0cf:  imul   $&_ZL14gUnicodeBuffer+0xac54,%eax,%edx
0844353f +0x0d5:  mov    -0xc(%ebp),%eax
08443542 +0x0d8:  lea    (%edx,%eax,1),%eax
08443545 +0x0db:  sub    $0x13c680,%eax
0844354a +0x0e0:  mov    %eax,-0xc(%ebp)
0844354d +0x0e3:  mov    -0x18(%ebp),%eax
08443550 +0x0e6:  mov    -0xc(%ebp),%edx
08443553 +0x0e9:  mov    %edx,0x3a1(%eax)
08443559 +0x0ef:  mov    -0x18(%ebp),%eax
0844355c +0x0f2:  mov    %eax,0x8(%esp)
08443560 +0x0f6:  mov    -0x14(%ebp),%eax
08443563 +0x0f9:  mov    %eax,0x4(%esp)
08443567 +0x0fd:  mov    0x8(%ebp),%eax
0844356a +0x100:  mov    %eax,(%esp)
0844356d +0x103:  call   084435d4 <_ZN32DB_MailBox_Req_System_Multi_Mail13_InsertLetterEP5MySQLP34SIG_MAILBOX_SEND_SYSTEM_MULTI_MAIL>  ; DB_MailBox_Req_System_Multi_Mail::_InsertLetter(MySQL*, SIG_MAILBOX_SEND_SYSTEM_MULTI_MAIL*)
08443572 +0x108:  xor    $0x1,%eax
08443575 +0x10b:  test   %al,%al
08443577 +0x10d:  je     08443580 <+0x116>
08443579 +0x10f:  mov    $0x0,%eax
0844357e +0x114:  jmp    084435d1 <+0x167>
08443580 +0x116:  mov    -0x18(%ebp),%eax
08443583 +0x119:  mov    %eax,0x8(%esp)
08443587 +0x11d:  mov    -0x14(%ebp),%eax
0844358a +0x120:  mov    %eax,0x4(%esp)
0844358e +0x124:  mov    0x8(%ebp),%eax
08443591 +0x127:  mov    %eax,(%esp)
08443594 +0x12a:  call   0844372e <_ZN32DB_MailBox_Req_System_Multi_Mail13_InsertPostalEP5MySQLP34SIG_MAILBOX_SEND_SYSTEM_MULTI_MAIL>  ; DB_MailBox_Req_System_Multi_Mail::_InsertPostal(MySQL*, SIG_MAILBOX_SEND_SYSTEM_MULTI_MAIL*)
08443599 +0x12f:  xor    $0x1,%eax
0844359c +0x132:  test   %al,%al
0844359e +0x134:  je     084435a7 <+0x13d>
084435a0 +0x136:  mov    $0x0,%eax
084435a5 +0x13b:  jmp    084435d1 <+0x167>
084435a7 +0x13d:  mov    -0x18(%ebp),%eax
084435aa +0x140:  mov    0x395(%eax),%edx
084435b0 +0x146:  mov    -0x18(%ebp),%eax
084435b3 +0x149:  mov    0x11e(%eax),%eax
084435b9 +0x14f:  mov    %edx,0x8(%esp)
084435bd +0x153:  mov    %eax,0x4(%esp)
084435c1 +0x157:  mov    0x8(%ebp),%eax
084435c4 +0x15a:  mov    %eax,(%esp)
084435c7 +0x15d:  call   08443b6e <_ZN32DB_MailBox_Req_System_Multi_Mail10sendResultEi17ENUM_SERVER_GROUP>  ; DB_MailBox_Req_System_Multi_Mail::sendResult(int, ENUM_SERVER_GROUP)
084435cc +0x162:  mov    $0x1,%eax
084435d1 +0x167:  leave
084435d2 +0x168:  ret
084435d3 +0x169:  nop
```

## 反编译 C

```c
// DB_MailBox_Req_System_Multi_Mail::dispatch @ 0x844346a

/* DB_MailBox_Req_System_Multi_Mail::dispatch(int, int, Stream*) */

undefined4 __thiscall
DB_MailBox_Req_System_Multi_Mail::dispatch
          (DB_MailBox_Req_System_Multi_Mail *this,int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  undefined4 uVar2;
  tm local_4c;
  time_t local_20;
  SIG_MAILBOX_SEND_SYSTEM_MULTI_MAIL *local_1c;
  MySQL *local_18;
  tm *local_14;
  time_t local_10;
  
  local_1c = Stream::GetOutBuffer<SIG_MAILBOX_SEND_SYSTEM_MULTI_MAIL>(param_3);
  local_18 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,3,*(undefined4 *)(local_1c + 0x395));
  local_20 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  local_14 = localtime_r(&local_20,&local_4c);
  local_14->tm_hour = local_14->tm_hour + 1;
  local_14->tm_min = 0;
  local_14->tm_sec = 0;
  local_10 = mktime(local_14);
  if (*(uint *)(local_1c + 0x390) < 0xf) {
    local_10 = local_10 + *(int *)(local_1c + 0x390) * -0x15180;
  }
  else if (0xf < *(uint *)(local_1c + 0x390)) {
    local_10 = *(int *)(local_1c + 0x390) * 0x15180 + local_10 + -0x13c680;
  }
  *(time_t *)(local_1c + 0x3a1) = local_10;
  cVar1 = _InsertLetter(this,local_18,local_1c);
  if (cVar1 == '\x01') {
    cVar1 = _InsertPostal(this,local_18,local_1c);
    if (cVar1 == '\x01') {
      sendResult(this,*(undefined4 *)(local_1c + 0x11e),*(undefined4 *)(local_1c + 0x395));
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
```
