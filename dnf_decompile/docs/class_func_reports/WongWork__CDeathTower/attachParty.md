# attachParty

`_ZN8WongWork11CDeathTower11attachPartyEP6CParty`

`WongWork::CDeathTower::attachParty(CParty*)`

| 类 | 地址 |
|---|---|
| `WongWork::CDeathTower` | `0x08462a26` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08462a26  _ZN8WongWork11CDeathTower11attachPartyEP6CParty
#           WongWork::CDeathTower::attachParty(CParty*)
# range [0x08462a26, 0x08462aad]
08462a26 +0x00:  push   %ebp
08462a27 +0x01:  mov    %esp,%ebp
08462a29 +0x03:  push   %ebx
08462a2a +0x04:  sub    $0x24,%esp
08462a2d +0x07:  mov    0x8(%ebp),%eax
08462a30 +0x0a:  mov    0xc(%ebp),%edx
08462a33 +0x0d:  mov    %edx,(%eax)
08462a35 +0x0f:  movl   $0x0,-0xc(%ebp)
08462a3c +0x16:  movl   $0x0,-0xc(%ebp)
08462a43 +0x1d:  jmp    08462a8a <+0x64>
08462a45 +0x1f:  mov    0x8(%ebp),%eax
08462a48 +0x22:  mov    (%eax),%eax
08462a4a +0x24:  mov    -0xc(%ebp),%edx
08462a4d +0x27:  mov    %edx,0x4(%esp)
08462a51 +0x2b:  mov    %eax,(%esp)
08462a54 +0x2e:  call   08145868 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x2eb>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x2eb
08462a59 +0x33:  test   %al,%al
08462a5b +0x35:  je     08462a86 <+0x60>
08462a5d +0x37:  mov    0x8(%ebp),%eax
08462a60 +0x3a:  mov    0x4(%eax),%eax
08462a63 +0x3d:  movswl %ax,%ebx
08462a66 +0x40:  mov    0x8(%ebp),%eax
08462a69 +0x43:  mov    (%eax),%eax
08462a6b +0x45:  mov    -0xc(%ebp),%edx
08462a6e +0x48:  mov    %edx,0x4(%esp)
08462a72 +0x4c:  mov    %eax,(%esp)
08462a75 +0x4f:  call   08145764 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x1e7>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x1e7
08462a7a +0x54:  mov    %ebx,0x4(%esp)
08462a7e +0x58:  mov    %eax,(%esp)
08462a81 +0x5b:  call   08469a6e <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x151>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x151
08462a86 +0x60:  addl   $0x1,-0xc(%ebp)
08462a8a +0x64:  cmpl   $0x3,-0xc(%ebp)
08462a8e +0x68:  setle  %al
08462a91 +0x6b:  test   %al,%al
08462a93 +0x6d:  jne    08462a45 <+0x1f>
08462a95 +0x6f:  movl   $0x1,0x4(%esp)
08462a9d +0x77:  mov    0x8(%ebp),%eax
08462aa0 +0x7a:  mov    %eax,(%esp)
08462aa3 +0x7d:  call   08469c34 <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x317>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x317
08462aa8 +0x82:  add    $0x24,%esp
08462aab +0x85:  pop    %ebx
08462aac +0x86:  pop    %ebp
08462aad +0x87:  ret
```

## 反编译 C

```c
// WongWork::CDeathTower::attachParty @ 0x8462a26

/* WongWork::CDeathTower::attachParty(CParty*) */

void __thiscall WongWork::CDeathTower::attachParty(CDeathTower *this,CParty *param_1)

{
  undefined4 uVar1;
  char cVar2;
  CUser *this_00;
  int local_10;
  
  *(CParty **)this = param_1;
  for (local_10 = 0; local_10 < 4; local_10 = local_10 + 1) {
    cVar2 = CParty::checkValidUser(*(CParty **)this,local_10);
    if (cVar2 != '\0') {
      uVar1 = *(undefined4 *)(this + 4);
      this_00 = (CUser *)CParty::get_user(*(CParty **)this,local_10);
      CUser::setDeathTowerIndex(this_00,(short)uVar1);
    }
  }
  setTowerState(this,1);
  return;
}
```
