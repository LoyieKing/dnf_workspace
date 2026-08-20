# appendPickupMoney

`_ZN8WongWork11CDeathTower14CPacketHandler17appendPickupMoneyEPiS2_P6CParty`

`WongWork::CDeathTower::CPacketHandler::appendPickupMoney(int*, int*, CParty*)`

| 类 | 地址 |
|---|---|
| `WongWork::CDeathTower::CPacketHandler` | `0x0845fcc4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0845fcc4  _ZN8WongWork11CDeathTower14CPacketHandler17appendPickupMoneyEPiS2_P6CParty
#           WongWork::CDeathTower::CPacketHandler::appendPickupMoney(int*, int*, CParty*)
# range [0x0845fcc4, 0x0845fdbf]
0845fcc4 +0x00:  push   %ebp
0845fcc5 +0x01:  mov    %esp,%ebp
0845fcc7 +0x03:  sub    $0x28,%esp
0845fcca +0x06:  movl   $0x0,-0xc(%ebp)
0845fcd1 +0x0d:  jmp    0845fd9b <+0xd7>
0845fcd6 +0x12:  mov    -0xc(%ebp),%eax
0845fcd9 +0x15:  mov    %eax,0x4(%esp)
0845fcdd +0x19:  mov    0x14(%ebp),%eax
0845fce0 +0x1c:  mov    %eax,(%esp)
0845fce3 +0x1f:  call   08145764 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x1e7>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x1e7
0845fce8 +0x24:  test   %eax,%eax
0845fcea +0x26:  je     0845fd05 <+0x41>
0845fcec +0x28:  mov    -0xc(%ebp),%eax
0845fcef +0x2b:  mov    %eax,0x4(%esp)
0845fcf3 +0x2f:  mov    0x14(%ebp),%eax
0845fcf6 +0x32:  mov    %eax,(%esp)
0845fcf9 +0x35:  call   08145868 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x2eb>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x2eb
0845fcfe +0x3a:  xor    $0x1,%eax
0845fd01 +0x3d:  test   %al,%al
0845fd03 +0x3f:  je     0845fd0c <+0x48>
0845fd05 +0x41:  mov    $0x1,%eax
0845fd0a +0x46:  jmp    0845fd11 <+0x4d>
0845fd0c +0x48:  mov    $0x0,%eax
0845fd11 +0x4d:  test   %al,%al
0845fd13 +0x4f:  je     0845fd3d <+0x79>
0845fd15 +0x51:  mov    0x8(%ebp),%eax
0845fd18 +0x54:  movl   $0x0,0x4(%esp)
0845fd20 +0x5c:  mov    %eax,(%esp)
0845fd23 +0x5f:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0845fd28 +0x64:  mov    0x8(%ebp),%eax
0845fd2b +0x67:  movl   $0x0,0x4(%esp)
0845fd33 +0x6f:  mov    %eax,(%esp)
0845fd36 +0x72:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0845fd3b +0x77:  jmp    0845fd97 <+0xd3>
0845fd3d +0x79:  mov    0x8(%ebp),%eax
0845fd40 +0x7c:  movl   $0x1,0x4(%esp)
0845fd48 +0x84:  mov    %eax,(%esp)
0845fd4b +0x87:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0845fd50 +0x8c:  mov    -0xc(%ebp),%eax
0845fd53 +0x8f:  shl    $0x2,%eax
0845fd56 +0x92:  add    0xc(%ebp),%eax
0845fd59 +0x95:  mov    (%eax),%edx
0845fd5b +0x97:  mov    0x8(%ebp),%eax
0845fd5e +0x9a:  mov    %edx,0x4(%esp)
0845fd62 +0x9e:  mov    %eax,(%esp)
0845fd65 +0xa1:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0845fd6a +0xa6:  mov    0x8(%ebp),%eax
0845fd6d +0xa9:  movl   $0x1,0x4(%esp)
0845fd75 +0xb1:  mov    %eax,(%esp)
0845fd78 +0xb4:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0845fd7d +0xb9:  mov    -0xc(%ebp),%eax
0845fd80 +0xbc:  shl    $0x2,%eax
0845fd83 +0xbf:  add    0x10(%ebp),%eax
0845fd86 +0xc2:  mov    (%eax),%edx
0845fd88 +0xc4:  mov    0x8(%ebp),%eax
0845fd8b +0xc7:  mov    %edx,0x4(%esp)
0845fd8f +0xcb:  mov    %eax,(%esp)
0845fd92 +0xce:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0845fd97 +0xd3:  addl   $0x1,-0xc(%ebp)
0845fd9b +0xd7:  cmpl   $0x3,-0xc(%ebp)
0845fd9f +0xdb:  setle  %al
0845fda2 +0xde:  test   %al,%al
0845fda4 +0xe0:  jne    0845fcd6 <+0x12>
0845fdaa +0xe6:  mov    0x8(%ebp),%eax
0845fdad +0xe9:  movl   $0x1,0x4(%esp)
0845fdb5 +0xf1:  mov    %eax,(%esp)
0845fdb8 +0xf4:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0845fdbd +0xf9:  leave
0845fdbe +0xfa:  ret
0845fdbf +0xfb:  nop
```

## 反编译 C

```c
// WongWork::CDeathTower::CPacketHandler::appendPickupMoney @ 0x845fcc4

/* WongWork::CDeathTower::CPacketHandler::appendPickupMoney(int*, int*, CParty*) */

void __thiscall
WongWork::CDeathTower::CPacketHandler::appendPickupMoney
          (CPacketHandler *this,int *param_1,int *param_2,CParty *param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int local_10;
  
  local_10 = 0;
  do {
    if (3 < local_10) {
      InterfacePacketBuf::finalize((InterfacePacketBuf *)this,true);
      return;
    }
    iVar3 = CParty::get_user(param_3,local_10);
    if (iVar3 == 0) {
LAB_0845fd05:
      bVar1 = true;
    }
    else {
      cVar2 = CParty::checkValidUser(param_3,local_10);
      if (cVar2 != '\x01') goto LAB_0845fd05;
      bVar1 = false;
    }
    if (bVar1) {
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)this,0);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)this,0);
    }
    else {
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)this,1);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)this,param_1[local_10]);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)this,1);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)this,param_2[local_10]);
    }
    local_10 = local_10 + 1;
  } while( true );
}
```
