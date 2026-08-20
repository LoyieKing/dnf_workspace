# process

`_ZN28Dispatcher_ChangeHostWarRoom7processEP5CUserR8MSG_BASER9ParamBase`

`Dispatcher_ChangeHostWarRoom::process(CUser*, MSG_BASE&, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_ChangeHostWarRoom` | `0x081d73f6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081d73f6  _ZN28Dispatcher_ChangeHostWarRoom7processEP5CUserR8MSG_BASER9ParamBase
#           Dispatcher_ChangeHostWarRoom::process(CUser*, MSG_BASE&, ParamBase&)
# range [0x081d73f6, 0x081d74d3]
081d73f6 +0x00:  push   %ebp
081d73f7 +0x01:  mov    %esp,%ebp
081d73f9 +0x03:  push   %ebx
081d73fa +0x04:  sub    $0x24,%esp
081d73fd +0x07:  mov    0x10(%ebp),%eax
081d7400 +0x0a:  mov    %eax,0x8(%esp)
081d7404 +0x0e:  mov    0xc(%ebp),%eax
081d7407 +0x11:  mov    %eax,0x4(%esp)
081d740b +0x15:  mov    0x8(%ebp),%eax
081d740e +0x18:  mov    %eax,(%esp)
081d7411 +0x1b:  call   081d74d4 <_ZN28Dispatcher_ChangeHostWarRoom11check_errorEP5CUserR8MSG_BASE>  ; Dispatcher_ChangeHostWarRoom::check_error(CUser*, MSG_BASE&)
081d7416 +0x20:  mov    %eax,-0x18(%ebp)
081d7419 +0x23:  cmpl   $0x0,-0x18(%ebp)
081d741d +0x27:  jle    081d7427 <+0x31>
081d741f +0x29:  mov    -0x18(%ebp),%eax
081d7422 +0x2c:  jmp    081d74cd <+0xd7>
081d7427 +0x31:  cmpl   $0x0,-0x18(%ebp)
081d742b +0x35:  jns    081d7437 <+0x41>
081d742d +0x37:  mov    $0xffffffff,%eax
081d7432 +0x3c:  jmp    081d74cd <+0xd7>
081d7437 +0x41:  mov    0x10(%ebp),%eax
081d743a +0x44:  mov    %eax,-0x14(%ebp)
081d743d +0x47:  mov    0x14(%ebp),%eax
081d7440 +0x4a:  mov    %eax,-0x10(%ebp)
081d7443 +0x4d:  mov    0xc(%ebp),%eax
081d7446 +0x50:  mov    %eax,(%esp)
081d7449 +0x53:  call   0822fe84 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x552e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x552e
081d744e +0x58:  movswl %ax,%ebx
081d7451 +0x5b:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
081d7456 +0x60:  mov    %ebx,0x4(%esp)
081d745a +0x64:  mov    %eax,(%esp)
081d745d +0x67:  call   082a25d0 <_ZN12CGameManager10GetWarRoomEi>  ; CGameManager::GetWarRoom(int)
081d7462 +0x6c:  mov    %eax,-0xc(%ebp)
081d7465 +0x6f:  cmpl   $0x0,-0xc(%ebp)
081d7469 +0x73:  jne    081d7498 <+0xa2>
081d746b +0x75:  mov    0xc(%ebp),%eax
081d746e +0x78:  mov    %eax,(%esp)
081d7471 +0x7b:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
081d7476 +0x80:  mov    %eax,0xc(%esp)
081d747a +0x84:  movl   $0x0,0x8(%esp)
081d7482 +0x8c:  movl   $&_ZZN28Dispatcher_ChangeHostWarRoom7processEP5CUserR8MSG_BASER9ParamBaseE19__PRETTY_FUNCTION__,0x4(%esp)
081d748a +0x94:  movl   $0x41a7,(%esp)
081d7491 +0x9b:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081d7496 +0xa0:  jmp    081d74cd <+0xd7>
081d7498 +0xa2:  mov    -0x14(%ebp),%eax
081d749b +0xa5:  mov    0xe(%eax),%edx
081d749e +0xa8:  mov    -0x14(%ebp),%eax
081d74a1 +0xab:  movzbl 0xd(%eax),%eax
081d74a5 +0xaf:  movsbl %al,%eax
081d74a8 +0xb2:  mov    %edx,0xc(%esp)
081d74ac +0xb6:  mov    %eax,0x8(%esp)
081d74b0 +0xba:  mov    0xc(%ebp),%eax
081d74b3 +0xbd:  mov    %eax,0x4(%esp)
081d74b7 +0xc1:  mov    -0xc(%ebp),%eax
081d74ba +0xc4:  mov    %eax,(%esp)
081d74bd +0xc7:  call   086c08a6 <_ZN7WarRoom17HostChangeWarRoomEP5CUsercm>  ; WarRoom::HostChangeWarRoom(CUser*, char, unsigned long)
081d74c2 +0xcc:  mov    -0x10(%ebp),%edx
081d74c5 +0xcf:  mov    %eax,0x4(%edx)
081d74c8 +0xd2:  mov    $0x0,%eax
081d74cd +0xd7:  add    $0x24,%esp
081d74d0 +0xda:  pop    %ebx
081d74d1 +0xdb:  pop    %ebp
081d74d2 +0xdc:  ret
081d74d3 +0xdd:  nop
```

## 反编译 C

```c
// Dispatcher_ChangeHostWarRoom::process @ 0x81d73f6

/* Dispatcher_ChangeHostWarRoom::process(CUser*, MSG_BASE&, ParamBase&) */

int __thiscall
Dispatcher_ChangeHostWarRoom::process
          (Dispatcher_ChangeHostWarRoom *this,CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  int iVar1;
  WarRoom *this_00;
  uint uVar2;
  undefined4 uVar3;
  
  iVar1 = check_error(this,param_1,param_2);
  if (iVar1 < 1) {
    if (iVar1 < 0) {
      iVar1 = -1;
    }
    else {
      CUser::GetWarRoomIndex(param_1);
      iVar1 = G_CGameManager();
      this_00 = (WarRoom *)CGameManager::GetWarRoom(iVar1);
      if (this_00 == (WarRoom *)0x0) {
        uVar2 = CUser::get_acc_id(param_1);
        iVar1 = LineFunc(0x41a7,
                         "virtual int Dispatcher_ChangeHostWarRoom::process(CUser*, MSG_BASE&, ParamBase&)"
                         ,0,uVar2);
      }
      else {
        uVar3 = WarRoom::HostChangeWarRoom
                          (this_00,param_1,(char)param_2[0xd],*(ulong *)(param_2 + 0xe));
        *(undefined4 *)(param_3 + 4) = uVar3;
        iVar1 = 0;
      }
    }
  }
  return iVar1;
}
```
