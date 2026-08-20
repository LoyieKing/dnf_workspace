# checkOutDeathTower

`_ZN12CGameManager18checkOutDeathTowerEP5CUser`

`CGameManager::checkOutDeathTower(CUser*)`

| 类 | 地址 |
|---|---|
| `CGameManager` | `0x0829833a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0829833a  _ZN12CGameManager18checkOutDeathTowerEP5CUser
#           CGameManager::checkOutDeathTower(CUser*)
# range [0x0829833a, 0x082983fb]
0829833a +0x00:  push   %ebp
0829833b +0x01:  mov    %esp,%ebp
0829833d +0x03:  push   %ebx
0829833e +0x04:  sub    $0x34,%esp
08298341 +0x07:  mov    0xc(%ebp),%eax
08298344 +0x0a:  mov    %eax,(%esp)
08298347 +0x0d:  call   082a67bc <_GLOBAL__I__ZN4CLog5this_E+0x2be3>  ; global constructors keyed to CLog::this_+0x2be3
0829834c +0x12:  xor    $0x1,%eax
0829834f +0x15:  test   %al,%al
08298351 +0x17:  jne    082983f2 <+0xb8>
08298357 +0x1d:  mov    0xc(%ebp),%eax
0829835a +0x20:  mov    %eax,(%esp)
0829835d +0x23:  call   082a67d2 <_GLOBAL__I__ZN4CLog5this_E+0x2bf9>  ; global constructors keyed to CLog::this_+0x2bf9
08298362 +0x28:  cwtl
08298363 +0x29:  mov    %eax,0x4(%esp)
08298367 +0x2d:  mov    0x8(%ebp),%eax
0829836a +0x30:  mov    %eax,(%esp)
0829836d +0x33:  call   082957bc <_ZN12CGameManager13getDeathTowerEi>  ; CGameManager::getDeathTower(int)
08298372 +0x38:  mov    %eax,-0xc(%ebp)
08298375 +0x3b:  cmpl   $0x0,-0xc(%ebp)
08298379 +0x3f:  je     082983f5 <+0xbb>
0829837b +0x41:  mov    0xc(%ebp),%eax
0829837e +0x44:  mov    %eax,0x4(%esp)
08298382 +0x48:  mov    -0xc(%ebp),%eax
08298385 +0x4b:  mov    %eax,(%esp)
08298388 +0x4e:  call   084636f2 <_ZN8WongWork11CDeathTower11onLeaveUserEP5CUser>  ; WongWork::CDeathTower::onLeaveUser(CUser*)
0829838d +0x53:  xor    $0x1,%eax
08298390 +0x56:  test   %al,%al
08298392 +0x58:  je     082983f6 <+0xbc>
08298394 +0x5a:  mov    0xc(%ebp),%eax
08298397 +0x5d:  mov    %eax,(%esp)
0829839a +0x60:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
0829839f +0x65:  movl   $0x0,0x4(%esp)
082983a7 +0x6d:  mov    %eax,(%esp)
082983aa +0x70:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
082983af +0x75:  mov    %eax,%ebx
082983b1 +0x77:  mov    -0xc(%ebp),%eax
082983b4 +0x7a:  mov    %eax,(%esp)
082983b7 +0x7d:  call   082a7586 <_GLOBAL__I__ZN4CLog5this_E+0x39ad>  ; global constructors keyed to CLog::this_+0x39ad
082983bc +0x82:  mov    %ebx,0x18(%esp)
082983c0 +0x86:  mov    %eax,0x14(%esp)
082983c4 +0x8a:  movl   $"없는유저 사망의탑 아웃처리 ID[%d] ACCID[%s]",0x10(%esp)
082983cc +0x92:  movl   $0x123a,0xc(%esp)
082983d4 +0x9a:  movl   $&_ZZN12CGameManager18checkOutDeathTowerEP5CUserE19__PRETTY_FUNCTION__,0x8(%esp)
082983dc +0xa2:  movl   $"App.cpp",0x4(%esp)
082983e4 +0xaa:  movl   $0x1,(%esp)
082983eb +0xb1:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
082983f0 +0xb6:  jmp    082983f6 <+0xbc>
082983f2 +0xb8:  nop
082983f3 +0xb9:  jmp    082983f6 <+0xbc>
082983f5 +0xbb:  nop
082983f6 +0xbc:  add    $0x34,%esp
082983f9 +0xbf:  pop    %ebx
082983fa +0xc0:  pop    %ebp
082983fb +0xc1:  ret
```

## 反编译 C

```c
// CGameManager::checkOutDeathTower @ 0x829833a

/* CGameManager::checkOutDeathTower(CUser*) */

void __thiscall CGameManager::checkOutDeathTower(CGameManager *this,CUser *param_1)

{
  char cVar1;
  CDeathTower *this_00;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  cVar1 = CUser::checkInDeathTower(param_1);
  if (cVar1 == '\x01') {
    CUser::getDeathTowerIndex(param_1);
    this_00 = (CDeathTower *)getDeathTower((int)this);
    if ((this_00 != (CDeathTower *)0x0) &&
       (cVar1 = WongWork::CDeathTower::onLeaveUser(this_00,param_1), cVar1 != '\x01')) {
      uVar2 = CUser::get_acc_id(param_1);
      uVar3 = NumberToString(uVar2,0);
      uVar4 = WongWork::CDeathTower::getIdx(this_00);
      LogManager::logFormat
                (1,"App.cpp","void CGameManager::checkOutDeathTower(CUser*)",0x123a,&DAT_08c17024,
                 uVar4,uVar3);
    }
  }
  return;
}
```
