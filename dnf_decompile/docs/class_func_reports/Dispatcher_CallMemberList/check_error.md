# check_error

`_ZN25Dispatcher_CallMemberList11check_errorEP5CUserR8MSG_BASE`

`Dispatcher_CallMemberList::check_error(CUser*, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_CallMemberList` | `0x081cbd44` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081cbd44  _ZN25Dispatcher_CallMemberList11check_errorEP5CUserR8MSG_BASE
#           Dispatcher_CallMemberList::check_error(CUser*, MSG_BASE&)
# range [0x081cbd44, 0x081cbda1]
081cbd44 +0x00:  push   %ebp
081cbd45 +0x01:  mov    %esp,%ebp
081cbd47 +0x03:  sub    $0x18,%esp
081cbd4a +0x06:  mov    0xc(%ebp),%eax
081cbd4d +0x09:  mov    %eax,(%esp)
081cbd50 +0x0c:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081cbd55 +0x11:  cmp    $0x2,%eax
081cbd58 +0x14:  jle    081cbd69 <+0x25>
081cbd5a +0x16:  mov    0xc(%ebp),%eax
081cbd5d +0x19:  mov    %eax,(%esp)
081cbd60 +0x1c:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
081cbd65 +0x21:  test   %eax,%eax
081cbd67 +0x23:  jne    081cbd70 <+0x2c>
081cbd69 +0x25:  mov    $0x1,%eax
081cbd6e +0x2a:  jmp    081cbd75 <+0x31>
081cbd70 +0x2c:  mov    $0x0,%eax
081cbd75 +0x31:  test   %al,%al
081cbd77 +0x33:  je     081cbd80 <+0x3c>
081cbd79 +0x35:  mov    $0xffffffff,%eax
081cbd7e +0x3a:  jmp    081cbda0 <+0x5c>
081cbd80 +0x3c:  mov    0xc(%ebp),%eax
081cbd83 +0x3f:  mov    %eax,(%esp)
081cbd86 +0x42:  call   0822f5c4 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4c6e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4c6e
081cbd8b +0x47:  test   %eax,%eax
081cbd8d +0x49:  sete   %al
081cbd90 +0x4c:  test   %al,%al
081cbd92 +0x4e:  je     081cbd9b <+0x57>
081cbd94 +0x50:  mov    $0x7fffffff,%eax
081cbd99 +0x55:  jmp    081cbda0 <+0x5c>
081cbd9b +0x57:  mov    $0x0,%eax
081cbda0 +0x5c:  leave
081cbda1 +0x5d:  ret
```

## 反编译 C

```c
// Dispatcher_CallMemberList::check_error @ 0x81cbd44

/* Dispatcher_CallMemberList::check_error(CUser*, MSG_BASE&) */

undefined4 Dispatcher_CallMemberList::check_error(CUser *param_1,MSG_BASE *param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = CUser::get_state((CUser *)param_2);
  if (2 < iVar2) {
    iVar2 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_2);
    if (iVar2 != 0) {
      bVar1 = false;
      goto LAB_081cbd75;
    }
  }
  bVar1 = true;
LAB_081cbd75:
  if (bVar1) {
    uVar3 = 0xffffffff;
  }
  else {
    iVar2 = CUserCharacInfo::get_charac_memberkey((CUserCharacInfo *)param_2);
    if (iVar2 == 0) {
      uVar3 = 0x7fffffff;
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}
```
