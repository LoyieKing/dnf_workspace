# dispatch_sig

`_ZN15Inter_UserRepel12dispatch_sigEP5CUserPci`

`Inter_UserRepel::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_UserRepel` | `0x084ce5c4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084ce5c4  _ZN15Inter_UserRepel12dispatch_sigEP5CUserPci
#           Inter_UserRepel::dispatch_sig(CUser*, char*, int)
# range [0x084ce5c4, 0x084ce5f3]
084ce5c4 +0x00:  push   %ebp
084ce5c5 +0x01:  mov    %esp,%ebp
084ce5c7 +0x03:  sub    $0x18,%esp
084ce5ca +0x06:  movl   $0x0,0xc(%esp)
084ce5d2 +0x0e:  movl   $0x1,0x8(%esp)
084ce5da +0x16:  movl   $0x14,0x4(%esp)
084ce5e2 +0x1e:  mov    0xc(%ebp),%eax
084ce5e5 +0x21:  mov    %eax,(%esp)
084ce5e8 +0x24:  call   086489f4 <_ZN5CUser10DisConnSigE11DISCONN_SIGbi>  ; CUser::DisConnSig(DISCONN_SIG, bool, int)
084ce5ed +0x29:  mov    $0x0,%eax
084ce5f2 +0x2e:  leave
084ce5f3 +0x2f:  ret
```

## 反编译 C

```c
// Inter_UserRepel::dispatch_sig @ 0x84ce5c4

/* Inter_UserRepel::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_UserRepel::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  CUser::DisConnSig((CUser *)param_2,0x14,1,0);
  return 0;
}
```
