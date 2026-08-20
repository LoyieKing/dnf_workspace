# arad_sp_create_equip

`_ZN4ARAD8DATABASE12CREATE_QUERY20arad_sp_create_equipEP5MySQLP17SIG_CREATE_CHARAC`

`ARAD::DATABASE::CREATE_QUERY::arad_sp_create_equip(MySQL*, SIG_CREATE_CHARAC*)`

| 类 | 地址 |
|---|---|
| `ARAD::DATABASE::CREATE_QUERY` | `0x0818b443` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0818b443  _ZN4ARAD8DATABASE12CREATE_QUERY20arad_sp_create_equipEP5MySQLP17SIG_CREATE_CHARAC
#           ARAD::DATABASE::CREATE_QUERY::arad_sp_create_equip(MySQL*, SIG_CREATE_CHARAC*)
# range [0x0818b443, 0x0818b587]
0818b443 +0x000:  push   %ebp
0818b444 +0x001:  mov    %esp,%ebp
0818b446 +0x003:  push   %edi
0818b447 +0x004:  push   %ebx
0818b448 +0x005:  sub    $0x360,%esp
0818b44e +0x00b:  lea    -0x343(%ebp),%edx
0818b454 +0x011:  mov    $0x333,%ebx
0818b459 +0x016:  mov    $0x0,%eax
0818b45e +0x01b:  mov    %edx,%ecx
0818b460 +0x01d:  and    $0x1,%ecx
0818b463 +0x020:  test   %ecx,%ecx
0818b465 +0x022:  je     0818b46f <+0x2c>
0818b467 +0x024:  mov    %al,(%edx)
0818b469 +0x026:  add    $0x1,%edx
0818b46c +0x029:  sub    $0x1,%ebx
0818b46f +0x02c:  mov    %edx,%ecx
0818b471 +0x02e:  and    $0x2,%ecx
0818b474 +0x031:  test   %ecx,%ecx
0818b476 +0x033:  je     0818b481 <+0x3e>
0818b478 +0x035:  mov    %ax,(%edx)
0818b47b +0x038:  add    $0x2,%edx
0818b47e +0x03b:  sub    $0x2,%ebx
0818b481 +0x03e:  mov    %ebx,%ecx
0818b483 +0x040:  shr    $0x2,%ecx
0818b486 +0x043:  mov    %edx,%edi
0818b488 +0x045:  rep stos %eax,%es:(%edi)
0818b48a +0x047:  mov    %edi,%edx
0818b48c +0x049:  mov    %ebx,%ecx
0818b48e +0x04b:  and    $0x2,%ecx
0818b491 +0x04e:  test   %ecx,%ecx
0818b493 +0x050:  je     0818b49b <+0x58>
0818b495 +0x052:  mov    %ax,(%edx)
0818b498 +0x055:  add    $0x2,%edx
0818b49b +0x058:  mov    %ebx,%ecx
0818b49d +0x05a:  and    $0x1,%ecx
0818b4a0 +0x05d:  test   %ecx,%ecx
0818b4a2 +0x05f:  je     0818b4a9 <+0x66>
0818b4a4 +0x061:  mov    %al,(%edx)
0818b4a6 +0x063:  add    $0x1,%edx
0818b4a9 +0x066:  movl   $0x333,-0x10(%ebp)
0818b4b0 +0x06d:  mov    0xc(%ebp),%eax
0818b4b3 +0x070:  add    $0x4e01,%eax
0818b4b8 +0x075:  mov    %eax,-0xc(%ebp)
0818b4bb +0x078:  mov    -0xc(%ebp),%eax
0818b4be +0x07b:  movl   $0x2dc,0xc(%esp)
0818b4c6 +0x083:  mov    %eax,0x8(%esp)
0818b4ca +0x087:  lea    -0x10(%ebp),%eax
0818b4cd +0x08a:  mov    %eax,0x4(%esp)
0818b4d1 +0x08e:  lea    -0x343(%ebp),%eax
0818b4d7 +0x094:  mov    %eax,(%esp)
0818b4da +0x097:  call   086b201f <_Z12compress_zipPcRjPKcj>  ; compress_zip(char*, unsigned int&, char const*, unsigned int)
0818b4df +0x09c:  xor    $0x1,%eax
0818b4e2 +0x09f:  test   %al,%al
0818b4e4 +0x0a1:  je     0818b521 <+0xde>
0818b4e6 +0x0a3:  movl   $"equip compress zip fail",0x14(%esp)
0818b4ee +0x0ab:  movl   $"%s",0x10(%esp)
0818b4f6 +0x0b3:  movl   $0x155,0xc(%esp)
0818b4fe +0x0bb:  movl   $&_ZZN4ARAD8DATABASE12CREATE_QUERY20arad_sp_create_equipEP5MySQLP17SIG_CREATE_CHARACE19__PRETTY_FUNCTION__,0x8(%esp)
0818b506 +0x0c3:  movl   $"localjapan/Arad_DB_Query.cpp",0x4(%esp)
0818b50e +0x0cb:  movl   $0x1,(%esp)
0818b515 +0x0d2:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0818b51a +0x0d7:  mov    $0xffffffff,%eax
0818b51f +0x0dc:  jmp    0818b57e <+0x13b>
0818b521 +0x0de:  mov    0xc(%ebp),%eax
0818b524 +0x0e1:  mov    0x5348(%eax),%ebx
0818b52a +0x0e7:  mov    -0x10(%ebp),%eax
0818b52d +0x0ea:  mov    %eax,0xc(%esp)
0818b531 +0x0ee:  lea    -0x343(%ebp),%eax
0818b537 +0x0f4:  mov    %eax,0x8(%esp)
0818b53b +0x0f8:  movl   $0x0,0x4(%esp)
0818b543 +0x100:  mov    0x8(%ebp),%eax
0818b546 +0x103:  mov    %eax,(%esp)
0818b549 +0x106:  call   083f452a <_ZN5MySQL11blob_to_strEiPvi>  ; MySQL::blob_to_str(int, void*, int)
0818b54e +0x10b:  mov    %ebx,0xc(%esp)
0818b552 +0x10f:  mov    %eax,0x8(%esp)
0818b556 +0x113:  movl   $" upDate inventory set equipslot='%s' where charac_no = %u ",0x4(%esp)
0818b55e +0x11b:  mov    0x8(%ebp),%eax
0818b561 +0x11e:  mov    %eax,(%esp)
0818b564 +0x121:  call   083f4718 <_ZN5MySQL6updateEPKcz>  ; MySQL::update(char const*, ...)
0818b569 +0x126:  test   %eax,%eax
0818b56b +0x128:  setne  %al
0818b56e +0x12b:  test   %al,%al
0818b570 +0x12d:  je     0818b579 <+0x136>
0818b572 +0x12f:  mov    $0xffffffff,%eax
0818b577 +0x134:  jmp    0818b57e <+0x13b>
0818b579 +0x136:  mov    $0x0,%eax
0818b57e +0x13b:  add    $0x360,%esp
0818b584 +0x141:  pop    %ebx
0818b585 +0x142:  pop    %edi
0818b586 +0x143:  pop    %ebp
0818b587 +0x144:  ret
```

## 反编译 C

```c
// ARAD::DATABASE::CREATE_QUERY::arad_sp_create_equip @ 0x818b443

/* ARAD::DATABASE::CREATE_QUERY::arad_sp_create_equip(MySQL*, SIG_CREATE_CHARAC*) */

undefined4
ARAD::DATABASE::CREATE_QUERY::arad_sp_create_equip(MySQL *param_1,SIG_CREATE_CHARAC *param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  uint uVar7;
  bool bVar8;
  char local_347;
  char local_346 [818];
  uint local_14;
  SIG_CREATE_CHARAC *local_10;
  
  pcVar6 = &local_347;
  uVar7 = 0x333;
  bVar8 = ((uint)pcVar6 & 1) != 0;
  if (bVar8) {
    local_347 = '\0';
    pcVar6 = local_346;
    uVar7 = 0x332;
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
    pcVar6 = pcVar6 + 4;
  }
  if ((uVar7 & 2) != 0) {
    pcVar6[0] = '\0';
    pcVar6[1] = '\0';
    pcVar6 = pcVar6 + 2;
  }
  if (!bVar8) {
    *pcVar6 = '\0';
  }
  local_14 = 0x333;
  local_10 = param_2 + 0x4e01;
  cVar1 = compress_zip(&local_347,&local_14,(char *)local_10,0x2dc);
  if (cVar1 == '\x01') {
    uVar2 = *(undefined4 *)(param_2 + 0x5348);
    uVar3 = MySQL::blob_to_str(param_1,0,&local_347,local_14);
    iVar4 = MySQL::update(param_1," upDate inventory set equipslot=\'%s\' where charac_no = %u ",
                          uVar3,uVar2);
    if (iVar4 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = 0xffffffff;
    }
  }
  else {
    LogManager::logFormat
              (1,"localjapan/Arad_DB_Query.cpp",
               "int ARAD::DATABASE::CREATE_QUERY::arad_sp_create_equip(MySQL*, SIG_CREATE_CHARAC*)",
               0x155,"%s","equip compress zip fail");
    uVar2 = 0xffffffff;
  }
  return uVar2;
}
```
