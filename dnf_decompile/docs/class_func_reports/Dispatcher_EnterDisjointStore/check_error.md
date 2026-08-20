# check_error

`_ZN29Dispatcher_EnterDisjointStore11check_errorEP5CUserR8MSG_BASER9ParamBase`

`Dispatcher_EnterDisjointStore::check_error(CUser*, MSG_BASE&, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_EnterDisjointStore` | `0x081d00d8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081d00d8  _ZN29Dispatcher_EnterDisjointStore11check_errorEP5CUserR8MSG_BASER9ParamBase
#           Dispatcher_EnterDisjointStore::check_error(CUser*, MSG_BASE&, ParamBase&)
# range [0x081d00d8, 0x081d01ad]
081d00d8 +0x00:  push   %ebp
081d00d9 +0x01:  mov    %esp,%ebp
081d00db +0x03:  push   %ebx
081d00dc +0x04:  sub    $0x24,%esp
081d00df +0x07:  mov    0xc(%ebp),%eax
081d00e2 +0x0a:  mov    %eax,(%esp)
081d00e5 +0x0d:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081d00ea +0x12:  cmp    $0x2,%eax
081d00ed +0x15:  jle    081d00fe <+0x26>
081d00ef +0x17:  mov    0xc(%ebp),%eax
081d00f2 +0x1a:  mov    %eax,(%esp)
081d00f5 +0x1d:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
081d00fa +0x22:  test   %eax,%eax
081d00fc +0x24:  jne    081d0105 <+0x2d>
081d00fe +0x26:  mov    $0x1,%eax
081d0103 +0x2b:  jmp    081d010a <+0x32>
081d0105 +0x2d:  mov    $0x0,%eax
081d010a +0x32:  test   %al,%al
081d010c +0x34:  je     081d0118 <+0x40>
081d010e +0x36:  mov    $0xffffffff,%eax
081d0113 +0x3b:  jmp    081d01a8 <+0xd0>
081d0118 +0x40:  mov    0x10(%ebp),%eax
081d011b +0x43:  mov    %eax,-0x14(%ebp)
081d011e +0x46:  mov    -0x14(%ebp),%eax
081d0121 +0x49:  movzwl 0xe(%eax),%eax
081d0125 +0x4d:  movzwl %ax,%ebx
081d0128 +0x50:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
081d012d +0x55:  mov    %ebx,0x4(%esp)
081d0131 +0x59:  mov    %eax,(%esp)
081d0134 +0x5c:  call   086c4b9c <_ZN9GameWorld15find_from_worldEt>  ; GameWorld::find_from_world(unsigned short)
081d0139 +0x61:  mov    %eax,-0x10(%ebp)
081d013c +0x64:  cmpl   $0x0,-0x10(%ebp)
081d0140 +0x68:  jne    081d0149 <+0x71>
081d0142 +0x6a:  mov    $0x15,%eax
081d0147 +0x6f:  jmp    081d01a8 <+0xd0>
081d0149 +0x71:  mov    -0x10(%ebp),%eax
081d014c +0x74:  mov    %eax,(%esp)
081d014f +0x77:  call   0822f894 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4f3e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4f3e
081d0154 +0x7c:  cmp    $0x3,%eax
081d0157 +0x7f:  setne  %al
081d015a +0x82:  test   %al,%al
081d015c +0x84:  je     081d0165 <+0x8d>
081d015e +0x86:  mov    $0x13,%eax
081d0163 +0x8b:  jmp    081d01a8 <+0xd0>
081d0165 +0x8d:  movl   $0x0,-0xc(%ebp)
081d016c +0x94:  mov    -0x10(%ebp),%eax
081d016f +0x97:  mov    %eax,(%esp)
081d0172 +0x9a:  call   0822f8d4 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4f7e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4f7e
081d0177 +0x9f:  mov    %eax,-0xc(%ebp)
081d017a +0xa2:  cmpl   $0x0,-0xc(%ebp)
081d017e +0xa6:  jne    081d0187 <+0xaf>
081d0180 +0xa8:  mov    $0x13,%eax
081d0185 +0xad:  jmp    081d01a8 <+0xd0>
081d0187 +0xaf:  mov    -0xc(%ebp),%eax
081d018a +0xb2:  mov    %eax,(%esp)
081d018d +0xb5:  call   08234796 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9e40>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9e40
081d0192 +0xba:  cmp    $0x3,%eax
081d0195 +0xbd:  setne  %al
081d0198 +0xc0:  test   %al,%al
081d019a +0xc2:  je     081d01a3 <+0xcb>
081d019c +0xc4:  mov    $0x13,%eax
081d01a1 +0xc9:  jmp    081d01a8 <+0xd0>
081d01a3 +0xcb:  mov    $0x0,%eax
081d01a8 +0xd0:  add    $0x24,%esp
081d01ab +0xd3:  pop    %ebx
081d01ac +0xd4:  pop    %ebp
081d01ad +0xd5:  ret
```

## 反编译 C

```c
// Dispatcher_EnterDisjointStore::check_error @ 0x81d00d8

/* Dispatcher_EnterDisjointStore::check_error(CUser*, MSG_BASE&, ParamBase&) */

undefined4
Dispatcher_EnterDisjointStore::check_error(CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  ushort uVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  GameWorld *this;
  CUserCharacInfo *this_00;
  CExpertJob *this_01;
  
  iVar3 = CUser::get_state((CUser *)param_2);
  if (2 < iVar3) {
    iVar3 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_2);
    if (iVar3 != 0) {
      bVar2 = false;
      goto LAB_081d010a;
    }
  }
  bVar2 = true;
LAB_081d010a:
  if (bVar2) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar1 = *(ushort *)(param_3 + 0xe);
    this = (GameWorld *)G_GameWorld();
    this_00 = (CUserCharacInfo *)GameWorld::find_from_world(this,uVar1);
    if (this_00 == (CUserCharacInfo *)0x0) {
      uVar4 = 0x15;
    }
    else {
      iVar3 = CUserCharacInfo::GetCurCharacExpertJobType(this_00);
      if (iVar3 == 3) {
        this_01 = (CExpertJob *)CUserCharacInfo::GetCurCharacExpertJob(this_00);
        if (this_01 == (CExpertJob *)0x0) {
          uVar4 = 0x13;
        }
        else {
          iVar3 = expert_job::CExpertJob::GetType(this_01);
          if (iVar3 == 3) {
            uVar4 = 0;
          }
          else {
            uVar4 = 0x13;
          }
        }
      }
      else {
        uVar4 = 0x13;
      }
    }
  }
  return uVar4;
}
```
