# dispatch

`_ZN22DB_UpdateServerMessage8dispatchEiiP6Stream`

`DB_UpdateServerMessage::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_UpdateServerMessage` | `0x08435a02` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08435a02  _ZN22DB_UpdateServerMessage8dispatchEiiP6Stream
#           DB_UpdateServerMessage::dispatch(int, int, Stream*)
# range [0x08435a02, 0x08435d11]
08435a02 +0x000:  push   %ebp
08435a03 +0x001:  mov    %esp,%ebp
08435a05 +0x003:  push   %esi
08435a06 +0x004:  push   %ebx
08435a07 +0x005:  sub    $0x110,%esp
08435a0d +0x00b:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
08435a12 +0x010:  movl   $0x0,0x8(%esp)
08435a1a +0x018:  movl   $0x6,0x4(%esp)
08435a22 +0x020:  mov    %eax,(%esp)
08435a25 +0x023:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
08435a2a +0x028:  mov    %eax,-0x14(%ebp)
08435a2d +0x02b:  mov    0x14(%ebp),%eax
08435a30 +0x02e:  mov    %eax,(%esp)
08435a33 +0x031:  call   0845315e <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x5d74>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x5d74
08435a38 +0x036:  mov    %eax,-0x10(%ebp)
08435a3b +0x039:  mov    -0x10(%ebp),%eax
08435a3e +0x03c:  add    $0x10,%eax
08435a41 +0x03f:  mov    %eax,0x8(%esp)
08435a45 +0x043:  lea    -0xdc(%ebp),%eax
08435a4b +0x049:  mov    %eax,0x4(%esp)
08435a4f +0x04d:  mov    -0x14(%ebp),%eax
08435a52 +0x050:  mov    %eax,(%esp)
08435a55 +0x053:  call   083f48aa <_ZN5MySQL13escape_stringEPcPKc>  ; MySQL::escape_string(char*, char const*)
08435a5a +0x058:  mov    -0x10(%ebp),%eax
08435a5d +0x05b:  add    $0x48,%eax
08435a60 +0x05e:  mov    %eax,0x8(%esp)
08435a64 +0x062:  lea    -0x5c(%ebp),%eax
08435a67 +0x065:  mov    %eax,0x4(%esp)
08435a6b +0x069:  mov    -0x14(%ebp),%eax
08435a6e +0x06c:  mov    %eax,(%esp)
08435a71 +0x06f:  call   083f48aa <_ZN5MySQL13escape_stringEPcPKc>  ; MySQL::escape_string(char*, char const*)
08435a76 +0x074:  mov    -0x10(%ebp),%eax
08435a79 +0x077:  movzbl 0x9(%eax),%eax
08435a7d +0x07b:  movzbl %al,%ebx
08435a80 +0x07e:  mov    -0x10(%ebp),%eax
08435a83 +0x081:  mov    0x4(%eax),%ecx
08435a86 +0x084:  mov    -0x10(%ebp),%eax
08435a89 +0x087:  mov    (%eax),%edx
08435a8b +0x089:  mov    -0x10(%ebp),%eax
08435a8e +0x08c:  mov    0x5c(%eax),%eax
08435a91 +0x08f:  mov    %ebx,0x1c(%esp)
08435a95 +0x093:  mov    %ecx,0x18(%esp)
08435a99 +0x097:  mov    %edx,0x14(%esp)
08435a9d +0x09b:  mov    %eax,0x10(%esp)
08435aa1 +0x09f:  lea    -0x5c(%ebp),%eax
08435aa4 +0x0a2:  mov    %eax,0xc(%esp)
08435aa8 +0x0a6:  lea    -0xdc(%ebp),%eax
08435aae +0x0ac:  mov    %eax,0x8(%esp)
08435ab2 +0x0b0:  movl   $"upDate event_server_message set message='%s', charac_name='%s', update_time=from_unixtime(%d) where server_info=%d and channel_no=%d and message_index=%d",0x4(%esp)
08435aba +0x0b8:  mov    -0x14(%ebp),%eax
08435abd +0x0bb:  mov    %eax,(%esp)
08435ac0 +0x0be:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08435ac5 +0x0c3:  movl   $0x1,0x4(%esp)
08435acd +0x0cb:  mov    -0x14(%ebp),%eax
08435ad0 +0x0ce:  mov    %eax,(%esp)
08435ad3 +0x0d1:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08435ad8 +0x0d6:  xor    $0x1,%eax
08435adb +0x0d9:  test   %al,%al
08435add +0x0db:  jne    08435af0 <+0xee>
08435adf +0x0dd:  mov    -0x14(%ebp),%eax
08435ae2 +0x0e0:  mov    %eax,(%esp)
08435ae5 +0x0e3:  call   083f4310 <_ZN5MySQL19getAffectedRowCountEv>  ; MySQL::getAffectedRowCount()
08435aea +0x0e8:  or     %edx,%eax
08435aec +0x0ea:  test   %eax,%eax
08435aee +0x0ec:  jne    08435af7 <+0xf5>
08435af0 +0x0ee:  mov    $0x1,%eax
08435af5 +0x0f3:  jmp    08435afc <+0xfa>
08435af7 +0x0f5:  mov    $0x0,%eax
08435afc +0x0fa:  test   %al,%al
08435afe +0x0fc:  je     08435b85 <+0x183>
08435b04 +0x102:  mov    -0x10(%ebp),%eax
08435b07 +0x105:  mov    0x5c(%eax),%esi
08435b0a +0x108:  mov    -0x10(%ebp),%eax
08435b0d +0x10b:  movzbl 0x9(%eax),%eax
08435b11 +0x10f:  movzbl %al,%ebx
08435b14 +0x112:  mov    -0x10(%ebp),%eax
08435b17 +0x115:  movzbl 0x8(%eax),%eax
08435b1b +0x119:  movzbl %al,%ecx
08435b1e +0x11c:  mov    -0x10(%ebp),%eax
08435b21 +0x11f:  mov    0x4(%eax),%edx
08435b24 +0x122:  mov    -0x10(%ebp),%eax
08435b27 +0x125:  mov    (%eax),%eax
08435b29 +0x127:  mov    %esi,0x20(%esp)
08435b2d +0x12b:  lea    -0xdc(%ebp),%esi
08435b33 +0x131:  mov    %esi,0x1c(%esp)
08435b37 +0x135:  lea    -0x5c(%ebp),%esi
08435b3a +0x138:  mov    %esi,0x18(%esp)
08435b3e +0x13c:  mov    %ebx,0x14(%esp)
08435b42 +0x140:  mov    %ecx,0x10(%esp)
08435b46 +0x144:  mov    %edx,0xc(%esp)
08435b4a +0x148:  mov    %eax,0x8(%esp)
08435b4e +0x14c:  movl   $"inSert into event_server_message(server_info, channel_no, kind, message_index, charac_name, message, update_time) values(%d, %d, %d, %d, '%s', '%s', from_unixtime(%d))",0x4(%esp)
08435b56 +0x154:  mov    -0x14(%ebp),%eax
08435b59 +0x157:  mov    %eax,(%esp)
08435b5c +0x15a:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08435b61 +0x15f:  movl   $0x1,0x4(%esp)
08435b69 +0x167:  mov    -0x14(%ebp),%eax
08435b6c +0x16a:  mov    %eax,(%esp)
08435b6f +0x16d:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08435b74 +0x172:  xor    $0x1,%eax
08435b77 +0x175:  test   %al,%al
08435b79 +0x177:  je     08435b85 <+0x183>
08435b7b +0x179:  mov    $0x0,%ebx
08435b80 +0x17e:  jmp    08435d05 <+0x303>
08435b85 +0x183:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
08435b8a +0x188:  movl   $0x80e3,0x8(%esp)
08435b92 +0x190:  movl   $"DBThread.cpp",0x4(%esp)
08435b9a +0x198:  mov    %eax,(%esp)
08435b9d +0x19b:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
08435ba2 +0x1a0:  movl   $0x1,0x8(%esp)
08435baa +0x1a8:  mov    %eax,0x4(%esp)
08435bae +0x1ac:  lea    -0x1c(%ebp),%eax
08435bb1 +0x1af:  mov    %eax,(%esp)
08435bb4 +0x1b2:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
08435bb9 +0x1b7:  lea    -0x1c(%ebp),%eax
08435bbc +0x1ba:  mov    %eax,(%esp)
08435bbf +0x1bd:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08435bc4 +0x1c2:  mov    0xc(%ebp),%edx
08435bc7 +0x1c5:  mov    %edx,0x4(%esp)
08435bcb +0x1c9:  mov    %eax,(%esp)
08435bce +0x1cc:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08435bd3 +0x1d1:  lea    -0x1c(%ebp),%eax
08435bd6 +0x1d4:  mov    %eax,(%esp)
08435bd9 +0x1d7:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08435bde +0x1dc:  mov    0x10(%ebp),%edx
08435be1 +0x1df:  mov    %edx,0x4(%esp)
08435be5 +0x1e3:  mov    %eax,(%esp)
08435be8 +0x1e6:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08435bed +0x1eb:  lea    -0x1c(%ebp),%eax
08435bf0 +0x1ee:  mov    %eax,(%esp)
08435bf3 +0x1f1:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
08435bf8 +0x1f6:  mov    %eax,(%esp)
08435bfb +0x1f9:  call   084531b2 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x5dc8>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x5dc8
08435c00 +0x1fe:  mov    %eax,-0xc(%ebp)
08435c03 +0x201:  movl   $0x60,0x8(%esp)
08435c0b +0x209:  movl   $0x0,0x4(%esp)
08435c13 +0x211:  mov    -0xc(%ebp),%eax
08435c16 +0x214:  mov    %eax,(%esp)
08435c19 +0x217:  call   0807dcc0 <_init+0x5b8>
08435c1e +0x21c:  mov    -0x10(%ebp),%eax
08435c21 +0x21f:  mov    (%eax),%edx
08435c23 +0x221:  mov    -0xc(%ebp),%eax
08435c26 +0x224:  mov    %edx,(%eax)
08435c28 +0x226:  mov    -0x10(%ebp),%eax
08435c2b +0x229:  mov    0x4(%eax),%edx
08435c2e +0x22c:  mov    -0xc(%ebp),%eax
08435c31 +0x22f:  mov    %edx,0x4(%eax)
08435c34 +0x232:  mov    -0x10(%ebp),%eax
08435c37 +0x235:  movzbl 0x9(%eax),%edx
08435c3b +0x239:  mov    -0xc(%ebp),%eax
08435c3e +0x23c:  mov    %dl,0x9(%eax)
08435c41 +0x23f:  mov    -0x10(%ebp),%eax
08435c44 +0x242:  movzbl 0x8(%eax),%edx
08435c48 +0x246:  mov    -0xc(%ebp),%eax
08435c4b +0x249:  mov    %dl,0x8(%eax)
08435c4e +0x24c:  mov    -0x10(%ebp),%eax
08435c51 +0x24f:  mov    0x44(%eax),%edx
08435c54 +0x252:  mov    -0xc(%ebp),%eax
08435c57 +0x255:  mov    %edx,0x44(%eax)
08435c5a +0x258:  mov    -0x10(%ebp),%eax
08435c5d +0x25b:  mov    0x44(%eax),%eax
08435c60 +0x25e:  lea    0x1(%eax),%ecx
08435c63 +0x261:  mov    -0x10(%ebp),%eax
08435c66 +0x264:  lea    0x48(%eax),%edx
08435c69 +0x267:  mov    -0xc(%ebp),%eax
08435c6c +0x26a:  add    $0x48,%eax
08435c6f +0x26d:  mov    %ecx,0x8(%esp)
08435c73 +0x271:  mov    %edx,0x4(%esp)
08435c77 +0x275:  mov    %eax,(%esp)
08435c7a +0x278:  call   0807d8d0 <_init+0x1c8>
08435c7f +0x27d:  mov    -0x10(%ebp),%eax
08435c82 +0x280:  mov    0xc(%eax),%edx
08435c85 +0x283:  mov    -0xc(%ebp),%eax
08435c88 +0x286:  mov    %edx,0xc(%eax)
08435c8b +0x289:  mov    -0x10(%ebp),%eax
08435c8e +0x28c:  mov    0xc(%eax),%eax
08435c91 +0x28f:  lea    0x1(%eax),%ecx
08435c94 +0x292:  mov    -0x10(%ebp),%eax
08435c97 +0x295:  lea    0x10(%eax),%edx
08435c9a +0x298:  mov    -0xc(%ebp),%eax
08435c9d +0x29b:  add    $0x10,%eax
08435ca0 +0x29e:  mov    %ecx,0x8(%esp)
08435ca4 +0x2a2:  mov    %edx,0x4(%esp)
08435ca8 +0x2a6:  mov    %eax,(%esp)
08435cab +0x2a9:  call   0807d8d0 <_init+0x1c8>
08435cb0 +0x2ae:  mov    -0x10(%ebp),%eax
08435cb3 +0x2b1:  mov    0x5c(%eax),%edx
08435cb6 +0x2b4:  mov    -0xc(%ebp),%eax
08435cb9 +0x2b7:  mov    %edx,0x5c(%eax)
08435cbc +0x2ba:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08435cc1 +0x2bf:  lea    -0x1c(%ebp),%edx
08435cc4 +0x2c2:  mov    %edx,0x8(%esp)
08435cc8 +0x2c6:  movl   $0x1,0x4(%esp)
08435cd0 +0x2ce:  mov    %eax,(%esp)
08435cd3 +0x2d1:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08435cd8 +0x2d6:  mov    $0x1,%ebx
08435cdd +0x2db:  lea    -0x1c(%ebp),%eax
08435ce0 +0x2de:  mov    %eax,(%esp)
08435ce3 +0x2e1:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08435ce8 +0x2e6:  jmp    08435d05 <+0x303>
08435cea +0x2e8:  mov    %edx,%ebx
08435cec +0x2ea:  mov    %eax,%esi
08435cee +0x2ec:  lea    -0x1c(%ebp),%eax
08435cf1 +0x2ef:  mov    %eax,(%esp)
08435cf4 +0x2f2:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08435cf9 +0x2f7:  mov    %esi,%eax
08435cfb +0x2f9:  mov    %ebx,%edx
08435cfd +0x2fb:  mov    %eax,(%esp)
08435d00 +0x2fe:  call   08ae3750 <_Unwind_Resume>
08435d05 +0x303:  mov    %ebx,%eax
08435d07 +0x305:  add    $0x110,%esp
08435d0d +0x30b:  pop    %ebx
08435d0e +0x30c:  pop    %esi
08435d0f +0x30d:  pop    %ebp
08435d10 +0x30e:  ret
08435d11 +0x30f:  nop
```

## 反编译 C

```c
// DB_UpdateServerMessage::dispatch @ 0x8435a02

/* DB_UpdateServerMessage::dispatch(int, int, Stream*) */

undefined4 __thiscall
DB_UpdateServerMessage::dispatch
          (DB_UpdateServerMessage *this,int param_1,int param_2,Stream *param_3)

{
  bool bVar1;
  char cVar2;
  Stream *pSVar3;
  CStreamGuard *pCVar4;
  longlong lVar5;
  char local_e0 [128];
  char local_60 [64];
  CStreamGuard local_20 [8];
  MySQL *local_18;
  SIG_UPDATE_SERVER_MESSAGE *local_14;
  SIG_UPDATE_SERVER_MESSAGE *local_10;
  
  local_18 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,6,0);
  local_14 = Stream::GetOutBuffer<SIG_UPDATE_SERVER_MESSAGE>(param_3);
  MySQL::escape_string(local_18,local_e0,(char *)(local_14 + 0x10));
  MySQL::escape_string(local_18,local_60,(char *)(local_14 + 0x48));
  MySQL::set_query(local_18,
                   "upDate event_server_message set message=\'%s\', charac_name=\'%s\', update_time=from_unixtime(%d) where server_info=%d and channel_no=%d and message_index=%d"
                   ,local_e0,local_60,*(undefined4 *)(local_14 + 0x5c),*(undefined4 *)local_14,
                   *(undefined4 *)(local_14 + 4),(uint)(byte)local_14[9]);
  cVar2 = MySQL::exec(local_18,true);
  if ((cVar2 == '\x01') && (lVar5 = MySQL::getAffectedRowCount(local_18), lVar5 != 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    MySQL::set_query(local_18,
                     "inSert into event_server_message(server_info, channel_no, kind, message_index, charac_name, message, update_time) values(%d, %d, %d, %d, \'%s\', \'%s\', from_unixtime(%d))"
                     ,*(undefined4 *)local_14,*(undefined4 *)(local_14 + 4),(uint)(byte)local_14[8],
                     (uint)(byte)local_14[9],local_60,local_e0,*(undefined4 *)(local_14 + 0x5c));
    cVar2 = MySQL::exec(local_18,true);
    if (cVar2 != '\x01') {
      return 0;
    }
  }
  pSVar3 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x80e3);
  CStreamGuard::CStreamGuard(local_20,pSVar3,true);
  pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_20);
                    /* try { // try from 08435bce to 08435cd7 has its CatchHandler @ 08435cea */
  CStreamGuard::operator<<(pCVar4,param_1);
  pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_20);
  CStreamGuard::operator<<(pCVar4,param_2);
  pCVar4 = (CStreamGuard *)CStreamGuard::operator->(local_20);
  local_10 = CStreamGuard::GetInBuffer<SIG_UPDATE_SERVER_MESSAGE>(pCVar4);
  memset(local_10,0,0x60);
  *(undefined4 *)local_10 = *(undefined4 *)local_14;
  *(undefined4 *)(local_10 + 4) = *(undefined4 *)(local_14 + 4);
  local_10[9] = local_14[9];
  local_10[8] = local_14[8];
  *(undefined4 *)(local_10 + 0x44) = *(undefined4 *)(local_14 + 0x44);
  strncpy((char *)(local_10 + 0x48),(char *)(local_14 + 0x48),*(int *)(local_14 + 0x44) + 1);
  *(undefined4 *)(local_10 + 0xc) = *(undefined4 *)(local_14 + 0xc);
  strncpy((char *)(local_10 + 0x10),(char *)(local_14 + 0x10),*(int *)(local_14 + 0xc) + 1);
  *(undefined4 *)(local_10 + 0x5c) = *(undefined4 *)(local_14 + 0x5c);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_20);
  CStreamGuard::~CStreamGuard(local_20);
  return 1;
}
```
