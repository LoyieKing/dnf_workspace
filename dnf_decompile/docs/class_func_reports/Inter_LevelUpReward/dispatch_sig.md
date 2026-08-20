# dispatch_sig

`_ZN19Inter_LevelUpReward12dispatch_sigEP5CUserPci`

`Inter_LevelUpReward::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_LevelUpReward` | `0x084e4f56` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084e4f56  _ZN19Inter_LevelUpReward12dispatch_sigEP5CUserPci
#           Inter_LevelUpReward::dispatch_sig(CUser*, char*, int)
# range [0x084e4f56, 0x084e4fb5]
084e4f56 +0x00:  push   %ebp
084e4f57 +0x01:  mov    %esp,%ebp
084e4f59 +0x03:  sub    $0x28,%esp
084e4f5c +0x06:  mov    0xc(%ebp),%eax
084e4f5f +0x09:  mov    %eax,(%esp)
084e4f62 +0x0c:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
084e4f67 +0x11:  test   %eax,%eax
084e4f69 +0x13:  sete   %al
084e4f6c +0x16:  test   %al,%al
084e4f6e +0x18:  je     084e4f77 <+0x21>
084e4f70 +0x1a:  mov    $0x62a6,%eax
084e4f75 +0x1f:  jmp    084e4fb3 <+0x5d>
084e4f77 +0x21:  movl   $0x4,0x8(%esp)
084e4f7f +0x29:  mov    0x10(%ebp),%eax
084e4f82 +0x2c:  mov    %eax,0x4(%esp)
084e4f86 +0x30:  lea    -0xc(%ebp),%eax
084e4f89 +0x33:  mov    %eax,(%esp)
084e4f8c +0x36:  call   0807d8a0 <_init+0x198>
084e4f91 +0x3b:  mov    0x10(%ebp),%eax
084e4f94 +0x3e:  add    $0x4,%eax
084e4f97 +0x41:  movl   $0x4,0x8(%esp)
084e4f9f +0x49:  mov    %eax,0x4(%esp)
084e4fa3 +0x4d:  lea    -0x10(%ebp),%eax
084e4fa6 +0x50:  mov    %eax,(%esp)
084e4fa9 +0x53:  call   0807d8a0 <_init+0x198>
084e4fae +0x58:  mov    $0x0,%eax
084e4fb3 +0x5d:  leave
084e4fb4 +0x5e:  ret
084e4fb5 +0x5f:  nop
```

## 反编译 C

```c
// Inter_LevelUpReward::dispatch_sig @ 0x84e4f56

/* Inter_LevelUpReward::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_LevelUpReward::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 local_14 [4];
  undefined1 local_10 [12];
  
  iVar1 = CUser::get_state((CUser *)param_2);
  if (iVar1 == 0) {
    uVar2 = 0x62a6;
  }
  else {
    memcpy(local_10,(void *)param_3,4);
    memcpy(local_14,(void *)(param_3 + 4),4);
    uVar2 = 0;
  }
  return uVar2;
}
```
