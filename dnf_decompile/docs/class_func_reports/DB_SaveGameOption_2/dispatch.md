# dispatch

`_ZN19DB_SaveGameOption_28dispatchEiiP6Stream`

`DB_SaveGameOption_2::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_SaveGameOption_2` | `0x0842fd42` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0842fd42  _ZN19DB_SaveGameOption_28dispatchEiiP6Stream
#           DB_SaveGameOption_2::dispatch(int, int, Stream*)
# range [0x0842fd42, 0x0842ff4d]
0842fd42 +0x000:  push   %ebp
0842fd43 +0x001:  mov    %esp,%ebp
0842fd45 +0x003:  push   %edi
0842fd46 +0x004:  push   %esi
0842fd47 +0x005:  push   %ebx
0842fd48 +0x006:  sub    $0x12c,%esp
0842fd4e +0x00c:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0842fd53 +0x011:  movl   $0x0,0x8(%esp)
0842fd5b +0x019:  movl   $0xb,0x4(%esp)
0842fd63 +0x021:  mov    %eax,(%esp)
0842fd66 +0x024:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0842fd6b +0x029:  mov    %eax,-0x20(%ebp)
0842fd6e +0x02c:  mov    0x14(%ebp),%eax
0842fd71 +0x02f:  mov    %eax,(%esp)
0842fd74 +0x032:  call   08452bc2 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x57d8>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x57d8
0842fd79 +0x037:  mov    %eax,-0x1c(%ebp)
0842fd7c +0x03a:  lea    -0x111(%ebp),%edx
0842fd82 +0x040:  mov    $0xed,%ebx
0842fd87 +0x045:  mov    $0x0,%eax
0842fd8c +0x04a:  mov    %edx,%ecx
0842fd8e +0x04c:  and    $0x1,%ecx
0842fd91 +0x04f:  test   %ecx,%ecx
0842fd93 +0x051:  je     0842fd9d <+0x5b>
0842fd95 +0x053:  mov    %al,(%edx)
0842fd97 +0x055:  add    $0x1,%edx
0842fd9a +0x058:  sub    $0x1,%ebx
0842fd9d +0x05b:  mov    %edx,%ecx
0842fd9f +0x05d:  and    $0x2,%ecx
0842fda2 +0x060:  test   %ecx,%ecx
0842fda4 +0x062:  je     0842fdaf <+0x6d>
0842fda6 +0x064:  mov    %ax,(%edx)
0842fda9 +0x067:  add    $0x2,%edx
0842fdac +0x06a:  sub    $0x2,%ebx
0842fdaf +0x06d:  mov    %ebx,%ecx
0842fdb1 +0x06f:  shr    $0x2,%ecx
0842fdb4 +0x072:  mov    %edx,%edi
0842fdb6 +0x074:  rep stos %eax,%es:(%edi)
0842fdb8 +0x076:  mov    %edi,%edx
0842fdba +0x078:  mov    %ebx,%ecx
0842fdbc +0x07a:  and    $0x2,%ecx
0842fdbf +0x07d:  test   %ecx,%ecx
0842fdc1 +0x07f:  je     0842fdc9 <+0x87>
0842fdc3 +0x081:  mov    %ax,(%edx)
0842fdc6 +0x084:  add    $0x2,%edx
0842fdc9 +0x087:  mov    %ebx,%ecx
0842fdcb +0x089:  and    $0x1,%ecx
0842fdce +0x08c:  test   %ecx,%ecx
0842fdd0 +0x08e:  je     0842fdd7 <+0x95>
0842fdd2 +0x090:  mov    %al,(%edx)
0842fdd4 +0x092:  add    $0x1,%edx
0842fdd7 +0x095:  movl   $0xed,-0x24(%ebp)
0842fdde +0x09c:  mov    -0x1c(%ebp),%eax
0842fde1 +0x09f:  add    $0x5,%eax
0842fde4 +0x0a2:  movl   $0xbc,0xc(%esp)
0842fdec +0x0aa:  mov    %eax,0x8(%esp)
0842fdf0 +0x0ae:  lea    -0x24(%ebp),%eax
0842fdf3 +0x0b1:  mov    %eax,0x4(%esp)
0842fdf7 +0x0b5:  lea    -0x111(%ebp),%eax
0842fdfd +0x0bb:  mov    %eax,(%esp)
0842fe00 +0x0be:  call   086b201f <_Z12compress_zipPcRjPKcj>  ; compress_zip(char*, unsigned int&, char const*, unsigned int)
0842fe05 +0x0c3:  xor    $0x1,%eax
0842fe08 +0x0c6:  test   %al,%al
0842fe0a +0x0c8:  je     0842fe16 <+0xd4>
0842fe0c +0x0ca:  mov    $0x0,%eax
0842fe11 +0x0cf:  jmp    0842ff43 <+0x201>
0842fe16 +0x0d4:  mov    -0x1c(%ebp),%eax
0842fe19 +0x0d7:  movzbl 0x4(%eax),%eax
0842fe1d +0x0db:  movzbl %al,%esi
0842fe20 +0x0de:  mov    -0x1c(%ebp),%eax
0842fe23 +0x0e1:  mov    (%eax),%eax
0842fe25 +0x0e3:  movl   $0x0,0x4(%esp)
0842fe2d +0x0eb:  mov    %eax,(%esp)
0842fe30 +0x0ee:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
0842fe35 +0x0f3:  mov    %eax,%ebx
0842fe37 +0x0f5:  mov    -0x24(%ebp),%eax
0842fe3a +0x0f8:  mov    %eax,0xc(%esp)
0842fe3e +0x0fc:  lea    -0x111(%ebp),%eax
0842fe44 +0x102:  mov    %eax,0x8(%esp)
0842fe48 +0x106:  movl   $0x0,0x4(%esp)
0842fe50 +0x10e:  mov    -0x20(%ebp),%eax
0842fe53 +0x111:  mov    %eax,(%esp)
0842fe56 +0x114:  call   083f452a <_ZN5MySQL11blob_to_strEiPvi>  ; MySQL::blob_to_str(int, void*, int)
0842fe5b +0x119:  mov    %esi,0x10(%esp)
0842fe5f +0x11d:  mov    %ebx,0xc(%esp)
0842fe63 +0x121:  mov    %eax,0x8(%esp)
0842fe67 +0x125:  movl   $"upDate member_key_option set key_option='%s' where m_id=%s and key_type=%d",0x4(%esp)
0842fe6f +0x12d:  mov    -0x20(%ebp),%eax
0842fe72 +0x130:  mov    %eax,(%esp)
0842fe75 +0x133:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0842fe7a +0x138:  movl   $0x1,0x4(%esp)
0842fe82 +0x140:  mov    -0x20(%ebp),%eax
0842fe85 +0x143:  mov    %eax,(%esp)
0842fe88 +0x146:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0842fe8d +0x14b:  xor    $0x1,%eax
0842fe90 +0x14e:  test   %al,%al
0842fe92 +0x150:  jne    0842fea5 <+0x163>
0842fe94 +0x152:  mov    -0x20(%ebp),%eax
0842fe97 +0x155:  mov    %eax,(%esp)
0842fe9a +0x158:  call   083f4310 <_ZN5MySQL19getAffectedRowCountEv>  ; MySQL::getAffectedRowCount()
0842fe9f +0x15d:  or     %edx,%eax
0842fea1 +0x15f:  test   %eax,%eax
0842fea3 +0x161:  jne    0842feac <+0x16a>
0842fea5 +0x163:  mov    $0x1,%eax
0842feaa +0x168:  jmp    0842feb1 <+0x16f>
0842feac +0x16a:  mov    $0x0,%eax
0842feb1 +0x16f:  test   %al,%al
0842feb3 +0x171:  je     0842ff3e <+0x1fc>
0842feb9 +0x177:  mov    -0x24(%ebp),%eax
0842febc +0x17a:  mov    %eax,0xc(%esp)
0842fec0 +0x17e:  lea    -0x111(%ebp),%eax
0842fec6 +0x184:  mov    %eax,0x8(%esp)
0842feca +0x188:  movl   $0x0,0x4(%esp)
0842fed2 +0x190:  mov    -0x20(%ebp),%eax
0842fed5 +0x193:  mov    %eax,(%esp)
0842fed8 +0x196:  call   083f452a <_ZN5MySQL11blob_to_strEiPvi>  ; MySQL::blob_to_str(int, void*, int)
0842fedd +0x19b:  mov    %eax,%ebx
0842fedf +0x19d:  mov    -0x1c(%ebp),%eax
0842fee2 +0x1a0:  movzbl 0x4(%eax),%eax
0842fee6 +0x1a4:  movzbl %al,%esi
0842fee9 +0x1a7:  mov    -0x1c(%ebp),%eax
0842feec +0x1aa:  mov    (%eax),%eax
0842feee +0x1ac:  movl   $0x0,0x4(%esp)
0842fef6 +0x1b4:  mov    %eax,(%esp)
0842fef9 +0x1b7:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
0842fefe +0x1bc:  mov    %ebx,0x10(%esp)
0842ff02 +0x1c0:  mov    %esi,0xc(%esp)
0842ff06 +0x1c4:  mov    %eax,0x8(%esp)
0842ff0a +0x1c8:  movl   $"inSert into member_key_option(m_id, key_type, key_option) values(%s,%d,'%s')",0x4(%esp)
0842ff12 +0x1d0:  mov    -0x20(%ebp),%eax
0842ff15 +0x1d3:  mov    %eax,(%esp)
0842ff18 +0x1d6:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0842ff1d +0x1db:  movl   $0x1,0x4(%esp)
0842ff25 +0x1e3:  mov    -0x20(%ebp),%eax
0842ff28 +0x1e6:  mov    %eax,(%esp)
0842ff2b +0x1e9:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0842ff30 +0x1ee:  xor    $0x1,%eax
0842ff33 +0x1f1:  test   %al,%al
0842ff35 +0x1f3:  je     0842ff3e <+0x1fc>
0842ff37 +0x1f5:  mov    $0x0,%eax
0842ff3c +0x1fa:  jmp    0842ff43 <+0x201>
0842ff3e +0x1fc:  mov    $0x1,%eax
0842ff43 +0x201:  add    $0x12c,%esp
0842ff49 +0x207:  pop    %ebx
0842ff4a +0x208:  pop    %esi
0842ff4b +0x209:  pop    %edi
0842ff4c +0x20a:  pop    %ebp
0842ff4d +0x20b:  ret
```

## 反编译 C

```c
// DB_SaveGameOption_2::dispatch @ 0x842fd42

/* DB_SaveGameOption_2::dispatch(int, int, Stream*) */

undefined4 DB_SaveGameOption_2::dispatch(int param_1,int param_2,Stream *param_3)

{
  SIG_LOAD_CHARAC_HOTKEY_OPTION SVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  char *pcVar6;
  uint uVar7;
  bool bVar8;
  byte bVar9;
  longlong lVar10;
  Stream *in_stack_00000010;
  char local_115;
  char local_114 [236];
  uint local_28;
  MySQL *local_24;
  SIG_LOAD_CHARAC_HOTKEY_OPTION *local_20;
  
  bVar9 = 0;
  local_24 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,0xb,0);
  local_20 = Stream::GetOutBuffer<SIG_LOAD_CHARAC_HOTKEY_OPTION>(in_stack_00000010);
  pcVar6 = &local_115;
  uVar7 = 0xed;
  bVar8 = ((uint)pcVar6 & 1) != 0;
  if (bVar8) {
    local_115 = '\0';
    pcVar6 = local_114;
    uVar7 = 0xec;
  }
  if (((uint)pcVar6 & 2) != 0) {
    pcVar6[0] = '\0';
    pcVar6[1] = '\0';
    pcVar6 = pcVar6 + 2;
    uVar7 = uVar7 - 2;
  }
  for (uVar5 = uVar7 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    pcVar6[0] = '\0';
    pcVar6[1] = '\0';
    pcVar6[2] = '\0';
    pcVar6[3] = '\0';
    pcVar6 = pcVar6 + ((uint)bVar9 * -2 + 1) * 4;
  }
  if ((uVar7 & 2) != 0) {
    pcVar6[0] = '\0';
    pcVar6[1] = '\0';
    pcVar6 = pcVar6 + 2;
  }
  if (!bVar8) {
    *pcVar6 = '\0';
  }
  local_28 = 0xed;
  cVar2 = compress_zip(&local_115,&local_28,(char *)(local_20 + 5),0xbc);
  if (cVar2 == '\x01') {
    SVar1 = local_20[4];
    uVar3 = NumberToString(*(uint *)local_20,0);
    uVar4 = MySQL::blob_to_str(local_24,0,&local_115,local_28);
    MySQL::set_query(local_24,
                     "upDate member_key_option set key_option=\'%s\' where m_id=%s and key_type=%d",
                     uVar4,uVar3,(uint)(byte)SVar1);
    cVar2 = MySQL::exec(local_24,true);
    if ((cVar2 == '\x01') && (lVar10 = MySQL::getAffectedRowCount(local_24), lVar10 != 0)) {
      bVar8 = false;
    }
    else {
      bVar8 = true;
    }
    if (bVar8) {
      uVar3 = MySQL::blob_to_str(local_24,0,&local_115,local_28);
      SVar1 = local_20[4];
      uVar4 = NumberToString(*(uint *)local_20,0);
      MySQL::set_query(local_24,
                       "inSert into member_key_option(m_id, key_type, key_option) values(%s,%d,\'%s\')"
                       ,uVar4,(uint)(byte)SVar1,uVar3);
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
