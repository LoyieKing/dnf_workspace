# dispatch_sig

`_ZN20Inter_SendSecuReward12dispatch_sigEP5CUserPci`

`Inter_SendSecuReward::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_SendSecuReward` | `0x084e5e1e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084e5e1e  _ZN20Inter_SendSecuReward12dispatch_sigEP5CUserPci
#           Inter_SendSecuReward::dispatch_sig(CUser*, char*, int)
# range [0x084e5e1e, 0x084e5e61]
084e5e1e +0x00:  push   %ebp
084e5e1f +0x01:  mov    %esp,%ebp
084e5e21 +0x03:  sub    $0x28,%esp
084e5e24 +0x06:  mov    0x10(%ebp),%eax
084e5e27 +0x09:  mov    %eax,-0xc(%ebp)
084e5e2a +0x0c:  mov    -0xc(%ebp),%eax
084e5e2d +0x0f:  mov    (%eax),%eax
084e5e2f +0x11:  test   %eax,%eax
084e5e31 +0x13:  jne    084e5e48 <+0x2a>
084e5e33 +0x15:  movl   $0x8,0x4(%esp)
084e5e3b +0x1d:  mov    0xc(%ebp),%eax
084e5e3e +0x20:  mov    %eax,(%esp)
084e5e41 +0x23:  call   08688328 <_ZN5CUser17AddSecuRewardItemEh>  ; CUser::AddSecuRewardItem(unsigned char)
084e5e46 +0x28:  jmp    084e5e5b <+0x3d>
084e5e48 +0x2a:  movl   $0x10,0x4(%esp)
084e5e50 +0x32:  mov    0xc(%ebp),%eax
084e5e53 +0x35:  mov    %eax,(%esp)
084e5e56 +0x38:  call   08688328 <_ZN5CUser17AddSecuRewardItemEh>  ; CUser::AddSecuRewardItem(unsigned char)
084e5e5b +0x3d:  mov    $0x0,%eax
084e5e60 +0x42:  leave
084e5e61 +0x43:  ret
```

## 反编译 C

```c
// Inter_SendSecuReward::dispatch_sig @ 0x84e5e1e

/* Inter_SendSecuReward::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_SendSecuReward::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  if (*(int *)param_3 == 0) {
    CUser::AddSecuRewardItem((uchar)param_2);
  }
  else {
    CUser::AddSecuRewardItem((uchar)param_2);
  }
  return 0;
}
```
