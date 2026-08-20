# dispatch_sig

`_ZN36Dispatcher_BloodRoundUiPrepareFinish12dispatch_sigEP5CUserR9PacketBuf`

`Dispatcher_BloodRoundUiPrepareFinish::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_BloodRoundUiPrepareFinish` | `0x08222270` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08222270  _ZN36Dispatcher_BloodRoundUiPrepareFinish12dispatch_sigEP5CUserR9PacketBuf
#           Dispatcher_BloodRoundUiPrepareFinish::dispatch_sig(CUser*, PacketBuf&)
# range [0x08222270, 0x082223a5]
08222270 +0x000:  push   %ebp
08222271 +0x001:  mov    %esp,%ebp
08222273 +0x003:  sub    $0x28,%esp
08222276 +0x006:  cmpl   $0x0,0xc(%ebp)
0822227a +0x00a:  jne    082222a5 <+0x35>
0822227c +0x00c:  movl   $0x0,0xc(%esp)
08222284 +0x014:  movl   $0x0,0x8(%esp)
0822228c +0x01c:  movl   $&_ZZN36Dispatcher_BloodRoundUiPrepareFinish12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08222294 +0x024:  movl   $0xdbbf,(%esp)
0822229b +0x02b:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
082222a0 +0x030:  jmp    082223a4 <+0x134>
082222a5 +0x035:  mov    0xc(%ebp),%eax
082222a8 +0x038:  mov    %eax,(%esp)
082222ab +0x03b:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
082222b0 +0x040:  test   %eax,%eax
082222b2 +0x042:  sete   %al
082222b5 +0x045:  test   %al,%al
082222b7 +0x047:  je     082222e2 <+0x72>
082222b9 +0x049:  movl   $0x0,0xc(%esp)
082222c1 +0x051:  movl   $0x0,0x8(%esp)
082222c9 +0x059:  movl   $&_ZZN36Dispatcher_BloodRoundUiPrepareFinish12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
082222d1 +0x061:  movl   $0xdbc0,(%esp)
082222d8 +0x068:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
082222dd +0x06d:  jmp    082223a4 <+0x134>
082222e2 +0x072:  mov    0xc(%ebp),%eax
082222e5 +0x075:  mov    %eax,(%esp)
082222e8 +0x078:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
082222ed +0x07d:  cmp    $0x5,%eax
082222f0 +0x080:  setne  %al
082222f3 +0x083:  test   %al,%al
082222f5 +0x085:  je     08222320 <+0xb0>
082222f7 +0x087:  movl   $0x0,0xc(%esp)
082222ff +0x08f:  movl   $0x0,0x8(%esp)
08222307 +0x097:  movl   $&_ZZN36Dispatcher_BloodRoundUiPrepareFinish12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
0822230f +0x09f:  movl   $0xdbc2,(%esp)
08222316 +0x0a6:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0822231b +0x0ab:  jmp    082223a4 <+0x134>
08222320 +0x0b0:  mov    0xc(%ebp),%eax
08222323 +0x0b3:  mov    %eax,(%esp)
08222326 +0x0b6:  call   0865514c <_ZN5CUser8GetPartyEv>  ; CUser::GetParty()
0822232b +0x0bb:  mov    %eax,-0x10(%ebp)
0822232e +0x0be:  cmpl   $0x0,-0x10(%ebp)
08222332 +0x0c2:  je     0822239f <+0x12f>
08222334 +0x0c4:  mov    -0x10(%ebp),%eax
08222337 +0x0c7:  mov    0xcac(%eax),%eax
0822233d +0x0cd:  mov    %eax,-0xc(%ebp)
08222340 +0x0d0:  cmpl   $0x0,-0xc(%ebp)
08222344 +0x0d4:  je     0822239f <+0x12f>
08222346 +0x0d6:  mov    -0xc(%ebp),%eax
08222349 +0x0d9:  movzbl 0x89f(%eax),%eax
08222350 +0x0e0:  test   %al,%al
08222352 +0x0e2:  jle    08222376 <+0x106>
08222354 +0x0e4:  mov    -0x10(%ebp),%eax
08222357 +0x0e7:  add    $0xb24,%eax
0822235c +0x0ec:  mov    %eax,(%esp)
0822235f +0x0ef:  call   0822d03e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x26e8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x26e8
08222364 +0x0f4:  movzbl 0x1(%eax),%eax
08222368 +0x0f8:  xor    $0x1,%eax
0822236b +0x0fb:  test   %al,%al
0822236d +0x0fd:  je     08222376 <+0x106>
0822236f +0x0ff:  mov    $0x1,%eax
08222374 +0x104:  jmp    0822237b <+0x10b>
08222376 +0x106:  mov    $0x0,%eax
0822237b +0x10b:  test   %al,%al
0822237d +0x10d:  je     0822239f <+0x12f>
0822237f +0x10f:  mov    -0x10(%ebp),%eax
08222382 +0x112:  add    $0xb24,%eax
08222387 +0x117:  movl   $0x0,0x8(%esp)
0822238f +0x11f:  movl   $0x0,0x4(%esp)
08222397 +0x127:  mov    %eax,(%esp)
0822239a +0x12a:  call   08304dd2 <_ZN13CBattle_Field22BloodSpawnTimerManagerEbb>  ; CBattle_Field::BloodSpawnTimerManager(bool, bool)
0822239f +0x12f:  mov    $0x0,%eax
082223a4 +0x134:  leave
082223a5 +0x135:  ret
```

## 反编译 C

```c
// Dispatcher_BloodRoundUiPrepareFinish::dispatch_sig @ 0x8222270

/* Dispatcher_BloodRoundUiPrepareFinish::dispatch_sig(CUser*, PacketBuf&) */

undefined4 Dispatcher_BloodRoundUiPrepareFinish::dispatch_sig(CUser *param_1,PacketBuf *param_2)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 == (PacketBuf *)0x0) {
    uVar2 = LineFunc(0xdbbf,
                     "virtual int Dispatcher_BloodRoundUiPrepareFinish::dispatch_sig(CUser*, PacketBuf&)"
                     ,0,0);
    return uVar2;
  }
  iVar3 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_2);
  if (iVar3 != 0) {
    iVar3 = CUser::get_state((CUser *)param_2);
    if (iVar3 == 5) {
      iVar3 = CUser::GetParty((CUser *)param_2);
      if ((iVar3 != 0) && (*(int *)(iVar3 + 0xcac) != 0)) {
        if ((*(char *)(*(int *)(iVar3 + 0xcac) + 0x89f) < '\x01') ||
           (iVar4 = CBattle_Field::GetMapInfo((CBattle_Field *)(iVar3 + 0xb24)),
           *(char *)(iVar4 + 1) == '\x01')) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          CBattle_Field::BloodSpawnTimerManager((CBattle_Field *)(iVar3 + 0xb24),false,false);
        }
      }
      return 0;
    }
    uVar2 = LineFunc(0xdbc2,
                     "virtual int Dispatcher_BloodRoundUiPrepareFinish::dispatch_sig(CUser*, PacketBuf&)"
                     ,0,0);
    return uVar2;
  }
  uVar2 = LineFunc(0xdbc0,
                   "virtual int Dispatcher_BloodRoundUiPrepareFinish::dispatch_sig(CUser*, PacketBuf&)"
                   ,0,0);
  return uVar2;
}
```
