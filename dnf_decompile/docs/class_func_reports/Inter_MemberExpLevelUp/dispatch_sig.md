# dispatch_sig

`_ZN22Inter_MemberExpLevelUp12dispatch_sigEP5CUserPci`

`Inter_MemberExpLevelUp::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_MemberExpLevelUp` | `0x084d1448` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084d1448  _ZN22Inter_MemberExpLevelUp12dispatch_sigEP5CUserPci
#           Inter_MemberExpLevelUp::dispatch_sig(CUser*, char*, int)
# range [0x084d1448, 0x084d14af]
084d1448 +0x00:  push   %ebp
084d1449 +0x01:  mov    %esp,%ebp
084d144b +0x03:  sub    $0x28,%esp
084d144e +0x06:  mov    0xc(%ebp),%eax
084d1451 +0x09:  mov    %eax,(%esp)
084d1454 +0x0c:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
084d1459 +0x11:  test   %eax,%eax
084d145b +0x13:  sete   %al
084d145e +0x16:  test   %al,%al
084d1460 +0x18:  je     084d1469 <+0x21>
084d1462 +0x1a:  mov    $0x0,%eax
084d1467 +0x1f:  jmp    084d14ae <+0x66>
084d1469 +0x21:  mov    0x10(%ebp),%eax
084d146c +0x24:  mov    %eax,-0xc(%ebp)
084d146f +0x27:  mov    0xc(%ebp),%eax
084d1472 +0x2a:  mov    %eax,(%esp)
084d1475 +0x2d:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
084d147a +0x32:  mov    -0xc(%ebp),%edx
084d147d +0x35:  mov    0xe(%edx),%edx
084d1480 +0x38:  cmp    %edx,%eax
084d1482 +0x3a:  setne  %al
084d1485 +0x3d:  test   %al,%al
084d1487 +0x3f:  je     084d1490 <+0x48>
084d1489 +0x41:  mov    $0x0,%eax
084d148e +0x46:  jmp    084d14ae <+0x66>
084d1490 +0x48:  mov    -0xc(%ebp),%eax
084d1493 +0x4b:  movzbl 0x12(%eax),%eax
084d1497 +0x4f:  movzbl %al,%edx
084d149a +0x52:  mov    0xc(%ebp),%eax
084d149d +0x55:  mov    %edx,0x4(%esp)
084d14a1 +0x59:  mov    %eax,(%esp)
084d14a4 +0x5c:  call   08645b80 <_ZN15CUserCharacInfo25set_uppermember_exp_levelEh>  ; CUserCharacInfo::set_uppermember_exp_level(unsigned char)
084d14a9 +0x61:  mov    $0x0,%eax
084d14ae +0x66:  leave
084d14af +0x67:  ret
```

## 反编译 C

```c
// Inter_MemberExpLevelUp::dispatch_sig @ 0x84d1448

/* Inter_MemberExpLevelUp::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_MemberExpLevelUp::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  int iVar1;
  
  iVar1 = CUser::get_state((CUser *)param_2);
  if ((iVar1 != 0) &&
     (iVar1 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2),
     iVar1 == *(int *)(param_3 + 0xe))) {
    CUserCharacInfo::set_uppermember_exp_level
              ((CUserCharacInfo *)param_2,*(uchar *)(param_3 + 0x12));
  }
  return 0;
}
```
