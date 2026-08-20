# _getCharacInvenExpand

`_ZNK16DB_LoadInventory21_getCharacInvenExpandEP18SIG_LOAD_INVENTORY`

`DB_LoadInventory::_getCharacInvenExpand(SIG_LOAD_INVENTORY*) const`

| 类 | 地址 |
|---|---|
| `DB_LoadInventory` | `0x0840ad2a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0840ad2a  _ZNK16DB_LoadInventory21_getCharacInvenExpandEP18SIG_LOAD_INVENTORY
#           DB_LoadInventory::_getCharacInvenExpand(SIG_LOAD_INVENTORY*) const
# range [0x0840ad2a, 0x0840b0d7]
0840ad2a +0x000:  push   %ebp
0840ad2b +0x001:  mov    %esp,%ebp
0840ad2d +0x003:  push   %edi
0840ad2e +0x004:  push   %ebx
0840ad2f +0x005:  sub    $0x4820,%esp
0840ad35 +0x00b:  lea    -0x4815(%ebp),%eax
0840ad3b +0x011:  mov    $0x2b82,%edx
0840ad40 +0x016:  mov    %edx,0x8(%esp)
0840ad44 +0x01a:  movl   $0x0,0x4(%esp)
0840ad4c +0x022:  mov    %eax,(%esp)
0840ad4f +0x025:  call   0807dcc0 <_init+0x5b8>
0840ad54 +0x02a:  movl   $0x2b82,-0x20(%ebp)
0840ad5b +0x031:  mov    -0x20(%ebp),%eax
0840ad5e +0x034:  mov    %eax,-0x1c(%ebp)
0840ad61 +0x037:  lea    -0x1c93(%ebp),%edx
0840ad67 +0x03d:  mov    $0x120f,%ebx
0840ad6c +0x042:  mov    $0x0,%eax
0840ad71 +0x047:  mov    %edx,%ecx
0840ad73 +0x049:  and    $0x1,%ecx
0840ad76 +0x04c:  test   %ecx,%ecx
0840ad78 +0x04e:  je     0840ad82 <+0x58>
0840ad7a +0x050:  mov    %al,(%edx)
0840ad7c +0x052:  add    $0x1,%edx
0840ad7f +0x055:  sub    $0x1,%ebx
0840ad82 +0x058:  mov    %edx,%ecx
0840ad84 +0x05a:  and    $0x2,%ecx
0840ad87 +0x05d:  test   %ecx,%ecx
0840ad89 +0x05f:  je     0840ad94 <+0x6a>
0840ad8b +0x061:  mov    %ax,(%edx)
0840ad8e +0x064:  add    $0x2,%edx
0840ad91 +0x067:  sub    $0x2,%ebx
0840ad94 +0x06a:  mov    %ebx,%ecx
0840ad96 +0x06c:  shr    $0x2,%ecx
0840ad99 +0x06f:  mov    %edx,%edi
0840ad9b +0x071:  rep stos %eax,%es:(%edi)
0840ad9d +0x073:  mov    %edi,%edx
0840ad9f +0x075:  mov    %ebx,%ecx
0840ada1 +0x077:  and    $0x2,%ecx
0840ada4 +0x07a:  test   %ecx,%ecx
0840ada6 +0x07c:  je     0840adae <+0x84>
0840ada8 +0x07e:  mov    %ax,(%edx)
0840adab +0x081:  add    $0x2,%edx
0840adae +0x084:  mov    %ebx,%ecx
0840adb0 +0x086:  and    $0x1,%ecx
0840adb3 +0x089:  test   %ecx,%ecx
0840adb5 +0x08b:  je     0840adbc <+0x92>
0840adb7 +0x08d:  mov    %al,(%edx)
0840adb9 +0x08f:  add    $0x1,%edx
0840adbc +0x092:  movl   $0x120f,-0x24(%ebp)
0840adc3 +0x099:  mov    -0x24(%ebp),%eax
0840adc6 +0x09c:  mov    %eax,-0x18(%ebp)
0840adc9 +0x09f:  lea    -0xa84(%ebp),%ebx
0840adcf +0x0a5:  mov    $0x0,%eax
0840add4 +0x0aa:  mov    $0x297,%edx
0840add9 +0x0af:  mov    %ebx,%edi
0840addb +0x0b1:  mov    %edx,%ecx
0840addd +0x0b3:  rep stos %eax,%es:(%edi)
0840addf +0x0b5:  movl   $0xa5c,-0x28(%ebp)
0840ade6 +0x0bc:  mov    -0x28(%ebp),%eax
0840ade9 +0x0bf:  mov    %eax,-0x14(%ebp)
0840adec +0x0c2:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0840adf1 +0x0c7:  movl   $0x0,0x8(%esp)
0840adf9 +0x0cf:  movl   $0x3,0x4(%esp)
0840ae01 +0x0d7:  mov    %eax,(%esp)
0840ae04 +0x0da:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0840ae09 +0x0df:  mov    %eax,-0x10(%ebp)
0840ae0c +0x0e2:  mov    0xc(%ebp),%eax
0840ae0f +0x0e5:  mov    0x4(%eax),%eax
0840ae12 +0x0e8:  mov    %eax,0x8(%esp)
0840ae16 +0x0ec:  movl   $"seLect cargo_capacity,cargo,jewel,expand_equipslot from charac_inven_expand where charac_no=%u",0x4(%esp)
0840ae1e +0x0f4:  mov    -0x10(%ebp),%eax
0840ae21 +0x0f7:  mov    %eax,(%esp)
0840ae24 +0x0fa:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0840ae29 +0x0ff:  movl   $0x1,0x4(%esp)
0840ae31 +0x107:  mov    -0x10(%ebp),%eax
0840ae34 +0x10a:  mov    %eax,(%esp)
0840ae37 +0x10d:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0840ae3c +0x112:  xor    $0x1,%eax
0840ae3f +0x115:  test   %al,%al
0840ae41 +0x117:  jne    0840ae55 <+0x12b>
0840ae43 +0x119:  mov    -0x10(%ebp),%eax
0840ae46 +0x11c:  mov    %eax,(%esp)
0840ae49 +0x11f:  call   083f44bc <_ZN5MySQL5fetchEv>  ; MySQL::fetch()
0840ae4e +0x124:  xor    $0x1,%eax
0840ae51 +0x127:  test   %al,%al
0840ae53 +0x129:  je     0840ae5c <+0x132>
0840ae55 +0x12b:  mov    $0x1,%eax
0840ae5a +0x130:  jmp    0840ae61 <+0x137>
0840ae5c +0x132:  mov    $0x0,%eax
0840ae61 +0x137:  test   %al,%al
0840ae63 +0x139:  je     0840ae6f <+0x145>
0840ae65 +0x13b:  mov    $0x243b,%eax
0840ae6a +0x140:  jmp    0840b0ce <+0x3a4>
0840ae6f +0x145:  movl   $0x0,-0xc(%ebp)
0840ae76 +0x14c:  mov    0xc(%ebp),%eax
0840ae79 +0x14f:  lea    0xa8e0(%eax),%edx
0840ae7f +0x155:  mov    -0xc(%ebp),%eax
0840ae82 +0x158:  addl   $0x1,-0xc(%ebp)
0840ae86 +0x15c:  mov    %edx,0x8(%esp)
0840ae8a +0x160:  mov    %eax,0x4(%esp)
0840ae8e +0x164:  mov    -0x10(%ebp),%eax
0840ae91 +0x167:  mov    %eax,(%esp)
0840ae94 +0x16a:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
0840ae99 +0x16f:  xor    $0x1,%eax
0840ae9c +0x172:  test   %al,%al
0840ae9e +0x174:  je     0840aeaa <+0x180>
0840aea0 +0x176:  mov    $0x243f,%eax
0840aea5 +0x17b:  jmp    0840b0ce <+0x3a4>
0840aeaa +0x180:  mov    -0xc(%ebp),%eax
0840aead +0x183:  mov    %eax,0x4(%esp)
0840aeb1 +0x187:  mov    -0x10(%ebp),%eax
0840aeb4 +0x18a:  mov    %eax,(%esp)
0840aeb7 +0x18d:  call   081253de <_GLOBAL__I__ZN8APSystem21g_szZipAP_CLEAR_STATEE+0x141>  ; global constructors keyed to APSystem::g_szZipAP_CLEAR_STATE+0x141
0840aebc +0x192:  mov    %eax,-0x1c(%ebp)
0840aebf +0x195:  mov    -0x20(%ebp),%eax
0840aec2 +0x198:  mov    %eax,%edx
0840aec4 +0x19a:  mov    -0xc(%ebp),%eax
0840aec7 +0x19d:  addl   $0x1,-0xc(%ebp)
0840aecb +0x1a1:  mov    %edx,0xc(%esp)
0840aecf +0x1a5:  lea    -0x4815(%ebp),%edx
0840aed5 +0x1ab:  mov    %edx,0x8(%esp)
0840aed9 +0x1af:  mov    %eax,0x4(%esp)
0840aedd +0x1b3:  mov    -0x10(%ebp),%eax
0840aee0 +0x1b6:  mov    %eax,(%esp)
0840aee3 +0x1b9:  call   0812531a <_GLOBAL__I__ZN8APSystem21g_szZipAP_CLEAR_STATEE+0x7d>  ; global constructors keyed to APSystem::g_szZipAP_CLEAR_STATE+0x7d
0840aee8 +0x1be:  xor    $0x1,%eax
0840aeeb +0x1c1:  test   %al,%al
0840aeed +0x1c3:  je     0840aef9 <+0x1cf>
0840aeef +0x1c5:  mov    $0x2443,%eax
0840aef4 +0x1ca:  jmp    0840b0ce <+0x3a4>
0840aef9 +0x1cf:  mov    -0xc(%ebp),%eax
0840aefc +0x1d2:  mov    %eax,0x4(%esp)
0840af00 +0x1d6:  mov    -0x10(%ebp),%eax
0840af03 +0x1d9:  mov    %eax,(%esp)
0840af06 +0x1dc:  call   081253de <_GLOBAL__I__ZN8APSystem21g_szZipAP_CLEAR_STATEE+0x141>  ; global constructors keyed to APSystem::g_szZipAP_CLEAR_STATE+0x141
0840af0b +0x1e1:  mov    %eax,-0x18(%ebp)
0840af0e +0x1e4:  mov    -0x24(%ebp),%eax
0840af11 +0x1e7:  mov    %eax,%edx
0840af13 +0x1e9:  mov    -0xc(%ebp),%eax
0840af16 +0x1ec:  addl   $0x1,-0xc(%ebp)
0840af1a +0x1f0:  mov    %edx,0xc(%esp)
0840af1e +0x1f4:  lea    -0x1c93(%ebp),%edx
0840af24 +0x1fa:  mov    %edx,0x8(%esp)
0840af28 +0x1fe:  mov    %eax,0x4(%esp)
0840af2c +0x202:  mov    -0x10(%ebp),%eax
0840af2f +0x205:  mov    %eax,(%esp)
0840af32 +0x208:  call   0812531a <_GLOBAL__I__ZN8APSystem21g_szZipAP_CLEAR_STATEE+0x7d>  ; global constructors keyed to APSystem::g_szZipAP_CLEAR_STATE+0x7d
0840af37 +0x20d:  xor    $0x1,%eax
0840af3a +0x210:  test   %al,%al
0840af3c +0x212:  je     0840af48 <+0x21e>
0840af3e +0x214:  mov    $0x2448,%eax
0840af43 +0x219:  jmp    0840b0ce <+0x3a4>
0840af48 +0x21e:  mov    -0xc(%ebp),%eax
0840af4b +0x221:  mov    %eax,0x4(%esp)
0840af4f +0x225:  mov    -0x10(%ebp),%eax
0840af52 +0x228:  mov    %eax,(%esp)
0840af55 +0x22b:  call   081253de <_GLOBAL__I__ZN8APSystem21g_szZipAP_CLEAR_STATEE+0x141>  ; global constructors keyed to APSystem::g_szZipAP_CLEAR_STATE+0x141
0840af5a +0x230:  mov    %eax,-0x14(%ebp)
0840af5d +0x233:  mov    -0x28(%ebp),%eax
0840af60 +0x236:  mov    %eax,%edx
0840af62 +0x238:  mov    -0xc(%ebp),%eax
0840af65 +0x23b:  addl   $0x1,-0xc(%ebp)
0840af69 +0x23f:  mov    %edx,0xc(%esp)
0840af6d +0x243:  lea    -0xa84(%ebp),%edx
0840af73 +0x249:  mov    %edx,0x8(%esp)
0840af77 +0x24d:  mov    %eax,0x4(%esp)
0840af7b +0x251:  mov    -0x10(%ebp),%eax
0840af7e +0x254:  mov    %eax,(%esp)
0840af81 +0x257:  call   0812531a <_GLOBAL__I__ZN8APSystem21g_szZipAP_CLEAR_STATEE+0x7d>  ; global constructors keyed to APSystem::g_szZipAP_CLEAR_STATE+0x7d
0840af86 +0x25c:  xor    $0x1,%eax
0840af89 +0x25f:  test   %al,%al
0840af8b +0x261:  je     0840af97 <+0x26d>
0840af8d +0x263:  mov    $0x2453,%eax
0840af92 +0x268:  jmp    0840b0ce <+0x3a4>
0840af97 +0x26d:  mov    0xc(%ebp),%eax
0840af9a +0x270:  add    $0xa8e4,%eax
0840af9f +0x275:  mov    -0x1c(%ebp),%edx
0840afa2 +0x278:  mov    %edx,0xc(%esp)
0840afa6 +0x27c:  lea    -0x4815(%ebp),%edx
0840afac +0x282:  mov    %edx,0x8(%esp)
0840afb0 +0x286:  lea    -0x20(%ebp),%edx
0840afb3 +0x289:  mov    %edx,0x4(%esp)
0840afb7 +0x28d:  mov    %eax,(%esp)
0840afba +0x290:  call   086b2102 <_Z14uncompress_zipPcRjPKcj>  ; uncompress_zip(char*, unsigned int&, char const*, unsigned int)
0840afbf +0x295:  xor    $0x1,%eax
0840afc2 +0x298:  test   %al,%al
0840afc4 +0x29a:  je     0840afd0 <+0x2a6>
0840afc6 +0x29c:  mov    $0x2457,%eax
0840afcb +0x2a1:  jmp    0840b0ce <+0x3a4>
0840afd0 +0x2a6:  mov    -0x20(%ebp),%ecx
0840afd3 +0x2a9:  mov    $0x4325c53f,%edx
0840afd8 +0x2ae:  mov    %ecx,%eax
0840afda +0x2b0:  mul    %edx
0840afdc +0x2b2:  mov    %edx,%eax
0840afde +0x2b4:  shr    $0x4,%eax
0840afe1 +0x2b7:  imul   $0x3d,%eax,%eax
0840afe4 +0x2ba:  mov    %ecx,%edx
0840afe6 +0x2bc:  sub    %eax,%edx
0840afe8 +0x2be:  mov    %edx,%eax
0840afea +0x2c0:  test   %eax,%eax
0840afec +0x2c2:  je     0840afff <+0x2d5>
0840afee +0x2c4:  mov    -0x20(%ebp),%eax
0840aff1 +0x2c7:  test   %eax,%eax
0840aff3 +0x2c9:  je     0840afff <+0x2d5>
0840aff5 +0x2cb:  mov    $0x2458,%eax
0840affa +0x2d0:  jmp    0840b0ce <+0x3a4>
0840afff +0x2d5:  mov    0xc(%ebp),%eax
0840b002 +0x2d8:  add    $0x949e,%eax
0840b007 +0x2dd:  mov    -0x18(%ebp),%edx
0840b00a +0x2e0:  mov    %edx,0xc(%esp)
0840b00e +0x2e4:  lea    -0x1c93(%ebp),%edx
0840b014 +0x2ea:  mov    %edx,0x8(%esp)
0840b018 +0x2ee:  lea    -0x24(%ebp),%edx
0840b01b +0x2f1:  mov    %edx,0x4(%esp)
0840b01f +0x2f5:  mov    %eax,(%esp)
0840b022 +0x2f8:  call   086b2102 <_Z14uncompress_zipPcRjPKcj>  ; uncompress_zip(char*, unsigned int&, char const*, unsigned int)
0840b027 +0x2fd:  xor    $0x1,%eax
0840b02a +0x300:  test   %al,%al
0840b02c +0x302:  je     0840b038 <+0x30e>
0840b02e +0x304:  mov    $0x245c,%eax
0840b033 +0x309:  jmp    0840b0ce <+0x3a4>
0840b038 +0x30e:  mov    -0x24(%ebp),%ecx
0840b03b +0x311:  mov    $0x4325c53f,%edx
0840b040 +0x316:  mov    %ecx,%eax
0840b042 +0x318:  mul    %edx
0840b044 +0x31a:  mov    %edx,%eax
0840b046 +0x31c:  shr    $0x4,%eax
0840b049 +0x31f:  imul   $0x3d,%eax,%eax
0840b04c +0x322:  mov    %ecx,%edx
0840b04e +0x324:  sub    %eax,%edx
0840b050 +0x326:  mov    %edx,%eax
0840b052 +0x328:  test   %eax,%eax
0840b054 +0x32a:  je     0840b064 <+0x33a>
0840b056 +0x32c:  mov    -0x24(%ebp),%eax
0840b059 +0x32f:  test   %eax,%eax
0840b05b +0x331:  je     0840b064 <+0x33a>
0840b05d +0x333:  mov    $0x245d,%eax
0840b062 +0x338:  jmp    0840b0ce <+0x3a4>
0840b064 +0x33a:  mov    0xc(%ebp),%eax
0840b067 +0x33d:  add    $&_ZL14gUnicodeBuffer+0xa578,%eax
0840b06c +0x342:  mov    -0x14(%ebp),%edx
0840b06f +0x345:  mov    %edx,0xc(%esp)
0840b073 +0x349:  lea    -0xa84(%ebp),%edx
0840b079 +0x34f:  mov    %edx,0x8(%esp)
0840b07d +0x353:  lea    -0x28(%ebp),%edx
0840b080 +0x356:  mov    %edx,0x4(%esp)
0840b084 +0x35a:  mov    %eax,(%esp)
0840b087 +0x35d:  call   086b2102 <_Z14uncompress_zipPcRjPKcj>  ; uncompress_zip(char*, unsigned int&, char const*, unsigned int)
0840b08c +0x362:  xor    $0x1,%eax
0840b08f +0x365:  test   %al,%al
0840b091 +0x367:  je     0840b09a <+0x370>
0840b093 +0x369:  mov    $0x2462,%eax
0840b098 +0x36e:  jmp    0840b0ce <+0x3a4>
0840b09a +0x370:  mov    -0x28(%ebp),%eax
0840b09d +0x373:  lea    -0x4(%eax),%ecx
0840b0a0 +0x376:  mov    $0x4325c53f,%edx
0840b0a5 +0x37b:  mov    %ecx,%eax
0840b0a7 +0x37d:  mul    %edx
0840b0a9 +0x37f:  mov    %edx,%eax
0840b0ab +0x381:  shr    $0x4,%eax
0840b0ae +0x384:  imul   $0x3d,%eax,%eax
0840b0b1 +0x387:  mov    %ecx,%edx
0840b0b3 +0x389:  sub    %eax,%edx
0840b0b5 +0x38b:  mov    %edx,%eax
0840b0b7 +0x38d:  test   %eax,%eax
0840b0b9 +0x38f:  je     0840b0c9 <+0x39f>
0840b0bb +0x391:  mov    -0x28(%ebp),%eax
0840b0be +0x394:  test   %eax,%eax
0840b0c0 +0x396:  je     0840b0c9 <+0x39f>
0840b0c2 +0x398:  mov    $0x2463,%eax
0840b0c7 +0x39d:  jmp    0840b0ce <+0x3a4>
0840b0c9 +0x39f:  mov    $0x0,%eax
0840b0ce +0x3a4:  add    $0x4820,%esp
0840b0d4 +0x3aa:  pop    %ebx
0840b0d5 +0x3ab:  pop    %edi
0840b0d6 +0x3ac:  pop    %ebp
0840b0d7 +0x3ad:  ret
```

## 反编译 C

```c
// DB_LoadInventory::_getCharacInvenExpand @ 0x840ad2a

/* DB_LoadInventory::_getCharacInvenExpand(SIG_LOAD_INVENTORY*) const */

undefined4 __thiscall
DB_LoadInventory::_getCharacInvenExpand(DB_LoadInventory *this,SIG_LOAD_INVENTORY *param_1)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  uint uVar6;
  bool bVar7;
  byte bVar8;
  char local_4819 [11138];
  char local_1c97;
  char local_1c96 [4622];
  char local_a88 [2652];
  uint local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  MySQL *local_14;
  int local_10;
  
  bVar8 = 0;
  memset(local_4819,0,0x2b82);
  local_24 = 0x2b82;
  local_20 = 0x2b82;
  pcVar5 = &local_1c97;
  uVar6 = 0x120f;
  bVar7 = ((uint)pcVar5 & 1) != 0;
  if (bVar7) {
    local_1c97 = '\0';
    pcVar5 = local_1c96;
    uVar6 = 0x120e;
  }
  if (((uint)pcVar5 & 2) != 0) {
    pcVar5[0] = '\0';
    pcVar5[1] = '\0';
    pcVar5 = pcVar5 + 2;
    uVar6 = uVar6 - 2;
  }
  for (uVar3 = uVar6 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
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
  local_28 = 0x120f;
  local_1c = 0x120f;
  pcVar5 = local_a88;
  for (iVar4 = 0x297; iVar4 != 0; iVar4 = iVar4 + -1) {
    pcVar5[0] = '\0';
    pcVar5[1] = '\0';
    pcVar5[2] = '\0';
    pcVar5[3] = '\0';
    pcVar5 = pcVar5 + ((uint)bVar8 * -2 + 1) * 4;
  }
  local_2c = 0xa5c;
  local_18 = 0xa5c;
  local_14 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,3,0);
  MySQL::set_query(local_14,
                   "seLect cargo_capacity,cargo,jewel,expand_equipslot from charac_inven_expand where charac_no=%u"
                   ,*(undefined4 *)(param_1 + 4));
  cVar1 = MySQL::exec(local_14,true);
  if (cVar1 == '\x01') {
    cVar1 = MySQL::fetch(local_14);
    if (cVar1 == '\x01') {
      bVar7 = false;
      goto LAB_0840ae61;
    }
  }
  bVar7 = true;
LAB_0840ae61:
  if (bVar7) {
    uVar2 = 0x243b;
  }
  else {
    local_10 = 1;
    cVar1 = MySQL::get_int(local_14,0,(int *)(param_1 + 0xa8e0));
    if (cVar1 == '\x01') {
      local_20 = MySQL::get_binary_length(local_14,local_10);
      iVar4 = local_10;
      local_10 = local_10 + 1;
      cVar1 = MySQL::get_binary(local_14,iVar4,local_4819,local_24);
      if (cVar1 == '\x01') {
        local_1c = MySQL::get_binary_length(local_14,local_10);
        iVar4 = local_10;
        local_10 = local_10 + 1;
        cVar1 = MySQL::get_binary(local_14,iVar4,&local_1c97,local_28);
        if (cVar1 == '\x01') {
          local_18 = MySQL::get_binary_length(local_14,local_10);
          iVar4 = local_10;
          local_10 = local_10 + 1;
          cVar1 = MySQL::get_binary(local_14,iVar4,local_a88,local_2c);
          if (cVar1 == '\x01') {
            cVar1 = uncompress_zip((char *)(param_1 + 0xa8e4),&local_24,local_4819,local_20);
            if (cVar1 == '\x01') {
              if ((local_24 == (local_24 / 0x3d) * 0x3d) || (local_24 == 0)) {
                cVar1 = uncompress_zip((char *)(param_1 + 0x949e),&local_28,&local_1c97,local_1c);
                if (cVar1 == '\x01') {
                  if ((local_28 == (local_28 / 0x3d) * 0x3d) || (local_28 == 0)) {
                    cVar1 = uncompress_zip((char *)(param_1 + 0x14aa4),&local_2c,local_a88,local_18)
                    ;
                    if (cVar1 == '\x01') {
                      if ((local_2c - 4 == ((local_2c - 4) / 0x3d) * 0x3d) || (local_2c == 0)) {
                        uVar2 = 0;
                      }
                      else {
                        uVar2 = 0x2463;
                      }
                    }
                    else {
                      uVar2 = 0x2462;
                    }
                  }
                  else {
                    uVar2 = 0x245d;
                  }
                }
                else {
                  uVar2 = 0x245c;
                }
              }
              else {
                uVar2 = 0x2458;
              }
            }
            else {
              uVar2 = 0x2457;
            }
          }
          else {
            uVar2 = 0x2453;
          }
        }
        else {
          uVar2 = 0x2448;
        }
      }
      else {
        uVar2 = 0x2443;
      }
    }
    else {
      uVar2 = 0x243f;
    }
  }
  return uVar2;
}
```
