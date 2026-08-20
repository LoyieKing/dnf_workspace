# SendNotiSetDurability

`_ZN28CAutoMarketConditionsControl21SendNotiSetDurabilityEi`

`CAutoMarketConditionsControl::SendNotiSetDurability(int)`

| 类 | 地址 |
|---|---|
| `CAutoMarketConditionsControl` | `0x082f8540` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082f8540  _ZN28CAutoMarketConditionsControl21SendNotiSetDurabilityEi
#           CAutoMarketConditionsControl::SendNotiSetDurability(int)
# range [0x082f8540, 0x082f85a7]
082f8540 +0x00:  push   %ebp
082f8541 +0x01:  mov    %esp,%ebp
082f8543 +0x03:  push   %esi
082f8544 +0x04:  push   %ebx
082f8545 +0x05:  sub    $0x20,%esp
082f8548 +0x08:  lea    -0x14(%ebp),%eax
082f854b +0x0b:  mov    %eax,(%esp)
082f854e +0x0e:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
082f8553 +0x13:  mov    0xc(%ebp),%eax
082f8556 +0x16:  mov    %eax,0x4(%esp)
082f855a +0x1a:  lea    -0x14(%ebp),%eax
082f855d +0x1d:  mov    %eax,(%esp)
082f8560 +0x20:  call   082f84f8 <_Z21MakeNotiSetDurabilityR11PacketGuardi>  ; MakeNotiSetDurability(PacketGuard&, int)
082f8565 +0x25:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
082f856a +0x2a:  lea    -0x14(%ebp),%edx
082f856d +0x2d:  mov    %edx,0x4(%esp)
082f8571 +0x31:  mov    %eax,(%esp)
082f8574 +0x34:  call   086c8c14 <_ZN9GameWorld8send_allER11PacketGuard>  ; GameWorld::send_all(PacketGuard&)
082f8579 +0x39:  jmp    082f8596 <+0x56>
082f857b +0x3b:  mov    %edx,%ebx
082f857d +0x3d:  mov    %eax,%esi
082f857f +0x3f:  lea    -0x14(%ebp),%eax
082f8582 +0x42:  mov    %eax,(%esp)
082f8585 +0x45:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
082f858a +0x4a:  mov    %esi,%eax
082f858c +0x4c:  mov    %ebx,%edx
082f858e +0x4e:  mov    %eax,(%esp)
082f8591 +0x51:  call   08ae3750 <_Unwind_Resume>
082f8596 +0x56:  lea    -0x14(%ebp),%eax
082f8599 +0x59:  mov    %eax,(%esp)
082f859c +0x5c:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
082f85a1 +0x61:  add    $0x20,%esp
082f85a4 +0x64:  pop    %ebx
082f85a5 +0x65:  pop    %esi
082f85a6 +0x66:  pop    %ebp
082f85a7 +0x67:  ret
```

## 反编译 C

```c
// CAutoMarketConditionsControl::SendNotiSetDurability @ 0x82f8540

/* CAutoMarketConditionsControl::SendNotiSetDurability(int) */

void __thiscall
CAutoMarketConditionsControl::SendNotiSetDurability(CAutoMarketConditionsControl *this,int param_1)

{
  GameWorld *this_00;
  PacketGuard local_18 [12];
  
  PacketGuard::PacketGuard(local_18);
                    /* try { // try from 082f8560 to 082f8578 has its CatchHandler @ 082f857b */
  MakeNotiSetDurability(local_18,param_1);
  this_00 = (GameWorld *)G_GameWorld();
  GameWorld::send_all(this_00,local_18);
  PacketGuard::~PacketGuard(local_18);
  return;
}
```
