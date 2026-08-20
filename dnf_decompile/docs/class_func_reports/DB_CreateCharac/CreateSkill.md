# CreateSkill

`_ZN15DB_CreateCharac11CreateSkillEP17SIG_CREATE_CHARAC`

`DB_CreateCharac::CreateSkill(SIG_CREATE_CHARAC*)`

| 类 | 地址 |
|---|---|
| `DB_CreateCharac` | `0x084024e6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084024e6  _ZN15DB_CreateCharac11CreateSkillEP17SIG_CREATE_CHARAC
#           DB_CreateCharac::CreateSkill(SIG_CREATE_CHARAC*)
# range [0x084024e6, 0x084026eb]
084024e6 +0x000:  push   %ebp
084024e7 +0x001:  mov    %esp,%ebp
084024e9 +0x003:  push   %edi
084024ea +0x004:  push   %ebx
084024eb +0x005:  sub    $0x420,%esp
084024f1 +0x00b:  lea    -0x20d(%ebp),%edx
084024f7 +0x011:  mov    $0x1f5,%ebx
084024fc +0x016:  mov    $0x0,%eax
08402501 +0x01b:  mov    %edx,%ecx
08402503 +0x01d:  and    $0x1,%ecx
08402506 +0x020:  test   %ecx,%ecx
08402508 +0x022:  je     08402512 <+0x2c>
0840250a +0x024:  mov    %al,(%edx)
0840250c +0x026:  add    $0x1,%edx
0840250f +0x029:  sub    $0x1,%ebx
08402512 +0x02c:  mov    %edx,%ecx
08402514 +0x02e:  and    $0x2,%ecx
08402517 +0x031:  test   %ecx,%ecx
08402519 +0x033:  je     08402524 <+0x3e>
0840251b +0x035:  mov    %ax,(%edx)
0840251e +0x038:  add    $0x2,%edx
08402521 +0x03b:  sub    $0x2,%ebx
08402524 +0x03e:  mov    %ebx,%ecx
08402526 +0x040:  shr    $0x2,%ecx
08402529 +0x043:  mov    %edx,%edi
0840252b +0x045:  rep stos %eax,%es:(%edi)
0840252d +0x047:  mov    %edi,%edx
0840252f +0x049:  mov    %ebx,%ecx
08402531 +0x04b:  and    $0x2,%ecx
08402534 +0x04e:  test   %ecx,%ecx
08402536 +0x050:  je     0840253e <+0x58>
08402538 +0x052:  mov    %ax,(%edx)
0840253b +0x055:  add    $0x2,%edx
0840253e +0x058:  mov    %ebx,%ecx
08402540 +0x05a:  and    $0x1,%ecx
08402543 +0x05d:  test   %ecx,%ecx
08402545 +0x05f:  je     0840254c <+0x66>
08402547 +0x061:  mov    %al,(%edx)
08402549 +0x063:  add    $0x1,%edx
0840254c +0x066:  lea    -0x402(%ebp),%edx
08402552 +0x06c:  mov    $0x1f5,%ebx
08402557 +0x071:  mov    $0x0,%eax
0840255c +0x076:  mov    %edx,%ecx
0840255e +0x078:  and    $0x2,%ecx
08402561 +0x07b:  test   %ecx,%ecx
08402563 +0x07d:  je     0840256e <+0x88>
08402565 +0x07f:  mov    %ax,(%edx)
08402568 +0x082:  add    $0x2,%edx
0840256b +0x085:  sub    $0x2,%ebx
0840256e +0x088:  mov    %ebx,%ecx
08402570 +0x08a:  shr    $0x2,%ecx
08402573 +0x08d:  mov    %edx,%edi
08402575 +0x08f:  rep stos %eax,%es:(%edi)
08402577 +0x091:  mov    %edi,%edx
08402579 +0x093:  mov    %ebx,%ecx
0840257b +0x095:  and    $0x2,%ecx
0840257e +0x098:  test   %ecx,%ecx
08402580 +0x09a:  je     08402588 <+0xa2>
08402582 +0x09c:  mov    %ax,(%edx)
08402585 +0x09f:  add    $0x2,%edx
08402588 +0x0a2:  mov    %ebx,%ecx
0840258a +0x0a4:  and    $0x1,%ecx
0840258d +0x0a7:  test   %ecx,%ecx
0840258f +0x0a9:  je     08402596 <+0xb0>
08402591 +0x0ab:  mov    %al,(%edx)
08402593 +0x0ad:  add    $0x1,%edx
08402596 +0x0b0:  movl   $0x1f5,-0x14(%ebp)
0840259d +0x0b7:  movl   $0x1f5,-0x18(%ebp)
084025a4 +0x0be:  mov    0xc(%ebp),%eax
084025a7 +0x0c1:  add    $0x79,%eax
084025aa +0x0c4:  movl   $0x198,0xc(%esp)
084025b2 +0x0cc:  mov    %eax,0x8(%esp)
084025b6 +0x0d0:  lea    -0x14(%ebp),%eax
084025b9 +0x0d3:  mov    %eax,0x4(%esp)
084025bd +0x0d7:  lea    -0x20d(%ebp),%eax
084025c3 +0x0dd:  mov    %eax,(%esp)
084025c6 +0x0e0:  call   086b201f <_Z12compress_zipPcRjPKcj>  ; compress_zip(char*, unsigned int&, char const*, unsigned int)
084025cb +0x0e5:  xor    $0x1,%eax
084025ce +0x0e8:  test   %al,%al
084025d0 +0x0ea:  je     084025dc <+0xf6>
084025d2 +0x0ec:  mov    $0x0,%eax
084025d7 +0x0f1:  jmp    084026e2 <+0x1fc>
084025dc +0x0f6:  mov    0xc(%ebp),%eax
084025df +0x0f9:  add    $0x211,%eax
084025e4 +0x0fe:  movl   $0x198,0xc(%esp)
084025ec +0x106:  mov    %eax,0x8(%esp)
084025f0 +0x10a:  lea    -0x18(%ebp),%eax
084025f3 +0x10d:  mov    %eax,0x4(%esp)
084025f7 +0x111:  lea    -0x402(%ebp),%eax
084025fd +0x117:  mov    %eax,(%esp)
08402600 +0x11a:  call   086b201f <_Z12compress_zipPcRjPKcj>  ; compress_zip(char*, unsigned int&, char const*, unsigned int)
08402605 +0x11f:  xor    $0x1,%eax
08402608 +0x122:  test   %al,%al
0840260a +0x124:  je     08402616 <+0x130>
0840260c +0x126:  mov    $0x0,%eax
08402611 +0x12b:  jmp    084026e2 <+0x1fc>
08402616 +0x130:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0840261b +0x135:  movl   $0x0,0x8(%esp)
08402623 +0x13d:  movl   $0x3,0x4(%esp)
0840262b +0x145:  mov    %eax,(%esp)
0840262e +0x148:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
08402633 +0x14d:  mov    %eax,-0xc(%ebp)
08402636 +0x150:  mov    -0x18(%ebp),%eax
08402639 +0x153:  mov    %eax,0xc(%esp)
0840263d +0x157:  lea    -0x402(%ebp),%eax
08402643 +0x15d:  mov    %eax,0x8(%esp)
08402647 +0x161:  movl   $0x1,0x4(%esp)
0840264f +0x169:  mov    -0xc(%ebp),%eax
08402652 +0x16c:  mov    %eax,(%esp)
08402655 +0x16f:  call   083f452a <_ZN5MySQL11blob_to_strEiPvi>  ; MySQL::blob_to_str(int, void*, int)
0840265a +0x174:  mov    %eax,%ebx
0840265c +0x176:  mov    -0x14(%ebp),%eax
0840265f +0x179:  mov    %eax,0xc(%esp)
08402663 +0x17d:  lea    -0x20d(%ebp),%eax
08402669 +0x183:  mov    %eax,0x8(%esp)
0840266d +0x187:  movl   $0x0,0x4(%esp)
08402675 +0x18f:  mov    -0xc(%ebp),%eax
08402678 +0x192:  mov    %eax,(%esp)
0840267b +0x195:  call   083f452a <_ZN5MySQL11blob_to_strEiPvi>  ; MySQL::blob_to_str(int, void*, int)
08402680 +0x19a:  mov    0xc(%ebp),%edx
08402683 +0x19d:  mov    0x5350(%edx),%ecx
08402689 +0x1a3:  mov    0xc(%ebp),%edx
0840268c +0x1a6:  mov    0x5348(%edx),%edx
08402692 +0x1ac:  mov    %ebx,0x14(%esp)
08402696 +0x1b0:  mov    %eax,0x10(%esp)
0840269a +0x1b4:  mov    %ecx,0xc(%esp)
0840269e +0x1b8:  mov    %edx,0x8(%esp)
084026a2 +0x1bc:  movl   $"inSert into skill (charac_no, remain_sp ,skill_slot, skill_slot_2nd) values(%u,%u, '%s', '%s')",0x4(%esp)
084026aa +0x1c4:  mov    -0xc(%ebp),%eax
084026ad +0x1c7:  mov    %eax,(%esp)
084026b0 +0x1ca:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
084026b5 +0x1cf:  movl   $0x1,0x4(%esp)
084026bd +0x1d7:  mov    -0xc(%ebp),%eax
084026c0 +0x1da:  mov    %eax,(%esp)
084026c3 +0x1dd:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
084026c8 +0x1e2:  mov    %al,-0xd(%ebp)
084026cb +0x1e5:  movzbl -0xd(%ebp),%eax
084026cf +0x1e9:  xor    $0x1,%eax
084026d2 +0x1ec:  test   %al,%al
084026d4 +0x1ee:  je     084026dd <+0x1f7>
084026d6 +0x1f0:  mov    $0x0,%eax
084026db +0x1f5:  jmp    084026e2 <+0x1fc>
084026dd +0x1f7:  mov    $0x1,%eax
084026e2 +0x1fc:  add    $0x420,%esp
084026e8 +0x202:  pop    %ebx
084026e9 +0x203:  pop    %edi
084026ea +0x204:  pop    %ebp
084026eb +0x205:  ret
```

## 反编译 C

```c
// DB_CreateCharac::CreateSkill @ 0x84024e6

/* DB_CreateCharac::CreateSkill(SIG_CREATE_CHARAC*) */

undefined4 __thiscall DB_CreateCharac::CreateSkill(DB_CreateCharac *this,SIG_CREATE_CHARAC *param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  char *pcVar5;
  uint uVar6;
  bool bVar7;
  char local_406 [1002];
  uint local_1c;
  uint local_18 [2];
  MySQL *local_10;
  
  pcVar5 = local_406 + 0x1f5;
  uVar6 = 0x1f5;
  bVar7 = ((uint)pcVar5 & 1) != 0;
  if (bVar7) {
    local_406[0x1f5] = 0;
    pcVar5 = local_406 + 0x1f6;
    uVar6 = 500;
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
    pcVar5 = pcVar5 + 4;
  }
  if ((uVar6 & 2) != 0) {
    pcVar5[0] = '\0';
    pcVar5[1] = '\0';
    pcVar5 = pcVar5 + 2;
  }
  if (!bVar7) {
    *pcVar5 = '\0';
  }
  pcVar5 = local_406;
  uVar6 = 0x1f5;
  bVar7 = ((uint)pcVar5 & 2) != 0;
  if (bVar7) {
    local_406[0] = '\0';
    local_406[1] = '\0';
    pcVar5 = local_406 + 2;
    uVar6 = 499;
  }
  for (uVar6 = uVar6 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    pcVar5[0] = '\0';
    pcVar5[1] = '\0';
    pcVar5[2] = '\0';
    pcVar5[3] = '\0';
    pcVar5 = pcVar5 + 4;
  }
  if (bVar7) {
    pcVar5[0] = '\0';
    pcVar5[1] = '\0';
    pcVar5 = pcVar5 + 2;
  }
  *pcVar5 = '\0';
  local_18[0] = 0x1f5;
  local_1c = 0x1f5;
  cVar1 = compress_zip(local_406 + 0x1f5,local_18,(char *)(param_1 + 0x79),0x198);
  if (cVar1 == '\x01') {
    cVar1 = compress_zip(local_406,&local_1c,(char *)(param_1 + 0x211),0x198);
    if (cVar1 == '\x01') {
      local_10 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,3,0);
      uVar2 = MySQL::blob_to_str(local_10,1,local_406,local_1c);
      uVar3 = MySQL::blob_to_str(local_10,0,local_406 + 0x1f5,local_18[0]);
      MySQL::set_query(local_10,
                       "inSert into skill (charac_no, remain_sp ,skill_slot, skill_slot_2nd) values(%u,%u, \'%s\', \'%s\')"
                       ,*(undefined4 *)(param_1 + 0x5348),*(undefined4 *)(param_1 + 0x5350),uVar3,
                       uVar2);
      cVar1 = MySQL::exec(local_10,true);
      if (cVar1 == '\x01') {
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
  return uVar2;
}
```
