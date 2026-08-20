# process

`_ZN19DisPatcher_UseEquip7processEP5CUserR8MSG_BASER9ParamBase`

`DisPatcher_UseEquip::process(CUser*, MSG_BASE&, ParamBase&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_UseEquip` | `0x081c0e4a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081c0e4a  _ZN19DisPatcher_UseEquip7processEP5CUserR8MSG_BASER9ParamBase
#           DisPatcher_UseEquip::process(CUser*, MSG_BASE&, ParamBase&)
# range [0x081c0e4a, 0x081c0ee1]
081c0e4a +0x00:  push   %ebp
081c0e4b +0x01:  mov    %esp,%ebp
081c0e4d +0x03:  push   %ebx
081c0e4e +0x04:  sub    $0x24,%esp
081c0e51 +0x07:  mov    0x10(%ebp),%eax
081c0e54 +0x0a:  mov    %eax,0x8(%esp)
081c0e58 +0x0e:  mov    0xc(%ebp),%eax
081c0e5b +0x11:  mov    %eax,0x4(%esp)
081c0e5f +0x15:  mov    0x8(%ebp),%eax
081c0e62 +0x18:  mov    %eax,(%esp)
081c0e65 +0x1b:  call   081c0ee2 <_ZN19DisPatcher_UseEquip11check_errorEP5CUserR8MSG_BASE>  ; DisPatcher_UseEquip::check_error(CUser*, MSG_BASE&)
081c0e6a +0x20:  mov    %eax,-0x14(%ebp)
081c0e6d +0x23:  cmpl   $0x0,-0x14(%ebp)
081c0e71 +0x27:  jle    081c0e97 <+0x4d>
081c0e73 +0x29:  mov    -0x14(%ebp),%eax
081c0e76 +0x2c:  movzbl %al,%eax
081c0e79 +0x2f:  mov    %eax,0x8(%esp)
081c0e7d +0x33:  movl   $0x33,0x4(%esp)
081c0e85 +0x3b:  mov    0xc(%ebp),%eax
081c0e88 +0x3e:  mov    %eax,(%esp)
081c0e8b +0x41:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
081c0e90 +0x46:  mov    $0xffffffff,%eax
081c0e95 +0x4b:  jmp    081c0edc <+0x92>
081c0e97 +0x4d:  mov    0x14(%ebp),%eax
081c0e9a +0x50:  mov    %eax,-0x10(%ebp)
081c0e9d +0x53:  mov    0x10(%ebp),%eax
081c0ea0 +0x56:  mov    %eax,-0xc(%ebp)
081c0ea3 +0x59:  mov    -0xc(%ebp),%eax
081c0ea6 +0x5c:  movzbl 0xd(%eax),%eax
081c0eaa +0x60:  movsbl %al,%ebx
081c0ead +0x63:  mov    0xc(%ebp),%eax
081c0eb0 +0x66:  mov    %eax,(%esp)
081c0eb3 +0x69:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
081c0eb8 +0x6e:  mov    %ebx,0x4(%esp)
081c0ebc +0x72:  mov    %eax,(%esp)
081c0ebf +0x75:  call   084ff762 <_ZN10CInventory9use_equipEi>  ; CInventory::use_equip(int)
081c0ec4 +0x7a:  mov    %eax,%edx
081c0ec6 +0x7c:  mov    -0x10(%ebp),%eax
081c0ec9 +0x7f:  mov    %edx,0x4(%eax)
081c0ecc +0x82:  mov    -0xc(%ebp),%eax
081c0ecf +0x85:  movzbl 0xd(%eax),%edx
081c0ed3 +0x89:  mov    -0x10(%ebp),%eax
081c0ed6 +0x8c:  mov    %dl,0x8(%eax)
081c0ed9 +0x8f:  mov    -0x14(%ebp),%eax
081c0edc +0x92:  add    $0x24,%esp
081c0edf +0x95:  pop    %ebx
081c0ee0 +0x96:  pop    %ebp
081c0ee1 +0x97:  ret
```

## 反编译 C

```c
// DisPatcher_UseEquip::process @ 0x81c0e4a

/* DisPatcher_UseEquip::process(CUser*, MSG_BASE&, ParamBase&) */

uint __thiscall
DisPatcher_UseEquip::process
          (DisPatcher_UseEquip *this,CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  MSG_BASE MVar1;
  uint uVar2;
  CInventory *this_00;
  undefined4 uVar3;
  
  uVar2 = check_error((CUser *)this,(MSG_BASE *)param_1);
  if ((int)uVar2 < 1) {
    MVar1 = param_2[0xd];
    this_00 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
    uVar3 = CInventory::use_equip(this_00,(int)(char)MVar1);
    *(undefined4 *)(param_3 + 4) = uVar3;
    *(MSG_BASE *)(param_3 + 8) = param_2[0xd];
  }
  else {
    CUser::SendCmdErrorPacket(param_1,0x33,uVar2 & 0xff);
    uVar2 = 0xffffffff;
  }
  return uVar2;
}
```
