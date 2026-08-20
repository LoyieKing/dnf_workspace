# dispatch_sig

`_ZN32Dispatcher_OpenGuildCreateWindow12dispatch_sigEP5CUserR9PacketBuf`

`Dispatcher_OpenGuildCreateWindow::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_OpenGuildCreateWindow` | `0x08208a26` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08208a26  _ZN32Dispatcher_OpenGuildCreateWindow12dispatch_sigEP5CUserR9PacketBuf
#           Dispatcher_OpenGuildCreateWindow::dispatch_sig(CUser*, PacketBuf&)
# range [0x08208a26, 0x08208a9d]
08208a26 +0x00:  push   %ebp
08208a27 +0x01:  mov    %esp,%ebp
08208a29 +0x03:  sub    $0x18,%esp
08208a2c +0x06:  mov    0xc(%ebp),%eax
08208a2f +0x09:  mov    %eax,(%esp)
08208a32 +0x0c:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
08208a37 +0x11:  cmp    $0x2,%eax
08208a3a +0x14:  jle    08208a4b <+0x25>
08208a3c +0x16:  mov    0xc(%ebp),%eax
08208a3f +0x19:  mov    %eax,(%esp)
08208a42 +0x1c:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
08208a47 +0x21:  test   %eax,%eax
08208a49 +0x23:  jne    08208a52 <+0x2c>
08208a4b +0x25:  mov    $0x1,%eax
08208a50 +0x2a:  jmp    08208a57 <+0x31>
08208a52 +0x2c:  mov    $0x0,%eax
08208a57 +0x31:  test   %al,%al
08208a59 +0x33:  je     08208a81 <+0x5b>
08208a5b +0x35:  movl   $0x0,0xc(%esp)
08208a63 +0x3d:  movl   $0x0,0x8(%esp)
08208a6b +0x45:  movl   $&_ZZN32Dispatcher_OpenGuildCreateWindow12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08208a73 +0x4d:  movl   $0xa3e3,(%esp)
08208a7a +0x54:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08208a7f +0x59:  jmp    08208a9c <+0x76>
08208a81 +0x5b:  mov    0xc(%ebp),%eax
08208a84 +0x5e:  mov    %eax,(%esp)
08208a87 +0x61:  call   0822f48e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4b38>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4b38
08208a8c +0x66:  mov    0xc(%ebp),%eax
08208a8f +0x69:  mov    %eax,(%esp)
08208a92 +0x6c:  call   0822f4ac <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4b56>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4b56
08208a97 +0x71:  mov    $0x0,%eax
08208a9c +0x76:  leave
08208a9d +0x77:  ret
```

## 反编译 C

```c
// Dispatcher_OpenGuildCreateWindow::dispatch_sig @ 0x8208a26

/* Dispatcher_OpenGuildCreateWindow::dispatch_sig(CUser*, PacketBuf&) */

undefined4 Dispatcher_OpenGuildCreateWindow::dispatch_sig(CUser *param_1,PacketBuf *param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = CUser::get_state((CUser *)param_2);
  if (2 < iVar2) {
    iVar2 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_2);
    if (iVar2 != 0) {
      bVar1 = false;
      goto LAB_08208a57;
    }
  }
  bVar1 = true;
LAB_08208a57:
  if (bVar1) {
    uVar3 = LineFunc(0xa3e3,
                     "virtual int Dispatcher_OpenGuildCreateWindow::dispatch_sig(CUser*, PacketBuf&)"
                     ,0,0);
  }
  else {
    CUserCharacInfo::resetGuildCreateFlag((CUserCharacInfo *)param_2);
    CUserCharacInfo::resetTempGuildNameAddr((CUserCharacInfo *)param_2);
    uVar3 = 0;
  }
  return uVar3;
}
```
