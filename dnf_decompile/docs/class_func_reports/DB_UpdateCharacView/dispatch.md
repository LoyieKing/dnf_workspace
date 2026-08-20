# dispatch

`_ZN19DB_UpdateCharacView8dispatchEiiP6Stream`

`DB_UpdateCharacView::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_UpdateCharacView` | `0x08408848` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08408848  _ZN19DB_UpdateCharacView8dispatchEiiP6Stream
#           DB_UpdateCharacView::dispatch(int, int, Stream*)
# range [0x08408848, 0x08408a3b]
08408848 +0x000:  push   %ebp
08408849 +0x001:  mov    %esp,%ebp
0840884b +0x003:  push   %edi
0840884c +0x004:  push   %ebx
0840884d +0x005:  sub    $0x1930,%esp
08408853 +0x00b:  mov    0x14(%ebp),%eax
08408856 +0x00e:  mov    %eax,(%esp)
08408859 +0x011:  call   0845074a <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x3360>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x3360
0840885e +0x016:  mov    %eax,-0x10(%ebp)
08408861 +0x019:  mov    -0x10(%ebp),%eax
08408864 +0x01c:  movzbl 0x14d4(%eax),%eax
0840886b +0x023:  movzbl %al,%edx
0840886e +0x026:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
08408873 +0x02b:  mov    %edx,0x8(%esp)
08408877 +0x02f:  movl   $0x2,0x4(%esp)
0840887f +0x037:  mov    %eax,(%esp)
08408882 +0x03a:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
08408887 +0x03f:  mov    %eax,-0xc(%ebp)
0840888a +0x042:  lea    -0x1919(%ebp),%edx
08408890 +0x048:  mov    $0x1905,%ebx
08408895 +0x04d:  mov    $0x0,%eax
0840889a +0x052:  mov    %edx,%ecx
0840889c +0x054:  and    $0x1,%ecx
0840889f +0x057:  test   %ecx,%ecx
084088a1 +0x059:  je     084088ab <+0x63>
084088a3 +0x05b:  mov    %al,(%edx)
084088a5 +0x05d:  add    $0x1,%edx
084088a8 +0x060:  sub    $0x1,%ebx
084088ab +0x063:  mov    %edx,%ecx
084088ad +0x065:  and    $0x2,%ecx
084088b0 +0x068:  test   %ecx,%ecx
084088b2 +0x06a:  je     084088bd <+0x75>
084088b4 +0x06c:  mov    %ax,(%edx)
084088b7 +0x06f:  add    $0x2,%edx
084088ba +0x072:  sub    $0x2,%ebx
084088bd +0x075:  mov    %ebx,%ecx
084088bf +0x077:  shr    $0x2,%ecx
084088c2 +0x07a:  mov    %edx,%edi
084088c4 +0x07c:  rep stos %eax,%es:(%edi)
084088c6 +0x07e:  mov    %edi,%edx
084088c8 +0x080:  mov    %ebx,%ecx
084088ca +0x082:  and    $0x2,%ecx
084088cd +0x085:  test   %ecx,%ecx
084088cf +0x087:  je     084088d7 <+0x8f>
084088d1 +0x089:  mov    %ax,(%edx)
084088d4 +0x08c:  add    $0x2,%edx
084088d7 +0x08f:  mov    %ebx,%ecx
084088d9 +0x091:  and    $0x1,%ecx
084088dc +0x094:  test   %ecx,%ecx
084088de +0x096:  je     084088e5 <+0x9d>
084088e0 +0x098:  mov    %al,(%edx)
084088e2 +0x09a:  add    $0x1,%edx
084088e5 +0x09d:  movl   $0x1905,-0x14(%ebp)
084088ec +0x0a4:  mov    -0x10(%ebp),%eax
084088ef +0x0a7:  add    $0x4,%eax
084088f2 +0x0aa:  movl   $0x14d0,0xc(%esp)
084088fa +0x0b2:  mov    %eax,0x8(%esp)
084088fe +0x0b6:  lea    -0x14(%ebp),%eax
08408901 +0x0b9:  mov    %eax,0x4(%esp)
08408905 +0x0bd:  lea    -0x1919(%ebp),%eax
0840890b +0x0c3:  mov    %eax,(%esp)
0840890e +0x0c6:  call   086b201f <_Z12compress_zipPcRjPKcj>  ; compress_zip(char*, unsigned int&, char const*, unsigned int)
08408913 +0x0cb:  xor    $0x1,%eax
08408916 +0x0ce:  test   %al,%al
08408918 +0x0d0:  je     08408924 <+0xdc>
0840891a +0x0d2:  mov    $0x0,%eax
0840891f +0x0d7:  jmp    08408a31 <+0x1e9>
08408924 +0x0dc:  mov    -0x10(%ebp),%eax
08408927 +0x0df:  mov    (%eax),%eax
08408929 +0x0e1:  movl   $0x0,0x4(%esp)
08408931 +0x0e9:  mov    %eax,(%esp)
08408934 +0x0ec:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
08408939 +0x0f1:  mov    %eax,%ebx
0840893b +0x0f3:  mov    -0x14(%ebp),%eax
0840893e +0x0f6:  mov    %eax,0xc(%esp)
08408942 +0x0fa:  lea    -0x1919(%ebp),%eax
08408948 +0x100:  mov    %eax,0x8(%esp)
0840894c +0x104:  movl   $0x0,0x4(%esp)
08408954 +0x10c:  mov    -0xc(%ebp),%eax
08408957 +0x10f:  mov    %eax,(%esp)
0840895a +0x112:  call   083f452a <_ZN5MySQL11blob_to_strEiPvi>  ; MySQL::blob_to_str(int, void*, int)
0840895f +0x117:  mov    %ebx,0xc(%esp)
08408963 +0x11b:  mov    %eax,0x8(%esp)
08408967 +0x11f:  movl   $"upDate charac_view set info='%s' where m_id=%s",0x4(%esp)
0840896f +0x127:  mov    -0xc(%ebp),%eax
08408972 +0x12a:  mov    %eax,(%esp)
08408975 +0x12d:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0840897a +0x132:  movl   $0x1,0x4(%esp)
08408982 +0x13a:  mov    -0xc(%ebp),%eax
08408985 +0x13d:  mov    %eax,(%esp)
08408988 +0x140:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0840898d +0x145:  xor    $0x1,%eax
08408990 +0x148:  test   %al,%al
08408992 +0x14a:  jne    084089a5 <+0x15d>
08408994 +0x14c:  mov    -0xc(%ebp),%eax
08408997 +0x14f:  mov    %eax,(%esp)
0840899a +0x152:  call   083f4310 <_ZN5MySQL19getAffectedRowCountEv>  ; MySQL::getAffectedRowCount()
0840899f +0x157:  or     %edx,%eax
084089a1 +0x159:  test   %eax,%eax
084089a3 +0x15b:  jne    084089ac <+0x164>
084089a5 +0x15d:  mov    $0x1,%eax
084089aa +0x162:  jmp    084089b1 <+0x169>
084089ac +0x164:  mov    $0x0,%eax
084089b1 +0x169:  test   %al,%al
084089b3 +0x16b:  je     08408a2c <+0x1e4>
084089b5 +0x16d:  mov    -0x14(%ebp),%eax
084089b8 +0x170:  mov    %eax,0xc(%esp)
084089bc +0x174:  lea    -0x1919(%ebp),%eax
084089c2 +0x17a:  mov    %eax,0x8(%esp)
084089c6 +0x17e:  movl   $0x0,0x4(%esp)
084089ce +0x186:  mov    -0xc(%ebp),%eax
084089d1 +0x189:  mov    %eax,(%esp)
084089d4 +0x18c:  call   083f452a <_ZN5MySQL11blob_to_strEiPvi>  ; MySQL::blob_to_str(int, void*, int)
084089d9 +0x191:  mov    %eax,%ebx
084089db +0x193:  mov    -0x10(%ebp),%eax
084089de +0x196:  mov    (%eax),%eax
084089e0 +0x198:  movl   $0x0,0x4(%esp)
084089e8 +0x1a0:  mov    %eax,(%esp)
084089eb +0x1a3:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
084089f0 +0x1a8:  mov    %ebx,0xc(%esp)
084089f4 +0x1ac:  mov    %eax,0x8(%esp)
084089f8 +0x1b0:  movl   $"inSert into charac_view(m_id,info) values(%s,'%s')",0x4(%esp)
08408a00 +0x1b8:  mov    -0xc(%ebp),%eax
08408a03 +0x1bb:  mov    %eax,(%esp)
08408a06 +0x1be:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08408a0b +0x1c3:  movl   $0x1,0x4(%esp)
08408a13 +0x1cb:  mov    -0xc(%ebp),%eax
08408a16 +0x1ce:  mov    %eax,(%esp)
08408a19 +0x1d1:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08408a1e +0x1d6:  xor    $0x1,%eax
08408a21 +0x1d9:  test   %al,%al
08408a23 +0x1db:  je     08408a2c <+0x1e4>
08408a25 +0x1dd:  mov    $0x0,%eax
08408a2a +0x1e2:  jmp    08408a31 <+0x1e9>
08408a2c +0x1e4:  mov    $0x1,%eax
08408a31 +0x1e9:  add    $0x1930,%esp
08408a37 +0x1ef:  pop    %ebx
08408a38 +0x1f0:  pop    %edi
08408a39 +0x1f1:  pop    %ebp
08408a3a +0x1f2:  ret
08408a3b +0x1f3:  nop
```

## 反编译 C

```c
// DB_UpdateCharacView::dispatch @ 0x8408848

/* DB_UpdateCharacView::dispatch(int, int, Stream*) */

undefined4 DB_UpdateCharacView::dispatch(int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  char *pcVar5;
  uint uVar6;
  bool bVar7;
  byte bVar8;
  longlong lVar9;
  Stream *in_stack_00000010;
  char local_191d;
  char local_191c [6404];
  uint local_18;
  SIG_UPDATE_CHARAC_VIEW *local_14;
  MySQL *local_10;
  
  bVar8 = 0;
  local_14 = Stream::GetOutBuffer<SIG_UPDATE_CHARAC_VIEW>(in_stack_00000010);
  local_10 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,local_14[0x14d4]);
  pcVar5 = &local_191d;
  uVar6 = 0x1905;
  bVar7 = ((uint)pcVar5 & 1) != 0;
  if (bVar7) {
    local_191d = '\0';
    pcVar5 = local_191c;
    uVar6 = 0x1904;
  }
  if (((uint)pcVar5 & 2) != 0) {
    pcVar5[0] = '\0';
    pcVar5[1] = '\0';
    pcVar5 = pcVar5 + 2;
    uVar6 = uVar6 - 2;
  }
  for (uVar4 = uVar6 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    pcVar5[0] = '\0';
    pcVar5[1] = '\0';
    pcVar5[2] = '\0';
    pcVar5[3] = '\0';
    pcVar5 = pcVar5 + ((uint)bVar8 * -2 + 1) * 4;
  }
  if ((uVar6 & 2) != 0) {
    pcVar5[0] = '\0';
    pcVar5[1] = '\0';
    pcVar5 = pcVar5 + 2;
  }
  if (!bVar7) {
    *pcVar5 = '\0';
  }
  local_18 = 0x1905;
  cVar1 = compress_zip(&local_191d,&local_18,(char *)(local_14 + 4),0x14d0);
  if (cVar1 == '\x01') {
    uVar2 = NumberToString(*(uint *)local_14,0);
    uVar3 = MySQL::blob_to_str(local_10,0,&local_191d,local_18);
    MySQL::set_query(local_10,"upDate charac_view set info=\'%s\' where m_id=%s",uVar3,uVar2);
    cVar1 = MySQL::exec(local_10,true);
    if ((cVar1 == '\x01') && (lVar9 = MySQL::getAffectedRowCount(local_10), lVar9 != 0)) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    if (bVar7) {
      uVar2 = MySQL::blob_to_str(local_10,0,&local_191d,local_18);
      uVar3 = NumberToString(*(uint *)local_14,0);
      MySQL::set_query(local_10,"inSert into charac_view(m_id,info) values(%s,\'%s\')",uVar3,uVar2);
      cVar1 = MySQL::exec(local_10,true);
      if (cVar1 != '\x01') {
        return 0;
      }
    }
    return 1;
  }
  return 0;
}
```
