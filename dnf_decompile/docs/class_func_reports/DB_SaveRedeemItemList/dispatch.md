# dispatch

`_ZN21DB_SaveRedeemItemList8dispatchEiiP6Stream`

`DB_SaveRedeemItemList::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_SaveRedeemItemList` | `0x0840e074` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0840e074  _ZN21DB_SaveRedeemItemList8dispatchEiiP6Stream
#           DB_SaveRedeemItemList::dispatch(int, int, Stream*)
# range [0x0840e074, 0x0840e235]
0840e074 +0x000:  push   %ebp
0840e075 +0x001:  mov    %esp,%ebp
0840e077 +0x003:  push   %edi
0840e078 +0x004:  push   %ebx
0840e079 +0x005:  sub    $0x6f0,%esp
0840e07f +0x00b:  mov    0x14(%ebp),%eax
0840e082 +0x00e:  mov    %eax,(%esp)
0840e085 +0x011:  call   08450976 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x358c>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x358c
0840e08a +0x016:  mov    %eax,-0x10(%ebp)
0840e08d +0x019:  lea    -0x6db(%ebp),%edx
0840e093 +0x01f:  mov    $0x6c7,%ebx
0840e098 +0x024:  mov    $0x0,%eax
0840e09d +0x029:  mov    %edx,%ecx
0840e09f +0x02b:  and    $0x1,%ecx
0840e0a2 +0x02e:  test   %ecx,%ecx
0840e0a4 +0x030:  je     0840e0ae <+0x3a>
0840e0a6 +0x032:  mov    %al,(%edx)
0840e0a8 +0x034:  add    $0x1,%edx
0840e0ab +0x037:  sub    $0x1,%ebx
0840e0ae +0x03a:  mov    %edx,%ecx
0840e0b0 +0x03c:  and    $0x2,%ecx
0840e0b3 +0x03f:  test   %ecx,%ecx
0840e0b5 +0x041:  je     0840e0c0 <+0x4c>
0840e0b7 +0x043:  mov    %ax,(%edx)
0840e0ba +0x046:  add    $0x2,%edx
0840e0bd +0x049:  sub    $0x2,%ebx
0840e0c0 +0x04c:  mov    %ebx,%ecx
0840e0c2 +0x04e:  shr    $0x2,%ecx
0840e0c5 +0x051:  mov    %edx,%edi
0840e0c7 +0x053:  rep stos %eax,%es:(%edi)
0840e0c9 +0x055:  mov    %edi,%edx
0840e0cb +0x057:  mov    %ebx,%ecx
0840e0cd +0x059:  and    $0x2,%ecx
0840e0d0 +0x05c:  test   %ecx,%ecx
0840e0d2 +0x05e:  je     0840e0da <+0x66>
0840e0d4 +0x060:  mov    %ax,(%edx)
0840e0d7 +0x063:  add    $0x2,%edx
0840e0da +0x066:  mov    %ebx,%ecx
0840e0dc +0x068:  and    $0x1,%ecx
0840e0df +0x06b:  test   %ecx,%ecx
0840e0e1 +0x06d:  je     0840e0e8 <+0x74>
0840e0e3 +0x06f:  mov    %al,(%edx)
0840e0e5 +0x071:  add    $0x1,%edx
0840e0e8 +0x074:  movl   $0x6c7,-0x14(%ebp)
0840e0ef +0x07b:  mov    -0x10(%ebp),%eax
0840e0f2 +0x07e:  movl   $0x59c,0xc(%esp)
0840e0fa +0x086:  mov    %eax,0x8(%esp)
0840e0fe +0x08a:  lea    -0x14(%ebp),%eax
0840e101 +0x08d:  mov    %eax,0x4(%esp)
0840e105 +0x091:  lea    -0x6db(%ebp),%eax
0840e10b +0x097:  mov    %eax,(%esp)
0840e10e +0x09a:  call   086b201f <_Z12compress_zipPcRjPKcj>  ; compress_zip(char*, unsigned int&, char const*, unsigned int)
0840e113 +0x09f:  xor    $0x1,%eax
0840e116 +0x0a2:  test   %al,%al
0840e118 +0x0a4:  je     0840e124 <+0xb0>
0840e11a +0x0a6:  mov    $0x0,%eax
0840e11f +0x0ab:  jmp    0840e22c <+0x1b8>
0840e124 +0x0b0:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0840e129 +0x0b5:  movl   $0x0,0x8(%esp)
0840e131 +0x0bd:  movl   $0x3,0x4(%esp)
0840e139 +0x0c5:  mov    %eax,(%esp)
0840e13c +0x0c8:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0840e141 +0x0cd:  mov    %eax,-0xc(%ebp)
0840e144 +0x0d0:  mov    -0x10(%ebp),%eax
0840e147 +0x0d3:  mov    (%eax),%ebx
0840e149 +0x0d5:  mov    -0x14(%ebp),%eax
0840e14c +0x0d8:  mov    %eax,0xc(%esp)
0840e150 +0x0dc:  lea    -0x6db(%ebp),%eax
0840e156 +0x0e2:  mov    %eax,0x8(%esp)
0840e15a +0x0e6:  movl   $0x0,0x4(%esp)
0840e162 +0x0ee:  mov    -0xc(%ebp),%eax
0840e165 +0x0f1:  mov    %eax,(%esp)
0840e168 +0x0f4:  call   083f452a <_ZN5MySQL11blob_to_strEiPvi>  ; MySQL::blob_to_str(int, void*, int)
0840e16d +0x0f9:  mov    %ebx,0xc(%esp)
0840e171 +0x0fd:  mov    %eax,0x8(%esp)
0840e175 +0x101:  movl   $"upDate charac_inven_expand set redeem_info='%s' where charac_no=%u",0x4(%esp)
0840e17d +0x109:  mov    -0xc(%ebp),%eax
0840e180 +0x10c:  mov    %eax,(%esp)
0840e183 +0x10f:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0840e188 +0x114:  movl   $0x1,0x4(%esp)
0840e190 +0x11c:  mov    -0xc(%ebp),%eax
0840e193 +0x11f:  mov    %eax,(%esp)
0840e196 +0x122:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0840e19b +0x127:  xor    $0x1,%eax
0840e19e +0x12a:  test   %al,%al
0840e1a0 +0x12c:  je     0840e1ac <+0x138>
0840e1a2 +0x12e:  mov    $0x0,%eax
0840e1a7 +0x133:  jmp    0840e22c <+0x1b8>
0840e1ac +0x138:  mov    -0xc(%ebp),%eax
0840e1af +0x13b:  mov    %eax,(%esp)
0840e1b2 +0x13e:  call   083f4310 <_ZN5MySQL19getAffectedRowCountEv>  ; MySQL::getAffectedRowCount()
0840e1b7 +0x143:  or     %edx,%eax
0840e1b9 +0x145:  test   %eax,%eax
0840e1bb +0x147:  sete   %al
0840e1be +0x14a:  test   %al,%al
0840e1c0 +0x14c:  je     0840e227 <+0x1b3>
0840e1c2 +0x14e:  mov    -0x14(%ebp),%eax
0840e1c5 +0x151:  mov    %eax,0xc(%esp)
0840e1c9 +0x155:  lea    -0x6db(%ebp),%eax
0840e1cf +0x15b:  mov    %eax,0x8(%esp)
0840e1d3 +0x15f:  movl   $0x0,0x4(%esp)
0840e1db +0x167:  mov    -0xc(%ebp),%eax
0840e1de +0x16a:  mov    %eax,(%esp)
0840e1e1 +0x16d:  call   083f452a <_ZN5MySQL11blob_to_strEiPvi>  ; MySQL::blob_to_str(int, void*, int)
0840e1e6 +0x172:  mov    -0x10(%ebp),%edx
0840e1e9 +0x175:  mov    (%edx),%edx
0840e1eb +0x177:  mov    %eax,0xc(%esp)
0840e1ef +0x17b:  mov    %edx,0x8(%esp)
0840e1f3 +0x17f:  movl   $"inSert into charac_inven_expand(charac_no, redeem_info) values(%u, '%s')",0x4(%esp)
0840e1fb +0x187:  mov    -0xc(%ebp),%eax
0840e1fe +0x18a:  mov    %eax,(%esp)
0840e201 +0x18d:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0840e206 +0x192:  movl   $0x1,0x4(%esp)
0840e20e +0x19a:  mov    -0xc(%ebp),%eax
0840e211 +0x19d:  mov    %eax,(%esp)
0840e214 +0x1a0:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0840e219 +0x1a5:  xor    $0x1,%eax
0840e21c +0x1a8:  test   %al,%al
0840e21e +0x1aa:  je     0840e227 <+0x1b3>
0840e220 +0x1ac:  mov    $0x0,%eax
0840e225 +0x1b1:  jmp    0840e22c <+0x1b8>
0840e227 +0x1b3:  mov    $0x1,%eax
0840e22c +0x1b8:  add    $0x6f0,%esp
0840e232 +0x1be:  pop    %ebx
0840e233 +0x1bf:  pop    %edi
0840e234 +0x1c0:  pop    %ebp
0840e235 +0x1c1:  ret
```

## 反编译 C

```c
// DB_SaveRedeemItemList::dispatch @ 0x840e074

/* DB_SaveRedeemItemList::dispatch(int, int, Stream*) */

undefined4 DB_SaveRedeemItemList::dispatch(int param_1,int param_2,Stream *param_3)

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
  char local_6df;
  char local_6de [1734];
  uint local_18;
  SIG_REDEEMINFO_LIST_TO_DB *local_14;
  MySQL *local_10;
  
  bVar8 = 0;
  local_14 = Stream::GetOutBuffer<SIG_REDEEMINFO_LIST_TO_DB>(in_stack_00000010);
  pcVar5 = &local_6df;
  uVar6 = 0x6c7;
  bVar7 = ((uint)pcVar5 & 1) != 0;
  if (bVar7) {
    local_6df = '\0';
    pcVar5 = local_6de;
    uVar6 = 0x6c6;
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
  local_18 = 0x6c7;
  cVar1 = compress_zip(&local_6df,&local_18,(char *)local_14,0x59c);
  if (cVar1 == '\x01') {
    local_10 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,3,0);
    uVar2 = *(undefined4 *)local_14;
    uVar3 = MySQL::blob_to_str(local_10,0,&local_6df,local_18);
    MySQL::set_query(local_10,"upDate charac_inven_expand set redeem_info=\'%s\' where charac_no=%u"
                     ,uVar3,uVar2);
    cVar1 = MySQL::exec(local_10,true);
    if (cVar1 == '\x01') {
      lVar9 = MySQL::getAffectedRowCount(local_10);
      if (lVar9 == 0) {
        uVar2 = MySQL::blob_to_str(local_10,0,&local_6df,local_18);
        MySQL::set_query(local_10,
                         "inSert into charac_inven_expand(charac_no, redeem_info) values(%u, \'%s\')"
                         ,*(undefined4 *)local_14,uVar2);
        cVar1 = MySQL::exec(local_10,true);
        if (cVar1 != '\x01') {
          return 0;
        }
      }
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
