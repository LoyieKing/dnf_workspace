# check_error

`_ZN29Dispatcher_CloseDisjointStore11check_errorEP5CUserR8MSG_BASER9ParamBase`

`Dispatcher_CloseDisjointStore::check_error(CUser*, MSG_BASE&, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_CloseDisjointStore` | `0x081d02c8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081d02c8  _ZN29Dispatcher_CloseDisjointStore11check_errorEP5CUserR8MSG_BASER9ParamBase
#           Dispatcher_CloseDisjointStore::check_error(CUser*, MSG_BASE&, ParamBase&)
# range [0x081d02c8, 0x081d0365]
081d02c8 +0x00:  push   %ebp
081d02c9 +0x01:  mov    %esp,%ebp
081d02cb +0x03:  sub    $0x18,%esp
081d02ce +0x06:  mov    0xc(%ebp),%eax
081d02d1 +0x09:  mov    %eax,(%esp)
081d02d4 +0x0c:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081d02d9 +0x11:  cmp    $0x2,%eax
081d02dc +0x14:  jle    081d02ed <+0x25>
081d02de +0x16:  mov    0xc(%ebp),%eax
081d02e1 +0x19:  mov    %eax,(%esp)
081d02e4 +0x1c:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
081d02e9 +0x21:  test   %eax,%eax
081d02eb +0x23:  jne    081d02f4 <+0x2c>
081d02ed +0x25:  mov    $0x1,%eax
081d02f2 +0x2a:  jmp    081d02f9 <+0x31>
081d02f4 +0x2c:  mov    $0x0,%eax
081d02f9 +0x31:  test   %al,%al
081d02fb +0x33:  je     081d0304 <+0x3c>
081d02fd +0x35:  mov    $0xffffffff,%eax
081d0302 +0x3a:  jmp    081d0364 <+0x9c>
081d0304 +0x3c:  mov    0xc(%ebp),%eax
081d0307 +0x3f:  mov    %eax,(%esp)
081d030a +0x42:  call   0822f894 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4f3e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4f3e
081d030f +0x47:  cmp    $0x3,%eax
081d0312 +0x4a:  setne  %al
081d0315 +0x4d:  test   %al,%al
081d0317 +0x4f:  je     081d0320 <+0x58>
081d0319 +0x51:  mov    $0xfffffffe,%eax
081d031e +0x56:  jmp    081d0364 <+0x9c>
081d0320 +0x58:  mov    0xc(%ebp),%eax
081d0323 +0x5b:  mov    %eax,(%esp)
081d0326 +0x5e:  call   0822f8d4 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4f7e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4f7e
081d032b +0x63:  test   %eax,%eax
081d032d +0x65:  sete   %al
081d0330 +0x68:  test   %al,%al
081d0332 +0x6a:  je     081d033b <+0x73>
081d0334 +0x6c:  mov    $0x13,%eax
081d0339 +0x71:  jmp    081d0364 <+0x9c>
081d033b +0x73:  mov    0xc(%ebp),%eax
081d033e +0x76:  mov    %eax,(%esp)
081d0341 +0x79:  call   0822f8d4 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4f7e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4f7e
081d0346 +0x7e:  mov    %eax,(%esp)
081d0349 +0x81:  call   08234796 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9e40>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9e40
081d034e +0x86:  cmp    $0x3,%eax
081d0351 +0x89:  setne  %al
081d0354 +0x8c:  test   %al,%al
081d0356 +0x8e:  je     081d035f <+0x97>
081d0358 +0x90:  mov    $0x13,%eax
081d035d +0x95:  jmp    081d0364 <+0x9c>
081d035f +0x97:  mov    $0x0,%eax
081d0364 +0x9c:  leave
081d0365 +0x9d:  ret
```

## 反编译 C

```c
// Dispatcher_CloseDisjointStore::check_error @ 0x81d02c8

/* Dispatcher_CloseDisjointStore::check_error(CUser*, MSG_BASE&, ParamBase&) */

undefined4
Dispatcher_CloseDisjointStore::check_error(CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  CExpertJob *this;
  
  iVar2 = CUser::get_state((CUser *)param_2);
  if (2 < iVar2) {
    iVar2 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_2);
    if (iVar2 != 0) {
      bVar1 = false;
      goto LAB_081d02f9;
    }
  }
  bVar1 = true;
LAB_081d02f9:
  if (bVar1) {
    uVar3 = 0xffffffff;
  }
  else {
    iVar2 = CUserCharacInfo::GetCurCharacExpertJobType((CUserCharacInfo *)param_2);
    if (iVar2 == 3) {
      iVar2 = CUserCharacInfo::GetCurCharacExpertJob((CUserCharacInfo *)param_2);
      if (iVar2 == 0) {
        uVar3 = 0x13;
      }
      else {
        this = (CExpertJob *)CUserCharacInfo::GetCurCharacExpertJob((CUserCharacInfo *)param_2);
        iVar2 = expert_job::CExpertJob::GetType(this);
        if (iVar2 == 3) {
          uVar3 = 0;
        }
        else {
          uVar3 = 0x13;
        }
      }
    }
    else {
      uVar3 = 0xfffffffe;
    }
  }
  return uVar3;
}
```
