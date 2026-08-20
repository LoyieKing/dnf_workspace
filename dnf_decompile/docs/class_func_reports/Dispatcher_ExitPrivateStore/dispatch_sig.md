# dispatch_sig

`_ZN27Dispatcher_ExitPrivateStore12dispatch_sigEP5CUserR9PacketBuf`

`Dispatcher_ExitPrivateStore::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_ExitPrivateStore` | `0x0820269c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0820269c  _ZN27Dispatcher_ExitPrivateStore12dispatch_sigEP5CUserR9PacketBuf
#           Dispatcher_ExitPrivateStore::dispatch_sig(CUser*, PacketBuf&)
# range [0x0820269c, 0x0820271b]
0820269c +0x00:  push   %ebp
0820269d +0x01:  mov    %esp,%ebp
0820269f +0x03:  sub    $0x28,%esp
082026a2 +0x06:  mov    0xc(%ebp),%eax
082026a5 +0x09:  mov    %eax,(%esp)
082026a8 +0x0c:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
082026ad +0x11:  cmp    $0x2,%eax
082026b0 +0x14:  jle    082026c1 <+0x25>
082026b2 +0x16:  mov    0xc(%ebp),%eax
082026b5 +0x19:  mov    %eax,(%esp)
082026b8 +0x1c:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
082026bd +0x21:  test   %eax,%eax
082026bf +0x23:  jne    082026c8 <+0x2c>
082026c1 +0x25:  mov    $0x1,%eax
082026c6 +0x2a:  jmp    082026cd <+0x31>
082026c8 +0x2c:  mov    $0x0,%eax
082026cd +0x31:  test   %al,%al
082026cf +0x33:  je     082026d8 <+0x3c>
082026d1 +0x35:  mov    $0x0,%eax
082026d6 +0x3a:  jmp    08202719 <+0x7d>
082026d8 +0x3c:  movl   $0x0,-0xc(%ebp)
082026df +0x43:  call   085c4be8 <_ZN13private_store26GetInstancePrivateStoreMgrEv>  ; private_store::GetInstancePrivateStoreMgr()
082026e4 +0x48:  movl   $0x0,0xc(%esp)
082026ec +0x50:  mov    0xc(%ebp),%edx
082026ef +0x53:  mov    %edx,0x8(%esp)
082026f3 +0x57:  lea    -0xc(%ebp),%edx
082026f6 +0x5a:  mov    %edx,0x4(%esp)
082026fa +0x5e:  mov    %eax,(%esp)
082026fd +0x61:  call   085ca7b8 <_ZN13private_store16CPrivateStoreMgr13GetStoreBuyerEPPNS_6IBuyerEP5CUserS5_>  ; private_store::CPrivateStoreMgr::GetStoreBuyer(private_store::IBuyer**, CUser*, CUser*)
08202702 +0x66:  mov    -0xc(%ebp),%eax
08202705 +0x69:  mov    (%eax),%eax
08202707 +0x6b:  add    $0xc,%eax
0820270a +0x6e:  mov    (%eax),%edx
0820270c +0x70:  mov    -0xc(%ebp),%eax
0820270f +0x73:  mov    %eax,(%esp)
08202712 +0x76:  call   *%edx
08202714 +0x78:  mov    $0x0,%eax
08202719 +0x7d:  leave
0820271a +0x7e:  ret
0820271b +0x7f:  nop
```

## 反编译 C

```c
// Dispatcher_ExitPrivateStore::dispatch_sig @ 0x820269c

/* Dispatcher_ExitPrivateStore::dispatch_sig(CUser*, PacketBuf&) */

undefined4 Dispatcher_ExitPrivateStore::dispatch_sig(CUser *param_1,PacketBuf *param_2)

{
  bool bVar1;
  int iVar2;
  CPrivateStoreMgr *this;
  IBuyer *local_10 [3];
  
  iVar2 = CUser::get_state((CUser *)param_2);
  if ((iVar2 < 3) ||
     (iVar2 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_2), iVar2 == 0)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (!bVar1) {
    local_10[0] = (IBuyer *)0x0;
    this = (CPrivateStoreMgr *)private_store::GetInstancePrivateStoreMgr();
    private_store::CPrivateStoreMgr::GetStoreBuyer(this,local_10,(CUser *)param_2,(CUser *)0x0);
    (**(code **)(*(int *)local_10[0] + 0xc))(local_10[0]);
  }
  return 0;
}
```
