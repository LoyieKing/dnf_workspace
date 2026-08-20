# SendMailForCeraShopGift

`_ZN15cUserHistoryLog23SendMailForCeraShopGiftEjcjj`

`cUserHistoryLog::SendMailForCeraShopGift(unsigned int, char, unsigned int, unsigned int)`

| 类 | 地址 |
|---|---|
| `cUserHistoryLog` | `0x086848da` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086848da  _ZN15cUserHistoryLog23SendMailForCeraShopGiftEjcjj
#           cUserHistoryLog::SendMailForCeraShopGift(unsigned int, char, unsigned int, unsigned int)
# range [0x086848da, 0x08684919]
086848da +0x00:  push   %ebp
086848db +0x01:  mov    %esp,%ebp
086848dd +0x03:  sub    $0x38,%esp
086848e0 +0x06:  mov    0x10(%ebp),%eax
086848e3 +0x09:  mov    %al,-0xc(%ebp)
086848e6 +0x0c:  movsbl -0xc(%ebp),%edx
086848ea +0x10:  mov    0x8(%ebp),%eax
086848ed +0x13:  mov    (%eax),%eax
086848ef +0x15:  mov    0x18(%ebp),%ecx
086848f2 +0x18:  mov    %ecx,0x14(%esp)
086848f6 +0x1c:  mov    0x14(%ebp),%ecx
086848f9 +0x1f:  mov    %ecx,0x10(%esp)
086848fd +0x23:  mov    %edx,0xc(%esp)
08684901 +0x27:  mov    0xc(%ebp),%edx
08684904 +0x2a:  mov    %edx,0x8(%esp)
08684908 +0x2e:  movl   $"MailSG,%u,%d,%u,%u",0x4(%esp)
08684910 +0x36:  mov    %eax,(%esp)
08684913 +0x39:  call   0867c8fe <_ZN5CUser10LogHistoryEPKcz>  ; CUser::LogHistory(char const*, ...)
08684918 +0x3e:  leave
08684919 +0x3f:  ret
```

## 反编译 C

```c
// cUserHistoryLog::SendMailForCeraShopGift @ 0x86848da

/* cUserHistoryLog::SendMailForCeraShopGift(unsigned int, char, unsigned int, unsigned int) */

void __thiscall
cUserHistoryLog::SendMailForCeraShopGift
          (cUserHistoryLog *this,uint param_1,char param_2,uint param_3,uint param_4)

{
  CUser::LogHistory(*(CUser **)this,"MailSG,%u,%d,%u,%u",param_1,(int)param_2,param_3,param_4);
  return;
}
```
