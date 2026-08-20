# SendMail

`_ZN15cUserHistoryLog8SendMailEP16MSG_MAILBOX_SENDj`

`cUserHistoryLog::SendMail(MSG_MAILBOX_SEND*, unsigned int)`

| 类 | 地址 |
|---|---|
| `cUserHistoryLog` | `0x086847ea` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086847ea  _ZN15cUserHistoryLog8SendMailEP16MSG_MAILBOX_SENDj
#           cUserHistoryLog::SendMail(MSG_MAILBOX_SEND*, unsigned int)
# range [0x086847ea, 0x086848a7]
086847ea +0x00:  push   %ebp
086847eb +0x01:  mov    %esp,%ebp
086847ed +0x03:  push   %edi
086847ee +0x04:  push   %esi
086847ef +0x05:  push   %ebx
086847f0 +0x06:  sub    $0x4c,%esp
086847f3 +0x09:  cmpl   $0x0,0xc(%ebp)
086847f7 +0x0d:  je     0868489b <+0xb1>
086847fd +0x13:  mov    0xc(%ebp),%eax
08684800 +0x16:  add    $0x11,%eax
08684803 +0x19:  test   %eax,%eax
08684805 +0x1b:  je     0868489e <+0xb4>
0868480b +0x21:  movl   $0x0,0x4(%esp)
08684813 +0x29:  mov    0x10(%ebp),%eax
08684816 +0x2c:  mov    %eax,(%esp)
08684819 +0x2f:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
0868481e +0x34:  mov    %eax,%edx
08684820 +0x36:  mov    0xc(%ebp),%eax
08684823 +0x39:  add    $0x45,%eax
08684826 +0x3c:  mov    %eax,-0x24(%ebp)
08684829 +0x3f:  mov    0xc(%ebp),%eax
0868482c +0x42:  mov    0x3d(%eax),%eax
0868482f +0x45:  mov    %eax,-0x20(%ebp)
08684832 +0x48:  mov    0xc(%ebp),%eax
08684835 +0x4b:  mov    0x39(%eax),%eax
08684838 +0x4e:  mov    %eax,-0x1c(%ebp)
0868483b +0x51:  mov    0xc(%ebp),%eax
0868483e +0x54:  movzwl 0x37(%eax),%eax
08684842 +0x58:  movzwl %ax,%edi
08684845 +0x5b:  mov    0xc(%ebp),%eax
08684848 +0x5e:  movzbl 0x36(%eax),%eax
0868484c +0x62:  movzbl %al,%esi
0868484f +0x65:  mov    0xc(%ebp),%eax
08684852 +0x68:  mov    0x2e(%eax),%ebx
08684855 +0x6b:  mov    0xc(%ebp),%eax
08684858 +0x6e:  lea    0x11(%eax),%ecx
0868485b +0x71:  mov    0x8(%ebp),%eax
0868485e +0x74:  mov    (%eax),%eax
08684860 +0x76:  mov    %edx,0x24(%esp)
08684864 +0x7a:  mov    -0x24(%ebp),%edx
08684867 +0x7d:  mov    %edx,0x20(%esp)
0868486b +0x81:  mov    -0x20(%ebp),%edx
0868486e +0x84:  mov    %edx,0x1c(%esp)
08684872 +0x88:  mov    -0x1c(%ebp),%edx
08684875 +0x8b:  mov    %edx,0x18(%esp)
08684879 +0x8f:  mov    %edi,0x14(%esp)
0868487d +0x93:  mov    %esi,0x10(%esp)
08684881 +0x97:  mov    %ebx,0xc(%esp)
08684885 +0x9b:  mov    %ecx,0x8(%esp)
08684889 +0x9f:  movl   $"MailS,%s,%d,%d,%d,%d,%d,\"%s\",%s",0x4(%esp)
08684891 +0xa7:  mov    %eax,(%esp)
08684894 +0xaa:  call   0867c8fe <_ZN5CUser10LogHistoryEPKcz>  ; CUser::LogHistory(char const*, ...)
08684899 +0xaf:  jmp    0868489f <+0xb5>
0868489b +0xb1:  nop
0868489c +0xb2:  jmp    0868489f <+0xb5>
0868489e +0xb4:  nop
0868489f +0xb5:  add    $0x4c,%esp
086848a2 +0xb8:  pop    %ebx
086848a3 +0xb9:  pop    %esi
086848a4 +0xba:  pop    %edi
086848a5 +0xbb:  pop    %ebp
086848a6 +0xbc:  ret
086848a7 +0xbd:  nop
```

## 反编译 C

```c
// cUserHistoryLog::SendMail @ 0x86847ea

/* cUserHistoryLog::SendMail(MSG_MAILBOX_SEND*, unsigned int) */

void __thiscall
cUserHistoryLog::SendMail(cUserHistoryLog *this,MSG_MAILBOX_SEND *param_1,uint param_2)

{
  undefined4 uVar1;
  
  if ((param_1 != (MSG_MAILBOX_SEND *)0x0) && (param_1 != (MSG_MAILBOX_SEND *)0xffffffef)) {
    uVar1 = NumberToString(param_2,0);
    CUser::LogHistory(*(CUser **)this,"MailS,%s,%d,%d,%d,%d,%d,\"%s\",%s",param_1 + 0x11,
                      *(undefined4 *)(param_1 + 0x2e),(uint)(byte)param_1[0x36],
                      (uint)*(ushort *)(param_1 + 0x37),*(undefined4 *)(param_1 + 0x39),
                      *(undefined4 *)(param_1 + 0x3d),param_1 + 0x45,uVar1);
  }
  return;
}
```
