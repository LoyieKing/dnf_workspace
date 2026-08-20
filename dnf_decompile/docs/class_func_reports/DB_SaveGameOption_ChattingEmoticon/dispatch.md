# dispatch

`_ZN34DB_SaveGameOption_ChattingEmoticon8dispatchEiiP6Stream`

`DB_SaveGameOption_ChattingEmoticon::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_SaveGameOption_ChattingEmoticon` | `0x08430412` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08430412  _ZN34DB_SaveGameOption_ChattingEmoticon8dispatchEiiP6Stream
#           DB_SaveGameOption_ChattingEmoticon::dispatch(int, int, Stream*)
# range [0x08430412, 0x0843056f]
08430412 +0x000:  push   %ebp
08430413 +0x001:  mov    %esp,%ebp
08430415 +0x003:  push   %esi
08430416 +0x004:  push   %ebx
08430417 +0x005:  sub    $0x30,%esp
0843041a +0x008:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0843041f +0x00d:  movl   $0x0,0x8(%esp)
08430427 +0x015:  movl   $0x6,0x4(%esp)
0843042f +0x01d:  mov    %eax,(%esp)
08430432 +0x020:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
08430437 +0x025:  mov    %eax,-0x10(%ebp)
0843043a +0x028:  mov    0x14(%ebp),%eax
0843043d +0x02b:  mov    %eax,(%esp)
08430440 +0x02e:  call   08452d12 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x5928>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x5928
08430445 +0x033:  mov    %eax,-0xc(%ebp)
08430448 +0x036:  movl   $0x0,-0x14(%ebp)
0843044f +0x03d:  mov    -0xc(%ebp),%eax
08430452 +0x040:  add    $0x4,%eax
08430455 +0x043:  lea    -0x14(%ebp),%edx
08430458 +0x046:  mov    %edx,0x10(%esp)
0843045c +0x04a:  movl   $0x210,0xc(%esp)
08430464 +0x052:  mov    %eax,0x8(%esp)
08430468 +0x056:  movl   $0x0,0x4(%esp)
08430470 +0x05e:  mov    -0x10(%ebp),%eax
08430473 +0x061:  mov    %eax,(%esp)
08430476 +0x064:  call   083fbd06 <_Z24put_compressed_blob_dataP5MySQLiPciPS1_>  ; put_compressed_blob_data(MySQL*, int, char*, int, char**)
0843047b +0x069:  xor    $0x1,%eax
0843047e +0x06c:  test   %al,%al
08430480 +0x06e:  je     0843048c <+0x7a>
08430482 +0x070:  mov    $0x0,%eax
08430487 +0x075:  jmp    08430569 <+0x157>
0843048c +0x07a:  mov    -0xc(%ebp),%eax
0843048f +0x07d:  mov    (%eax),%eax
08430491 +0x07f:  movl   $0x0,0x4(%esp)
08430499 +0x087:  mov    %eax,(%esp)
0843049c +0x08a:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
084304a1 +0x08f:  mov    %eax,%ebx
084304a3 +0x091:  mov    -0x14(%ebp),%esi
084304a6 +0x094:  call   083fbe25 <_Z22get_member_game_optionv>  ; get_member_game_option()
084304ab +0x099:  mov    %ebx,0x10(%esp)
084304af +0x09d:  mov    %esi,0xc(%esp)
084304b3 +0x0a1:  mov    %eax,0x8(%esp)
084304b7 +0x0a5:  movl   $"upDate %s set shortcut_emoticon='%s' where m_id=%s",0x4(%esp)
084304bf +0x0ad:  mov    -0x10(%ebp),%eax
084304c2 +0x0b0:  mov    %eax,(%esp)
084304c5 +0x0b3:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
084304ca +0x0b8:  movl   $0x1,0x4(%esp)
084304d2 +0x0c0:  mov    -0x10(%ebp),%eax
084304d5 +0x0c3:  mov    %eax,(%esp)
084304d8 +0x0c6:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
084304dd +0x0cb:  xor    $0x1,%eax
084304e0 +0x0ce:  test   %al,%al
084304e2 +0x0d0:  jne    084304f5 <+0xe3>
084304e4 +0x0d2:  mov    -0x10(%ebp),%eax
084304e7 +0x0d5:  mov    %eax,(%esp)
084304ea +0x0d8:  call   083f4310 <_ZN5MySQL19getAffectedRowCountEv>  ; MySQL::getAffectedRowCount()
084304ef +0x0dd:  or     %edx,%eax
084304f1 +0x0df:  test   %eax,%eax
084304f3 +0x0e1:  jne    084304fc <+0xea>
084304f5 +0x0e3:  mov    $0x1,%eax
084304fa +0x0e8:  jmp    08430501 <+0xef>
084304fc +0x0ea:  mov    $0x0,%eax
08430501 +0x0ef:  test   %al,%al
08430503 +0x0f1:  je     08430564 <+0x152>
08430505 +0x0f3:  mov    -0x14(%ebp),%esi
08430508 +0x0f6:  mov    -0xc(%ebp),%eax
0843050b +0x0f9:  mov    (%eax),%eax
0843050d +0x0fb:  movl   $0x0,0x4(%esp)
08430515 +0x103:  mov    %eax,(%esp)
08430518 +0x106:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
0843051d +0x10b:  mov    %eax,%ebx
0843051f +0x10d:  call   083fbe25 <_Z22get_member_game_optionv>  ; get_member_game_option()
08430524 +0x112:  mov    %esi,0x10(%esp)
08430528 +0x116:  mov    %ebx,0xc(%esp)
0843052c +0x11a:  mov    %eax,0x8(%esp)
08430530 +0x11e:  movl   $"inSert into %s(m_id, shortcut_emoticon) values(%s,'%s')",0x4(%esp)
08430538 +0x126:  mov    -0x10(%ebp),%eax
0843053b +0x129:  mov    %eax,(%esp)
0843053e +0x12c:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08430543 +0x131:  movl   $0x1,0x4(%esp)
0843054b +0x139:  mov    -0x10(%ebp),%eax
0843054e +0x13c:  mov    %eax,(%esp)
08430551 +0x13f:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08430556 +0x144:  xor    $0x1,%eax
08430559 +0x147:  test   %al,%al
0843055b +0x149:  je     08430564 <+0x152>
0843055d +0x14b:  mov    $0x0,%eax
08430562 +0x150:  jmp    08430569 <+0x157>
08430564 +0x152:  mov    $0x1,%eax
08430569 +0x157:  add    $0x30,%esp
0843056c +0x15a:  pop    %ebx
0843056d +0x15b:  pop    %esi
0843056e +0x15c:  pop    %ebp
0843056f +0x15d:  ret
```

## 反编译 C

```c
// DB_SaveGameOption_ChattingEmoticon::dispatch @ 0x8430412

/* DB_SaveGameOption_ChattingEmoticon::dispatch(int, int, Stream*) */

undefined4 DB_SaveGameOption_ChattingEmoticon::dispatch(int param_1,int param_2,Stream *param_3)

{
  bool bVar1;
  char *pcVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  Stream *in_stack_00000010;
  char *local_18;
  MySQL *local_14;
  SIG_SAVE_CHATTING_EMOTICON *local_10;
  
  local_14 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,6,0);
  local_10 = Stream::GetOutBuffer<SIG_SAVE_CHATTING_EMOTICON>(in_stack_00000010);
  local_18 = (char *)0x0;
  cVar3 = put_compressed_blob_data(local_14,0,(char *)(local_10 + 4),0x210,&local_18);
  if (cVar3 != '\x01') {
    return 0;
  }
  uVar4 = NumberToString(*(uint *)local_10,0);
  pcVar2 = local_18;
  uVar5 = get_member_game_option();
  MySQL::set_query(local_14,"upDate %s set shortcut_emoticon=\'%s\' where m_id=%s",uVar5,pcVar2,
                   uVar4);
  cVar3 = MySQL::exec(local_14,true);
  if ((cVar3 == '\x01') && (lVar6 = MySQL::getAffectedRowCount(local_14), lVar6 != 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  pcVar2 = local_18;
  if (bVar1) {
    uVar4 = NumberToString(*(uint *)local_10,0);
    uVar5 = get_member_game_option();
    MySQL::set_query(local_14,"inSert into %s(m_id, shortcut_emoticon) values(%s,\'%s\')",uVar5,
                     uVar4,pcVar2);
    cVar3 = MySQL::exec(local_14,true);
    if (cVar3 != '\x01') {
      return 0;
    }
  }
  return 1;
}
```
