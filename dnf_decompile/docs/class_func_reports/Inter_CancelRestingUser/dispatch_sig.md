# dispatch_sig

`_ZN23Inter_CancelRestingUser12dispatch_sigEP5CUserPci`

`Inter_CancelRestingUser::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_CancelRestingUser` | `0x084dccb8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084dccb8  _ZN23Inter_CancelRestingUser12dispatch_sigEP5CUserPci
#           Inter_CancelRestingUser::dispatch_sig(CUser*, char*, int)
# range [0x084dccb8, 0x084dccdd]
084dccb8 +0x00:  push   %ebp
084dccb9 +0x01:  mov    %esp,%ebp
084dccbb +0x03:  sub    $0x18,%esp
084dccbe +0x06:  cmpl   $0x0,0xc(%ebp)
084dccc2 +0x0a:  je     084dccd7 <+0x1f>
084dccc4 +0x0c:  movl   $0x0,0x4(%esp)
084dcccc +0x14:  mov    0xc(%ebp),%eax
084dcccf +0x17:  mov    %eax,(%esp)
084dccd2 +0x1a:  call   084ecf3e <_GLOBAL__I__Z7getUserj+0x3ef0>  ; global constructors keyed to getUser(unsigned int)+0x3ef0
084dccd7 +0x1f:  mov    $0x0,%eax
084dccdc +0x24:  leave
084dccdd +0x25:  ret
```

## 反编译 C

```c
// Inter_CancelRestingUser::dispatch_sig @ 0x84dccb8

/* Inter_CancelRestingUser::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_CancelRestingUser::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  if (param_2 != (char *)0x0) {
    CUser::setRestingUserRestrict((CUser *)param_2,false);
  }
  return 0;
}
```
