# dispatch_sig

`_ZN21Dispatcher_MoveToGate12dispatch_sigEP5CUserR9PacketBuf`

`Dispatcher_MoveToGate::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_MoveToGate` | `0x08203350` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08203350  _ZN21Dispatcher_MoveToGate12dispatch_sigEP5CUserR9PacketBuf
#           Dispatcher_MoveToGate::dispatch_sig(CUser*, PacketBuf&)
# range [0x08203350, 0x082033e5]
08203350 +0x00:  push   %ebp
08203351 +0x01:  mov    %esp,%ebp
08203353 +0x03:  sub    $0x28,%esp
08203356 +0x06:  mov    0xc(%ebp),%eax
08203359 +0x09:  mov    %eax,(%esp)
0820335c +0x0c:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
08203361 +0x11:  cmp    $0x3,%eax
08203364 +0x14:  jne    08203375 <+0x25>
08203366 +0x16:  mov    0xc(%ebp),%eax
08203369 +0x19:  mov    %eax,(%esp)
0820336c +0x1c:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
08203371 +0x21:  test   %eax,%eax
08203373 +0x23:  jne    0820337c <+0x2c>
08203375 +0x25:  mov    $0x1,%eax
0820337a +0x2a:  jmp    08203381 <+0x31>
0820337c +0x2c:  mov    $0x0,%eax
08203381 +0x31:  test   %al,%al
08203383 +0x33:  je     082033ab <+0x5b>
08203385 +0x35:  movl   $0x0,0xc(%esp)
0820338d +0x3d:  movl   $0x0,0x8(%esp)
08203395 +0x45:  movl   $&_ZZN21Dispatcher_MoveToGate12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
0820339d +0x4d:  movl   $0x9a0d,(%esp)
082033a4 +0x54:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
082033a9 +0x59:  jmp    082033e4 <+0x94>
082033ab +0x5b:  movl   $0x0,-0xc(%ebp)
082033b2 +0x62:  call   085c4be8 <_ZN13private_store26GetInstancePrivateStoreMgrEv>  ; private_store::GetInstancePrivateStoreMgr()
082033b7 +0x67:  mov    0xc(%ebp),%edx
082033ba +0x6a:  mov    %edx,0x8(%esp)
082033be +0x6e:  lea    -0xc(%ebp),%edx
082033c1 +0x71:  mov    %edx,0x4(%esp)
082033c5 +0x75:  mov    %eax,(%esp)
082033c8 +0x78:  call   085ca698 <_ZN13private_store16CPrivateStoreMgr14GetStoreSellerEPPNS_7ISellerEP5CUser>  ; private_store::CPrivateStoreMgr::GetStoreSeller(private_store::ISeller**, CUser*)
082033cd +0x7d:  mov    -0xc(%ebp),%eax
082033d0 +0x80:  mov    (%eax),%eax
082033d2 +0x82:  add    $0xc,%eax
082033d5 +0x85:  mov    (%eax),%edx
082033d7 +0x87:  mov    -0xc(%ebp),%eax
082033da +0x8a:  mov    %eax,(%esp)
082033dd +0x8d:  call   *%edx
082033df +0x8f:  mov    $0x0,%eax
082033e4 +0x94:  leave
082033e5 +0x95:  ret
```

## 反编译 C

```c
// Dispatcher_MoveToGate::dispatch_sig @ 0x8203350

/* Dispatcher_MoveToGate::dispatch_sig(CUser*, PacketBuf&) */

undefined4 Dispatcher_MoveToGate::dispatch_sig(CUser *param_1,PacketBuf *param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  CPrivateStoreMgr *this;
  ISeller *local_10 [3];
  
  iVar2 = CUser::get_state((CUser *)param_2);
  if (iVar2 == 3) {
    iVar2 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_2);
    if (iVar2 != 0) {
      bVar1 = false;
      goto LAB_08203381;
    }
  }
  bVar1 = true;
LAB_08203381:
  if (bVar1) {
    uVar3 = LineFunc(0x9a0d,"virtual int Dispatcher_MoveToGate::dispatch_sig(CUser*, PacketBuf&)",0,
                     0);
  }
  else {
    local_10[0] = (ISeller *)0x0;
    this = (CPrivateStoreMgr *)private_store::GetInstancePrivateStoreMgr();
    private_store::CPrivateStoreMgr::GetStoreSeller(this,local_10,(CUser *)param_2);
    (**(code **)(*(int *)local_10[0] + 0xc))(local_10[0]);
    uVar3 = 0;
  }
  return uVar3;
}
```
