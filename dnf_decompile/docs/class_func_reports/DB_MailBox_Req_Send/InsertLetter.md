# InsertLetter

`_ZN19DB_MailBox_Req_Send12InsertLetterEP5MySQLiiPKcS3_Ril16ENUM_LETTER_STAT`

`DB_MailBox_Req_Send::InsertLetter(MySQL*, int, int, char const*, char const*, int&, long, ENUM_LETTER_STAT)`

| 类 | 地址 |
|---|---|
| `DB_MailBox_Req_Send` | `0x0841f15a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0841f15a  _ZN19DB_MailBox_Req_Send12InsertLetterEP5MySQLiiPKcS3_Ril16ENUM_LETTER_STAT
#           DB_MailBox_Req_Send::InsertLetter(MySQL*, int, int, char const*, char const*, int&, long, ENUM_LETTER_STAT)
# range [0x0841f15a, 0x0841f2f9]
0841f15a +0x000:  push   %ebp
0841f15b +0x001:  mov    %esp,%ebp
0841f15d +0x003:  push   %edi
0841f15e +0x004:  push   %ebx
0841f15f +0x005:  sub    $0x260,%esp
0841f165 +0x00b:  mov    0x18(%ebp),%eax
0841f168 +0x00e:  mov    %eax,(%esp)
0841f16b +0x011:  call   0807e3b0 <_init+0xca8>
0841f170 +0x016:  cmp    $0xaa,%eax
0841f175 +0x01b:  jbe    0841f1ca <+0x70>
0841f177 +0x01d:  mov    0x18(%ebp),%eax
0841f17a +0x020:  mov    %eax,(%esp)
0841f17d +0x023:  call   0807e3b0 <_init+0xca8>
0841f182 +0x028:  mov    %eax,0x1c(%esp)
0841f186 +0x02c:  mov    0xc(%ebp),%eax
0841f189 +0x02f:  mov    %eax,0x18(%esp)
0841f18d +0x033:  mov    0x10(%ebp),%eax
0841f190 +0x036:  mov    %eax,0x14(%esp)
0841f194 +0x03a:  movl   $"send_charac_no : %d, recv_charac_no : %d, letter_size : %d",0x10(%esp)
0841f19c +0x042:  movl   $0x54bc,0xc(%esp)
0841f1a4 +0x04a:  movl   $&_ZZN19DB_MailBox_Req_Send12InsertLetterEP5MySQLiiPKcS3_Ril16ENUM_LETTER_STATE19__PRETTY_FUNCTION__,0x8(%esp)
0841f1ac +0x052:  movl   $"DBThread.cpp",0x4(%esp)
0841f1b4 +0x05a:  movl   $0x1,(%esp)
0841f1bb +0x061:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0841f1c0 +0x066:  mov    $0x0,%eax
0841f1c5 +0x06b:  jmp    0841f2f0 <+0x196>
0841f1ca +0x070:  lea    -0x244(%ebp),%edx
0841f1d0 +0x076:  mov    $0x0,%eax
0841f1d5 +0x07b:  mov    $0x7f,%ecx
0841f1da +0x080:  mov    %edx,%edi
0841f1dc +0x082:  rep stos %eax,%es:(%edi)
0841f1de +0x084:  mov    %edi,%edx
0841f1e0 +0x086:  mov    %ax,(%edx)
0841f1e3 +0x089:  add    $0x2,%edx
0841f1e6 +0x08c:  mov    %al,(%edx)
0841f1e8 +0x08e:  add    $0x1,%edx
0841f1eb +0x091:  mov    0x18(%ebp),%eax
0841f1ee +0x094:  mov    %eax,0x8(%esp)
0841f1f2 +0x098:  lea    -0x244(%ebp),%eax
0841f1f8 +0x09e:  mov    %eax,0x4(%esp)
0841f1fc +0x0a2:  mov    0x8(%ebp),%eax
0841f1ff +0x0a5:  mov    %eax,(%esp)
0841f202 +0x0a8:  call   083f48aa <_ZN5MySQL13escape_stringEPcPKc>  ; MySQL::escape_string(char*, char const*)
0841f207 +0x0ad:  lea    -0x45(%ebp),%edx
0841f20a +0x0b0:  mov    $0x3d,%ebx
0841f20f +0x0b5:  mov    $0x0,%eax
0841f214 +0x0ba:  mov    %edx,%ecx
0841f216 +0x0bc:  and    $0x1,%ecx
0841f219 +0x0bf:  test   %ecx,%ecx
0841f21b +0x0c1:  je     0841f225 <+0xcb>
0841f21d +0x0c3:  mov    %al,(%edx)
0841f21f +0x0c5:  add    $0x1,%edx
0841f222 +0x0c8:  sub    $0x1,%ebx
0841f225 +0x0cb:  mov    %edx,%ecx
0841f227 +0x0cd:  and    $0x2,%ecx
0841f22a +0x0d0:  test   %ecx,%ecx
0841f22c +0x0d2:  je     0841f237 <+0xdd>
0841f22e +0x0d4:  mov    %ax,(%edx)
0841f231 +0x0d7:  add    $0x2,%edx
0841f234 +0x0da:  sub    $0x2,%ebx
0841f237 +0x0dd:  mov    %ebx,%ecx
0841f239 +0x0df:  shr    $0x2,%ecx
0841f23c +0x0e2:  mov    %edx,%edi
0841f23e +0x0e4:  rep stos %eax,%es:(%edi)
0841f240 +0x0e6:  mov    %edi,%edx
0841f242 +0x0e8:  mov    %ebx,%ecx
0841f244 +0x0ea:  and    $0x2,%ecx
0841f247 +0x0ed:  test   %ecx,%ecx
0841f249 +0x0ef:  je     0841f251 <+0xf7>
0841f24b +0x0f1:  mov    %ax,(%edx)
0841f24e +0x0f4:  add    $0x2,%edx
0841f251 +0x0f7:  mov    %ebx,%ecx
0841f253 +0x0f9:  and    $0x1,%ecx
0841f256 +0x0fc:  test   %ecx,%ecx
0841f258 +0x0fe:  je     0841f25f <+0x105>
0841f25a +0x100:  mov    %al,(%edx)
0841f25c +0x102:  add    $0x1,%edx
0841f25f +0x105:  mov    0x14(%ebp),%eax
0841f262 +0x108:  mov    %eax,0x8(%esp)
0841f266 +0x10c:  lea    -0x45(%ebp),%eax
0841f269 +0x10f:  mov    %eax,0x4(%esp)
0841f26d +0x113:  mov    0x8(%ebp),%eax
0841f270 +0x116:  mov    %eax,(%esp)
0841f273 +0x119:  call   083f48aa <_ZN5MySQL13escape_stringEPcPKc>  ; MySQL::escape_string(char*, char const*)
0841f278 +0x11e:  mov    0x24(%ebp),%eax
0841f27b +0x121:  mov    %eax,0x1c(%esp)
0841f27f +0x125:  mov    0x20(%ebp),%eax
0841f282 +0x128:  mov    %eax,0x18(%esp)
0841f286 +0x12c:  lea    -0x244(%ebp),%eax
0841f28c +0x132:  mov    %eax,0x14(%esp)
0841f290 +0x136:  lea    -0x45(%ebp),%eax
0841f293 +0x139:  mov    %eax,0x10(%esp)
0841f297 +0x13d:  mov    0x10(%ebp),%eax
0841f29a +0x140:  mov    %eax,0xc(%esp)
0841f29e +0x144:  mov    0xc(%ebp),%eax
0841f2a1 +0x147:  mov    %eax,0x8(%esp)
0841f2a5 +0x14b:  movl   $"inSert into letter(charac_no,send_charac_no,send_charac_name,letter_text,reg_date,stat) values(%d,%d,'%s','%s',from_unixtime(%d),%d)",0x4(%esp)
0841f2ad +0x153:  mov    0x8(%ebp),%eax
0841f2b0 +0x156:  mov    %eax,(%esp)
0841f2b3 +0x159:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0841f2b8 +0x15e:  movl   $0x1,0x4(%esp)
0841f2c0 +0x166:  mov    0x8(%ebp),%eax
0841f2c3 +0x169:  mov    %eax,(%esp)
0841f2c6 +0x16c:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0841f2cb +0x171:  xor    $0x1,%eax
0841f2ce +0x174:  test   %al,%al
0841f2d0 +0x176:  je     0841f2d9 <+0x17f>
0841f2d2 +0x178:  mov    $0x0,%eax
0841f2d7 +0x17d:  jmp    0841f2f0 <+0x196>
0841f2d9 +0x17f:  mov    0x8(%ebp),%eax
0841f2dc +0x182:  mov    %eax,(%esp)
0841f2df +0x185:  call   083f9ad4 <_ZN8WongWork8DBCommon11GetIdentityEP5MySQL>  ; WongWork::DBCommon::GetIdentity(MySQL*)
0841f2e4 +0x18a:  mov    %eax,%edx
0841f2e6 +0x18c:  mov    0x1c(%ebp),%eax
0841f2e9 +0x18f:  mov    %edx,(%eax)
0841f2eb +0x191:  mov    $0x1,%eax
0841f2f0 +0x196:  add    $0x260,%esp
0841f2f6 +0x19c:  pop    %ebx
0841f2f7 +0x19d:  pop    %edi
0841f2f8 +0x19e:  pop    %ebp
0841f2f9 +0x19f:  ret
```

## 反编译 C

```c
// DB_MailBox_Req_Send::InsertLetter @ 0x841f15a

/* DB_MailBox_Req_Send::InsertLetter(MySQL*, int, int, char const*, char const*, int&, long,
   ENUM_LETTER_STAT) */

undefined4
DB_MailBox_Req_Send::InsertLetter
          (MySQL *param_1,undefined4 param_2,undefined4 param_3,char *param_4,char *param_5,
          undefined4 *param_6,undefined4 param_7,undefined4 param_8)

{
  char cVar1;
  size_t sVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  uint uVar7;
  bool bVar8;
  byte bVar9;
  char local_248 [511];
  char local_49;
  char local_48 [60];
  
  bVar9 = 0;
  sVar2 = strlen(param_5);
  if (sVar2 < 0xab) {
    pcVar6 = local_248;
    for (iVar4 = 0x7f; iVar4 != 0; iVar4 = iVar4 + -1) {
      pcVar6[0] = '\0';
      pcVar6[1] = '\0';
      pcVar6[2] = '\0';
      pcVar6[3] = '\0';
      pcVar6 = pcVar6 + ((uint)bVar9 * -2 + 1) * 4;
    }
    pcVar6[0] = '\0';
    pcVar6[1] = '\0';
    pcVar6[2] = '\0';
    MySQL::escape_string(param_1,local_248,param_5);
    pcVar6 = &local_49;
    uVar7 = 0x3d;
    bVar8 = ((uint)pcVar6 & 1) != 0;
    if (bVar8) {
      local_49 = '\0';
      pcVar6 = local_48;
      uVar7 = 0x3c;
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
    MySQL::escape_string(param_1,&local_49,param_4);
    MySQL::set_query(param_1,
                     "inSert into letter(charac_no,send_charac_no,send_charac_name,letter_text,reg_date,stat) values(%d,%d,\'%s\',\'%s\',from_unixtime(%d),%d)"
                     ,param_2,param_3,&local_49,local_248,param_7,param_8);
    cVar1 = MySQL::exec(param_1,true);
    if (cVar1 == '\x01') {
      uVar3 = WongWork::DBCommon::GetIdentity(param_1);
      *param_6 = uVar3;
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
  }
  else {
    sVar2 = strlen(param_5);
    LogManager::logFormat
              (1,"DBThread.cpp",
               "static bool DB_MailBox_Req_Send::InsertLetter(MySQL*, int, int, const char*, const char*, int&, time_t, ENUM_LETTER_STAT)"
               ,0x54bc,"send_charac_no : %d, recv_charac_no : %d, letter_size : %d",param_3,param_2,
               sVar2);
    uVar3 = 0;
  }
  return uVar3;
}
```
