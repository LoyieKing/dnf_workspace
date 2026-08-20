# check_error

`_ZN30Dispatcher_CreateDisjointStore11check_errorEP5CUserR8MSG_BASER9ParamBase`

`Dispatcher_CreateDisjointStore::check_error(CUser*, MSG_BASE&, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_CreateDisjointStore` | `0x081cf8d4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081cf8d4  _ZN30Dispatcher_CreateDisjointStore11check_errorEP5CUserR8MSG_BASER9ParamBase
#           Dispatcher_CreateDisjointStore::check_error(CUser*, MSG_BASE&, ParamBase&)
# range [0x081cf8d4, 0x081cf985]
081cf8d4 +0x00:  push   %ebp
081cf8d5 +0x01:  mov    %esp,%ebp
081cf8d7 +0x03:  sub    $0x18,%esp
081cf8da +0x06:  mov    0xc(%ebp),%eax
081cf8dd +0x09:  mov    %eax,(%esp)
081cf8e0 +0x0c:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081cf8e5 +0x11:  cmp    $0x2,%eax
081cf8e8 +0x14:  jle    081cf8f9 <+0x25>
081cf8ea +0x16:  mov    0xc(%ebp),%eax
081cf8ed +0x19:  mov    %eax,(%esp)
081cf8f0 +0x1c:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
081cf8f5 +0x21:  test   %eax,%eax
081cf8f7 +0x23:  jne    081cf900 <+0x2c>
081cf8f9 +0x25:  mov    $0x1,%eax
081cf8fe +0x2a:  jmp    081cf905 <+0x31>
081cf900 +0x2c:  mov    $0x0,%eax
081cf905 +0x31:  test   %al,%al
081cf907 +0x33:  je     081cf910 <+0x3c>
081cf909 +0x35:  mov    $0xffffffff,%eax
081cf90e +0x3a:  jmp    081cf983 <+0xaf>
081cf910 +0x3c:  mov    0xc(%ebp),%eax
081cf913 +0x3f:  mov    %eax,(%esp)
081cf916 +0x42:  call   0822f894 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4f3e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4f3e
081cf91b +0x47:  cmp    $0x3,%eax
081cf91e +0x4a:  setne  %al
081cf921 +0x4d:  test   %al,%al
081cf923 +0x4f:  je     081cf92c <+0x58>
081cf925 +0x51:  mov    $0xfffffffe,%eax
081cf92a +0x56:  jmp    081cf983 <+0xaf>
081cf92c +0x58:  mov    0xc(%ebp),%eax
081cf92f +0x5b:  mov    %eax,(%esp)
081cf932 +0x5e:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081cf937 +0x63:  cmp    $0x3,%eax
081cf93a +0x66:  setne  %al
081cf93d +0x69:  test   %al,%al
081cf93f +0x6b:  je     081cf948 <+0x74>
081cf941 +0x6d:  mov    $0x13,%eax
081cf946 +0x72:  jmp    081cf983 <+0xaf>
081cf948 +0x74:  mov    0xc(%ebp),%eax
081cf94b +0x77:  mov    %eax,(%esp)
081cf94e +0x7a:  call   0822f8d4 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4f7e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4f7e
081cf953 +0x7f:  test   %eax,%eax
081cf955 +0x81:  setne  %al
081cf958 +0x84:  test   %al,%al
081cf95a +0x86:  je     081cf963 <+0x8f>
081cf95c +0x88:  mov    $0x13,%eax
081cf961 +0x8d:  jmp    081cf983 <+0xaf>
081cf963 +0x8f:  mov    0xc(%ebp),%eax
081cf966 +0x92:  mov    %eax,(%esp)
081cf969 +0x95:  call   0865514c <_ZN5CUser8GetPartyEv>  ; CUser::GetParty()
081cf96e +0x9a:  test   %eax,%eax
081cf970 +0x9c:  setne  %al
081cf973 +0x9f:  test   %al,%al
081cf975 +0xa1:  je     081cf97e <+0xaa>
081cf977 +0xa3:  mov    $0x13,%eax
081cf97c +0xa8:  jmp    081cf983 <+0xaf>
081cf97e +0xaa:  mov    $0x0,%eax
081cf983 +0xaf:  leave
081cf984 +0xb0:  ret
081cf985 +0xb1:  nop
```

## 反编译 C

```c
// Dispatcher_CreateDisjointStore::check_error @ 0x81cf8d4

/* Dispatcher_CreateDisjointStore::check_error(CUser*, MSG_BASE&, ParamBase&) */

undefined4
Dispatcher_CreateDisjointStore::check_error(CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = CUser::get_state((CUser *)param_2);
  if (2 < iVar2) {
    iVar2 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_2);
    if (iVar2 != 0) {
      bVar1 = false;
      goto LAB_081cf905;
    }
  }
  bVar1 = true;
LAB_081cf905:
  if (bVar1) {
    uVar3 = 0xffffffff;
  }
  else {
    iVar2 = CUserCharacInfo::GetCurCharacExpertJobType((CUserCharacInfo *)param_2);
    if (iVar2 == 3) {
      iVar2 = CUser::get_state((CUser *)param_2);
      if (iVar2 == 3) {
        iVar2 = CUserCharacInfo::GetCurCharacExpertJob((CUserCharacInfo *)param_2);
        if (iVar2 == 0) {
          iVar2 = CUser::GetParty((CUser *)param_2);
          if (iVar2 == 0) {
            uVar3 = 0;
          }
          else {
            uVar3 = 0x13;
          }
        }
        else {
          uVar3 = 0x13;
        }
      }
      else {
        uVar3 = 0x13;
      }
    }
    else {
      uVar3 = 0xfffffffe;
    }
  }
  return uVar3;
}
```
