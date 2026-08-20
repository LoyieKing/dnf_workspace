# _SendCloseAssault

`_ZN11pvp_assault13CAssaultPlace17_SendCloseAssaultEP5CUseri`

`pvp_assault::CAssaultPlace::_SendCloseAssault(CUser*, int)`

| 类 | 地址 |
|---|---|
| `pvp_assault::CAssaultPlace` | `0x082e7b2a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082e7b2a  _ZN11pvp_assault13CAssaultPlace17_SendCloseAssaultEP5CUseri
#           pvp_assault::CAssaultPlace::_SendCloseAssault(CUser*, int)
# range [0x082e7b2a, 0x082e7bbb]
082e7b2a +0x00:  push   %ebp
082e7b2b +0x01:  mov    %esp,%ebp
082e7b2d +0x03:  push   %esi
082e7b2e +0x04:  push   %ebx
082e7b2f +0x05:  sub    $0x20,%esp
082e7b32 +0x08:  mov    0xc(%ebp),%eax
082e7b35 +0x0b:  mov    %eax,(%esp)
082e7b38 +0x0e:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
082e7b3d +0x13:  test   %eax,%eax
082e7b3f +0x15:  setne  %al
082e7b42 +0x18:  test   %al,%al
082e7b44 +0x1a:  je     082e7bb1 <+0x87>
082e7b46 +0x1c:  cmpl   $0x1d,0x10(%ebp)
082e7b4a +0x20:  jg     082e7b53 <+0x29>
082e7b4c +0x22:  movl   $0x1e,0x10(%ebp)
082e7b53 +0x29:  lea    -0x14(%ebp),%eax
082e7b56 +0x2c:  mov    %eax,(%esp)
082e7b59 +0x2f:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
082e7b5e +0x34:  mov    0x10(%ebp),%eax
082e7b61 +0x37:  mov    %eax,0x8(%esp)
082e7b65 +0x3b:  lea    -0x14(%ebp),%eax
082e7b68 +0x3e:  mov    %eax,0x4(%esp)
082e7b6c +0x42:  mov    0x8(%ebp),%eax
082e7b6f +0x45:  mov    %eax,(%esp)
082e7b72 +0x48:  call   082e88d6 <_ZN11pvp_assault13CAssaultPlace17_MakeCloseAssaultEP11PacketGuardi>  ; pvp_assault::CAssaultPlace::_MakeCloseAssault(PacketGuard*, int)
082e7b77 +0x4d:  lea    -0x14(%ebp),%eax
082e7b7a +0x50:  mov    %eax,0x4(%esp)
082e7b7e +0x54:  mov    0xc(%ebp),%eax
082e7b81 +0x57:  mov    %eax,(%esp)
082e7b84 +0x5a:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
082e7b89 +0x5f:  jmp    082e7ba6 <+0x7c>
082e7b8b +0x61:  mov    %edx,%ebx
082e7b8d +0x63:  mov    %eax,%esi
082e7b8f +0x65:  lea    -0x14(%ebp),%eax
082e7b92 +0x68:  mov    %eax,(%esp)
082e7b95 +0x6b:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
082e7b9a +0x70:  mov    %esi,%eax
082e7b9c +0x72:  mov    %ebx,%edx
082e7b9e +0x74:  mov    %eax,(%esp)
082e7ba1 +0x77:  call   08ae3750 <_Unwind_Resume>
082e7ba6 +0x7c:  lea    -0x14(%ebp),%eax
082e7ba9 +0x7f:  mov    %eax,(%esp)
082e7bac +0x82:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
082e7bb1 +0x87:  mov    0x10(%ebp),%eax
082e7bb4 +0x8a:  add    $0x20,%esp
082e7bb7 +0x8d:  pop    %ebx
082e7bb8 +0x8e:  pop    %esi
082e7bb9 +0x8f:  pop    %ebp
082e7bba +0x90:  ret
082e7bbb +0x91:  nop
```

## 反编译 C

```c
// pvp_assault::CAssaultPlace::_SendCloseAssault @ 0x82e7b2a

/* pvp_assault::CAssaultPlace::_SendCloseAssault(CUser*, int) */

int __thiscall
pvp_assault::CAssaultPlace::_SendCloseAssault(CAssaultPlace *this,CUser *param_1,int param_2)

{
  int iVar1;
  PacketGuard local_18 [12];
  
  iVar1 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1);
  if (iVar1 != 0) {
    if (param_2 < 0x1e) {
      param_2 = 0x1e;
    }
    PacketGuard::PacketGuard(local_18);
                    /* try { // try from 082e7b72 to 082e7b88 has its CatchHandler @ 082e7b8b */
    _MakeCloseAssault(this,local_18,param_2);
    CUser::Send(param_1,local_18);
    PacketGuard::~PacketGuard(local_18);
  }
  return param_2;
}
```
