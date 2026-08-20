# CreateEquip

`_ZN15DB_CreateCharac11CreateEquipEjP10Inven_Item`

`DB_CreateCharac::CreateEquip(unsigned int, Inven_Item*)`

| 类 | 地址 |
|---|---|
| `DB_CreateCharac` | `0x084023ac` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084023ac  _ZN15DB_CreateCharac11CreateEquipEjP10Inven_Item
#           DB_CreateCharac::CreateEquip(unsigned int, Inven_Item*)
# range [0x084023ac, 0x084024e5]
084023ac +0x000:  push   %ebp
084023ad +0x001:  mov    %esp,%ebp
084023af +0x003:  push   %edi
084023b0 +0x004:  push   %ebx
084023b1 +0x005:  sub    $0x3a0,%esp
084023b7 +0x00b:  cmpl   $0x0,0x10(%ebp)
084023bb +0x00f:  jne    084023c7 <+0x1b>
084023bd +0x011:  mov    $0x1,%eax
084023c2 +0x016:  jmp    084024dc <+0x130>
084023c7 +0x01b:  lea    -0x38e(%ebp),%edx
084023cd +0x021:  mov    $0x37a,%ebx
084023d2 +0x026:  mov    $0x0,%eax
084023d7 +0x02b:  mov    %edx,%ecx
084023d9 +0x02d:  and    $0x2,%ecx
084023dc +0x030:  test   %ecx,%ecx
084023de +0x032:  je     084023e9 <+0x3d>
084023e0 +0x034:  mov    %ax,(%edx)
084023e3 +0x037:  add    $0x2,%edx
084023e6 +0x03a:  sub    $0x2,%ebx
084023e9 +0x03d:  mov    %ebx,%ecx
084023eb +0x03f:  shr    $0x2,%ecx
084023ee +0x042:  mov    %edx,%edi
084023f0 +0x044:  rep stos %eax,%es:(%edi)
084023f2 +0x046:  mov    %edi,%edx
084023f4 +0x048:  mov    %ebx,%ecx
084023f6 +0x04a:  and    $0x2,%ecx
084023f9 +0x04d:  test   %ecx,%ecx
084023fb +0x04f:  je     08402403 <+0x57>
084023fd +0x051:  mov    %ax,(%edx)
08402400 +0x054:  add    $0x2,%edx
08402403 +0x057:  mov    %ebx,%ecx
08402405 +0x059:  and    $0x1,%ecx
08402408 +0x05c:  test   %ecx,%ecx
0840240a +0x05e:  je     08402411 <+0x65>
0840240c +0x060:  mov    %al,(%edx)
0840240e +0x062:  add    $0x1,%edx
08402411 +0x065:  movl   $0x37a,-0x14(%ebp)
08402418 +0x06c:  mov    0x10(%ebp),%eax
0840241b +0x06f:  movl   $0x2dc,0xc(%esp)
08402423 +0x077:  mov    %eax,0x8(%esp)
08402427 +0x07b:  lea    -0x14(%ebp),%eax
0840242a +0x07e:  mov    %eax,0x4(%esp)
0840242e +0x082:  lea    -0x38e(%ebp),%eax
08402434 +0x088:  mov    %eax,(%esp)
08402437 +0x08b:  call   086b201f <_Z12compress_zipPcRjPKcj>  ; compress_zip(char*, unsigned int&, char const*, unsigned int)
0840243c +0x090:  xor    $0x1,%eax
0840243f +0x093:  test   %al,%al
08402441 +0x095:  je     0840244d <+0xa1>
08402443 +0x097:  mov    $0x0,%eax
08402448 +0x09c:  jmp    084024dc <+0x130>
0840244d +0x0a1:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
08402452 +0x0a6:  movl   $0x0,0x8(%esp)
0840245a +0x0ae:  movl   $0x3,0x4(%esp)
08402462 +0x0b6:  mov    %eax,(%esp)
08402465 +0x0b9:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0840246a +0x0be:  mov    %eax,-0xc(%ebp)
0840246d +0x0c1:  mov    -0x14(%ebp),%eax
08402470 +0x0c4:  mov    %eax,0xc(%esp)
08402474 +0x0c8:  lea    -0x38e(%ebp),%eax
0840247a +0x0ce:  mov    %eax,0x8(%esp)
0840247e +0x0d2:  movl   $0x0,0x4(%esp)
08402486 +0x0da:  mov    -0xc(%ebp),%eax
08402489 +0x0dd:  mov    %eax,(%esp)
0840248c +0x0e0:  call   083f452a <_ZN5MySQL11blob_to_strEiPvi>  ; MySQL::blob_to_str(int, void*, int)
08402491 +0x0e5:  mov    0xc(%ebp),%edx
08402494 +0x0e8:  mov    %edx,0xc(%esp)
08402498 +0x0ec:  mov    %eax,0x8(%esp)
0840249c +0x0f0:  movl   $"upDate inventory set equipslot='%s' where charac_no = %u",0x4(%esp)
084024a4 +0x0f8:  mov    -0xc(%ebp),%eax
084024a7 +0x0fb:  mov    %eax,(%esp)
084024aa +0x0fe:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
084024af +0x103:  movl   $0x1,0x4(%esp)
084024b7 +0x10b:  mov    -0xc(%ebp),%eax
084024ba +0x10e:  mov    %eax,(%esp)
084024bd +0x111:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
084024c2 +0x116:  mov    %al,-0xd(%ebp)
084024c5 +0x119:  movzbl -0xd(%ebp),%eax
084024c9 +0x11d:  xor    $0x1,%eax
084024cc +0x120:  test   %al,%al
084024ce +0x122:  je     084024d7 <+0x12b>
084024d0 +0x124:  mov    $0x0,%eax
084024d5 +0x129:  jmp    084024dc <+0x130>
084024d7 +0x12b:  mov    $0x1,%eax
084024dc +0x130:  add    $0x3a0,%esp
084024e2 +0x136:  pop    %ebx
084024e3 +0x137:  pop    %edi
084024e4 +0x138:  pop    %ebp
084024e5 +0x139:  ret
```

## 反编译 C

```c
// DB_CreateCharac::CreateEquip @ 0x84023ac

/* WARNING: Removing unreachable block (ram,0x0840240c) */
/* DB_CreateCharac::CreateEquip(unsigned int, Inven_Item*) */

undefined4 __thiscall
DB_CreateCharac::CreateEquip(DB_CreateCharac *this,uint param_1,Inven_Item *param_2)

{
  char cVar1;
  undefined4 uVar2;
  char *pcVar3;
  uint uVar4;
  bool bVar5;
  char local_392 [890];
  uint local_18 [2];
  MySQL *local_10;
  
  if (param_2 == (Inven_Item *)0x0) {
    uVar2 = 1;
  }
  else {
    pcVar3 = local_392;
    uVar4 = 0x37a;
    bVar5 = ((uint)pcVar3 & 2) != 0;
    if (bVar5) {
      local_392[0] = '\0';
      local_392[1] = '\0';
      pcVar3 = local_392 + 2;
      uVar4 = 0x378;
    }
    for (uVar4 = uVar4 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      pcVar3[0] = '\0';
      pcVar3[1] = '\0';
      pcVar3[2] = '\0';
      pcVar3[3] = '\0';
      pcVar3 = pcVar3 + 4;
    }
    if (!bVar5) {
      pcVar3[0] = '\0';
      pcVar3[1] = '\0';
    }
    local_18[0] = 0x37a;
    cVar1 = compress_zip(local_392,local_18,(char *)param_2,0x2dc);
    if (cVar1 == '\x01') {
      local_10 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,3,0);
      uVar2 = MySQL::blob_to_str(local_10,0,local_392,local_18[0]);
      MySQL::set_query(local_10,"upDate inventory set equipslot=\'%s\' where charac_no = %u",uVar2,
                       param_1);
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
  return uVar2;
}
```
