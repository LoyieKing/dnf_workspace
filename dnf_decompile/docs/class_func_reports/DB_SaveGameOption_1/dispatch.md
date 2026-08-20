# dispatch

`_ZN19DB_SaveGameOption_18dispatchEiiP6Stream`

`DB_SaveGameOption_1::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_SaveGameOption_1` | `0x0842ff4e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0842ff4e  _ZN19DB_SaveGameOption_18dispatchEiiP6Stream
#           DB_SaveGameOption_1::dispatch(int, int, Stream*)
# range [0x0842ff4e, 0x08430143]
0842ff4e +0x000:  push   %ebp
0842ff4f +0x001:  mov    %esp,%ebp
0842ff51 +0x003:  push   %edi
0842ff52 +0x004:  push   %esi
0842ff53 +0x005:  push   %ebx
0842ff54 +0x006:  sub    $0x9c,%esp
0842ff5a +0x00c:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0842ff5f +0x011:  movl   $0x0,0x8(%esp)
0842ff67 +0x019:  movl   $0x6,0x4(%esp)
0842ff6f +0x021:  mov    %eax,(%esp)
0842ff72 +0x024:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0842ff77 +0x029:  mov    %eax,-0x20(%ebp)
0842ff7a +0x02c:  mov    0x14(%ebp),%eax
0842ff7d +0x02f:  mov    %eax,(%esp)
0842ff80 +0x032:  call   08452c16 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x582c>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x582c
0842ff85 +0x037:  mov    %eax,-0x1c(%ebp)
0842ff88 +0x03a:  lea    -0x86(%ebp),%edx
0842ff8e +0x040:  mov    $0x62,%ebx
0842ff93 +0x045:  mov    $0x0,%eax
0842ff98 +0x04a:  mov    %edx,%ecx
0842ff9a +0x04c:  and    $0x2,%ecx
0842ff9d +0x04f:  test   %ecx,%ecx
0842ff9f +0x051:  je     0842ffaa <+0x5c>
0842ffa1 +0x053:  mov    %ax,(%edx)
0842ffa4 +0x056:  add    $0x2,%edx
0842ffa7 +0x059:  sub    $0x2,%ebx
0842ffaa +0x05c:  mov    %ebx,%ecx
0842ffac +0x05e:  shr    $0x2,%ecx
0842ffaf +0x061:  mov    %edx,%edi
0842ffb1 +0x063:  rep stos %eax,%es:(%edi)
0842ffb3 +0x065:  mov    %edi,%edx
0842ffb5 +0x067:  mov    %ebx,%ecx
0842ffb7 +0x069:  and    $0x2,%ecx
0842ffba +0x06c:  test   %ecx,%ecx
0842ffbc +0x06e:  je     0842ffc4 <+0x76>
0842ffbe +0x070:  mov    %ax,(%edx)
0842ffc1 +0x073:  add    $0x2,%edx
0842ffc4 +0x076:  mov    %ebx,%ecx
0842ffc6 +0x078:  and    $0x1,%ecx
0842ffc9 +0x07b:  test   %ecx,%ecx
0842ffcb +0x07d:  je     0842ffd2 <+0x84>
0842ffcd +0x07f:  mov    %al,(%edx)
0842ffcf +0x081:  add    $0x1,%edx
0842ffd2 +0x084:  movl   $0x62,-0x24(%ebp)
0842ffd9 +0x08b:  mov    -0x1c(%ebp),%eax
0842ffdc +0x08e:  add    $0x4,%eax
0842ffdf +0x091:  movl   $0x48,0xc(%esp)
0842ffe7 +0x099:  mov    %eax,0x8(%esp)
0842ffeb +0x09d:  lea    -0x24(%ebp),%eax
0842ffee +0x0a0:  mov    %eax,0x4(%esp)
0842fff2 +0x0a4:  lea    -0x86(%ebp),%eax
0842fff8 +0x0aa:  mov    %eax,(%esp)
0842fffb +0x0ad:  call   086b201f <_Z12compress_zipPcRjPKcj>  ; compress_zip(char*, unsigned int&, char const*, unsigned int)
08430000 +0x0b2:  xor    $0x1,%eax
08430003 +0x0b5:  test   %al,%al
08430005 +0x0b7:  je     08430011 <+0xc3>
08430007 +0x0b9:  mov    $0x0,%eax
0843000c +0x0be:  jmp    08430138 <+0x1ea>
08430011 +0x0c3:  mov    -0x1c(%ebp),%eax
08430014 +0x0c6:  mov    (%eax),%eax
08430016 +0x0c8:  movl   $0x0,0x4(%esp)
0843001e +0x0d0:  mov    %eax,(%esp)
08430021 +0x0d3:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
08430026 +0x0d8:  mov    %eax,%esi
08430028 +0x0da:  mov    -0x24(%ebp),%eax
0843002b +0x0dd:  mov    %eax,0xc(%esp)
0843002f +0x0e1:  lea    -0x86(%ebp),%eax
08430035 +0x0e7:  mov    %eax,0x8(%esp)
08430039 +0x0eb:  movl   $0x0,0x4(%esp)
08430041 +0x0f3:  mov    -0x20(%ebp),%eax
08430044 +0x0f6:  mov    %eax,(%esp)
08430047 +0x0f9:  call   083f452a <_ZN5MySQL11blob_to_strEiPvi>  ; MySQL::blob_to_str(int, void*, int)
0843004c +0x0fe:  mov    %eax,%ebx
0843004e +0x100:  call   083fbe25 <_Z22get_member_game_optionv>  ; get_member_game_option()
08430053 +0x105:  mov    %esi,0x10(%esp)
08430057 +0x109:  mov    %ebx,0xc(%esp)
0843005b +0x10d:  mov    %eax,0x8(%esp)
0843005f +0x111:  movl   $"upDate %s set option_1='%s' where m_id=%s",0x4(%esp)
08430067 +0x119:  mov    -0x20(%ebp),%eax
0843006a +0x11c:  mov    %eax,(%esp)
0843006d +0x11f:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08430072 +0x124:  movl   $0x1,0x4(%esp)
0843007a +0x12c:  mov    -0x20(%ebp),%eax
0843007d +0x12f:  mov    %eax,(%esp)
08430080 +0x132:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08430085 +0x137:  xor    $0x1,%eax
08430088 +0x13a:  test   %al,%al
0843008a +0x13c:  jne    0843009d <+0x14f>
0843008c +0x13e:  mov    -0x20(%ebp),%eax
0843008f +0x141:  mov    %eax,(%esp)
08430092 +0x144:  call   083f4310 <_ZN5MySQL19getAffectedRowCountEv>  ; MySQL::getAffectedRowCount()
08430097 +0x149:  or     %edx,%eax
08430099 +0x14b:  test   %eax,%eax
0843009b +0x14d:  jne    084300a4 <+0x156>
0843009d +0x14f:  mov    $0x1,%eax
084300a2 +0x154:  jmp    084300a9 <+0x15b>
084300a4 +0x156:  mov    $0x0,%eax
084300a9 +0x15b:  test   %al,%al
084300ab +0x15d:  je     08430133 <+0x1e5>
084300b1 +0x163:  mov    -0x24(%ebp),%eax
084300b4 +0x166:  mov    %eax,0xc(%esp)
084300b8 +0x16a:  lea    -0x86(%ebp),%eax
084300be +0x170:  mov    %eax,0x8(%esp)
084300c2 +0x174:  movl   $0x0,0x4(%esp)
084300ca +0x17c:  mov    -0x20(%ebp),%eax
084300cd +0x17f:  mov    %eax,(%esp)
084300d0 +0x182:  call   083f452a <_ZN5MySQL11blob_to_strEiPvi>  ; MySQL::blob_to_str(int, void*, int)
084300d5 +0x187:  mov    %eax,%esi
084300d7 +0x189:  mov    -0x1c(%ebp),%eax
084300da +0x18c:  mov    (%eax),%eax
084300dc +0x18e:  movl   $0x0,0x4(%esp)
084300e4 +0x196:  mov    %eax,(%esp)
084300e7 +0x199:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
084300ec +0x19e:  mov    %eax,%ebx
084300ee +0x1a0:  call   083fbe25 <_Z22get_member_game_optionv>  ; get_member_game_option()
084300f3 +0x1a5:  mov    %esi,0x10(%esp)
084300f7 +0x1a9:  mov    %ebx,0xc(%esp)
084300fb +0x1ad:  mov    %eax,0x8(%esp)
084300ff +0x1b1:  movl   $"inSert into %s(m_id, option_1) values(%s,'%s')",0x4(%esp)
08430107 +0x1b9:  mov    -0x20(%ebp),%eax
0843010a +0x1bc:  mov    %eax,(%esp)
0843010d +0x1bf:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08430112 +0x1c4:  movl   $0x1,0x4(%esp)
0843011a +0x1cc:  mov    -0x20(%ebp),%eax
0843011d +0x1cf:  mov    %eax,(%esp)
08430120 +0x1d2:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08430125 +0x1d7:  xor    $0x1,%eax
08430128 +0x1da:  test   %al,%al
0843012a +0x1dc:  je     08430133 <+0x1e5>
0843012c +0x1de:  mov    $0x0,%eax
08430131 +0x1e3:  jmp    08430138 <+0x1ea>
08430133 +0x1e5:  mov    $0x1,%eax
08430138 +0x1ea:  add    $0x9c,%esp
0843013e +0x1f0:  pop    %ebx
0843013f +0x1f1:  pop    %esi
08430140 +0x1f2:  pop    %edi
08430141 +0x1f3:  pop    %ebp
08430142 +0x1f4:  ret
08430143 +0x1f5:  nop
```

## 反编译 C

```c
// DB_SaveGameOption_1::dispatch @ 0x842ff4e

/* WARNING: Removing unreachable block (ram,0x0842ffcd) */
/* DB_SaveGameOption_1::dispatch(int, int, Stream*) */

undefined4 DB_SaveGameOption_1::dispatch(int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char *pcVar5;
  uint uVar6;
  bool bVar7;
  byte bVar8;
  longlong lVar9;
  Stream *in_stack_00000010;
  char local_8a [98];
  uint local_28;
  MySQL *local_24;
  SIG_SAVE_GAME_OPTION_1 *local_20;
  
  bVar8 = 0;
  local_24 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,6,0);
  local_20 = Stream::GetOutBuffer<SIG_SAVE_GAME_OPTION_1>(in_stack_00000010);
  pcVar5 = local_8a;
  uVar6 = 0x62;
  bVar7 = ((uint)pcVar5 & 2) != 0;
  if (bVar7) {
    local_8a[0] = '\0';
    local_8a[1] = '\0';
    pcVar5 = local_8a + 2;
    uVar6 = 0x60;
  }
  for (uVar6 = uVar6 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    pcVar5[0] = '\0';
    pcVar5[1] = '\0';
    pcVar5[2] = '\0';
    pcVar5[3] = '\0';
    pcVar5 = pcVar5 + ((uint)bVar8 * -2 + 1) * 4;
  }
  if (!bVar7) {
    pcVar5[0] = '\0';
    pcVar5[1] = '\0';
  }
  local_28 = 0x62;
  cVar1 = compress_zip(local_8a,&local_28,(char *)(local_20 + 4),0x48);
  if (cVar1 == '\x01') {
    uVar2 = NumberToString(*(uint *)local_20,0);
    uVar3 = MySQL::blob_to_str(local_24,0,local_8a,local_28);
    uVar4 = get_member_game_option();
    MySQL::set_query(local_24,"upDate %s set option_1=\'%s\' where m_id=%s",uVar4,uVar3,uVar2);
    cVar1 = MySQL::exec(local_24,true);
    if ((cVar1 == '\x01') && (lVar9 = MySQL::getAffectedRowCount(local_24), lVar9 != 0)) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    if (bVar7) {
      uVar2 = MySQL::blob_to_str(local_24,0,local_8a,local_28);
      uVar3 = NumberToString(*(uint *)local_20,0);
      uVar4 = get_member_game_option();
      MySQL::set_query(local_24,"inSert into %s(m_id, option_1) values(%s,\'%s\')",uVar4,uVar3,uVar2
                      );
      cVar1 = MySQL::exec(local_24,true);
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
