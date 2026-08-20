# execute

`_ZN11game_master18CClearInventoryCmd7executeEv`

`game_master::CClearInventoryCmd::execute()`

| 类 | 地址 |
|---|---|
| `game_master::CClearInventoryCmd` | `0x084aaef8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084aaef8  _ZN11game_master18CClearInventoryCmd7executeEv
#           game_master::CClearInventoryCmd::execute()
# range [0x084aaef8, 0x084aafaf]
084aaef8 +0x00:  push   %ebp
084aaef9 +0x01:  mov    %esp,%ebp
084aaefb +0x03:  sub    $0x38,%esp
084aaefe +0x06:  mov    0x8(%ebp),%eax
084aaf01 +0x09:  mov    %eax,(%esp)
084aaf04 +0x0c:  call   084b3fba <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x6d>  ; global constructors keyed to game_master::CMacro::Reset()+0x6d
084aaf09 +0x11:  mov    %eax,-0x10(%ebp)
084aaf0c +0x14:  movl   $0x3,-0xc(%ebp)
084aaf13 +0x1b:  jmp    084aaf3b <+0x43>
084aaf15 +0x1d:  mov    -0x10(%ebp),%eax
084aaf18 +0x20:  mov    %eax,(%esp)
084aaf1b +0x23:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
084aaf20 +0x28:  mov    0x650(%eax),%edx
084aaf26 +0x2e:  mov    -0xc(%ebp),%eax
084aaf29 +0x31:  imul   $0x3d,%eax,%eax
084aaf2c +0x34:  lea    (%edx,%eax,1),%eax
084aaf2f +0x37:  mov    %eax,(%esp)
084aaf32 +0x3a:  call   080cb7d8 <_GLOBAL__I__ZN10BingoEventC2Ev+0x625>  ; global constructors keyed to BingoEvent::BingoEvent()+0x625
084aaf37 +0x3f:  addl   $0x1,-0xc(%ebp)
084aaf3b +0x43:  cmpl   $0x137,-0xc(%ebp)
084aaf42 +0x4a:  setle  %al
084aaf45 +0x4d:  test   %al,%al
084aaf47 +0x4f:  jne    084aaf15 <+0x1d>
084aaf49 +0x51:  movl   $0x0,0x4(%esp)
084aaf51 +0x59:  mov    -0x10(%ebp),%eax
084aaf54 +0x5c:  mov    %eax,(%esp)
084aaf57 +0x5f:  call   0865db6c <_ZN5CUser14send_itemspaceEi>  ; CUser::send_itemspace(int)
084aaf5c +0x64:  xor    $0x1,%eax
084aaf5f +0x67:  test   %al,%al
084aaf61 +0x69:  je     084aafae <+0xb6>
084aaf63 +0x6b:  mov    -0x10(%ebp),%eax
084aaf66 +0x6e:  mov    %eax,(%esp)
084aaf69 +0x71:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
084aaf6e +0x76:  movl   $0x0,0x4(%esp)
084aaf76 +0x7e:  mov    %eax,(%esp)
084aaf79 +0x81:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
084aaf7e +0x86:  mov    %eax,0x14(%esp)
084aaf82 +0x8a:  movl   $"CClearInventoryCmd::execute, pUser(%s)->send_itemspace( ENUM_ITEMSPACE_INVENTORY ) return FAILED",0x10(%esp)
084aaf8a +0x92:  movl   $0x63b,0xc(%esp)
084aaf92 +0x9a:  movl   $&_ZZN11game_master18CClearInventoryCmd7executeEvE19__PRETTY_FUNCTION__,0x8(%esp)
084aaf9a +0xa2:  movl   $"GameMaster.cpp",0x4(%esp)
084aafa2 +0xaa:  movl   $0x1,(%esp)
084aafa9 +0xb1:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
084aafae +0xb6:  leave
084aafaf +0xb7:  ret
```

## 反编译 C

```c
// game_master::CClearInventoryCmd::execute @ 0x84aaef8

/* game_master::CClearInventoryCmd::execute() */

void __thiscall game_master::CClearInventoryCmd::execute(CClearInventoryCmd *this)

{
  char cVar1;
  CUserCharacInfo *this_00;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int local_10;
  
  this_00 = (CUserCharacInfo *)CCommand::GetUser((CCommand *)this);
  for (local_10 = 3; local_10 < 0x138; local_10 = local_10 + 1) {
    iVar2 = CUserCharacInfo::getCurCharacInvenW(this_00);
    Inven_Item::reset((Inven_Item *)(*(int *)(iVar2 + 0x650) + local_10 * 0x3d));
  }
  cVar1 = CUser::send_itemspace((CUser *)this_00,0);
  if (cVar1 != '\x01') {
    uVar3 = CUser::get_acc_id((CUser *)this_00);
    uVar4 = NumberToString(uVar3,0);
    LogManager::logFormat
              (1,"GameMaster.cpp","virtual void game_master::CClearInventoryCmd::execute()",0x63b,
               "CClearInventoryCmd::execute, pUser(%s)->send_itemspace( ENUM_ITEMSPACE_INVENTORY ) return FAILED"
               ,uVar4);
  }
  return;
}
```
