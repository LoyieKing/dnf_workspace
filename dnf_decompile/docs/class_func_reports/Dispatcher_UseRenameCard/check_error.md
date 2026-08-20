# check_error

`_ZN24Dispatcher_UseRenameCard11check_errorEP5CUserR8MSG_BASE`

`Dispatcher_UseRenameCard::check_error(CUser*, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_UseRenameCard` | `0x081e7652` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081e7652  _ZN24Dispatcher_UseRenameCard11check_errorEP5CUserR8MSG_BASE
#           Dispatcher_UseRenameCard::check_error(CUser*, MSG_BASE&)
# range [0x081e7652, 0x081e76f9]
081e7652 +0x00:  push   %ebp
081e7653 +0x01:  mov    %esp,%ebp
081e7655 +0x03:  sub    $0x28,%esp
081e7658 +0x06:  mov    0xc(%ebp),%eax
081e765b +0x09:  mov    %eax,(%esp)
081e765e +0x0c:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081e7663 +0x11:  cmp    $0x3,%eax
081e7666 +0x14:  setne  %al
081e7669 +0x17:  test   %al,%al
081e766b +0x19:  je     081e7677 <+0x25>
081e766d +0x1b:  mov    $0x13,%eax
081e7672 +0x20:  jmp    081e76f8 <+0xa6>
081e7677 +0x25:  mov    0xc(%ebp),%eax
081e767a +0x28:  mov    %eax,(%esp)
081e767d +0x2b:  call   080da2fe <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x49b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x49b
081e7682 +0x30:  test   %al,%al
081e7684 +0x32:  je     081e768d <+0x3b>
081e7686 +0x34:  mov    $0x13,%eax
081e768b +0x39:  jmp    081e76f8 <+0xa6>
081e768d +0x3b:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
081e7692 +0x40:  mov    %eax,(%esp)
081e7695 +0x43:  call   08116b20 <_GLOBAL__I__ZN13CEventManagerC2Ev+0x235>  ; global constructors keyed to CEventManager::CEventManager()+0x235
081e769a +0x48:  mov    %eax,-0x14(%ebp)
081e769d +0x4b:  cmpl   $0xf,-0x14(%ebp)
081e76a1 +0x4f:  je     081e76a9 <+0x57>
081e76a3 +0x51:  cmpl   $0x10,-0x14(%ebp)
081e76a7 +0x55:  jne    081e76b0 <+0x5e>
081e76a9 +0x57:  mov    $0x13,%eax
081e76ae +0x5c:  jmp    081e76f8 <+0xa6>
081e76b0 +0x5e:  mov    0xc(%ebp),%eax
081e76b3 +0x61:  mov    %eax,(%esp)
081e76b6 +0x64:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
081e76bb +0x69:  mov    %eax,-0x10(%ebp)
081e76be +0x6c:  cmpl   $0x0,-0x10(%ebp)
081e76c2 +0x70:  jne    081e76cb <+0x79>
081e76c4 +0x72:  mov    $0x13,%eax
081e76c9 +0x77:  jmp    081e76f8 <+0xa6>
081e76cb +0x79:  mov    -0x10(%ebp),%eax
081e76ce +0x7c:  mov    (%eax),%eax
081e76d0 +0x7e:  mov    %eax,0x4(%esp)
081e76d4 +0x82:  mov    0xc(%ebp),%eax
081e76d7 +0x85:  mov    %eax,(%esp)
081e76da +0x88:  call   0822fbe6 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5290>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5290
081e76df +0x8d:  xor    $0x1,%eax
081e76e2 +0x90:  test   %al,%al
081e76e4 +0x92:  je     081e76ed <+0x9b>
081e76e6 +0x94:  mov    $0x12,%eax
081e76eb +0x99:  jmp    081e76f8 <+0xa6>
081e76ed +0x9b:  mov    0x10(%ebp),%eax
081e76f0 +0x9e:  mov    %eax,-0xc(%ebp)
081e76f3 +0xa1:  mov    $0x0,%eax
081e76f8 +0xa6:  leave
081e76f9 +0xa7:  ret
```

## 反编译 C

```c
// Dispatcher_UseRenameCard::check_error @ 0x81e7652

/* Dispatcher_UseRenameCard::check_error(CUser*, MSG_BASE&) */

undefined4 Dispatcher_UseRenameCard::check_error(CUser *param_1,MSG_BASE *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  GameWorld *this;
  uint *puVar4;
  
  iVar2 = CUser::get_state((CUser *)param_2);
  if (iVar2 == 3) {
    cVar1 = CUser::CheckInTrade((CUser *)param_2);
    if (cVar1 == '\0') {
      this = (GameWorld *)G_GameWorld();
      iVar2 = GameWorld::GetChannelType(this);
      if ((iVar2 == 0xf) || (iVar2 == 0x10)) {
        uVar3 = 0x13;
      }
      else {
        puVar4 = (uint *)CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_2);
        if (puVar4 == (uint *)0x0) {
          uVar3 = 0x13;
        }
        else {
          cVar1 = CUser::IsWaitingStateCharac((CUser *)param_2,*puVar4);
          if (cVar1 == '\x01') {
            uVar3 = 0;
          }
          else {
            uVar3 = 0x12;
          }
        }
      }
    }
    else {
      uVar3 = 0x13;
    }
  }
  else {
    uVar3 = 0x13;
  }
  return uVar3;
}
```
