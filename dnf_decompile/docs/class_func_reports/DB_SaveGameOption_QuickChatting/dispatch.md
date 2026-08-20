# dispatch

`_ZN31DB_SaveGameOption_QuickChatting8dispatchEiiP6Stream`

`DB_SaveGameOption_QuickChatting::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_SaveGameOption_QuickChatting` | `0x08430250` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08430250  _ZN31DB_SaveGameOption_QuickChatting8dispatchEiiP6Stream
#           DB_SaveGameOption_QuickChatting::dispatch(int, int, Stream*)
# range [0x08430250, 0x08430411]
08430250 +0x000:  push   %ebp
08430251 +0x001:  mov    %esp,%ebp
08430253 +0x003:  push   %edi
08430254 +0x004:  push   %esi
08430255 +0x005:  push   %ebx
08430256 +0x006:  sub    $0x31c,%esp
0843025c +0x00c:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
08430261 +0x011:  movl   $0x0,0x8(%esp)
08430269 +0x019:  movl   $0x6,0x4(%esp)
08430271 +0x021:  mov    %eax,(%esp)
08430274 +0x024:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
08430279 +0x029:  mov    %eax,-0x20(%ebp)
0843027c +0x02c:  mov    0x14(%ebp),%eax
0843027f +0x02f:  mov    %eax,(%esp)
08430282 +0x032:  call   08452cbe <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x58d4>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x58d4
08430287 +0x037:  mov    %eax,-0x1c(%ebp)
0843028a +0x03a:  lea    -0x300(%ebp),%ebx
08430290 +0x040:  mov    $0x0,%eax
08430295 +0x045:  mov    $0xb7,%edx
0843029a +0x04a:  mov    %ebx,%edi
0843029c +0x04c:  mov    %edx,%ecx
0843029e +0x04e:  rep stos %eax,%es:(%edi)
084302a0 +0x050:  movl   $0x2dc,-0x24(%ebp)
084302a7 +0x057:  mov    -0x1c(%ebp),%eax
084302aa +0x05a:  add    $0x4,%eax
084302ad +0x05d:  movl   $0x258,0xc(%esp)
084302b5 +0x065:  mov    %eax,0x8(%esp)
084302b9 +0x069:  lea    -0x24(%ebp),%eax
084302bc +0x06c:  mov    %eax,0x4(%esp)
084302c0 +0x070:  lea    -0x300(%ebp),%eax
084302c6 +0x076:  mov    %eax,(%esp)
084302c9 +0x079:  call   086b201f <_Z12compress_zipPcRjPKcj>  ; compress_zip(char*, unsigned int&, char const*, unsigned int)
084302ce +0x07e:  xor    $0x1,%eax
084302d1 +0x081:  test   %al,%al
084302d3 +0x083:  je     084302df <+0x8f>
084302d5 +0x085:  mov    $0x0,%eax
084302da +0x08a:  jmp    08430406 <+0x1b6>
084302df +0x08f:  mov    -0x1c(%ebp),%eax
084302e2 +0x092:  mov    (%eax),%eax
084302e4 +0x094:  movl   $0x0,0x4(%esp)
084302ec +0x09c:  mov    %eax,(%esp)
084302ef +0x09f:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
084302f4 +0x0a4:  mov    %eax,%esi
084302f6 +0x0a6:  mov    -0x24(%ebp),%eax
084302f9 +0x0a9:  mov    %eax,0xc(%esp)
084302fd +0x0ad:  lea    -0x300(%ebp),%eax
08430303 +0x0b3:  mov    %eax,0x8(%esp)
08430307 +0x0b7:  movl   $0x1,0x4(%esp)
0843030f +0x0bf:  mov    -0x20(%ebp),%eax
08430312 +0x0c2:  mov    %eax,(%esp)
08430315 +0x0c5:  call   083f452a <_ZN5MySQL11blob_to_strEiPvi>  ; MySQL::blob_to_str(int, void*, int)
0843031a +0x0ca:  mov    %eax,%ebx
0843031c +0x0cc:  call   083fbe25 <_Z22get_member_game_optionv>  ; get_member_game_option()
08430321 +0x0d1:  mov    %esi,0x10(%esp)
08430325 +0x0d5:  mov    %ebx,0xc(%esp)
08430329 +0x0d9:  mov    %eax,0x8(%esp)
0843032d +0x0dd:  movl   $"upDate %s set option_3='%s' where m_id=%s",0x4(%esp)
08430335 +0x0e5:  mov    -0x20(%ebp),%eax
08430338 +0x0e8:  mov    %eax,(%esp)
0843033b +0x0eb:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08430340 +0x0f0:  movl   $0x1,0x4(%esp)
08430348 +0x0f8:  mov    -0x20(%ebp),%eax
0843034b +0x0fb:  mov    %eax,(%esp)
0843034e +0x0fe:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08430353 +0x103:  xor    $0x1,%eax
08430356 +0x106:  test   %al,%al
08430358 +0x108:  jne    0843036b <+0x11b>
0843035a +0x10a:  mov    -0x20(%ebp),%eax
0843035d +0x10d:  mov    %eax,(%esp)
08430360 +0x110:  call   083f4310 <_ZN5MySQL19getAffectedRowCountEv>  ; MySQL::getAffectedRowCount()
08430365 +0x115:  or     %edx,%eax
08430367 +0x117:  test   %eax,%eax
08430369 +0x119:  jne    08430372 <+0x122>
0843036b +0x11b:  mov    $0x1,%eax
08430370 +0x120:  jmp    08430377 <+0x127>
08430372 +0x122:  mov    $0x0,%eax
08430377 +0x127:  test   %al,%al
08430379 +0x129:  je     08430401 <+0x1b1>
0843037f +0x12f:  mov    -0x24(%ebp),%eax
08430382 +0x132:  mov    %eax,0xc(%esp)
08430386 +0x136:  lea    -0x300(%ebp),%eax
0843038c +0x13c:  mov    %eax,0x8(%esp)
08430390 +0x140:  movl   $0x0,0x4(%esp)
08430398 +0x148:  mov    -0x20(%ebp),%eax
0843039b +0x14b:  mov    %eax,(%esp)
0843039e +0x14e:  call   083f452a <_ZN5MySQL11blob_to_strEiPvi>  ; MySQL::blob_to_str(int, void*, int)
084303a3 +0x153:  mov    %eax,%esi
084303a5 +0x155:  mov    -0x1c(%ebp),%eax
084303a8 +0x158:  mov    (%eax),%eax
084303aa +0x15a:  movl   $0x0,0x4(%esp)
084303b2 +0x162:  mov    %eax,(%esp)
084303b5 +0x165:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
084303ba +0x16a:  mov    %eax,%ebx
084303bc +0x16c:  call   083fbe25 <_Z22get_member_game_optionv>  ; get_member_game_option()
084303c1 +0x171:  mov    %esi,0x10(%esp)
084303c5 +0x175:  mov    %ebx,0xc(%esp)
084303c9 +0x179:  mov    %eax,0x8(%esp)
084303cd +0x17d:  movl   $"inSert into %s(m_id, option_3) values(%s,'%s')",0x4(%esp)
084303d5 +0x185:  mov    -0x20(%ebp),%eax
084303d8 +0x188:  mov    %eax,(%esp)
084303db +0x18b:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
084303e0 +0x190:  movl   $0x1,0x4(%esp)
084303e8 +0x198:  mov    -0x20(%ebp),%eax
084303eb +0x19b:  mov    %eax,(%esp)
084303ee +0x19e:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
084303f3 +0x1a3:  xor    $0x1,%eax
084303f6 +0x1a6:  test   %al,%al
084303f8 +0x1a8:  je     08430401 <+0x1b1>
084303fa +0x1aa:  mov    $0x0,%eax
084303ff +0x1af:  jmp    08430406 <+0x1b6>
08430401 +0x1b1:  mov    $0x1,%eax
08430406 +0x1b6:  add    $0x31c,%esp
0843040c +0x1bc:  pop    %ebx
0843040d +0x1bd:  pop    %esi
0843040e +0x1be:  pop    %edi
0843040f +0x1bf:  pop    %ebp
08430410 +0x1c0:  ret
08430411 +0x1c1:  nop
```

## 反编译 C

```c
// DB_SaveGameOption_QuickChatting::dispatch @ 0x8430250

/* DB_SaveGameOption_QuickChatting::dispatch(int, int, Stream*) */

undefined4 DB_SaveGameOption_QuickChatting::dispatch(int param_1,int param_2,Stream *param_3)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  char *pcVar7;
  byte bVar8;
  longlong lVar9;
  Stream *in_stack_00000010;
  char local_304 [732];
  uint local_28;
  MySQL *local_24;
  SIG_SAVE_GAME_OPTION_QUICKCHAT *local_20;
  
  bVar8 = 0;
  local_24 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,6,0);
  local_20 = Stream::GetOutBuffer<SIG_SAVE_GAME_OPTION_QUICKCHAT>(in_stack_00000010);
  pcVar7 = local_304;
  for (iVar6 = 0xb7; iVar6 != 0; iVar6 = iVar6 + -1) {
    pcVar7[0] = '\0';
    pcVar7[1] = '\0';
    pcVar7[2] = '\0';
    pcVar7[3] = '\0';
    pcVar7 = pcVar7 + ((uint)bVar8 * -2 + 1) * 4;
  }
  local_28 = 0x2dc;
  cVar2 = compress_zip(local_304,&local_28,(char *)(local_20 + 4),600);
  if (cVar2 == '\x01') {
    uVar3 = NumberToString(*(uint *)local_20,0);
    uVar4 = MySQL::blob_to_str(local_24,1,local_304,local_28);
    uVar5 = get_member_game_option();
    MySQL::set_query(local_24,"upDate %s set option_3=\'%s\' where m_id=%s",uVar5,uVar4,uVar3);
    cVar2 = MySQL::exec(local_24,true);
    if ((cVar2 == '\x01') && (lVar9 = MySQL::getAffectedRowCount(local_24), lVar9 != 0)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      uVar3 = MySQL::blob_to_str(local_24,0,local_304,local_28);
      uVar4 = NumberToString(*(uint *)local_20,0);
      uVar5 = get_member_game_option();
      MySQL::set_query(local_24,"inSert into %s(m_id, option_3) values(%s,\'%s\')",uVar5,uVar4,uVar3
                      );
      cVar2 = MySQL::exec(local_24,true);
      if (cVar2 != '\x01') {
        return 0;
      }
    }
    return 1;
  }
  return 0;
}
```
