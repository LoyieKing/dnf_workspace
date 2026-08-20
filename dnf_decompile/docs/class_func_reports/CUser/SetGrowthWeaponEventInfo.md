# SetGrowthWeaponEventInfo

`_ZN5CUser24SetGrowthWeaponEventInfoERK23SIG_GROWTH_WEAPON_EVENT`

`CUser::SetGrowthWeaponEventInfo(SIG_GROWTH_WEAPON_EVENT const&)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x08691bae` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08691bae  _ZN5CUser24SetGrowthWeaponEventInfoERK23SIG_GROWTH_WEAPON_EVENT
#           CUser::SetGrowthWeaponEventInfo(SIG_GROWTH_WEAPON_EVENT const&)
# range [0x08691bae, 0x08691ccf]
08691bae +0x000:  push   %ebp
08691baf +0x001:  mov    %esp,%ebp
08691bb1 +0x003:  push   %esi
08691bb2 +0x004:  push   %ebx
08691bb3 +0x005:  sub    $0x20,%esp
08691bb6 +0x008:  mov    0xc(%ebp),%eax
08691bb9 +0x00b:  movzbl (%eax),%edx
08691bbc +0x00e:  mov    0x8(%ebp),%eax
08691bbf +0x011:  mov    %dl,0x8ebe4(%eax)
08691bc5 +0x017:  mov    0xc(%ebp),%eax
08691bc8 +0x01a:  mov    0x4(%eax),%edx
08691bcb +0x01d:  mov    0x8(%ebp),%eax
08691bce +0x020:  mov    %edx,0x8ebe8(%eax)
08691bd4 +0x026:  mov    0xc(%ebp),%eax
08691bd7 +0x029:  mov    0x8(%eax),%edx
08691bda +0x02c:  mov    0x8(%ebp),%eax
08691bdd +0x02f:  mov    %edx,0x8ebec(%eax)
08691be3 +0x035:  mov    0xc(%ebp),%eax
08691be6 +0x038:  movzwl 0x10(%eax),%edx
08691bea +0x03c:  mov    0x8(%ebp),%eax
08691bed +0x03f:  mov    %dx,0x8ebf4(%eax)
08691bf4 +0x046:  mov    0xc(%ebp),%eax
08691bf7 +0x049:  mov    0xc(%eax),%edx
08691bfa +0x04c:  mov    0x8(%ebp),%eax
08691bfd +0x04f:  mov    %edx,0x8ebf0(%eax)
08691c03 +0x055:  mov    0xc(%ebp),%eax
08691c06 +0x058:  movzwl 0x12(%eax),%edx
08691c0a +0x05c:  mov    0x8(%ebp),%eax
08691c0d +0x05f:  mov    %dx,0x8ebf6(%eax)
08691c14 +0x066:  mov    &_ZN10GlobalData15s_event_managerE,%eax
08691c19 +0x06b:  movl   $0x64,0x4(%esp)
08691c21 +0x073:  mov    %eax,(%esp)
08691c24 +0x076:  call   08115998 <_ZN13CEventManager14GetRepeatEventEi>  ; CEventManager::GetRepeatEvent(int)
08691c29 +0x07b:  mov    (%eax),%edx
08691c2b +0x07d:  add    $0x34,%edx
08691c2e +0x080:  mov    (%edx),%edx
08691c30 +0x082:  movl   $0x0,0x4(%esp)
08691c38 +0x08a:  mov    %eax,(%esp)
08691c3b +0x08d:  call   *%edx
08691c3d +0x08f:  test   %al,%al
08691c3f +0x091:  je     08691cc9 <+0x11b>
08691c45 +0x097:  mov    0x8(%ebp),%eax
08691c48 +0x09a:  movzbl 0x8ebe4(%eax),%eax
08691c4f +0x0a1:  xor    $0x1,%eax
08691c52 +0x0a4:  test   %al,%al
08691c54 +0x0a6:  je     08691cc9 <+0x11b>
08691c56 +0x0a8:  lea    -0x14(%ebp),%eax
08691c59 +0x0ab:  mov    %eax,(%esp)
08691c5c +0x0ae:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
08691c61 +0x0b3:  movl   $0x1ba,0x8(%esp)
08691c69 +0x0bb:  movl   $0x0,0x4(%esp)
08691c71 +0x0c3:  lea    -0x14(%ebp),%eax
08691c74 +0x0c6:  mov    %eax,(%esp)
08691c77 +0x0c9:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
08691c7c +0x0ce:  movl   $0x1,0x4(%esp)
08691c84 +0x0d6:  lea    -0x14(%ebp),%eax
08691c87 +0x0d9:  mov    %eax,(%esp)
08691c8a +0x0dc:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
08691c8f +0x0e1:  lea    -0x14(%ebp),%eax
08691c92 +0x0e4:  mov    %eax,0x4(%esp)
08691c96 +0x0e8:  mov    0x8(%ebp),%eax
08691c99 +0x0eb:  mov    %eax,(%esp)
08691c9c +0x0ee:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
08691ca1 +0x0f3:  jmp    08691cbe <+0x110>
08691ca3 +0x0f5:  mov    %edx,%ebx
08691ca5 +0x0f7:  mov    %eax,%esi
08691ca7 +0x0f9:  lea    -0x14(%ebp),%eax
08691caa +0x0fc:  mov    %eax,(%esp)
08691cad +0x0ff:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08691cb2 +0x104:  mov    %esi,%eax
08691cb4 +0x106:  mov    %ebx,%edx
08691cb6 +0x108:  mov    %eax,(%esp)
08691cb9 +0x10b:  call   08ae3750 <_Unwind_Resume>
08691cbe +0x110:  lea    -0x14(%ebp),%eax
08691cc1 +0x113:  mov    %eax,(%esp)
08691cc4 +0x116:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08691cc9 +0x11b:  add    $0x20,%esp
08691ccc +0x11e:  pop    %ebx
08691ccd +0x11f:  pop    %esi
08691cce +0x120:  pop    %ebp
08691ccf +0x121:  ret
```

## 反编译 C

```c
// CUser::SetGrowthWeaponEventInfo @ 0x8691bae

/* CUser::SetGrowthWeaponEventInfo(SIG_GROWTH_WEAPON_EVENT const&) */

void __thiscall CUser::SetGrowthWeaponEventInfo(CUser *this,SIG_GROWTH_WEAPON_EVENT *param_1)

{
  char cVar1;
  int *piVar2;
  PacketGuard local_18 [12];
  
  this[0x8ebe4] = *(CUser *)param_1;
  *(undefined4 *)(this + 0x8ebe8) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 0x8ebec) = *(undefined4 *)(param_1 + 8);
  *(undefined2 *)(this + 0x8ebf4) = *(undefined2 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0x8ebf0) = *(undefined4 *)(param_1 + 0xc);
  *(undefined2 *)(this + 0x8ebf6) = *(undefined2 *)(param_1 + 0x12);
  piVar2 = (int *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,100);
  cVar1 = (**(code **)(*piVar2 + 0x34))(piVar2,0);
  if ((cVar1 != '\0') && (this[0x8ebe4] != (CUser)0x1)) {
    PacketGuard::PacketGuard(local_18);
                    /* try { // try from 08691c77 to 08691ca0 has its CatchHandler @ 08691ca3 */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_18,0,0x1ba);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_18,true);
    Send(this,local_18);
    PacketGuard::~PacketGuard(local_18);
  }
  return;
}
```
