# execute

`_ZN11game_master20CClearAvatarInvenCmd7executeEv`

`game_master::CClearAvatarInvenCmd::execute()`

| 类 | 地址 |
|---|---|
| `game_master::CClearAvatarInvenCmd` | `0x084aafb0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084aafb0  _ZN11game_master20CClearAvatarInvenCmd7executeEv
#           game_master::CClearAvatarInvenCmd::execute()
# range [0x084aafb0, 0x084ab16d]
084aafb0 +0x000:  push   %ebp
084aafb1 +0x001:  mov    %esp,%ebp
084aafb3 +0x003:  push   %ebx
084aafb4 +0x004:  sub    $0x34,%esp
084aafb7 +0x007:  mov    0x8(%ebp),%eax
084aafba +0x00a:  mov    %eax,(%esp)
084aafbd +0x00d:  call   084b3fba <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x6d>  ; global constructors keyed to game_master::CMacro::Reset()+0x6d
084aafc2 +0x012:  mov    %eax,-0x14(%ebp)
084aafc5 +0x015:  movl   $0x0,-0x10(%ebp)
084aafcc +0x01c:  movl   $0x0,-0xc(%ebp)
084aafd3 +0x023:  jmp    084ab0f3 <+0x143>
084aafd8 +0x028:  mov    -0x14(%ebp),%eax
084aafdb +0x02b:  mov    %eax,(%esp)
084aafde +0x02e:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
084aafe3 +0x033:  mov    0x654(%eax),%edx
084aafe9 +0x039:  mov    -0xc(%ebp),%eax
084aafec +0x03c:  imul   $0x3d,%eax,%eax
084aafef +0x03f:  lea    (%edx,%eax,1),%eax
084aaff2 +0x042:  mov    0x2(%eax),%eax
084aaff5 +0x045:  test   %eax,%eax
084aaff7 +0x047:  setne  %al
084aaffa +0x04a:  test   %al,%al
084aaffc +0x04c:  je     084ab0ef <+0x13f>
084ab002 +0x052:  mov    -0x14(%ebp),%eax
084ab005 +0x055:  mov    %eax,(%esp)
084ab008 +0x058:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
084ab00d +0x05d:  mov    0x654(%eax),%edx
084ab013 +0x063:  mov    -0xc(%ebp),%eax
084ab016 +0x066:  imul   $0x3d,%eax,%eax
084ab019 +0x069:  lea    (%edx,%eax,1),%eax
084ab01c +0x06c:  mov    0x7(%eax),%eax
084ab01f +0x06f:  mov    %eax,-0x10(%ebp)
084ab022 +0x072:  mov    -0x14(%ebp),%eax
084ab025 +0x075:  mov    %eax,(%esp)
084ab028 +0x078:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
084ab02d +0x07d:  movl   $0x1,0x14(%esp)
084ab035 +0x085:  movl   $0x3,0x10(%esp)
084ab03d +0x08d:  movl   $0x1,0xc(%esp)
084ab045 +0x095:  mov    -0xc(%ebp),%edx
084ab048 +0x098:  mov    %edx,0x8(%esp)
084ab04c +0x09c:  movl   $0x2,0x4(%esp)
084ab054 +0x0a4:  mov    %eax,(%esp)
084ab057 +0x0a7:  call   0850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>  ; CInventory::delete_item(INVEN_TYPE, int, int, eItemDelReason, bool)
084ab05c +0x0ac:  xor    $0x1,%eax
084ab05f +0x0af:  test   %al,%al
084ab061 +0x0b1:  je     084ab0b3 <+0x103>
084ab063 +0x0b3:  mov    -0x14(%ebp),%eax
084ab066 +0x0b6:  mov    %eax,(%esp)
084ab069 +0x0b9:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
084ab06e +0x0be:  movl   $0x0,0x4(%esp)
084ab076 +0x0c6:  mov    %eax,(%esp)
084ab079 +0x0c9:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
084ab07e +0x0ce:  mov    %eax,0x14(%esp)
084ab082 +0x0d2:  movl   $"CClearAvatarInvenCmd::execute, pUser(%s)->getCurCharacInvenW()->delete_item return FAILED",0x10(%esp)
084ab08a +0x0da:  movl   $0x64d,0xc(%esp)
084ab092 +0x0e2:  movl   $&_ZZN11game_master20CClearAvatarInvenCmd7executeEvE19__PRETTY_FUNCTION__,0x8(%esp)
084ab09a +0x0ea:  movl   $"GameMaster.cpp",0x4(%esp)
084ab0a2 +0x0f2:  movl   $0x1,(%esp)
084ab0a9 +0x0f9:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
084ab0ae +0x0fe:  jmp    084ab167 <+0x1b7>
084ab0b3 +0x103:  mov    -0xc(%ebp),%eax
084ab0b6 +0x106:  lea    0xa(%eax),%ebx
084ab0b9 +0x109:  mov    -0x14(%ebp),%eax
084ab0bc +0x10c:  mov    %eax,(%esp)
084ab0bf +0x10f:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
084ab0c4 +0x114:  movl   $0x0,0x14(%esp)
084ab0cc +0x11c:  mov    %ebx,0x10(%esp)
084ab0d0 +0x120:  movl   $0x1,0xc(%esp)
084ab0d8 +0x128:  mov    -0x10(%ebp),%edx
084ab0db +0x12b:  mov    %edx,0x8(%esp)
084ab0df +0x12f:  movl   $0x36,0x4(%esp)
084ab0e7 +0x137:  mov    %eax,(%esp)
084ab0ea +0x13a:  call   08508c2e <_ZNK10CInventory15SendAvatarEventEiiiii>  ; CInventory::SendAvatarEvent(int, int, int, int, int) const
084ab0ef +0x13f:  addl   $0x1,-0xc(%ebp)
084ab0f3 +0x143:  cmpl   $0x68,-0xc(%ebp)
084ab0f7 +0x147:  setle  %al
084ab0fa +0x14a:  test   %al,%al
084ab0fc +0x14c:  jne    084aafd8 <+0x28>
084ab102 +0x152:  movl   $0x1,0x4(%esp)
084ab10a +0x15a:  mov    -0x14(%ebp),%eax
084ab10d +0x15d:  mov    %eax,(%esp)
084ab110 +0x160:  call   0865db6c <_ZN5CUser14send_itemspaceEi>  ; CUser::send_itemspace(int)
084ab115 +0x165:  xor    $0x1,%eax
084ab118 +0x168:  test   %al,%al
084ab11a +0x16a:  je     084ab167 <+0x1b7>
084ab11c +0x16c:  mov    -0x14(%ebp),%eax
084ab11f +0x16f:  mov    %eax,(%esp)
084ab122 +0x172:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
084ab127 +0x177:  movl   $0x0,0x4(%esp)
084ab12f +0x17f:  mov    %eax,(%esp)
084ab132 +0x182:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
084ab137 +0x187:  mov    %eax,0x14(%esp)
084ab13b +0x18b:  movl   $"CClearAvatarInvenCmd::execute, pUser(%s)->send_itemspace( ENUM_ITEMSPACE_AVATAR ) return FAILED",0x10(%esp)
084ab143 +0x193:  movl   $0x656,0xc(%esp)
084ab14b +0x19b:  movl   $&_ZZN11game_master20CClearAvatarInvenCmd7executeEvE19__PRETTY_FUNCTION__,0x8(%esp)
084ab153 +0x1a3:  movl   $"GameMaster.cpp",0x4(%esp)
084ab15b +0x1ab:  movl   $0x1,(%esp)
084ab162 +0x1b2:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
084ab167 +0x1b7:  add    $0x34,%esp
084ab16a +0x1ba:  pop    %ebx
084ab16b +0x1bb:  pop    %ebp
084ab16c +0x1bc:  ret
084ab16d +0x1bd:  nop
```

## 反编译 C

```c
// game_master::CClearAvatarInvenCmd::execute @ 0x84aafb0

/* game_master::CClearAvatarInvenCmd::execute() */

void __thiscall game_master::CClearAvatarInvenCmd::execute(CClearAvatarInvenCmd *this)

{
  char cVar1;
  CUserCharacInfo *this_00;
  int iVar2;
  CInventory *pCVar3;
  uint uVar4;
  undefined4 uVar5;
  int local_10;
  
  this_00 = (CUserCharacInfo *)CCommand::GetUser((CCommand *)this);
  local_10 = 0;
  do {
    if (0x68 < local_10) {
      cVar1 = CUser::send_itemspace((CUser *)this_00,1);
      if (cVar1 != '\x01') {
        uVar4 = CUser::get_acc_id((CUser *)this_00);
        uVar5 = NumberToString(uVar4,0);
        LogManager::logFormat
                  (1,"GameMaster.cpp","virtual void game_master::CClearAvatarInvenCmd::execute()",
                   0x656,
                   "CClearAvatarInvenCmd::execute, pUser(%s)->send_itemspace( ENUM_ITEMSPACE_AVATAR ) return FAILED"
                   ,uVar5);
      }
      return;
    }
    iVar2 = CUserCharacInfo::getCurCharacInvenR(this_00);
    if (*(int *)(*(int *)(iVar2 + 0x654) + local_10 * 0x3d + 2) != 0) {
      iVar2 = CUserCharacInfo::getCurCharacInvenR(this_00);
      iVar2 = *(int *)(*(int *)(iVar2 + 0x654) + local_10 * 0x3d + 7);
      pCVar3 = (CInventory *)CUserCharacInfo::getCurCharacInvenW(this_00);
      cVar1 = CInventory::delete_item(pCVar3,2,local_10,1,3,1);
      if (cVar1 != '\x01') {
        uVar4 = CUser::get_acc_id((CUser *)this_00);
        uVar5 = NumberToString(uVar4,0);
        LogManager::logFormat
                  (1,"GameMaster.cpp","virtual void game_master::CClearAvatarInvenCmd::execute()",
                   0x64d,
                   "CClearAvatarInvenCmd::execute, pUser(%s)->getCurCharacInvenW()->delete_item return FAILED"
                   ,uVar5);
        return;
      }
      pCVar3 = (CInventory *)CUserCharacInfo::getCurCharacInvenW(this_00);
      CInventory::SendAvatarEvent(pCVar3,0x36,iVar2,1,local_10 + 10,0);
    }
    local_10 = local_10 + 1;
  } while( true );
}
```
