# dispatch_sig

`_ZN27Dispatcher_ResponseCreature12dispatch_sigEP5CUserR9PacketBuf`

`Dispatcher_ResponseCreature::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_ResponseCreature` | `0x082037fa` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082037fa  _ZN27Dispatcher_ResponseCreature12dispatch_sigEP5CUserR9PacketBuf
#           Dispatcher_ResponseCreature::dispatch_sig(CUser*, PacketBuf&)
# range [0x082037fa, 0x08203877]
082037fa +0x00:  push   %ebp
082037fb +0x01:  mov    %esp,%ebp
082037fd +0x03:  sub    $0x18,%esp
08203800 +0x06:  mov    0xc(%ebp),%eax
08203803 +0x09:  mov    %eax,(%esp)
08203806 +0x0c:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
0820380b +0x11:  cmp    $0x3,%eax
0820380e +0x14:  jne    0820381f <+0x25>
08203810 +0x16:  mov    0xc(%ebp),%eax
08203813 +0x19:  mov    %eax,(%esp)
08203816 +0x1c:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
0820381b +0x21:  test   %eax,%eax
0820381d +0x23:  jne    08203826 <+0x2c>
0820381f +0x25:  mov    $0x1,%eax
08203824 +0x2a:  jmp    0820382b <+0x31>
08203826 +0x2c:  mov    $0x0,%eax
0820382b +0x31:  test   %al,%al
0820382d +0x33:  je     08203855 <+0x5b>
0820382f +0x35:  movl   $0x0,0xc(%esp)
08203837 +0x3d:  movl   $0x0,0x8(%esp)
0820383f +0x45:  movl   $&_ZZN27Dispatcher_ResponseCreature12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08203847 +0x4d:  movl   $0x9acf,(%esp)
0820384e +0x54:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08203853 +0x59:  jmp    08203875 <+0x7b>
08203855 +0x5b:  mov    0xc(%ebp),%eax
08203858 +0x5e:  mov    %eax,(%esp)
0820385b +0x61:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
08203860 +0x66:  mov    %eax,(%esp)
08203863 +0x69:  call   080dd568 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xb1>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xb1
08203868 +0x6e:  mov    %eax,(%esp)
0820386b +0x71:  call   0833a6d8 <_ZN13user_creature12CCreatureMgr16ResponseCreatureEv>  ; user_creature::CCreatureMgr::ResponseCreature()
08203870 +0x76:  mov    $0x0,%eax
08203875 +0x7b:  leave
08203876 +0x7c:  ret
08203877 +0x7d:  nop
```

## 反编译 C

```c
// Dispatcher_ResponseCreature::dispatch_sig @ 0x82037fa

/* Dispatcher_ResponseCreature::dispatch_sig(CUser*, PacketBuf&) */

undefined4 Dispatcher_ResponseCreature::dispatch_sig(CUser *param_1,PacketBuf *param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  CInventory *this;
  CCreatureMgr *this_00;
  
  iVar2 = CUser::get_state((CUser *)param_2);
  if (iVar2 == 3) {
    iVar2 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_2);
    if (iVar2 != 0) {
      bVar1 = false;
      goto LAB_0820382b;
    }
  }
  bVar1 = true;
LAB_0820382b:
  if (bVar1) {
    uVar3 = LineFunc(0x9acf,
                     "virtual int Dispatcher_ResponseCreature::dispatch_sig(CUser*, PacketBuf&)",0,0
                    );
  }
  else {
    this = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_2);
    this_00 = (CCreatureMgr *)CInventory::GetCreatureMgrW(this);
    user_creature::CCreatureMgr::ResponseCreature(this_00);
    uVar3 = 0;
  }
  return uVar3;
}
```
