# dispatch_sig

`_ZN34Inter_GoldControlMoneyActionCancel12dispatch_sigEP5CUserPci`

`Inter_GoldControlMoneyActionCancel::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_GoldControlMoneyActionCancel` | `0x084e4fe8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084e4fe8  _ZN34Inter_GoldControlMoneyActionCancel12dispatch_sigEP5CUserPci
#           Inter_GoldControlMoneyActionCancel::dispatch_sig(CUser*, char*, int)
# range [0x084e4fe8, 0x084e503b]
084e4fe8 +0x00:  push   %ebp
084e4fe9 +0x01:  mov    %esp,%ebp
084e4feb +0x03:  sub    $0x28,%esp
084e4fee +0x06:  mov    0x10(%ebp),%eax
084e4ff1 +0x09:  mov    %eax,-0xc(%ebp)
084e4ff4 +0x0c:  cmpl   $0x0,0xc(%ebp)
084e4ff8 +0x10:  je     084e5035 <+0x4d>
084e4ffa +0x12:  mov    -0xc(%ebp),%eax
084e4ffd +0x15:  movzbl (%eax),%eax
084e5000 +0x18:  test   %al,%al
084e5002 +0x1a:  je     084e5016 <+0x2e>
084e5004 +0x1c:  mov    0xc(%ebp),%eax
084e5007 +0x1f:  add    $0x8e980,%eax
084e500c +0x24:  mov    %eax,(%esp)
084e500f +0x27:  call   08287e56 <_ZN16Secu_GoldControl11MailSameMidEv>  ; Secu_GoldControl::MailSameMid()
084e5014 +0x2c:  jmp    084e5035 <+0x4d>
084e5016 +0x2e:  mov    -0xc(%ebp),%eax
084e5019 +0x31:  movzbl 0x1(%eax),%eax
084e501d +0x35:  movzbl %al,%eax
084e5020 +0x38:  mov    0xc(%ebp),%edx
084e5023 +0x3b:  add    $0x8e980,%edx
084e5029 +0x41:  mov    %eax,0x4(%esp)
084e502d +0x45:  mov    %edx,(%esp)
084e5030 +0x48:  call   08287e68 <_ZN16Secu_GoldControl12MailCompleteEb>  ; Secu_GoldControl::MailComplete(bool)
084e5035 +0x4d:  mov    $0x0,%eax
084e503a +0x52:  leave
084e503b +0x53:  ret
```

## 反编译 C

```c
// Inter_GoldControlMoneyActionCancel::dispatch_sig @ 0x84e4fe8

/* Inter_GoldControlMoneyActionCancel::dispatch_sig(CUser*, char*, int) */

undefined4
Inter_GoldControlMoneyActionCancel::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  if (param_2 != (char *)0x0) {
    if (*(char *)param_3 == '\0') {
      Secu_GoldControl::MailComplete((Secu_GoldControl *)(param_2 + 0x8e980),*(bool *)(param_3 + 1))
      ;
    }
    else {
      Secu_GoldControl::MailSameMid((Secu_GoldControl *)(param_2 + 0x8e980));
    }
  }
  return 0;
}
```
