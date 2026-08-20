# process

`_ZN21DisPatcher_PvPTimeout7processEP5CUserR8MSG_BASER9ParamBase`

`DisPatcher_PvPTimeout::process(CUser*, MSG_BASE&, ParamBase&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_PvPTimeout` | `0x081c5dec` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081c5dec  _ZN21DisPatcher_PvPTimeout7processEP5CUserR8MSG_BASER9ParamBase
#           DisPatcher_PvPTimeout::process(CUser*, MSG_BASE&, ParamBase&)
# range [0x081c5dec, 0x081c5ebd]
081c5dec +0x00:  push   %ebp
081c5ded +0x01:  mov    %esp,%ebp
081c5def +0x03:  sub    $0x28,%esp
081c5df2 +0x06:  mov    0x10(%ebp),%eax
081c5df5 +0x09:  mov    %eax,0x8(%esp)
081c5df9 +0x0d:  mov    0xc(%ebp),%eax
081c5dfc +0x10:  mov    %eax,0x4(%esp)
081c5e00 +0x14:  mov    0x8(%ebp),%eax
081c5e03 +0x17:  mov    %eax,(%esp)
081c5e06 +0x1a:  call   081c5ebe <_ZN21DisPatcher_PvPTimeout11check_errorEP5CUserR8MSG_BASE>  ; DisPatcher_PvPTimeout::check_error(CUser*, MSG_BASE&)
081c5e0b +0x1f:  mov    %eax,-0x18(%ebp)
081c5e0e +0x22:  cmpl   $0x0,-0x18(%ebp)
081c5e12 +0x26:  jle    081c5e1e <+0x32>
081c5e14 +0x28:  mov    $0xffffffff,%eax
081c5e19 +0x2d:  jmp    081c5ebc <+0xd0>
081c5e1e +0x32:  cmpl   $0x0,-0x18(%ebp)
081c5e22 +0x36:  jns    081c5e51 <+0x65>
081c5e24 +0x38:  mov    0xc(%ebp),%eax
081c5e27 +0x3b:  mov    %eax,(%esp)
081c5e2a +0x3e:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
081c5e2f +0x43:  mov    %eax,0xc(%esp)
081c5e33 +0x47:  movl   $0x0,0x8(%esp)
081c5e3b +0x4f:  movl   $&_ZZN21DisPatcher_PvPTimeout7processEP5CUserR8MSG_BASER9ParamBaseE19__PRETTY_FUNCTION__,0x4(%esp)
081c5e43 +0x57:  movl   $0x14b7,(%esp)
081c5e4a +0x5e:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081c5e4f +0x63:  jmp    081c5ebc <+0xd0>
081c5e51 +0x65:  mov    0xc(%ebp),%eax
081c5e54 +0x68:  mov    %eax,(%esp)
081c5e57 +0x6b:  call   0865518e <_ZN5CUser10GetPVPRoomEv>  ; CUser::GetPVPRoom()
081c5e5c +0x70:  mov    %eax,-0x14(%ebp)
081c5e5f +0x73:  cmpl   $0x0,-0x14(%ebp)
081c5e63 +0x77:  jne    081c5e92 <+0xa6>
081c5e65 +0x79:  mov    0xc(%ebp),%eax
081c5e68 +0x7c:  mov    %eax,(%esp)
081c5e6b +0x7f:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
081c5e70 +0x84:  mov    %eax,0xc(%esp)
081c5e74 +0x88:  movl   $0x0,0x8(%esp)
081c5e7c +0x90:  movl   $&_ZZN21DisPatcher_PvPTimeout7processEP5CUserR8MSG_BASER9ParamBaseE19__PRETTY_FUNCTION__,0x4(%esp)
081c5e84 +0x98:  movl   $0x14bc,(%esp)
081c5e8b +0x9f:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081c5e90 +0xa4:  jmp    081c5ebc <+0xd0>
081c5e92 +0xa6:  mov    0x14(%ebp),%eax
081c5e95 +0xa9:  mov    %eax,-0x10(%ebp)
081c5e98 +0xac:  mov    0x10(%ebp),%eax
081c5e9b +0xaf:  mov    %eax,-0xc(%ebp)
081c5e9e +0xb2:  mov    -0xc(%ebp),%eax
081c5ea1 +0xb5:  add    $0xd,%eax
081c5ea4 +0xb8:  mov    %eax,0x4(%esp)
081c5ea8 +0xbc:  mov    -0x14(%ebp),%eax
081c5eab +0xbf:  mov    %eax,(%esp)
081c5eae +0xc2:  call   085d9b0e <_ZN8PvP_Room8time_outEPi>  ; PvP_Room::time_out(int*)
081c5eb3 +0xc7:  mov    -0x10(%ebp),%edx
081c5eb6 +0xca:  mov    %eax,0x4(%edx)
081c5eb9 +0xcd:  mov    -0x18(%ebp),%eax
081c5ebc +0xd0:  leave
081c5ebd +0xd1:  ret
```

## 反编译 C

```c
// DisPatcher_PvPTimeout::process @ 0x81c5dec

/* DisPatcher_PvPTimeout::process(CUser*, MSG_BASE&, ParamBase&) */

int __thiscall
DisPatcher_PvPTimeout::process
          (DisPatcher_PvPTimeout *this,CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  int iVar1;
  uint uVar2;
  PvP_Room *this_00;
  undefined4 uVar3;
  
  iVar1 = check_error((CUser *)this,(MSG_BASE *)param_1);
  if (iVar1 < 1) {
    if (iVar1 < 0) {
      uVar2 = CUser::get_acc_id(param_1);
      iVar1 = LineFunc(0x14b7,
                       "virtual int DisPatcher_PvPTimeout::process(CUser*, MSG_BASE&, ParamBase&)",0
                       ,uVar2);
    }
    else {
      this_00 = (PvP_Room *)CUser::GetPVPRoom(param_1);
      if (this_00 == (PvP_Room *)0x0) {
        uVar2 = CUser::get_acc_id(param_1);
        iVar1 = LineFunc(0x14bc,
                         "virtual int DisPatcher_PvPTimeout::process(CUser*, MSG_BASE&, ParamBase&)"
                         ,0,uVar2);
      }
      else {
        uVar3 = PvP_Room::time_out(this_00,(int *)(param_2 + 0xd));
        *(undefined4 *)(param_3 + 4) = uVar3;
      }
    }
  }
  else {
    iVar1 = -1;
  }
  return iVar1;
}
```
