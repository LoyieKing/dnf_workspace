# dispatch

`_ZN19DB_MailBox_Req_Send8dispatchEiiP6Stream`

`DB_MailBox_Req_Send::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_MailBox_Req_Send` | `0x0841f84e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0841f84e  _ZN19DB_MailBox_Req_Send8dispatchEiiP6Stream
#           DB_MailBox_Req_Send::dispatch(int, int, Stream*)
# range [0x0841f84e, 0x0841f8d3]
0841f84e +0x00:  push   %ebp
0841f84f +0x01:  mov    %esp,%ebp
0841f851 +0x03:  sub    $0x28,%esp
0841f854 +0x06:  mov    0x14(%ebp),%eax
0841f857 +0x09:  mov    %eax,(%esp)
0841f85a +0x0c:  call   084519fe <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x4614>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x4614
0841f85f +0x11:  mov    %eax,-0x10(%ebp)
0841f862 +0x14:  mov    -0x10(%ebp),%eax
0841f865 +0x17:  mov    0x15f(%eax),%edx
0841f86b +0x1d:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0841f870 +0x22:  mov    %edx,0x8(%esp)
0841f874 +0x26:  movl   $0x3,0x4(%esp)
0841f87c +0x2e:  mov    %eax,(%esp)
0841f87f +0x31:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0841f884 +0x36:  mov    %eax,-0xc(%ebp)
0841f887 +0x39:  mov    -0x10(%ebp),%eax
0841f88a +0x3c:  mov    %eax,0x4(%esp)
0841f88e +0x40:  mov    -0xc(%ebp),%eax
0841f891 +0x43:  mov    %eax,(%esp)
0841f894 +0x46:  call   0841f2fa <_ZN19DB_MailBox_Req_Send14insertMailDataEP5MySQLPK25SIG_MAILBOX_SEND_NEW_MAIL>  ; DB_MailBox_Req_Send::insertMailData(MySQL*, SIG_MAILBOX_SEND_NEW_MAIL const*)
0841f899 +0x4b:  xor    $0x1,%eax
0841f89c +0x4e:  test   %al,%al
0841f89e +0x50:  je     0841f8a7 <+0x59>
0841f8a0 +0x52:  mov    $0x0,%eax
0841f8a5 +0x57:  jmp    0841f8d1 <+0x83>
0841f8a7 +0x59:  mov    -0x10(%ebp),%eax
0841f8aa +0x5c:  mov    0x15f(%eax),%edx
0841f8b0 +0x62:  mov    -0x10(%ebp),%eax
0841f8b3 +0x65:  mov    0x22(%eax),%eax
0841f8b6 +0x68:  mov    %edx,0xc(%esp)
0841f8ba +0x6c:  mov    %eax,0x8(%esp)
0841f8be +0x70:  movl   $0x0,0x4(%esp)
0841f8c6 +0x78:  mov    0x10(%ebp),%eax
0841f8c9 +0x7b:  mov    %eax,(%esp)
0841f8cc +0x7e:  call   0841f75a <_ZN19DB_MailBox_Req_Send10sendResultEiii17ENUM_SERVER_GROUP>  ; DB_MailBox_Req_Send::sendResult(int, int, int, ENUM_SERVER_GROUP)
0841f8d1 +0x83:  leave
0841f8d2 +0x84:  ret
0841f8d3 +0x85:  nop
```

## 反编译 C

```c
// DB_MailBox_Req_Send::dispatch @ 0x841f84e

/* DB_MailBox_Req_Send::dispatch(int, int, Stream*) */

undefined4 __thiscall
DB_MailBox_Req_Send::dispatch(DB_MailBox_Req_Send *this,int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  SIG_MAILBOX_SEND_NEW_MAIL *pSVar2;
  MySQL *pMVar3;
  undefined4 uVar4;
  
  pSVar2 = Stream::GetOutBuffer<SIG_MAILBOX_SEND_NEW_MAIL>(param_3);
  pMVar3 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,3,*(undefined4 *)(pSVar2 + 0x15f));
  cVar1 = insertMailData(pMVar3,pSVar2);
  if (cVar1 == '\x01') {
    uVar4 = sendResult(param_2,0,*(undefined4 *)(pSVar2 + 0x22),*(undefined4 *)(pSVar2 + 0x15f));
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}
```
