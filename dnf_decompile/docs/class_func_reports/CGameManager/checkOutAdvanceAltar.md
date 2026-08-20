# checkOutAdvanceAltar

`_ZN12CGameManager20checkOutAdvanceAltarEP5CUser`

`CGameManager::checkOutAdvanceAltar(CUser*)`

| 类 | 地址 |
|---|---|
| `CGameManager` | `0x08298272` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08298272  _ZN12CGameManager20checkOutAdvanceAltarEP5CUser
#           CGameManager::checkOutAdvanceAltar(CUser*)
# range [0x08298272, 0x08298339]
08298272 +0x00:  push   %ebp
08298273 +0x01:  mov    %esp,%ebp
08298275 +0x03:  push   %ebx
08298276 +0x04:  sub    $0x34,%esp
08298279 +0x07:  cmpl   $0x0,0xc(%ebp)
0829827d +0x0b:  je     0829832d <+0xbb>
08298283 +0x11:  mov    0xc(%ebp),%eax
08298286 +0x14:  mov    %eax,(%esp)
08298289 +0x17:  call   082a67f8 <_GLOBAL__I__ZN4CLog5this_E+0x2c1f>  ; global constructors keyed to CLog::this_+0x2c1f
0829828e +0x1c:  xor    $0x1,%eax
08298291 +0x1f:  test   %al,%al
08298293 +0x21:  jne    08298330 <+0xbe>
08298299 +0x27:  mov    0xc(%ebp),%eax
0829829c +0x2a:  mov    %eax,(%esp)
0829829f +0x2d:  call   082a680e <_GLOBAL__I__ZN4CLog5this_E+0x2c35>  ; global constructors keyed to CLog::this_+0x2c35
082982a4 +0x32:  cwtl
082982a5 +0x33:  mov    %eax,0x4(%esp)
082982a9 +0x37:  mov    0x8(%ebp),%eax
082982ac +0x3a:  mov    %eax,(%esp)
082982af +0x3d:  call   08295c38 <_ZN12CGameManager15getAdvanceAltarEi>  ; CGameManager::getAdvanceAltar(int)
082982b4 +0x42:  mov    %eax,-0xc(%ebp)
082982b7 +0x45:  cmpl   $0x0,-0xc(%ebp)
082982bb +0x49:  je     08298333 <+0xc1>
082982bd +0x4b:  mov    -0xc(%ebp),%eax
082982c0 +0x4e:  mov    %eax,(%esp)
082982c3 +0x51:  call   0812fc4e <_ZN12advancealtar12StageControl9leaveUserEv>  ; advancealtar::StageControl::leaveUser()
082982c8 +0x56:  xor    $0x1,%eax
082982cb +0x59:  test   %al,%al
082982cd +0x5b:  je     08298334 <+0xc2>
082982cf +0x5d:  mov    0xc(%ebp),%eax
082982d2 +0x60:  mov    %eax,(%esp)
082982d5 +0x63:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
082982da +0x68:  movl   $0x0,0x4(%esp)
082982e2 +0x70:  mov    %eax,(%esp)
082982e5 +0x73:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
082982ea +0x78:  mov    %eax,%ebx
082982ec +0x7a:  mov    -0xc(%ebp),%eax
082982ef +0x7d:  mov    %eax,(%esp)
082982f2 +0x80:  call   081348ba <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x4c1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x4c1
082982f7 +0x85:  mov    %ebx,0x18(%esp)
082982fb +0x89:  mov    %eax,0x14(%esp)
082982ff +0x8d:  movl   $"invalid user : advance altar logout ID[%d] ACCID[%s]",0x10(%esp)
08298307 +0x95:  movl   $0x11ef,0xc(%esp)
0829830f +0x9d:  movl   $&_ZZN12CGameManager20checkOutAdvanceAltarEP5CUserE19__PRETTY_FUNCTION__,0x8(%esp)
08298317 +0xa5:  movl   $"App.cpp",0x4(%esp)
0829831f +0xad:  movl   $0x1,(%esp)
08298326 +0xb4:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0829832b +0xb9:  jmp    08298334 <+0xc2>
0829832d +0xbb:  nop
0829832e +0xbc:  jmp    08298334 <+0xc2>
08298330 +0xbe:  nop
08298331 +0xbf:  jmp    08298334 <+0xc2>
08298333 +0xc1:  nop
08298334 +0xc2:  add    $0x34,%esp
08298337 +0xc5:  pop    %ebx
08298338 +0xc6:  pop    %ebp
08298339 +0xc7:  ret
```

## 反编译 C

```c
// CGameManager::checkOutAdvanceAltar @ 0x8298272

/* CGameManager::checkOutAdvanceAltar(CUser*) */

void __thiscall CGameManager::checkOutAdvanceAltar(CGameManager *this,CUser *param_1)

{
  char cVar1;
  StageControl *this_00;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if ((param_1 != (CUser *)0x0) && (cVar1 = CUser::checkInAdvanceAltar(param_1), cVar1 == '\x01')) {
    CUser::getAdvanceAltarIndex(param_1);
    this_00 = (StageControl *)getAdvanceAltar((int)this);
    if ((this_00 != (StageControl *)0x0) &&
       (cVar1 = advancealtar::StageControl::leaveUser(this_00), cVar1 != '\x01')) {
      uVar2 = CUser::get_acc_id(param_1);
      uVar3 = NumberToString(uVar2,0);
      uVar4 = advancealtar::StageControl::getIndex(this_00);
      LogManager::logFormat
                (1,"App.cpp","void CGameManager::checkOutAdvanceAltar(CUser*)",0x11ef,
                 "invalid user : advance altar logout ID[%d] ACCID[%s]",uVar4,uVar3);
    }
  }
  return;
}
```
