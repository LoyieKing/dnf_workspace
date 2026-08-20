# dispatch_sig

`_ZN20Inter_GetUserRegdate12dispatch_sigEP5CUserPci`

`Inter_GetUserRegdate::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_GetUserRegdate` | `0x084e4fb6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084e4fb6  _ZN20Inter_GetUserRegdate12dispatch_sigEP5CUserPci
#           Inter_GetUserRegdate::dispatch_sig(CUser*, char*, int)
# range [0x084e4fb6, 0x084e4fe7]
084e4fb6 +0x00:  push   %ebp
084e4fb7 +0x01:  mov    %esp,%ebp
084e4fb9 +0x03:  sub    $0x28,%esp
084e4fbc +0x06:  mov    0x10(%ebp),%eax
084e4fbf +0x09:  mov    %eax,-0xc(%ebp)
084e4fc2 +0x0c:  mov    -0xc(%ebp),%eax
084e4fc5 +0x0f:  mov    0x8(%eax),%edx
084e4fc8 +0x12:  mov    -0xc(%ebp),%eax
084e4fcb +0x15:  mov    0x4(%eax),%eax
084e4fce +0x18:  mov    %edx,0x8(%esp)
084e4fd2 +0x1c:  mov    0xc(%ebp),%edx
084e4fd5 +0x1f:  mov    %edx,0x4(%esp)
084e4fd9 +0x23:  mov    %eax,(%esp)
084e4fdc +0x26:  call   08275315 <_Z21checkNewMemberHacklogjP5CUserj>  ; checkNewMemberHacklog(unsigned int, CUser*, unsigned int)
084e4fe1 +0x2b:  mov    $0x0,%eax
084e4fe6 +0x30:  leave
084e4fe7 +0x31:  ret
```

## 反编译 C

```c
// Inter_GetUserRegdate::dispatch_sig @ 0x84e4fb6

/* Inter_GetUserRegdate::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_GetUserRegdate::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  checkNewMemberHacklog(*(uint *)(param_3 + 4),(CUser *)param_2,*(uint *)(param_3 + 8));
  return 0;
}
```
