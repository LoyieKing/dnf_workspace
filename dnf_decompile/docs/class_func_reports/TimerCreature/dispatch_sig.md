# dispatch_sig

`_ZN13TimerCreature12dispatch_sigEiij`

`TimerCreature::dispatch_sig(int, int, unsigned int)`

| 类 | 地址 |
|---|---|
| `TimerCreature` | `0x08635e96` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08635e96  _ZN13TimerCreature12dispatch_sigEiij
#           TimerCreature::dispatch_sig(int, int, unsigned int)
# range [0x08635e96, 0x08635f4f]
08635e96 +0x00:  push   %ebp
08635e97 +0x01:  mov    %esp,%ebp
08635e99 +0x03:  sub    $0x28,%esp
08635e9c +0x06:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
08635ea1 +0x0b:  movl   $0x1,0x8(%esp)
08635ea9 +0x13:  mov    0xc(%ebp),%edx
08635eac +0x16:  mov    %edx,0x4(%esp)
08635eb0 +0x1a:  mov    %eax,(%esp)
08635eb3 +0x1d:  call   082947a4 <_ZN12CGameManager7getUserEii>  ; CGameManager::getUser(int, int)
08635eb8 +0x22:  mov    %eax,-0x10(%ebp)
08635ebb +0x25:  cmpl   $0x0,-0x10(%ebp)
08635ebf +0x29:  jne    08635ecb <+0x35>
08635ec1 +0x2b:  mov    $0x0,%eax
08635ec6 +0x30:  jmp    08635f4d <+0xb7>
08635ecb +0x35:  mov    -0x10(%ebp),%eax
08635ece +0x38:  mov    %eax,(%esp)
08635ed1 +0x3b:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
08635ed6 +0x40:  movzwl %ax,%eax
08635ed9 +0x43:  cmp    0x10(%ebp),%eax
08635edc +0x46:  setne  %al
08635edf +0x49:  test   %al,%al
08635ee1 +0x4b:  je     08635eea <+0x54>
08635ee3 +0x4d:  mov    $0x0,%eax
08635ee8 +0x52:  jmp    08635f4d <+0xb7>
08635eea +0x54:  mov    -0x10(%ebp),%eax
08635eed +0x57:  mov    %eax,(%esp)
08635ef0 +0x5a:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
08635ef5 +0x5f:  cmp    0x14(%ebp),%eax
08635ef8 +0x62:  setne  %al
08635efb +0x65:  test   %al,%al
08635efd +0x67:  je     08635f06 <+0x70>
08635eff +0x69:  mov    $0x0,%eax
08635f04 +0x6e:  jmp    08635f4d <+0xb7>
08635f06 +0x70:  mov    -0x10(%ebp),%eax
08635f09 +0x73:  mov    %eax,(%esp)
08635f0c +0x76:  call   0863bdc4 <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x2d5>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x2d5
08635f11 +0x7b:  mov    %al,-0x9(%ebp)
08635f14 +0x7e:  mov    -0x10(%ebp),%eax
08635f17 +0x81:  mov    %eax,(%esp)
08635f1a +0x84:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
08635f1f +0x89:  mov    %eax,(%esp)
08635f22 +0x8c:  call   080dd568 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xb1>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xb1
08635f27 +0x91:  mov    %eax,(%esp)
08635f2a +0x94:  call   08339acc <_ZN13user_creature12CCreatureMgr17CheckDiedCreatureEv>  ; user_creature::CCreatureMgr::CheckDiedCreature()
08635f2f +0x99:  mov    %al,-0x11(%ebp)
08635f32 +0x9c:  movzbl -0x9(%ebp),%eax
08635f36 +0xa0:  xor    $0x1,%eax
08635f39 +0xa3:  test   %al,%al
08635f3b +0xa5:  je     08635f48 <+0xb2>
08635f3d +0xa7:  mov    -0x10(%ebp),%eax
08635f40 +0xaa:  mov    %eax,(%esp)
08635f43 +0xad:  call   084ebf18 <_GLOBAL__I__Z7getUserj+0x2eca>  ; global constructors keyed to getUser(unsigned int)+0x2eca
08635f48 +0xb2:  mov    $0x1,%eax
08635f4d +0xb7:  leave
08635f4e +0xb8:  ret
08635f4f +0xb9:  nop
```

## 反编译 C

```c
// TimerCreature::dispatch_sig @ 0x8635e96

/* TimerCreature::dispatch_sig(int, int, unsigned int) */

undefined4 __thiscall
TimerCreature::dispatch_sig(TimerCreature *this,int param_1,int param_2,uint param_3)

{
  char cVar1;
  int iVar2;
  CUser *this_00;
  undefined4 uVar3;
  uint uVar4;
  CInventory *this_01;
  CCreatureMgr *this_02;
  
  iVar2 = G_CGameManager();
  this_00 = (CUser *)CGameManager::getUser(iVar2,param_1);
  if (this_00 == (CUser *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar4 = CUser::get_unique_id(this_00);
    if ((uVar4 & 0xffff) == param_2) {
      uVar4 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)this_00);
      if (uVar4 == param_3) {
        cVar1 = CUserCharacInfo::isSaveInven((CUserCharacInfo *)this_00);
        this_01 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)this_00);
        this_02 = (CCreatureMgr *)CInventory::GetCreatureMgrW(this_01);
        user_creature::CCreatureMgr::CheckDiedCreature(this_02);
        if (cVar1 != '\x01') {
          CUserCharacInfo::disableSaveInven((CUserCharacInfo *)this_00);
        }
        uVar3 = 1;
      }
      else {
        uVar3 = 0;
      }
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}
```
