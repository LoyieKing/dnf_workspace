# WarRoom_check_error

`_ZN18DisPatcher_UseCoin19WarRoom_check_errorEP5CUserR8MSG_BASER9ParamBase`

`DisPatcher_UseCoin::WarRoom_check_error(CUser*, MSG_BASE&, ParamBase&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_UseCoin` | `0x081ca75c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081ca75c  _ZN18DisPatcher_UseCoin19WarRoom_check_errorEP5CUserR8MSG_BASER9ParamBase
#           DisPatcher_UseCoin::WarRoom_check_error(CUser*, MSG_BASE&, ParamBase&)
# range [0x081ca75c, 0x081ca7d5]
081ca75c +0x00:  push   %ebp
081ca75d +0x01:  mov    %esp,%ebp
081ca75f +0x03:  sub    $0x28,%esp
081ca762 +0x06:  mov    0x10(%ebp),%eax
081ca765 +0x09:  mov    %eax,-0x14(%ebp)
081ca768 +0x0c:  mov    0xc(%ebp),%eax
081ca76b +0x0f:  mov    %eax,(%esp)
081ca76e +0x12:  call   086551de <_ZN5CUser10GetWarRoomEv>  ; CUser::GetWarRoom()
081ca773 +0x17:  mov    %eax,-0x10(%ebp)
081ca776 +0x1a:  cmpl   $0x0,-0x10(%ebp)
081ca77a +0x1e:  jne    081ca783 <+0x27>
081ca77c +0x20:  mov    $0xfffffffe,%eax
081ca781 +0x25:  jmp    081ca7d4 <+0x78>
081ca783 +0x27:  mov    0xc(%ebp),%eax
081ca786 +0x2a:  mov    %eax,(%esp)
081ca789 +0x2d:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
081ca78e +0x32:  mov    %eax,(%esp)
081ca791 +0x35:  call   0822d696 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2d40>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2d40
081ca796 +0x3a:  test   %al,%al
081ca798 +0x3c:  je     081ca7cf <+0x73>
081ca79a +0x3e:  mov    -0x14(%ebp),%eax
081ca79d +0x41:  movzwl 0xd(%eax),%eax
081ca7a1 +0x45:  movzwl %ax,%eax
081ca7a4 +0x48:  mov    %eax,0x8(%esp)
081ca7a8 +0x4c:  mov    0xc(%ebp),%eax
081ca7ab +0x4f:  mov    %eax,0x4(%esp)
081ca7af +0x53:  mov    -0x10(%ebp),%eax
081ca7b2 +0x56:  mov    %eax,(%esp)
081ca7b5 +0x59:  call   086bf324 <_ZN7WarRoom16ReviveUserByCoinEP5CUsert>  ; WarRoom::ReviveUserByCoin(CUser*, unsigned short)
081ca7ba +0x5e:  mov    %eax,-0xc(%ebp)
081ca7bd +0x61:  cmpl   $0x0,-0xc(%ebp)
081ca7c1 +0x65:  jle    081ca7c8 <+0x6c>
081ca7c3 +0x67:  mov    -0xc(%ebp),%eax
081ca7c6 +0x6a:  jmp    081ca7d4 <+0x78>
081ca7c8 +0x6c:  mov    $0x0,%eax
081ca7cd +0x71:  jmp    081ca7d4 <+0x78>
081ca7cf +0x73:  mov    $0x11,%eax
081ca7d4 +0x78:  leave
081ca7d5 +0x79:  ret
```

## 反编译 C

```c
// DisPatcher_UseCoin::WarRoom_check_error @ 0x81ca75c

/* DisPatcher_UseCoin::WarRoom_check_error(CUser*, MSG_BASE&, ParamBase&) */

int DisPatcher_UseCoin::WarRoom_check_error(CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  char cVar1;
  WarRoom *this;
  int iVar2;
  CInventory *this_00;
  
  this = (WarRoom *)CUser::GetWarRoom((CUser *)param_2);
  if (this == (WarRoom *)0x0) {
    iVar2 = -2;
  }
  else {
    this_00 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_2);
    cVar1 = CInventory::IsCoinUsable(this_00);
    if (cVar1 == '\0') {
      iVar2 = 0x11;
    }
    else {
      iVar2 = WarRoom::ReviveUserByCoin(this,(CUser *)param_2,*(ushort *)(param_3 + 0xd));
      if (iVar2 < 1) {
        iVar2 = 0;
      }
    }
  }
  return iVar2;
}
```
