# leaveUser

`_ZN10BlueMarble9leaveUserEP5CUser`

`BlueMarble::leaveUser(CUser*)`

| 类 | 地址 |
|---|---|
| `BlueMarble` | `0x080d9136` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080d9136  _ZN10BlueMarble9leaveUserEP5CUser
#           BlueMarble::leaveUser(CUser*)
# range [0x080d9136, 0x080d9201]
080d9136 +0x00:  push   %ebp
080d9137 +0x01:  mov    %esp,%ebp
080d9139 +0x03:  sub    $0x38,%esp
080d913c +0x06:  cmpl   $0x0,0xc(%ebp)
080d9140 +0x0a:  jne    080d9173 <+0x3d>
080d9142 +0x0c:  movl   $"BlueMarble::leaveUser user is NULL",0x10(%esp)
080d914a +0x14:  movl   $0x3f9,0xc(%esp)
080d9152 +0x1c:  movl   $&_ZZN10BlueMarble9leaveUserEP5CUserE19__PRETTY_FUNCTION__,0x8(%esp)
080d915a +0x24:  movl   $"BlueMarble.cpp",0x4(%esp)
080d9162 +0x2c:  movl   $0x1,(%esp)
080d9169 +0x33:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
080d916e +0x38:  jmp    080d91ff <+0xc9>
080d9173 +0x3d:  mov    0xc(%ebp),%eax
080d9176 +0x40:  mov    %eax,0x4(%esp)
080d917a +0x44:  mov    0x8(%ebp),%eax
080d917d +0x47:  mov    %eax,(%esp)
080d9180 +0x4a:  call   080d9074 <_ZNK10BlueMarble11getUserSlotEP5CUser>  ; BlueMarble::getUserSlot(CUser*) const
080d9185 +0x4f:  mov    %eax,-0xc(%ebp)
080d9188 +0x52:  cmpl   $0xffffffff,-0xc(%ebp)
080d918c +0x56:  jne    080d91c3 <+0x8d>
080d918e +0x58:  mov    -0xc(%ebp),%eax
080d9191 +0x5b:  mov    %eax,0x14(%esp)
080d9195 +0x5f:  movl   $"BlueMarble::leaveUser slot(%d)",0x10(%esp)
080d919d +0x67:  movl   $0x400,0xc(%esp)
080d91a5 +0x6f:  movl   $&_ZZN10BlueMarble9leaveUserEP5CUserE19__PRETTY_FUNCTION__,0x8(%esp)
080d91ad +0x77:  movl   $"BlueMarble.cpp",0x4(%esp)
080d91b5 +0x7f:  movl   $0x1,(%esp)
080d91bc +0x86:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
080d91c1 +0x8b:  jmp    080d91ff <+0xc9>
080d91c3 +0x8d:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
080d91c8 +0x92:  mov    0xc(%ebp),%edx
080d91cb +0x95:  mov    %edx,0x4(%esp)
080d91cf +0x99:  mov    %eax,(%esp)
080d91d2 +0x9c:  call   086c7914 <_ZN9GameWorld17outFromBlueMarbleEP5CUser>  ; GameWorld::outFromBlueMarble(CUser*)
080d91d7 +0xa1:  mov    -0xc(%ebp),%eax
080d91da +0xa4:  mov    %eax,0x4(%esp)
080d91de +0xa8:  mov    0x8(%ebp),%eax
080d91e1 +0xab:  mov    %eax,(%esp)
080d91e4 +0xae:  call   080d82f2 <_ZN10BlueMarble16setLeaveUserSlotEi>  ; BlueMarble::setLeaveUserSlot(int)
080d91e9 +0xb3:  mov    0x8(%ebp),%eax
080d91ec +0xb6:  mov    %eax,(%esp)
080d91ef +0xb9:  call   080d8412 <_ZN10BlueMarble27setLeaveUserBlueMarbleStateEv>  ; BlueMarble::setLeaveUserBlueMarbleState()
080d91f4 +0xbe:  mov    0x8(%ebp),%eax
080d91f7 +0xc1:  mov    %eax,(%esp)
080d91fa +0xc4:  call   080d84b4 <_ZNK10BlueMarble22sendBlueMarbleRoomInfoEv>  ; BlueMarble::sendBlueMarbleRoomInfo() const
080d91ff +0xc9:  leave
080d9200 +0xca:  ret
080d9201 +0xcb:  nop
```

## 反编译 C

```c
// BlueMarble::leaveUser @ 0x80d9136

/* BlueMarble::leaveUser(CUser*) */

void __thiscall BlueMarble::leaveUser(BlueMarble *this,CUser *param_1)

{
  int iVar1;
  GameWorld *this_00;
  
  if (param_1 == (CUser *)0x0) {
    LogManager::logFormat
              (1,"BlueMarble.cpp","void BlueMarble::leaveUser(CUser*)",0x3f9,
               "BlueMarble::leaveUser user is NULL");
  }
  else {
    iVar1 = getUserSlot(this,param_1);
    if (iVar1 == -1) {
      LogManager::logFormat
                (1,"BlueMarble.cpp","void BlueMarble::leaveUser(CUser*)",0x400,
                 "BlueMarble::leaveUser slot(%d)",0xffffffff);
    }
    else {
      this_00 = (GameWorld *)G_GameWorld();
      GameWorld::outFromBlueMarble(this_00,param_1);
      setLeaveUserSlot(this,iVar1);
      setLeaveUserBlueMarbleState(this);
      sendBlueMarbleRoomInfo(this);
    }
  }
  return;
}
```
