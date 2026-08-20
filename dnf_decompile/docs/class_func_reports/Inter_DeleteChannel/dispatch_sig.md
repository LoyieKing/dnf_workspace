# dispatch_sig

`_ZN19Inter_DeleteChannel12dispatch_sigEP5CUserPci`

`Inter_DeleteChannel::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_DeleteChannel` | `0x084bf7ea` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084bf7ea  _ZN19Inter_DeleteChannel12dispatch_sigEP5CUserPci
#           Inter_DeleteChannel::dispatch_sig(CUser*, char*, int)
# range [0x084bf7ea, 0x084bf80f]
084bf7ea +0x00:  push   %ebp
084bf7eb +0x01:  mov    %esp,%ebp
084bf7ed +0x03:  sub    $0x10,%esp
084bf7f0 +0x06:  mov    0x10(%ebp),%eax
084bf7f3 +0x09:  mov    %eax,-0x4(%ebp)
084bf7f6 +0x0c:  mov    -0x4(%ebp),%eax
084bf7f9 +0x0f:  mov    0x8(%eax),%eax
084bf7fc +0x12:  cmp    $0x1,%eax
084bf7ff +0x15:  jne    084bf808 <+0x1e>
084bf801 +0x17:  mov    $0x806,%eax
084bf806 +0x1c:  jmp    084bf80d <+0x23>
084bf808 +0x1e:  mov    $0x0,%eax
084bf80d +0x23:  leave
084bf80e +0x24:  ret
084bf80f +0x25:  nop
```

## 反编译 C

```c
// Inter_DeleteChannel::dispatch_sig @ 0x84bf7ea

/* Inter_DeleteChannel::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_DeleteChannel::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  undefined4 uVar1;
  
  if (*(int *)(param_3 + 8) == 1) {
    uVar1 = 0x806;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
```
