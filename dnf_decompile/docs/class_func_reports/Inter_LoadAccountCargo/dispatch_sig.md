# dispatch_sig

`_ZN22Inter_LoadAccountCargo12dispatch_sigEP5CUserPci`

`Inter_LoadAccountCargo::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_LoadAccountCargo` | `0x084e24ec` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084e24ec  _ZN22Inter_LoadAccountCargo12dispatch_sigEP5CUserPci
#           Inter_LoadAccountCargo::dispatch_sig(CUser*, char*, int)
# range [0x084e24ec, 0x084e25cb]
084e24ec +0x00:  push   %ebp
084e24ed +0x01:  mov    %esp,%ebp
084e24ef +0x03:  push   %esi
084e24f0 +0x04:  push   %ebx
084e24f1 +0x05:  sub    $0x30,%esp
084e24f4 +0x08:  mov    0x10(%ebp),%eax
084e24f7 +0x0b:  mov    %eax,-0xc(%ebp)
084e24fa +0x0e:  mov    0xc(%ebp),%eax
084e24fd +0x11:  mov    %eax,(%esp)
084e2500 +0x14:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
084e2505 +0x19:  cmp    $0x1,%eax
084e2508 +0x1c:  setle  %al
084e250b +0x1f:  test   %al,%al
084e250d +0x21:  je     084e2519 <+0x2d>
084e250f +0x23:  mov    $0x0,%eax
084e2514 +0x28:  jmp    084e25c4 <+0xd8>
084e2519 +0x2d:  mov    0xc(%ebp),%eax
084e251c +0x30:  mov    %eax,(%esp)
084e251f +0x33:  call   0822fc30 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x52da>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x52da
084e2524 +0x38:  test   %al,%al
084e2526 +0x3a:  je     084e2597 <+0xab>
084e2528 +0x3c:  mov    0xc(%ebp),%eax
084e252b +0x3f:  mov    %eax,(%esp)
084e252e +0x42:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
084e2533 +0x47:  movl   $0x0,0x4(%esp)
084e253b +0x4f:  mov    %eax,(%esp)
084e253e +0x52:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
084e2543 +0x57:  mov    %eax,%esi
084e2545 +0x59:  mov    0xc(%ebp),%eax
084e2548 +0x5c:  mov    %eax,(%esp)
084e254b +0x5f:  call   08101072 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x94>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x94
084e2550 +0x64:  mov    %eax,%ebx
084e2552 +0x66:  movl   $0x5,0xc(%esp)
084e255a +0x6e:  movl   $0x51e9,0x8(%esp)
084e2562 +0x76:  movl   $&_ZZN22Inter_LoadAccountCargo12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x4(%esp)
084e256a +0x7e:  lea    -0x1c(%ebp),%eax
084e256d +0x81:  mov    %eax,(%esp)
084e2570 +0x84:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
084e2575 +0x89:  mov    %esi,0xc(%esp)
084e2579 +0x8d:  mov    %ebx,0x8(%esp)
084e257d +0x91:  movl   $"AccountCargo duplicated!(%s(%s))",0x4(%esp)
084e2585 +0x99:  lea    -0x1c(%ebp),%eax
084e2588 +0x9c:  mov    %eax,(%esp)
084e258b +0x9f:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
084e2590 +0xa4:  mov    $0x0,%eax
084e2595 +0xa9:  jmp    084e25c4 <+0xd8>
084e2597 +0xab:  mov    -0xc(%ebp),%eax
084e259a +0xae:  mov    (%eax),%edx
084e259c +0xb0:  mov    -0xc(%ebp),%eax
084e259f +0xb3:  mov    0x4(%eax),%eax
084e25a2 +0xb6:  mov    -0xc(%ebp),%ecx
084e25a5 +0xb9:  add    $0x8,%ecx
084e25a8 +0xbc:  mov    %edx,0xc(%esp)
084e25ac +0xc0:  mov    %eax,0x8(%esp)
084e25b0 +0xc4:  mov    %ecx,0x4(%esp)
084e25b4 +0xc8:  mov    0xc(%ebp),%eax
084e25b7 +0xcb:  mov    %eax,(%esp)
084e25ba +0xce:  call   0867d86e <_ZN5CUser21SetAccountCargoDBDataEP10Inven_Itemjj>  ; CUser::SetAccountCargoDBData(Inven_Item*, unsigned int, unsigned int)
084e25bf +0xd3:  mov    $0x0,%eax
084e25c4 +0xd8:  add    $0x30,%esp
084e25c7 +0xdb:  pop    %ebx
084e25c8 +0xdc:  pop    %esi
084e25c9 +0xdd:  pop    %ebp
084e25ca +0xde:  ret
084e25cb +0xdf:  nop
```

## 反编译 C

```c
// Inter_LoadAccountCargo::dispatch_sig @ 0x84e24ec

/* Inter_LoadAccountCargo::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_LoadAccountCargo::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  cMyTrace local_20 [16];
  uint *local_10;
  
  local_10 = (uint *)param_3;
  iVar2 = CUser::get_state((CUser *)param_2);
  if (1 < iVar2) {
    cVar1 = CUser::IsExistAccountCargo((CUser *)param_2);
    if (cVar1 == '\0') {
      CUser::SetAccountCargoDBData
                ((CUser *)param_2,(Inven_Item *)(local_10 + 2),local_10[1],*local_10);
    }
    else {
      uVar3 = CUser::get_acc_id((CUser *)param_2);
      uVar4 = NumberToString(uVar3,0);
      uVar5 = CUser::get_acc_name((CUser *)param_2);
      cMyTrace::cMyTrace(local_20,
                         "virtual int Inter_LoadAccountCargo::dispatch_sig(CUser*, char*, int)",
                         0x51e9,5);
      cMyTrace::operator()(local_20,"AccountCargo duplicated!(%s(%s))",uVar5,uVar4);
    }
  }
  return 0;
}
```
