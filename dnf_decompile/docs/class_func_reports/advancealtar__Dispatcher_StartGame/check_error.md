# check_error

`_ZN12advancealtar20Dispatcher_StartGame11check_errorEP5CUserR8MSG_BASE`

`advancealtar::Dispatcher_StartGame::check_error(CUser*, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `advancealtar::Dispatcher_StartGame` | `0x0813f7de` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0813f7de  _ZN12advancealtar20Dispatcher_StartGame11check_errorEP5CUserR8MSG_BASE
#           advancealtar::Dispatcher_StartGame::check_error(CUser*, MSG_BASE&)
# range [0x0813f7de, 0x0813f8cd]
0813f7de +0x00:  push   %ebp
0813f7df +0x01:  mov    %esp,%ebp
0813f7e1 +0x03:  sub    $0x18,%esp
0813f7e4 +0x06:  call   0812cfea <_ZN12advancealtar18isOpenAdvanceAltarEv>  ; advancealtar::isOpenAdvanceAltar()
0813f7e9 +0x0b:  xor    $0x1,%eax
0813f7ec +0x0e:  test   %al,%al
0813f7ee +0x10:  je     0813f7fa <+0x1c>
0813f7f0 +0x12:  mov    $0x1,%eax
0813f7f5 +0x17:  jmp    0813f8cc <+0xee>
0813f7fa +0x1c:  mov    0xc(%ebp),%eax
0813f7fd +0x1f:  mov    %eax,(%esp)
0813f800 +0x22:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
0813f805 +0x27:  cmp    $0x3,%eax
0813f808 +0x2a:  setne  %al
0813f80b +0x2d:  test   %al,%al
0813f80d +0x2f:  je     0813f819 <+0x3b>
0813f80f +0x31:  mov    $0x3,%eax
0813f814 +0x36:  jmp    0813f8cc <+0xee>
0813f819 +0x3b:  mov    0xc(%ebp),%eax
0813f81c +0x3e:  mov    %eax,(%esp)
0813f81f +0x41:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
0813f824 +0x46:  cmp    $0x31,%eax
0813f827 +0x49:  setle  %al
0813f82a +0x4c:  test   %al,%al
0813f82c +0x4e:  je     0813f838 <+0x5a>
0813f82e +0x50:  mov    $0x4,%eax
0813f833 +0x55:  jmp    0813f8cc <+0xee>
0813f838 +0x5a:  mov    0xc(%ebp),%eax
0813f83b +0x5d:  mov    %eax,(%esp)
0813f83e +0x60:  call   0868e9c0 <_ZNK5CUser22isCompetitionMercenaryEv>  ; CUser::isCompetitionMercenary() const
0813f843 +0x65:  test   %al,%al
0813f845 +0x67:  je     0813f84e <+0x70>
0813f847 +0x69:  mov    $0x3,%eax
0813f84c +0x6e:  jmp    0813f8cc <+0xee>
0813f84e +0x70:  call   085c4be8 <_ZN13private_store26GetInstancePrivateStoreMgrEv>  ; private_store::GetInstancePrivateStoreMgr()
0813f853 +0x75:  mov    0xc(%ebp),%edx
0813f856 +0x78:  mov    %edx,0x4(%esp)
0813f85a +0x7c:  mov    %eax,(%esp)
0813f85d +0x7f:  call   085cad5e <_ZN13private_store16CPrivateStoreMgr18IsBusyPrivateStoreEP5CUser>  ; private_store::CPrivateStoreMgr::IsBusyPrivateStore(CUser*)
0813f862 +0x84:  test   %al,%al
0813f864 +0x86:  je     0813f86d <+0x8f>
0813f866 +0x88:  mov    $0x3,%eax
0813f86b +0x8d:  jmp    0813f8cc <+0xee>
0813f86d +0x8f:  mov    0xc(%ebp),%eax
0813f870 +0x92:  mov    %eax,(%esp)
0813f873 +0x95:  call   080da2fe <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x49b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x49b
0813f878 +0x9a:  test   %al,%al
0813f87a +0x9c:  je     0813f883 <+0xa5>
0813f87c +0x9e:  mov    $0x2,%eax
0813f881 +0xa3:  jmp    0813f8cc <+0xee>
0813f883 +0xa5:  mov    0xc(%ebp),%eax
0813f886 +0xa8:  mov    %eax,(%esp)
0813f889 +0xab:  call   0864781e <_ZN15CUserCharacInfo19IsBusyDisjointStoreEv>  ; CUserCharacInfo::IsBusyDisjointStore()
0813f88e +0xb0:  test   %al,%al
0813f890 +0xb2:  je     0813f899 <+0xbb>
0813f892 +0xb4:  mov    $0x3,%eax
0813f897 +0xb9:  jmp    0813f8cc <+0xee>
0813f899 +0xbb:  mov    0xc(%ebp),%eax
0813f89c +0xbe:  mov    %eax,(%esp)
0813f89f +0xc1:  call   080da314 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x4b1>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x4b1
0813f8a4 +0xc6:  test   %al,%al
0813f8a6 +0xc8:  je     0813f8af <+0xd1>
0813f8a8 +0xca:  mov    $0x3,%eax
0813f8ad +0xcf:  jmp    0813f8cc <+0xee>
0813f8af +0xd1:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
0813f8b4 +0xd6:  mov    %eax,(%esp)
0813f8b7 +0xd9:  call   081424e8 <_GLOBAL__I__ZN12advancealtar18convertZipToStringEP5MySQLiPcjS2_j+0x83c>  ; global constructors keyed to advancealtar::convertZipToString(MySQL*, int, char*, unsigned int, char*, unsigned int)+0x83c
0813f8bc +0xde:  test   %al,%al
0813f8be +0xe0:  je     0813f8c7 <+0xe9>
0813f8c0 +0xe2:  mov    $0x3,%eax
0813f8c5 +0xe7:  jmp    0813f8cc <+0xee>
0813f8c7 +0xe9:  mov    $0x0,%eax
0813f8cc +0xee:  leave
0813f8cd +0xef:  ret
```

## 反编译 C

```c
// advancealtar::Dispatcher_StartGame::check_error @ 0x813f7de

/* advancealtar::Dispatcher_StartGame::check_error(CUser*, MSG_BASE&) */

undefined4 advancealtar::Dispatcher_StartGame::check_error(CUser *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  CPrivateStoreMgr *this;
  GameWorld *this_00;
  
  cVar1 = isOpenAdvanceAltar();
  if (cVar1 == '\x01') {
    iVar3 = CUser::get_state((CUser *)param_2);
    if (iVar3 == 3) {
      iVar3 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_2);
      if (iVar3 < 0x32) {
        uVar2 = 4;
      }
      else {
        cVar1 = CUser::isCompetitionMercenary((CUser *)param_2);
        if (cVar1 == '\0') {
          this = (CPrivateStoreMgr *)private_store::GetInstancePrivateStoreMgr();
          cVar1 = private_store::CPrivateStoreMgr::IsBusyPrivateStore(this,(CUser *)param_2);
          if (cVar1 == '\0') {
            cVar1 = CUser::CheckInTrade((CUser *)param_2);
            if (cVar1 == '\0') {
              cVar1 = CUserCharacInfo::IsBusyDisjointStore((CUserCharacInfo *)param_2);
              if (cVar1 == '\0') {
                cVar1 = CUser::CheckInParty((CUser *)param_2);
                if (cVar1 == '\0') {
                  this_00 = (GameWorld *)G_GameWorld();
                  cVar1 = GameWorld::IsPVPChannel(this_00);
                  if (cVar1 == '\0') {
                    uVar2 = 0;
                  }
                  else {
                    uVar2 = 3;
                  }
                }
                else {
                  uVar2 = 3;
                }
              }
              else {
                uVar2 = 3;
              }
            }
            else {
              uVar2 = 2;
            }
          }
          else {
            uVar2 = 3;
          }
        }
        else {
          uVar2 = 3;
        }
      }
    }
    else {
      uVar2 = 3;
    }
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}
```
