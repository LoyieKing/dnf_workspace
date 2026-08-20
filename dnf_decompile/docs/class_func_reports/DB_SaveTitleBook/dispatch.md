# dispatch

`_ZN16DB_SaveTitleBook8dispatchEiiP6Stream`

`DB_SaveTitleBook::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_SaveTitleBook` | `0x0840db00` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0840db00  _ZN16DB_SaveTitleBook8dispatchEiiP6Stream
#           DB_SaveTitleBook::dispatch(int, int, Stream*)
# range [0x0840db00, 0x0840dea9]
0840db00 +0x000:  push   %ebp
0840db01 +0x001:  mov    %esp,%ebp
0840db03 +0x003:  push   %edi
0840db04 +0x004:  push   %esi
0840db05 +0x005:  push   %ebx
0840db06 +0x006:  sub    $0x813c,%esp
0840db0c +0x00c:  mov    0x14(%ebp),%eax
0840db0f +0x00f:  mov    %eax,(%esp)
0840db12 +0x012:  call   084508ce <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x34e4>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x34e4
0840db17 +0x017:  mov    %eax,-0x20(%ebp)
0840db1a +0x01a:  lea    -0x2574(%ebp),%ebx
0840db20 +0x020:  mov    $0x0,%eax
0840db25 +0x025:  mov    $0x504,%edx
0840db2a +0x02a:  mov    %ebx,%edi
0840db2c +0x02c:  mov    %edx,%ecx
0840db2e +0x02e:  rep stos %eax,%es:(%edi)
0840db30 +0x030:  movl   $0x1410,-0x24(%ebp)
0840db37 +0x037:  mov    -0x20(%ebp),%eax
0840db3a +0x03a:  movl   $0x10ae,0xc(%esp)
0840db42 +0x042:  mov    %eax,0x8(%esp)
0840db46 +0x046:  lea    -0x24(%ebp),%eax
0840db49 +0x049:  mov    %eax,0x4(%esp)
0840db4d +0x04d:  lea    -0x2574(%ebp),%eax
0840db53 +0x053:  mov    %eax,(%esp)
0840db56 +0x056:  call   086b201f <_Z12compress_zipPcRjPKcj>  ; compress_zip(char*, unsigned int&, char const*, unsigned int)
0840db5b +0x05b:  xor    $0x1,%eax
0840db5e +0x05e:  test   %al,%al
0840db60 +0x060:  je     0840db6c <+0x6c>
0840db62 +0x062:  mov    $0x0,%eax
0840db67 +0x067:  jmp    0840de9f <+0x39f>
0840db6c +0x06c:  lea    -0x810c(%ebp),%eax
0840db72 +0x072:  mov    $0x393c,%edx
0840db77 +0x077:  mov    %edx,0x8(%esp)
0840db7b +0x07b:  movl   $0x0,0x4(%esp)
0840db83 +0x083:  mov    %eax,(%esp)
0840db86 +0x086:  call   0807dcc0 <_init+0x5b8>
0840db8b +0x08b:  movl   $0x393c,-0x28(%ebp)
0840db92 +0x092:  mov    -0x20(%ebp),%eax
0840db95 +0x095:  add    $0x10ae,%eax
0840db9a +0x09a:  movl   $0x2fa8,0xc(%esp)
0840dba2 +0x0a2:  mov    %eax,0x8(%esp)
0840dba6 +0x0a6:  lea    -0x28(%ebp),%eax
0840dba9 +0x0a9:  mov    %eax,0x4(%esp)
0840dbad +0x0ad:  lea    -0x810c(%ebp),%eax
0840dbb3 +0x0b3:  mov    %eax,(%esp)
0840dbb6 +0x0b6:  call   086b201f <_Z12compress_zipPcRjPKcj>  ; compress_zip(char*, unsigned int&, char const*, unsigned int)
0840dbbb +0x0bb:  xor    $0x1,%eax
0840dbbe +0x0be:  test   %al,%al
0840dbc0 +0x0c0:  je     0840dbcc <+0xcc>
0840dbc2 +0x0c2:  mov    $0x0,%eax
0840dbc7 +0x0c7:  jmp    0840de9f <+0x39f>
0840dbcc +0x0cc:  lea    -0x47d0(%ebp),%eax
0840dbd2 +0x0d2:  mov    $0x225c,%edx
0840dbd7 +0x0d7:  mov    %edx,0x8(%esp)
0840dbdb +0x0db:  movl   $0x0,0x4(%esp)
0840dbe3 +0x0e3:  mov    %eax,(%esp)
0840dbe6 +0x0e6:  call   0807dcc0 <_init+0x5b8>
0840dbeb +0x0eb:  movl   $0x225c,-0x2c(%ebp)
0840dbf2 +0x0f2:  mov    -0x20(%ebp),%eax
0840dbf5 +0x0f5:  add    $0x4056,%eax
0840dbfa +0x0fa:  movl   $0x1c98,0xc(%esp)
0840dc02 +0x102:  mov    %eax,0x8(%esp)
0840dc06 +0x106:  lea    -0x2c(%ebp),%eax
0840dc09 +0x109:  mov    %eax,0x4(%esp)
0840dc0d +0x10d:  lea    -0x47d0(%ebp),%eax
0840dc13 +0x113:  mov    %eax,(%esp)
0840dc16 +0x116:  call   086b201f <_Z12compress_zipPcRjPKcj>  ; compress_zip(char*, unsigned int&, char const*, unsigned int)
0840dc1b +0x11b:  xor    $0x1,%eax
0840dc1e +0x11e:  test   %al,%al
0840dc20 +0x120:  je     0840dc2c <+0x12c>
0840dc22 +0x122:  mov    $0x0,%eax
0840dc27 +0x127:  jmp    0840de9f <+0x39f>
0840dc2c +0x12c:  lea    -0x1164(%ebp),%ebx
0840dc32 +0x132:  mov    $0x0,%eax
0840dc37 +0x137:  mov    $0x44d,%edx
0840dc3c +0x13c:  mov    %ebx,%edi
0840dc3e +0x13e:  mov    %edx,%ecx
0840dc40 +0x140:  rep stos %eax,%es:(%edi)
0840dc42 +0x142:  movl   $0x1134,-0x30(%ebp)
0840dc49 +0x149:  mov    -0x20(%ebp),%eax
0840dc4c +0x14c:  add    $0x5cee,%eax
0840dc51 +0x151:  movl   $0xe4c,0xc(%esp)
0840dc59 +0x159:  mov    %eax,0x8(%esp)
0840dc5d +0x15d:  lea    -0x30(%ebp),%eax
0840dc60 +0x160:  mov    %eax,0x4(%esp)
0840dc64 +0x164:  lea    -0x1164(%ebp),%eax
0840dc6a +0x16a:  mov    %eax,(%esp)
0840dc6d +0x16d:  call   086b201f <_Z12compress_zipPcRjPKcj>  ; compress_zip(char*, unsigned int&, char const*, unsigned int)
0840dc72 +0x172:  xor    $0x1,%eax
0840dc75 +0x175:  test   %al,%al
0840dc77 +0x177:  je     0840dc83 <+0x183>
0840dc79 +0x179:  mov    $0x0,%eax
0840dc7e +0x17e:  jmp    0840de9f <+0x39f>
0840dc83 +0x183:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0840dc88 +0x188:  movl   $0x0,0x8(%esp)
0840dc90 +0x190:  movl   $0x2,0x4(%esp)
0840dc98 +0x198:  mov    %eax,(%esp)
0840dc9b +0x19b:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0840dca0 +0x1a0:  mov    %eax,-0x1c(%ebp)
0840dca3 +0x1a3:  mov    -0x20(%ebp),%eax
0840dca6 +0x1a6:  mov    0x6b3a(%eax),%eax
0840dcac +0x1ac:  mov    %eax,-0x811c(%ebp)
0840dcb2 +0x1b2:  mov    -0x30(%ebp),%eax
0840dcb5 +0x1b5:  mov    %eax,0xc(%esp)
0840dcb9 +0x1b9:  lea    -0x1164(%ebp),%eax
0840dcbf +0x1bf:  mov    %eax,0x8(%esp)
0840dcc3 +0x1c3:  movl   $0x3,0x4(%esp)
0840dccb +0x1cb:  mov    -0x1c(%ebp),%eax
0840dcce +0x1ce:  mov    %eax,(%esp)
0840dcd1 +0x1d1:  call   083f452a <_ZN5MySQL11blob_to_strEiPvi>  ; MySQL::blob_to_str(int, void*, int)
0840dcd6 +0x1d6:  mov    %eax,%edi
0840dcd8 +0x1d8:  mov    -0x2c(%ebp),%eax
0840dcdb +0x1db:  mov    %eax,0xc(%esp)
0840dcdf +0x1df:  lea    -0x47d0(%ebp),%eax
0840dce5 +0x1e5:  mov    %eax,0x8(%esp)
0840dce9 +0x1e9:  movl   $0x2,0x4(%esp)
0840dcf1 +0x1f1:  mov    -0x1c(%ebp),%eax
0840dcf4 +0x1f4:  mov    %eax,(%esp)
0840dcf7 +0x1f7:  call   083f452a <_ZN5MySQL11blob_to_strEiPvi>  ; MySQL::blob_to_str(int, void*, int)
0840dcfc +0x1fc:  mov    %eax,%esi
0840dcfe +0x1fe:  mov    -0x28(%ebp),%eax
0840dd01 +0x201:  mov    %eax,0xc(%esp)
0840dd05 +0x205:  lea    -0x810c(%ebp),%eax
0840dd0b +0x20b:  mov    %eax,0x8(%esp)
0840dd0f +0x20f:  movl   $0x1,0x4(%esp)
0840dd17 +0x217:  mov    -0x1c(%ebp),%eax
0840dd1a +0x21a:  mov    %eax,(%esp)
0840dd1d +0x21d:  call   083f452a <_ZN5MySQL11blob_to_strEiPvi>  ; MySQL::blob_to_str(int, void*, int)
0840dd22 +0x222:  mov    %eax,%ebx
0840dd24 +0x224:  mov    -0x24(%ebp),%eax
0840dd27 +0x227:  mov    %eax,0xc(%esp)
0840dd2b +0x22b:  lea    -0x2574(%ebp),%eax
0840dd31 +0x231:  mov    %eax,0x8(%esp)
0840dd35 +0x235:  movl   $0x0,0x4(%esp)
0840dd3d +0x23d:  mov    -0x1c(%ebp),%eax
0840dd40 +0x240:  mov    %eax,(%esp)
0840dd43 +0x243:  call   083f452a <_ZN5MySQL11blob_to_strEiPvi>  ; MySQL::blob_to_str(int, void*, int)
0840dd48 +0x248:  mov    -0x811c(%ebp),%edx
0840dd4e +0x24e:  mov    %edx,0x18(%esp)
0840dd52 +0x252:  mov    %edi,0x14(%esp)
0840dd56 +0x256:  mov    %esi,0x10(%esp)
0840dd5a +0x25a:  mov    %ebx,0xc(%esp)
0840dd5e +0x25e:  mov    %eax,0x8(%esp)
0840dd62 +0x262:  movl   $"upDate charac_titlebook set general_section='%s', specific_section='%s', despair='%s', event='%s' where charac_no=%u",0x4(%esp)
0840dd6a +0x26a:  mov    -0x1c(%ebp),%eax
0840dd6d +0x26d:  mov    %eax,(%esp)
0840dd70 +0x270:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0840dd75 +0x275:  movl   $0x1,0x4(%esp)
0840dd7d +0x27d:  mov    -0x1c(%ebp),%eax
0840dd80 +0x280:  mov    %eax,(%esp)
0840dd83 +0x283:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0840dd88 +0x288:  xor    $0x1,%eax
0840dd8b +0x28b:  test   %al,%al
0840dd8d +0x28d:  je     0840dd99 <+0x299>
0840dd8f +0x28f:  mov    $0x0,%eax
0840dd94 +0x294:  jmp    0840de9f <+0x39f>
0840dd99 +0x299:  mov    -0x1c(%ebp),%eax
0840dd9c +0x29c:  mov    %eax,(%esp)
0840dd9f +0x29f:  call   083f4310 <_ZN5MySQL19getAffectedRowCountEv>  ; MySQL::getAffectedRowCount()
0840dda4 +0x2a4:  or     %edx,%eax
0840dda6 +0x2a6:  test   %eax,%eax
0840dda8 +0x2a8:  sete   %al
0840ddab +0x2ab:  test   %al,%al
0840ddad +0x2ad:  je     0840de9a <+0x39a>
0840ddb3 +0x2b3:  mov    -0x30(%ebp),%eax
0840ddb6 +0x2b6:  mov    %eax,0xc(%esp)
0840ddba +0x2ba:  lea    -0x1164(%ebp),%eax
0840ddc0 +0x2c0:  mov    %eax,0x8(%esp)
0840ddc4 +0x2c4:  movl   $0x3,0x4(%esp)
0840ddcc +0x2cc:  mov    -0x1c(%ebp),%eax
0840ddcf +0x2cf:  mov    %eax,(%esp)
0840ddd2 +0x2d2:  call   083f452a <_ZN5MySQL11blob_to_strEiPvi>  ; MySQL::blob_to_str(int, void*, int)
0840ddd7 +0x2d7:  mov    %eax,%edi
0840ddd9 +0x2d9:  mov    -0x2c(%ebp),%eax
0840dddc +0x2dc:  mov    %eax,0xc(%esp)
0840dde0 +0x2e0:  lea    -0x47d0(%ebp),%eax
0840dde6 +0x2e6:  mov    %eax,0x8(%esp)
0840ddea +0x2ea:  movl   $0x2,0x4(%esp)
0840ddf2 +0x2f2:  mov    -0x1c(%ebp),%eax
0840ddf5 +0x2f5:  mov    %eax,(%esp)
0840ddf8 +0x2f8:  call   083f452a <_ZN5MySQL11blob_to_strEiPvi>  ; MySQL::blob_to_str(int, void*, int)
0840ddfd +0x2fd:  mov    %eax,%esi
0840ddff +0x2ff:  mov    -0x28(%ebp),%eax
0840de02 +0x302:  mov    %eax,0xc(%esp)
0840de06 +0x306:  lea    -0x810c(%ebp),%eax
0840de0c +0x30c:  mov    %eax,0x8(%esp)
0840de10 +0x310:  movl   $0x1,0x4(%esp)
0840de18 +0x318:  mov    -0x1c(%ebp),%eax
0840de1b +0x31b:  mov    %eax,(%esp)
0840de1e +0x31e:  call   083f452a <_ZN5MySQL11blob_to_strEiPvi>  ; MySQL::blob_to_str(int, void*, int)
0840de23 +0x323:  mov    %eax,%ebx
0840de25 +0x325:  mov    -0x24(%ebp),%eax
0840de28 +0x328:  mov    %eax,0xc(%esp)
0840de2c +0x32c:  lea    -0x2574(%ebp),%eax
0840de32 +0x332:  mov    %eax,0x8(%esp)
0840de36 +0x336:  movl   $0x0,0x4(%esp)
0840de3e +0x33e:  mov    -0x1c(%ebp),%eax
0840de41 +0x341:  mov    %eax,(%esp)
0840de44 +0x344:  call   083f452a <_ZN5MySQL11blob_to_strEiPvi>  ; MySQL::blob_to_str(int, void*, int)
0840de49 +0x349:  mov    -0x20(%ebp),%edx
0840de4c +0x34c:  mov    0x6b3a(%edx),%edx
0840de52 +0x352:  mov    %edi,0x18(%esp)
0840de56 +0x356:  mov    %esi,0x14(%esp)
0840de5a +0x35a:  mov    %ebx,0x10(%esp)
0840de5e +0x35e:  mov    %eax,0xc(%esp)
0840de62 +0x362:  mov    %edx,0x8(%esp)
0840de66 +0x366:  movl   $"inSert into charac_titlebook(charac_no, general_section, specific_section, despair, event) values(%u, '%s','%s','%s','%s')",0x4(%esp)
0840de6e +0x36e:  mov    -0x1c(%ebp),%eax
0840de71 +0x371:  mov    %eax,(%esp)
0840de74 +0x374:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0840de79 +0x379:  movl   $0x1,0x4(%esp)
0840de81 +0x381:  mov    -0x1c(%ebp),%eax
0840de84 +0x384:  mov    %eax,(%esp)
0840de87 +0x387:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0840de8c +0x38c:  xor    $0x1,%eax
0840de8f +0x38f:  test   %al,%al
0840de91 +0x391:  je     0840de9a <+0x39a>
0840de93 +0x393:  mov    $0x0,%eax
0840de98 +0x398:  jmp    0840de9f <+0x39f>
0840de9a +0x39a:  mov    $0x1,%eax
0840de9f +0x39f:  add    $0x813c,%esp
0840dea5 +0x3a5:  pop    %ebx
0840dea6 +0x3a6:  pop    %esi
0840dea7 +0x3a7:  pop    %edi
0840dea8 +0x3a8:  pop    %ebp
0840dea9 +0x3a9:  ret
```

## 反编译 C

```c
// DB_SaveTitleBook::dispatch @ 0x840db00

/* DB_SaveTitleBook::dispatch(int, int, Stream*) */

undefined4 DB_SaveTitleBook::dispatch(int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  char *pcVar8;
  byte bVar9;
  longlong lVar10;
  Stream *in_stack_00000010;
  char local_8110 [14652];
  char local_47d4 [8796];
  char local_2578 [5136];
  char local_1168 [4404];
  uint local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  stTitleBook_Save *local_24;
  MySQL *local_20;
  
  bVar9 = 0;
  local_24 = Stream::GetOutBuffer<stTitleBook_Save>(in_stack_00000010);
  pcVar8 = local_2578;
  for (iVar7 = 0x504; iVar7 != 0; iVar7 = iVar7 + -1) {
    pcVar8[0] = '\0';
    pcVar8[1] = '\0';
    pcVar8[2] = '\0';
    pcVar8[3] = '\0';
    pcVar8 = pcVar8 + ((uint)bVar9 * -2 + 1) * 4;
  }
  local_28 = 0x1410;
  cVar1 = compress_zip(local_2578,&local_28,(char *)local_24,0x10ae);
  if (cVar1 == '\x01') {
    memset(local_8110,0,0x393c);
    local_2c = 0x393c;
    cVar1 = compress_zip(local_8110,&local_2c,(char *)(local_24 + 0x10ae),0x2fa8);
    if (cVar1 == '\x01') {
      memset(local_47d4,0,0x225c);
      local_30 = 0x225c;
      cVar1 = compress_zip(local_47d4,&local_30,(char *)(local_24 + 0x4056),0x1c98);
      if (cVar1 == '\x01') {
        pcVar8 = local_1168;
        for (iVar7 = 0x44d; iVar7 != 0; iVar7 = iVar7 + -1) {
          pcVar8[0] = '\0';
          pcVar8[1] = '\0';
          pcVar8[2] = '\0';
          pcVar8[3] = '\0';
          pcVar8 = pcVar8 + ((uint)bVar9 * -2 + 1) * 4;
        }
        local_34 = 0x1134;
        cVar1 = compress_zip(local_1168,&local_34,(char *)(local_24 + 0x5cee),0xe4c);
        if (cVar1 == '\x01') {
          local_20 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
          uVar2 = *(undefined4 *)(local_24 + 0x6b3a);
          uVar3 = MySQL::blob_to_str(local_20,3,local_1168,local_34);
          uVar4 = MySQL::blob_to_str(local_20,2,local_47d4,local_30);
          uVar5 = MySQL::blob_to_str(local_20,1,local_8110,local_2c);
          uVar6 = MySQL::blob_to_str(local_20,0,local_2578,local_28);
          MySQL::set_query(local_20,
                           "upDate charac_titlebook set general_section=\'%s\', specific_section=\'%s\', despair=\'%s\', event=\'%s\' where charac_no=%u"
                           ,uVar6,uVar5,uVar4,uVar3,uVar2);
          cVar1 = MySQL::exec(local_20,true);
          if (cVar1 == '\x01') {
            lVar10 = MySQL::getAffectedRowCount(local_20);
            if (lVar10 == 0) {
              uVar2 = MySQL::blob_to_str(local_20,3,local_1168,local_34);
              uVar3 = MySQL::blob_to_str(local_20,2,local_47d4,local_30);
              uVar4 = MySQL::blob_to_str(local_20,1,local_8110,local_2c);
              uVar5 = MySQL::blob_to_str(local_20,0,local_2578,local_28);
              MySQL::set_query(local_20,
                               "inSert into charac_titlebook(charac_no, general_section, specific_section, despair, event) values(%u, \'%s\',\'%s\',\'%s\',\'%s\')"
                               ,*(undefined4 *)(local_24 + 0x6b3a),uVar5,uVar4,uVar3,uVar2);
              cVar1 = MySQL::exec(local_20,true);
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
      }
      else {
        uVar2 = 0;
      }
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
