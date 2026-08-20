# SendErrorPacket

`_ZN31Inter_MailBox_Req_CheckReceiver15SendErrorPacketEP5CUser14ENUM_CMDPACKETt`

`Inter_MailBox_Req_CheckReceiver::SendErrorPacket(CUser*, ENUM_CMDPACKET, unsigned short)`

| 类 | 地址 |
|---|---|
| `Inter_MailBox_Req_CheckReceiver` | `0x084d008a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084d008a  _ZN31Inter_MailBox_Req_CheckReceiver15SendErrorPacketEP5CUser14ENUM_CMDPACKETt
#           Inter_MailBox_Req_CheckReceiver::SendErrorPacket(CUser*, ENUM_CMDPACKET, unsigned short)
# range [0x084d008a, 0x084d012f]
084d008a +0x00:  push   %ebp
084d008b +0x01:  mov    %esp,%ebp
084d008d +0x03:  push   %ebx
084d008e +0x04:  sub    $0x34,%esp
084d0091 +0x07:  mov    0x14(%ebp),%eax
084d0094 +0x0a:  mov    %ax,-0xc(%ebp)
084d0098 +0x0e:  movzwl -0xc(%ebp),%ebx
084d009c +0x12:  movl   $0xffffffff,0x4(%esp)
084d00a4 +0x1a:  mov    0xc(%ebp),%eax
084d00a7 +0x1d:  mov    %eax,(%esp)
084d00aa +0x20:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
084d00af +0x25:  mov    0x10(%ebp),%edx
084d00b2 +0x28:  mov    %ebx,0x1c(%esp)
084d00b6 +0x2c:  mov    %eax,0x18(%esp)
084d00ba +0x30:  mov    %edx,0x14(%esp)
084d00be +0x34:  movl   $"[ITEM_GIFT] Fail Command[%d] charac_no[%u] error_code[%d]",0x10(%esp)
084d00c6 +0x3c:  movl   $0x2e12,0xc(%esp)
084d00ce +0x44:  movl   $&_ZZN31Inter_MailBox_Req_CheckReceiver15SendErrorPacketEP5CUser14ENUM_CMDPACKETtE19__PRETTY_FUNCTION__,0x8(%esp)
084d00d6 +0x4c:  movl   $"InterDispatcher.cpp",0x4(%esp)
084d00de +0x54:  movl   $0x1,(%esp)
084d00e5 +0x5b:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
084d00ea +0x60:  cmpl   $0x43,0x10(%ebp)
084d00ee +0x64:  jne    084d010c <+0x82>
084d00f0 +0x66:  movzwl -0xc(%ebp),%eax
084d00f4 +0x6a:  mov    %eax,0x8(%esp)
084d00f8 +0x6e:  mov    0x10(%ebp),%eax
084d00fb +0x71:  mov    %eax,0x4(%esp)
084d00ff +0x75:  mov    0xc(%ebp),%eax
084d0102 +0x78:  mov    %eax,(%esp)
084d0105 +0x7b:  call   0867c110 <_ZN5CUser23SendCmdErrorPacket2ByteE14ENUM_CMDPACKETt>  ; CUser::SendCmdErrorPacket2Byte(ENUM_CMDPACKET, unsigned short)
084d010a +0x80:  jmp    084d0129 <+0x9f>
084d010c +0x82:  movzwl -0xc(%ebp),%eax
084d0110 +0x86:  movzbl %al,%eax
084d0113 +0x89:  mov    %eax,0x8(%esp)
084d0117 +0x8d:  mov    0x10(%ebp),%eax
084d011a +0x90:  mov    %eax,0x4(%esp)
084d011e +0x94:  mov    0xc(%ebp),%eax
084d0121 +0x97:  mov    %eax,(%esp)
084d0124 +0x9a:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
084d0129 +0x9f:  add    $0x34,%esp
084d012c +0xa2:  pop    %ebx
084d012d +0xa3:  pop    %ebp
084d012e +0xa4:  ret
084d012f +0xa5:  nop
```

## 反编译 C

```c
// Inter_MailBox_Req_CheckReceiver::SendErrorPacket @ 0x84d008a

/* Inter_MailBox_Req_CheckReceiver::SendErrorPacket(CUser*, ENUM_CMDPACKET, unsigned short) */

void __thiscall
Inter_MailBox_Req_CheckReceiver::SendErrorPacket
          (undefined4 this,CUser *param_1,int param_3,ushort param_4)

{
  undefined4 uVar1;
  
  uVar1 = CUser::get_charac_no(param_1,-1);
  LogManager::logFormat
            (1,"InterDispatcher.cpp",
             "void Inter_MailBox_Req_CheckReceiver::SendErrorPacket(CUser*, ENUM_CMDPACKET, short unsigned int)"
             ,0x2e12,"[ITEM_GIFT] Fail Command[%d] charac_no[%u] error_code[%d]",param_3,uVar1,
             (uint)param_4);
  if (param_3 == 0x43) {
    CUser::SendCmdErrorPacket2Byte(param_1,0x43,param_4);
  }
  else {
    CUser::SendCmdErrorPacket(param_1,param_3,param_4 & 0xff);
  }
  return;
}
```
