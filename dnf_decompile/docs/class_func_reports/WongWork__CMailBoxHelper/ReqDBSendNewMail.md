# ReqDBSendNewMail

`_ZN8WongWork14CMailBoxHelper16ReqDBSendNewMailEP5CUserRK10Inven_ItemjjbPKci`

`WongWork::CMailBoxHelper::ReqDBSendNewMail(CUser*, Inven_Item const&, unsigned int, unsigned int, bool, char const*, int)`

| 类 | 地址 |
|---|---|
| `WongWork::CMailBoxHelper` | `0x08555ac8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08555ac8  _ZN8WongWork14CMailBoxHelper16ReqDBSendNewMailEP5CUserRK10Inven_ItemjjbPKci
#           WongWork::CMailBoxHelper::ReqDBSendNewMail(CUser*, Inven_Item const&, unsigned int, unsigned int, bool, char const*, int)
# range [0x08555ac8, 0x08555b13]
08555ac8 +0x00:  push   %ebp
08555ac9 +0x01:  mov    %esp,%ebp
08555acb +0x03:  sub    $0x38,%esp
08555ace +0x06:  mov    0x18(%ebp),%eax
08555ad1 +0x09:  mov    %al,-0xc(%ebp)
08555ad4 +0x0c:  movzbl -0xc(%ebp),%eax
08555ad8 +0x10:  movl   $0x0,0x1c(%esp)
08555ae0 +0x18:  mov    0x20(%ebp),%edx
08555ae3 +0x1b:  mov    %edx,0x18(%esp)
08555ae7 +0x1f:  mov    0x1c(%ebp),%edx
08555aea +0x22:  mov    %edx,0x14(%esp)
08555aee +0x26:  mov    %eax,0x10(%esp)
08555af2 +0x2a:  mov    0x14(%ebp),%eax
08555af5 +0x2d:  mov    %eax,0xc(%esp)
08555af9 +0x31:  mov    0x10(%ebp),%eax
08555afc +0x34:  mov    %eax,0x8(%esp)
08555b00 +0x38:  mov    0xc(%ebp),%eax
08555b03 +0x3b:  mov    %eax,0x4(%esp)
08555b07 +0x3f:  mov    0x8(%ebp),%eax
08555b0a +0x42:  mov    %eax,(%esp)
08555b0d +0x45:  call   08555916 <_ZN8WongWork14CMailBoxHelper14_DoSendNewMailEP5CUserRK10Inven_ItemjjbPKcii>  ; WongWork::CMailBoxHelper::_DoSendNewMail(CUser*, Inven_Item const&, unsigned int, unsigned int, bool, char const*, int, int)
08555b12 +0x4a:  leave
08555b13 +0x4b:  ret
```

## 反编译 C

```c
// WongWork::CMailBoxHelper::ReqDBSendNewMail @ 0x8555ac8

/* WongWork::CMailBoxHelper::ReqDBSendNewMail(CUser*, Inven_Item const&, unsigned int, unsigned int,
   bool, char const*, int) */

void WongWork::CMailBoxHelper::ReqDBSendNewMail
               (CUser *param_1,Inven_Item *param_2,uint param_3,uint param_4,bool param_5,
               char *param_6,int param_7)

{
  _DoSendNewMail(param_1,param_2,param_3,param_4,param_5,param_6,param_7,0);
  return;
}
```
