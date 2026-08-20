# dispatch

`_ZN19DB_SaveInformNotice8dispatchEiiP6Stream`

`DB_SaveInformNotice::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_SaveInformNotice` | `0x08446fcc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08446fcc  _ZN19DB_SaveInformNotice8dispatchEiiP6Stream
#           DB_SaveInformNotice::dispatch(int, int, Stream*)
# range [0x08446fcc, 0x0844710d]
08446fcc +0x000:  push   %ebp
08446fcd +0x001:  mov    %esp,%ebp
08446fcf +0x003:  push   %edi
08446fd0 +0x004:  push   %ebx
08446fd1 +0x005:  sub    $0x120,%esp
08446fd7 +0x00b:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
08446fdc +0x010:  movl   $0x0,0x8(%esp)
08446fe4 +0x018:  movl   $0x9,0x4(%esp)
08446fec +0x020:  mov    %eax,(%esp)
08446fef +0x023:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
08446ff4 +0x028:  mov    %eax,-0x10(%ebp)
08446ff7 +0x02b:  mov    0x14(%ebp),%eax
08446ffa +0x02e:  mov    %eax,(%esp)
08446ffd +0x031:  call   0845446c <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x7082>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x7082
08447002 +0x036:  mov    %eax,-0xc(%ebp)
08447005 +0x039:  lea    -0x110(%ebp),%ebx
0844700b +0x03f:  mov    $0x0,%eax
08447010 +0x044:  mov    $0x40,%edx
08447015 +0x049:  mov    %ebx,%edi
08447017 +0x04b:  mov    %edx,%ecx
08447019 +0x04d:  rep stos %eax,%es:(%edi)
0844701b +0x04f:  mov    -0xc(%ebp),%eax
0844701e +0x052:  add    $0x4,%eax
08447021 +0x055:  mov    %eax,0x8(%esp)
08447025 +0x059:  lea    -0x110(%ebp),%eax
0844702b +0x05f:  mov    %eax,0x4(%esp)
0844702f +0x063:  mov    -0x10(%ebp),%eax
08447032 +0x066:  mov    %eax,(%esp)
08447035 +0x069:  call   083f48aa <_ZN5MySQL13escape_stringEPcPKc>  ; MySQL::escape_string(char*, char const*)
0844703a +0x06e:  mov    -0xc(%ebp),%eax
0844703d +0x071:  mov    (%eax),%eax
0844703f +0x073:  movl   $0x0,0x4(%esp)
08447047 +0x07b:  mov    %eax,(%esp)
0844704a +0x07e:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
0844704f +0x083:  mov    %eax,0xc(%esp)
08447053 +0x087:  lea    -0x110(%ebp),%eax
08447059 +0x08d:  mov    %eax,0x8(%esp)
0844705d +0x091:  movl   $"upDate login_common set inform_notice = '%s' where m_id = %s",0x4(%esp)
08447065 +0x099:  mov    -0x10(%ebp),%eax
08447068 +0x09c:  mov    %eax,(%esp)
0844706b +0x09f:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08447070 +0x0a4:  movl   $0x1,0x4(%esp)
08447078 +0x0ac:  mov    -0x10(%ebp),%eax
0844707b +0x0af:  mov    %eax,(%esp)
0844707e +0x0b2:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08447083 +0x0b7:  xor    $0x1,%eax
08447086 +0x0ba:  test   %al,%al
08447088 +0x0bc:  je     08447091 <+0xc5>
0844708a +0x0be:  mov    $0x0,%eax
0844708f +0x0c3:  jmp    08447103 <+0x137>
08447091 +0x0c5:  mov    -0x10(%ebp),%eax
08447094 +0x0c8:  mov    %eax,(%esp)
08447097 +0x0cb:  call   083f4310 <_ZN5MySQL19getAffectedRowCountEv>  ; MySQL::getAffectedRowCount()
0844709c +0x0d0:  or     %edx,%eax
0844709e +0x0d2:  test   %eax,%eax
084470a0 +0x0d4:  sete   %al
084470a3 +0x0d7:  test   %al,%al
084470a5 +0x0d9:  je     084470fe <+0x132>
084470a7 +0x0db:  mov    -0xc(%ebp),%eax
084470aa +0x0de:  mov    (%eax),%eax
084470ac +0x0e0:  movl   $0x0,0x4(%esp)
084470b4 +0x0e8:  mov    %eax,(%esp)
084470b7 +0x0eb:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
084470bc +0x0f0:  lea    -0x110(%ebp),%edx
084470c2 +0x0f6:  mov    %edx,0xc(%esp)
084470c6 +0x0fa:  mov    %eax,0x8(%esp)
084470ca +0x0fe:  movl   $"inSert into login_common(m_id, inform_notice) values(%s, '%s')",0x4(%esp)
084470d2 +0x106:  mov    -0x10(%ebp),%eax
084470d5 +0x109:  mov    %eax,(%esp)
084470d8 +0x10c:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
084470dd +0x111:  movl   $0x1,0x4(%esp)
084470e5 +0x119:  mov    -0x10(%ebp),%eax
084470e8 +0x11c:  mov    %eax,(%esp)
084470eb +0x11f:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
084470f0 +0x124:  xor    $0x1,%eax
084470f3 +0x127:  test   %al,%al
084470f5 +0x129:  je     084470fe <+0x132>
084470f7 +0x12b:  mov    $0x0,%eax
084470fc +0x130:  jmp    08447103 <+0x137>
084470fe +0x132:  mov    $0x1,%eax
08447103 +0x137:  add    $0x120,%esp
08447109 +0x13d:  pop    %ebx
0844710a +0x13e:  pop    %edi
0844710b +0x13f:  pop    %ebp
0844710c +0x140:  ret
0844710d +0x141:  nop
```

## 反编译 C

```c
// DB_SaveInformNotice::dispatch @ 0x8446fcc

/* DB_SaveInformNotice::dispatch(int, int, Stream*) */

undefined4 DB_SaveInformNotice::dispatch(int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  byte bVar5;
  longlong lVar6;
  Stream *in_stack_00000010;
  char local_114 [256];
  MySQL *local_14;
  InformNoticeFlagData *local_10;
  
  bVar5 = 0;
  local_14 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,9,0);
  local_10 = Stream::GetOutBuffer<InformNoticeFlagData>(in_stack_00000010);
  pcVar4 = local_114;
  for (iVar3 = 0x40; iVar3 != 0; iVar3 = iVar3 + -1) {
    pcVar4[0] = '\0';
    pcVar4[1] = '\0';
    pcVar4[2] = '\0';
    pcVar4[3] = '\0';
    pcVar4 = pcVar4 + ((uint)bVar5 * -2 + 1) * 4;
  }
  MySQL::escape_string(local_14,local_114,(char *)(local_10 + 4));
  uVar2 = NumberToString(*(uint *)local_10,0);
  MySQL::set_query(local_14,"upDate login_common set inform_notice = \'%s\' where m_id = %s",
                   local_114,uVar2);
  cVar1 = MySQL::exec(local_14,true);
  if (cVar1 == '\x01') {
    lVar6 = MySQL::getAffectedRowCount(local_14);
    if (lVar6 == 0) {
      uVar2 = NumberToString(*(uint *)local_10,0);
      MySQL::set_query(local_14,"inSert into login_common(m_id, inform_notice) values(%s, \'%s\')",
                       uVar2,local_114);
      cVar1 = MySQL::exec(local_14,true);
      if (cVar1 != '\x01') {
        return 0;
      }
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
```
