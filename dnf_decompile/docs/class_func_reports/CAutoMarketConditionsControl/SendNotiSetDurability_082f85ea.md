# SendNotiSetDurability

`_ZN28CAutoMarketConditionsControl21SendNotiSetDurabilityEP5CUser`

`CAutoMarketConditionsControl::SendNotiSetDurability(CUser*)`

| 类 | 地址 |
|---|---|
| `CAutoMarketConditionsControl` | `0x082f85ea` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082f85ea  _ZN28CAutoMarketConditionsControl21SendNotiSetDurabilityEP5CUser
#           CAutoMarketConditionsControl::SendNotiSetDurability(CUser*)
# range [0x082f85ea, 0x082f8683]
082f85ea +0x00:  push   %ebp
082f85eb +0x01:  mov    %esp,%ebp
082f85ed +0x03:  push   %esi
082f85ee +0x04:  push   %ebx
082f85ef +0x05:  sub    $0x30,%esp
082f85f2 +0x08:  mov    0x8(%ebp),%eax
082f85f5 +0x0b:  mov    0x3e8(%eax),%eax
082f85fb +0x11:  test   %eax,%eax
082f85fd +0x13:  je     082f867d <+0x93>
082f85ff +0x15:  lea    -0x14(%ebp),%eax
082f8602 +0x18:  mov    %eax,(%esp)
082f8605 +0x1b:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
082f860a +0x20:  mov    0x8(%ebp),%eax
082f860d +0x23:  fldl   0x43c(%eax)
082f8613 +0x29:  fldl   &data#a2821b98(.rodata)
082f8619 +0x2f:  fmulp  %st,%st(1)
082f861b +0x31:  fnstcw -0x1a(%ebp)
082f861e +0x34:  movzwl -0x1a(%ebp),%eax
082f8622 +0x38:  mov    $0xc,%ah
082f8624 +0x3a:  mov    %ax,-0x1c(%ebp)
082f8628 +0x3e:  fldcw  -0x1c(%ebp)
082f862b +0x41:  fistpl -0x20(%ebp)
082f862e +0x44:  fldcw  -0x1a(%ebp)
082f8631 +0x47:  mov    -0x20(%ebp),%eax
082f8634 +0x4a:  mov    %eax,0x4(%esp)
082f8638 +0x4e:  lea    -0x14(%ebp),%eax
082f863b +0x51:  mov    %eax,(%esp)
082f863e +0x54:  call   082f84f8 <_Z21MakeNotiSetDurabilityR11PacketGuardi>  ; MakeNotiSetDurability(PacketGuard&, int)
082f8643 +0x59:  lea    -0x14(%ebp),%eax
082f8646 +0x5c:  mov    %eax,0x4(%esp)
082f864a +0x60:  mov    0xc(%ebp),%eax
082f864d +0x63:  mov    %eax,(%esp)
082f8650 +0x66:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
082f8655 +0x6b:  jmp    082f8672 <+0x88>
082f8657 +0x6d:  mov    %edx,%ebx
082f8659 +0x6f:  mov    %eax,%esi
082f865b +0x71:  lea    -0x14(%ebp),%eax
082f865e +0x74:  mov    %eax,(%esp)
082f8661 +0x77:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
082f8666 +0x7c:  mov    %esi,%eax
082f8668 +0x7e:  mov    %ebx,%edx
082f866a +0x80:  mov    %eax,(%esp)
082f866d +0x83:  call   08ae3750 <_Unwind_Resume>
082f8672 +0x88:  lea    -0x14(%ebp),%eax
082f8675 +0x8b:  mov    %eax,(%esp)
082f8678 +0x8e:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
082f867d +0x93:  add    $0x30,%esp
082f8680 +0x96:  pop    %ebx
082f8681 +0x97:  pop    %esi
082f8682 +0x98:  pop    %ebp
082f8683 +0x99:  ret
```

## 反编译 C

```c
// CAutoMarketConditionsControl::SendNotiSetDurability @ 0x82f85ea

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CAutoMarketConditionsControl::SendNotiSetDurability(CUser*) */

void __thiscall
CAutoMarketConditionsControl::SendNotiSetDurability
          (CAutoMarketConditionsControl *this,CUser *param_1)

{
  PacketGuard local_18 [12];
  
  if (*(int *)(this + 1000) != 0) {
    PacketGuard::PacketGuard(local_18);
                    /* try { // try from 082f863e to 082f8654 has its CatchHandler @ 082f8657 */
    MakeNotiSetDurability(local_18,(int)ROUND(_DAT_08c1fc58 * *(double *)(this + 0x43c)));
    CUser::Send(param_1,local_18);
    PacketGuard::~PacketGuard(local_18);
  }
  return;
}
```
