# checkOutBossTower

`_ZN12CGameManager17checkOutBossTowerEP5CUser`

`CGameManager::checkOutBossTower(CUser*)`

| 类 | 地址 |
|---|---|
| `CGameManager` | `0x082981a4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082981a4  _ZN12CGameManager17checkOutBossTowerEP5CUser
#           CGameManager::checkOutBossTower(CUser*)
# range [0x082981a4, 0x08298271]
082981a4 +0x00:  push   %ebp
082981a5 +0x01:  mov    %esp,%ebp
082981a7 +0x03:  push   %ebx
082981a8 +0x04:  sub    $0x34,%esp
082981ab +0x07:  mov    0xc(%ebp),%eax
082981ae +0x0a:  mov    %eax,(%esp)
082981b1 +0x0d:  call   082a67e2 <_GLOBAL__I__ZN4CLog5this_E+0x2c09>  ; global constructors keyed to CLog::this_+0x2c09
082981b6 +0x12:  xor    $0x1,%eax
082981b9 +0x15:  test   %al,%al
082981bb +0x17:  jne    08298267 <+0xc3>
082981c1 +0x1d:  mov    0xc(%ebp),%eax
082981c4 +0x20:  mov    %eax,(%esp)
082981c7 +0x23:  call   0822fe94 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x553e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x553e
082981cc +0x28:  cwtl
082981cd +0x29:  mov    %eax,0x4(%esp)
082981d1 +0x2d:  mov    0x8(%ebp),%eax
082981d4 +0x30:  mov    %eax,(%esp)
082981d7 +0x33:  call   082959fa <_ZN12CGameManager12getBossTowerEi>  ; CGameManager::getBossTower(int)
082981dc +0x38:  mov    %eax,-0xc(%ebp)
082981df +0x3b:  cmpl   $0x0,-0xc(%ebp)
082981e3 +0x3f:  je     0829826a <+0xc6>
082981e9 +0x45:  mov    -0xc(%ebp),%eax
082981ec +0x48:  mov    (%eax),%eax
082981ee +0x4a:  add    $0x14,%eax
082981f1 +0x4d:  mov    (%eax),%edx
082981f3 +0x4f:  mov    0xc(%ebp),%eax
082981f6 +0x52:  mov    %eax,0x4(%esp)
082981fa +0x56:  mov    -0xc(%ebp),%eax
082981fd +0x59:  mov    %eax,(%esp)
08298200 +0x5c:  call   *%edx
08298202 +0x5e:  xor    $0x1,%eax
08298205 +0x61:  test   %al,%al
08298207 +0x63:  je     0829826b <+0xc7>
08298209 +0x65:  mov    0xc(%ebp),%eax
0829820c +0x68:  mov    %eax,(%esp)
0829820f +0x6b:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
08298214 +0x70:  movl   $0x0,0x4(%esp)
0829821c +0x78:  mov    %eax,(%esp)
0829821f +0x7b:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
08298224 +0x80:  mov    %eax,%ebx
08298226 +0x82:  mov    -0xc(%ebp),%eax
08298229 +0x85:  mov    %eax,(%esp)
0829822c +0x88:  call   082aa728 <_GLOBAL__I__ZN4CLog5this_E+0x6b4f>  ; global constructors keyed to CLog::this_+0x6b4f
08298231 +0x8d:  mov    %ebx,0x18(%esp)
08298235 +0x91:  mov    %eax,0x14(%esp)
08298239 +0x95:  movl   $"BossTower checkOutBossTower ID[%d] ACCID[%s]",0x10(%esp)
08298241 +0x9d:  movl   $0x11d9,0xc(%esp)
08298249 +0xa5:  movl   $&_ZZN12CGameManager17checkOutBossTowerEP5CUserE19__PRETTY_FUNCTION__,0x8(%esp)
08298251 +0xad:  movl   $"App.cpp",0x4(%esp)
08298259 +0xb5:  movl   $0x1,(%esp)
08298260 +0xbc:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08298265 +0xc1:  jmp    0829826b <+0xc7>
08298267 +0xc3:  nop
08298268 +0xc4:  jmp    0829826b <+0xc7>
0829826a +0xc6:  nop
0829826b +0xc7:  add    $0x34,%esp
0829826e +0xca:  pop    %ebx
0829826f +0xcb:  pop    %ebp
08298270 +0xcc:  ret
08298271 +0xcd:  nop
```

## 反编译 C

```c
// CGameManager::checkOutBossTower @ 0x82981a4

/* CGameManager::checkOutBossTower(CUser*) */

void __thiscall CGameManager::checkOutBossTower(CGameManager *this,CUser *param_1)

{
  char cVar1;
  CBossTower *this_00;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  cVar1 = CUser::checkInBossTower(param_1);
  if (cVar1 == '\x01') {
    CUser::getBossTowerIndex(param_1);
    this_00 = (CBossTower *)getBossTower((int)this);
    if ((this_00 != (CBossTower *)0x0) &&
       (cVar1 = (**(code **)(*(int *)this_00 + 0x14))(this_00,param_1), cVar1 != '\x01')) {
      uVar2 = CUser::get_acc_id(param_1);
      uVar3 = NumberToString(uVar2,0);
      uVar4 = WongWork::CBossTower::getIdx(this_00);
      LogManager::logFormat
                (1,"App.cpp","void CGameManager::checkOutBossTower(CUser*)",0x11d9,
                 "BossTower checkOutBossTower ID[%d] ACCID[%s]",uVar4,uVar3);
    }
  }
  return;
}
```
