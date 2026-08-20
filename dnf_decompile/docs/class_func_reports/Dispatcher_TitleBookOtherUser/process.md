# process

`_ZN29Dispatcher_TitleBookOtherUser7processEP5CUserR8MSG_BASER9ParamBase`

`Dispatcher_TitleBookOtherUser::process(CUser*, MSG_BASE&, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_TitleBookOtherUser` | `0x081d7d56` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081d7d56  _ZN29Dispatcher_TitleBookOtherUser7processEP5CUserR8MSG_BASER9ParamBase
#           Dispatcher_TitleBookOtherUser::process(CUser*, MSG_BASE&, ParamBase&)
# range [0x081d7d56, 0x081d7dfb]
081d7d56 +0x00:  push   %ebp
081d7d57 +0x01:  mov    %esp,%ebp
081d7d59 +0x03:  push   %ebx
081d7d5a +0x04:  sub    $0x24,%esp
081d7d5d +0x07:  mov    0x10(%ebp),%eax
081d7d60 +0x0a:  mov    %eax,-0x10(%ebp)
081d7d63 +0x0d:  mov    0xc(%ebp),%eax
081d7d66 +0x10:  mov    %eax,(%esp)
081d7d69 +0x13:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081d7d6e +0x18:  cmp    $0x2,%eax
081d7d71 +0x1b:  setle  %al
081d7d74 +0x1e:  test   %al,%al
081d7d76 +0x20:  je     081d7d7f <+0x29>
081d7d78 +0x22:  mov    $0x0,%eax
081d7d7d +0x27:  jmp    081d7df5 <+0x9f>
081d7d7f +0x29:  mov    -0x10(%ebp),%eax
081d7d82 +0x2c:  movzwl 0xd(%eax),%eax
081d7d86 +0x30:  movzwl %ax,%ebx
081d7d89 +0x33:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
081d7d8e +0x38:  mov    %ebx,0x4(%esp)
081d7d92 +0x3c:  mov    %eax,(%esp)
081d7d95 +0x3f:  call   086c4b9c <_ZN9GameWorld15find_from_worldEt>  ; GameWorld::find_from_world(unsigned short)
081d7d9a +0x44:  mov    %eax,-0xc(%ebp)
081d7d9d +0x47:  cmpl   $0x0,-0xc(%ebp)
081d7da1 +0x4b:  jne    081d7daa <+0x54>
081d7da3 +0x4d:  mov    $0x0,%eax
081d7da8 +0x52:  jmp    081d7df5 <+0x9f>
081d7daa +0x54:  mov    -0xc(%ebp),%eax
081d7dad +0x57:  mov    %eax,(%esp)
081d7db0 +0x5a:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081d7db5 +0x5f:  cmp    $0x2,%eax
081d7db8 +0x62:  setle  %al
081d7dbb +0x65:  test   %al,%al
081d7dbd +0x67:  je     081d7dc6 <+0x70>
081d7dbf +0x69:  mov    $0x0,%eax
081d7dc4 +0x6e:  jmp    081d7df5 <+0x9f>
081d7dc6 +0x70:  movl   $0xe,0x4(%esp)
081d7dce +0x78:  mov    -0xc(%ebp),%eax
081d7dd1 +0x7b:  mov    %eax,(%esp)
081d7dd4 +0x7e:  call   080dd584 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xcd>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xcd
081d7dd9 +0x83:  movl   $0x1,0x8(%esp)
081d7de1 +0x8b:  mov    0xc(%ebp),%edx
081d7de4 +0x8e:  mov    %edx,0x4(%esp)
081d7de8 +0x92:  mov    %eax,(%esp)
081d7deb +0x95:  call   08641750 <_ZN10CTitleBook17sendListOtherUserEP5CUser25ENUM_TITLE_BOOK_INFO_TYPE>  ; CTitleBook::sendListOtherUser(CUser*, ENUM_TITLE_BOOK_INFO_TYPE)
081d7df0 +0x9a:  mov    $0x0,%eax
081d7df5 +0x9f:  add    $0x24,%esp
081d7df8 +0xa2:  pop    %ebx
081d7df9 +0xa3:  pop    %ebp
081d7dfa +0xa4:  ret
081d7dfb +0xa5:  nop
```

## 反编译 C

```c
// Dispatcher_TitleBookOtherUser::process @ 0x81d7d56

/* Dispatcher_TitleBookOtherUser::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4
Dispatcher_TitleBookOtherUser::process(CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  ushort uVar1;
  int iVar2;
  GameWorld *this;
  CUser *this_00;
  CTitleBook *pCVar3;
  
  iVar2 = CUser::get_state((CUser *)param_2);
  if (2 < iVar2) {
    uVar1 = *(ushort *)(param_3 + 0xd);
    this = (GameWorld *)G_GameWorld();
    this_00 = (CUser *)GameWorld::find_from_world(this,uVar1);
    if ((this_00 != (CUser *)0x0) && (iVar2 = CUser::get_state(this_00), 2 < iVar2)) {
      pCVar3 = (CTitleBook *)CUser::GetCharacExpandData(this_00,0xe);
      CTitleBook::sendListOtherUser(pCVar3,param_2,1);
    }
  }
  return 0;
}
```
