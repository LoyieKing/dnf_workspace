# dispatch_sig

`_ZN23DisPatcher_PvpHeartBeat12dispatch_sigEP5CUserR9PacketBuf`

`DisPatcher_PvpHeartBeat::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_PvpHeartBeat` | `0x08204458` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08204458  _ZN23DisPatcher_PvpHeartBeat12dispatch_sigEP5CUserR9PacketBuf
#           DisPatcher_PvpHeartBeat::dispatch_sig(CUser*, PacketBuf&)
# range [0x08204458, 0x082044af]
08204458 +0x00:  push   %ebp
08204459 +0x01:  mov    %esp,%ebp
0820445b +0x03:  sub    $0x18,%esp
0820445e +0x06:  mov    0xc(%ebp),%eax
08204461 +0x09:  mov    %eax,(%esp)
08204464 +0x0c:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
08204469 +0x11:  cmp    $0x1,%eax
0820446c +0x14:  jle    0820447d <+0x25>
0820446e +0x16:  mov    0xc(%ebp),%eax
08204471 +0x19:  mov    %eax,(%esp)
08204474 +0x1c:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
08204479 +0x21:  test   %eax,%eax
0820447b +0x23:  jne    08204484 <+0x2c>
0820447d +0x25:  mov    $0x1,%eax
08204482 +0x2a:  jmp    08204489 <+0x31>
08204484 +0x2c:  mov    $0x0,%eax
08204489 +0x31:  test   %al,%al
0820448b +0x33:  je     08204494 <+0x3c>
0820448d +0x35:  mov    $0x0,%eax
08204492 +0x3a:  jmp    082044ad <+0x55>
08204494 +0x3c:  call   082348df <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9f89>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9f89
08204499 +0x41:  mov    0xc(%ebp),%edx
0820449c +0x44:  mov    %edx,0x4(%esp)
082044a0 +0x48:  mov    %eax,(%esp)
082044a3 +0x4b:  call   08472408 <_ZN19disconnect_detecter19CDisconnectDetecter15RefreshRecvTimeEP5CUser>  ; disconnect_detecter::CDisconnectDetecter::RefreshRecvTime(CUser*)
082044a8 +0x50:  mov    $0x0,%eax
082044ad +0x55:  leave
082044ae +0x56:  ret
082044af +0x57:  nop
```

## 反编译 C

```c
// DisPatcher_PvpHeartBeat::dispatch_sig @ 0x8204458

/* DisPatcher_PvpHeartBeat::dispatch_sig(CUser*, PacketBuf&) */

undefined4 DisPatcher_PvpHeartBeat::dispatch_sig(CUser *param_1,PacketBuf *param_2)

{
  bool bVar1;
  int iVar2;
  CDisconnectDetecter *this;
  
  iVar2 = CUser::get_state((CUser *)param_2);
  if ((iVar2 < 2) ||
     (iVar2 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_2), iVar2 == 0)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (!bVar1) {
    this = (CDisconnectDetecter *)disconnect_detecter::GetInstanceDisconnectDetecter();
    disconnect_detecter::CDisconnectDetecter::RefreshRecvTime(this,(CUser *)param_2);
  }
  return 0;
}
```
