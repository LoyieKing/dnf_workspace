# _InsertLetter

`_ZN32DB_MailBox_Req_System_Multi_Mail13_InsertLetterEP5MySQLP34SIG_MAILBOX_SEND_SYSTEM_MULTI_MAIL`

`DB_MailBox_Req_System_Multi_Mail::_InsertLetter(MySQL*, SIG_MAILBOX_SEND_SYSTEM_MULTI_MAIL*)`

| 类 | 地址 |
|---|---|
| `DB_MailBox_Req_System_Multi_Mail` | `0x084435d4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084435d4  _ZN32DB_MailBox_Req_System_Multi_Mail13_InsertLetterEP5MySQLP34SIG_MAILBOX_SEND_SYSTEM_MULTI_MAIL
#           DB_MailBox_Req_System_Multi_Mail::_InsertLetter(MySQL*, SIG_MAILBOX_SEND_SYSTEM_MULTI_MAIL*)
# range [0x084435d4, 0x0844372d]
084435d4 +0x000:  push   %ebp
084435d5 +0x001:  mov    %esp,%ebp
084435d7 +0x003:  push   %edi
084435d8 +0x004:  push   %ebx
084435d9 +0x005:  sub    $0x260,%esp
084435df +0x00b:  lea    -0x244(%ebp),%edx
084435e5 +0x011:  mov    $0x0,%eax
084435ea +0x016:  mov    $0x7f,%ecx
084435ef +0x01b:  mov    %edx,%edi
084435f1 +0x01d:  rep stos %eax,%es:(%edi)
084435f3 +0x01f:  mov    %edi,%edx
084435f5 +0x021:  mov    %ax,(%edx)
084435f8 +0x024:  add    $0x2,%edx
084435fb +0x027:  mov    %al,(%edx)
084435fd +0x029:  add    $0x1,%edx
08443600 +0x02c:  mov    0x10(%ebp),%eax
08443603 +0x02f:  add    $0x1e,%eax
08443606 +0x032:  mov    %eax,0x8(%esp)
0844360a +0x036:  lea    -0x244(%ebp),%eax
08443610 +0x03c:  mov    %eax,0x4(%esp)
08443614 +0x040:  mov    0xc(%ebp),%eax
08443617 +0x043:  mov    %eax,(%esp)
0844361a +0x046:  call   083f48aa <_ZN5MySQL13escape_stringEPcPKc>  ; MySQL::escape_string(char*, char const*)
0844361f +0x04b:  lea    -0x45(%ebp),%edx
08443622 +0x04e:  mov    $0x3d,%ebx
08443627 +0x053:  mov    $0x0,%eax
0844362c +0x058:  mov    %edx,%ecx
0844362e +0x05a:  and    $0x1,%ecx
08443631 +0x05d:  test   %ecx,%ecx
08443633 +0x05f:  je     0844363d <+0x69>
08443635 +0x061:  mov    %al,(%edx)
08443637 +0x063:  add    $0x1,%edx
0844363a +0x066:  sub    $0x1,%ebx
0844363d +0x069:  mov    %edx,%ecx
0844363f +0x06b:  and    $0x2,%ecx
08443642 +0x06e:  test   %ecx,%ecx
08443644 +0x070:  je     0844364f <+0x7b>
08443646 +0x072:  mov    %ax,(%edx)
08443649 +0x075:  add    $0x2,%edx
0844364c +0x078:  sub    $0x2,%ebx
0844364f +0x07b:  mov    %ebx,%ecx
08443651 +0x07d:  shr    $0x2,%ecx
08443654 +0x080:  mov    %edx,%edi
08443656 +0x082:  rep stos %eax,%es:(%edi)
08443658 +0x084:  mov    %edi,%edx
0844365a +0x086:  mov    %ebx,%ecx
0844365c +0x088:  and    $0x2,%ecx
0844365f +0x08b:  test   %ecx,%ecx
08443661 +0x08d:  je     08443669 <+0x95>
08443663 +0x08f:  mov    %ax,(%edx)
08443666 +0x092:  add    $0x2,%edx
08443669 +0x095:  mov    %ebx,%ecx
0844366b +0x097:  and    $0x1,%ecx
0844366e +0x09a:  test   %ecx,%ecx
08443670 +0x09c:  je     08443677 <+0xa3>
08443672 +0x09e:  mov    %al,(%edx)
08443674 +0x0a0:  add    $0x1,%edx
08443677 +0x0a3:  mov    0x10(%ebp),%eax
0844367a +0x0a6:  mov    %eax,0x8(%esp)
0844367e +0x0aa:  lea    -0x45(%ebp),%eax
08443681 +0x0ad:  mov    %eax,0x4(%esp)
08443685 +0x0b1:  mov    0xc(%ebp),%eax
08443688 +0x0b4:  mov    %eax,(%esp)
0844368b +0x0b7:  call   083f48aa <_ZN5MySQL13escape_stringEPcPKc>  ; MySQL::escape_string(char*, char const*)
08443690 +0x0bc:  mov    0x10(%ebp),%eax
08443693 +0x0bf:  mov    0x3a5(%eax),%eax
08443699 +0x0c5:  mov    %eax,%ebx
0844369b +0x0c7:  mov    0x10(%ebp),%eax
0844369e +0x0ca:  mov    0x3a1(%eax),%ecx
084436a4 +0x0d0:  mov    0x10(%ebp),%eax
084436a7 +0x0d3:  mov    0x122(%eax),%edx
084436ad +0x0d9:  mov    0x10(%ebp),%eax
084436b0 +0x0dc:  mov    0x11e(%eax),%eax
084436b6 +0x0e2:  mov    %ebx,0x1c(%esp)
084436ba +0x0e6:  mov    %ecx,0x18(%esp)
084436be +0x0ea:  lea    -0x244(%ebp),%ecx
084436c4 +0x0f0:  mov    %ecx,0x14(%esp)
084436c8 +0x0f4:  lea    -0x45(%ebp),%ecx
084436cb +0x0f7:  mov    %ecx,0x10(%esp)
084436cf +0x0fb:  mov    %edx,0xc(%esp)
084436d3 +0x0ff:  mov    %eax,0x8(%esp)
084436d7 +0x103:  movl   $"inSert into letter(charac_no,send_charac_no,send_charac_name,letter_text,reg_date,stat) values(%d,%d,'%s','%s',from_unixtime(%d),%d)",0x4(%esp)
084436df +0x10b:  mov    0xc(%ebp),%eax
084436e2 +0x10e:  mov    %eax,(%esp)
084436e5 +0x111:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
084436ea +0x116:  movl   $0x1,0x4(%esp)
084436f2 +0x11e:  mov    0xc(%ebp),%eax
084436f5 +0x121:  mov    %eax,(%esp)
084436f8 +0x124:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
084436fd +0x129:  xor    $0x1,%eax
08443700 +0x12c:  test   %al,%al
08443702 +0x12e:  je     0844370b <+0x137>
08443704 +0x130:  mov    $0x0,%eax
08443709 +0x135:  jmp    08443724 <+0x150>
0844370b +0x137:  mov    0xc(%ebp),%eax
0844370e +0x13a:  mov    %eax,(%esp)
08443711 +0x13d:  call   083f9ad4 <_ZN8WongWork8DBCommon11GetIdentityEP5MySQL>  ; WongWork::DBCommon::GetIdentity(MySQL*)
08443716 +0x142:  mov    0x10(%ebp),%edx
08443719 +0x145:  mov    %eax,0x39d(%edx)
0844371f +0x14b:  mov    $0x1,%eax
08443724 +0x150:  add    $0x260,%esp
0844372a +0x156:  pop    %ebx
0844372b +0x157:  pop    %edi
0844372c +0x158:  pop    %ebp
0844372d +0x159:  ret
```

## 反编译 C

```c
// DB_MailBox_Req_System_Multi_Mail::_InsertLetter @ 0x84435d4

/* DB_MailBox_Req_System_Multi_Mail::_InsertLetter(MySQL*, SIG_MAILBOX_SEND_SYSTEM_MULTI_MAIL*) */

bool __thiscall
DB_MailBox_Req_System_Multi_Mail::_InsertLetter
          (DB_MailBox_Req_System_Multi_Mail *this,MySQL *param_1,
          SIG_MAILBOX_SEND_SYSTEM_MULTI_MAIL *param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  uint uVar6;
  bool bVar7;
  byte bVar8;
  char local_248 [2];
  char acStack_246 [509];
  char local_49;
  char local_48 [60];
  
  bVar8 = 0;
  pcVar5 = local_248;
  for (iVar3 = 0x7f; iVar3 != 0; iVar3 = iVar3 + -1) {
    pcVar5[0] = '\0';
    pcVar5[1] = '\0';
    pcVar5[2] = '\0';
    pcVar5[3] = '\0';
    pcVar5 = pcVar5 + 4;
  }
  pcVar5[0] = '\0';
  pcVar5[1] = '\0';
  pcVar5[2] = '\0';
  MySQL::escape_string(param_1,local_248,(char *)(param_2 + 0x1e));
  pcVar5 = &local_49;
  uVar6 = 0x3d;
  bVar7 = ((uint)pcVar5 & 1) != 0;
  if (bVar7) {
    local_49 = '\0';
    pcVar5 = local_48;
    uVar6 = 0x3c;
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
  MySQL::escape_string(param_1,&local_49,(char *)param_2);
  MySQL::set_query(param_1,
                   "inSert into letter(charac_no,send_charac_no,send_charac_name,letter_text,reg_date,stat) values(%d,%d,\'%s\',\'%s\',from_unixtime(%d),%d)"
                   ,*(undefined4 *)(param_2 + 0x11e),*(undefined4 *)(param_2 + 0x122),&local_49,
                   local_248,*(undefined4 *)(param_2 + 0x3a1),*(undefined4 *)(param_2 + 0x3a5));
  cVar1 = MySQL::exec(param_1,true);
  if (cVar1 == '\x01') {
    uVar2 = WongWork::DBCommon::GetIdentity(param_1);
    *(undefined4 *)(param_2 + 0x39d) = uVar2;
  }
  return cVar1 == '\x01';
}
```
