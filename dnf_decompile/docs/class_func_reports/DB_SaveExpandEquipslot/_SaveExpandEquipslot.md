# _SaveExpandEquipslot

`_ZN22DB_SaveExpandEquipslot20_SaveExpandEquipslotEP25SIG_SAVE_EXPAND_EQUIPSLOT`

`DB_SaveExpandEquipslot::_SaveExpandEquipslot(SIG_SAVE_EXPAND_EQUIPSLOT*)`

| 类 | 地址 |
|---|---|
| `DB_SaveExpandEquipslot` | `0x0843ff48` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0843ff48  _ZN22DB_SaveExpandEquipslot20_SaveExpandEquipslotEP25SIG_SAVE_EXPAND_EQUIPSLOT
#           DB_SaveExpandEquipslot::_SaveExpandEquipslot(SIG_SAVE_EXPAND_EQUIPSLOT*)
# range [0x0843ff48, 0x084400b7]
0843ff48 +0x000:  push   %ebp
0843ff49 +0x001:  mov    %esp,%ebp
0843ff4b +0x003:  push   %edi
0843ff4c +0x004:  push   %ebx
0843ff4d +0x005:  sub    $0xa80,%esp
0843ff53 +0x00b:  lea    -0xa6c(%ebp),%ebx
0843ff59 +0x011:  mov    $0x0,%eax
0843ff5e +0x016:  mov    $0x297,%edx
0843ff63 +0x01b:  mov    %ebx,%edi
0843ff65 +0x01d:  mov    %edx,%ecx
0843ff67 +0x01f:  rep stos %eax,%es:(%edi)
0843ff69 +0x021:  movl   $0xa5c,-0x10(%ebp)
0843ff70 +0x028:  mov    0xc(%ebp),%eax
0843ff73 +0x02b:  movl   $0x898,0xc(%esp)
0843ff7b +0x033:  mov    %eax,0x8(%esp)
0843ff7f +0x037:  lea    -0x10(%ebp),%eax
0843ff82 +0x03a:  mov    %eax,0x4(%esp)
0843ff86 +0x03e:  lea    -0xa6c(%ebp),%eax
0843ff8c +0x044:  mov    %eax,(%esp)
0843ff8f +0x047:  call   086b201f <_Z12compress_zipPcRjPKcj>  ; compress_zip(char*, unsigned int&, char const*, unsigned int)
0843ff94 +0x04c:  xor    $0x1,%eax
0843ff97 +0x04f:  test   %al,%al
0843ff99 +0x051:  je     0843ffa5 <+0x5d>
0843ff9b +0x053:  mov    $0x0,%eax
0843ffa0 +0x058:  jmp    084400ad <+0x165>
0843ffa5 +0x05d:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0843ffaa +0x062:  movl   $0x0,0x8(%esp)
0843ffb2 +0x06a:  movl   $0x3,0x4(%esp)
0843ffba +0x072:  mov    %eax,(%esp)
0843ffbd +0x075:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0843ffc2 +0x07a:  mov    %eax,-0xc(%ebp)
0843ffc5 +0x07d:  mov    0xc(%ebp),%eax
0843ffc8 +0x080:  mov    (%eax),%ebx
0843ffca +0x082:  mov    -0x10(%ebp),%eax
0843ffcd +0x085:  mov    %eax,0xc(%esp)
0843ffd1 +0x089:  lea    -0xa6c(%ebp),%eax
0843ffd7 +0x08f:  mov    %eax,0x8(%esp)
0843ffdb +0x093:  movl   $0x0,0x4(%esp)
0843ffe3 +0x09b:  mov    -0xc(%ebp),%eax
0843ffe6 +0x09e:  mov    %eax,(%esp)
0843ffe9 +0x0a1:  call   083f452a <_ZN5MySQL11blob_to_strEiPvi>  ; MySQL::blob_to_str(int, void*, int)
0843ffee +0x0a6:  mov    %ebx,0xc(%esp)
0843fff2 +0x0aa:  mov    %eax,0x8(%esp)
0843fff6 +0x0ae:  movl   $"upDate charac_inven_expand set expand_equipslot='%s' where charac_no=%u",0x4(%esp)
0843fffe +0x0b6:  mov    -0xc(%ebp),%eax
08440001 +0x0b9:  mov    %eax,(%esp)
08440004 +0x0bc:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08440009 +0x0c1:  movl   $0x1,0x4(%esp)
08440011 +0x0c9:  mov    -0xc(%ebp),%eax
08440014 +0x0cc:  mov    %eax,(%esp)
08440017 +0x0cf:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0844001c +0x0d4:  xor    $0x1,%eax
0844001f +0x0d7:  test   %al,%al
08440021 +0x0d9:  je     0844002d <+0xe5>
08440023 +0x0db:  mov    $0x0,%eax
08440028 +0x0e0:  jmp    084400ad <+0x165>
0844002d +0x0e5:  mov    -0xc(%ebp),%eax
08440030 +0x0e8:  mov    %eax,(%esp)
08440033 +0x0eb:  call   083f4310 <_ZN5MySQL19getAffectedRowCountEv>  ; MySQL::getAffectedRowCount()
08440038 +0x0f0:  or     %edx,%eax
0844003a +0x0f2:  test   %eax,%eax
0844003c +0x0f4:  sete   %al
0844003f +0x0f7:  test   %al,%al
08440041 +0x0f9:  je     084400a8 <+0x160>
08440043 +0x0fb:  mov    -0x10(%ebp),%eax
08440046 +0x0fe:  mov    %eax,0xc(%esp)
0844004a +0x102:  lea    -0xa6c(%ebp),%eax
08440050 +0x108:  mov    %eax,0x8(%esp)
08440054 +0x10c:  movl   $0x0,0x4(%esp)
0844005c +0x114:  mov    -0xc(%ebp),%eax
0844005f +0x117:  mov    %eax,(%esp)
08440062 +0x11a:  call   083f452a <_ZN5MySQL11blob_to_strEiPvi>  ; MySQL::blob_to_str(int, void*, int)
08440067 +0x11f:  mov    0xc(%ebp),%edx
0844006a +0x122:  mov    (%edx),%edx
0844006c +0x124:  mov    %eax,0xc(%esp)
08440070 +0x128:  mov    %edx,0x8(%esp)
08440074 +0x12c:  movl   $"inSert into charac_inven_expand(charac_no, expand_equipslot) values(%u, '%s')",0x4(%esp)
0844007c +0x134:  mov    -0xc(%ebp),%eax
0844007f +0x137:  mov    %eax,(%esp)
08440082 +0x13a:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08440087 +0x13f:  movl   $0x1,0x4(%esp)
0844008f +0x147:  mov    -0xc(%ebp),%eax
08440092 +0x14a:  mov    %eax,(%esp)
08440095 +0x14d:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0844009a +0x152:  xor    $0x1,%eax
0844009d +0x155:  test   %al,%al
0844009f +0x157:  je     084400a8 <+0x160>
084400a1 +0x159:  mov    $0x0,%eax
084400a6 +0x15e:  jmp    084400ad <+0x165>
084400a8 +0x160:  mov    $0x1,%eax
084400ad +0x165:  add    $0xa80,%esp
084400b3 +0x16b:  pop    %ebx
084400b4 +0x16c:  pop    %edi
084400b5 +0x16d:  pop    %ebp
084400b6 +0x16e:  ret
084400b7 +0x16f:  nop
```

## 反编译 C

```c
// DB_SaveExpandEquipslot::_SaveExpandEquipslot @ 0x843ff48

/* DB_SaveExpandEquipslot::_SaveExpandEquipslot(SIG_SAVE_EXPAND_EQUIPSLOT*) */

undefined4 __thiscall
DB_SaveExpandEquipslot::_SaveExpandEquipslot
          (DB_SaveExpandEquipslot *this,SIG_SAVE_EXPAND_EQUIPSLOT *param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  longlong lVar6;
  char local_a70 [2652];
  uint local_14;
  MySQL *local_10;
  
  pcVar5 = local_a70;
  for (iVar4 = 0x297; iVar4 != 0; iVar4 = iVar4 + -1) {
    pcVar5[0] = '\0';
    pcVar5[1] = '\0';
    pcVar5[2] = '\0';
    pcVar5[3] = '\0';
    pcVar5 = pcVar5 + 4;
  }
  local_14 = 0xa5c;
  cVar1 = compress_zip(local_a70,&local_14,(char *)param_1,0x898);
  if (cVar1 == '\x01') {
    local_10 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,3,0);
    uVar2 = *(undefined4 *)param_1;
    uVar3 = MySQL::blob_to_str(local_10,0,local_a70,local_14);
    MySQL::set_query(local_10,
                     "upDate charac_inven_expand set expand_equipslot=\'%s\' where charac_no=%u",
                     uVar3,uVar2);
    cVar1 = MySQL::exec(local_10,true);
    if (cVar1 == '\x01') {
      lVar6 = MySQL::getAffectedRowCount(local_10);
      if (lVar6 == 0) {
        uVar2 = MySQL::blob_to_str(local_10,0,local_a70,local_14);
        MySQL::set_query(local_10,
                         "inSert into charac_inven_expand(charac_no, expand_equipslot) values(%u, \'%s\')"
                         ,*(undefined4 *)param_1,uVar2);
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
