# process

`_ZN22DisPatcher_GetUserInfo7processEP5CUserR8MSG_BASER9ParamBase`

`DisPatcher_GetUserInfo::process(CUser*, MSG_BASE&, ParamBase&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_GetUserInfo` | `0x081c3dd8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081c3dd8  _ZN22DisPatcher_GetUserInfo7processEP5CUserR8MSG_BASER9ParamBase
#           DisPatcher_GetUserInfo::process(CUser*, MSG_BASE&, ParamBase&)
# range [0x081c3dd8, 0x081c3e7b]
081c3dd8 +0x00:  push   %ebp
081c3dd9 +0x01:  mov    %esp,%ebp
081c3ddb +0x03:  push   %esi
081c3ddc +0x04:  push   %ebx
081c3ddd +0x05:  sub    $0x20,%esp
081c3de0 +0x08:  mov    0x10(%ebp),%eax
081c3de3 +0x0b:  mov    %eax,0x8(%esp)
081c3de7 +0x0f:  mov    0xc(%ebp),%eax
081c3dea +0x12:  mov    %eax,0x4(%esp)
081c3dee +0x16:  mov    0x8(%ebp),%eax
081c3df1 +0x19:  mov    %eax,(%esp)
081c3df4 +0x1c:  call   081c3e7c <_ZN22DisPatcher_GetUserInfo11check_errorEP5CUserR8MSG_BASE>  ; DisPatcher_GetUserInfo::check_error(CUser*, MSG_BASE&)
081c3df9 +0x21:  mov    %eax,-0x10(%ebp)
081c3dfc +0x24:  cmpl   $0x0,-0x10(%ebp)
081c3e00 +0x28:  jle    081c3e09 <+0x31>
081c3e02 +0x2a:  mov    $0xffffffff,%eax
081c3e07 +0x2f:  jmp    081c3e75 <+0x9d>
081c3e09 +0x31:  cmpl   $0x0,-0x10(%ebp)
081c3e0d +0x35:  jns    081c3e3c <+0x64>
081c3e0f +0x37:  mov    0xc(%ebp),%eax
081c3e12 +0x3a:  mov    %eax,(%esp)
081c3e15 +0x3d:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
081c3e1a +0x42:  mov    %eax,0xc(%esp)
081c3e1e +0x46:  movl   $0x0,0x8(%esp)
081c3e26 +0x4e:  movl   $&_ZZN22DisPatcher_GetUserInfo7processEP5CUserR8MSG_BASER9ParamBaseE19__PRETTY_FUNCTION__,0x4(%esp)
081c3e2e +0x56:  movl   $0xf6d,(%esp)
081c3e35 +0x5d:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081c3e3a +0x62:  jmp    081c3e75 <+0x9d>
081c3e3c +0x64:  mov    0x10(%ebp),%eax
081c3e3f +0x67:  mov    %eax,-0xc(%ebp)
081c3e42 +0x6a:  mov    -0xc(%ebp),%eax
081c3e45 +0x6d:  movzbl 0xf(%eax),%eax
081c3e49 +0x71:  movsbl %al,%esi
081c3e4c +0x74:  mov    -0xc(%ebp),%eax
081c3e4f +0x77:  movzwl 0xd(%eax),%eax
081c3e53 +0x7b:  movzwl %ax,%ebx
081c3e56 +0x7e:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
081c3e5b +0x83:  mov    %esi,0xc(%esp)
081c3e5f +0x87:  mov    %ebx,0x8(%esp)
081c3e63 +0x8b:  mov    0xc(%ebp),%edx
081c3e66 +0x8e:  mov    %edx,0x4(%esp)
081c3e6a +0x92:  mov    %eax,(%esp)
081c3e6d +0x95:  call   086cad68 <_ZN9GameWorld13get_user_infoEP5CUserii>  ; GameWorld::get_user_info(CUser*, int, int)
081c3e72 +0x9a:  mov    -0x10(%ebp),%eax
081c3e75 +0x9d:  add    $0x20,%esp
081c3e78 +0xa0:  pop    %ebx
081c3e79 +0xa1:  pop    %esi
081c3e7a +0xa2:  pop    %ebp
081c3e7b +0xa3:  ret
```

## 反编译 C

```c
// DisPatcher_GetUserInfo::process @ 0x81c3dd8

/* DisPatcher_GetUserInfo::process(CUser*, MSG_BASE&, ParamBase&) */

int DisPatcher_GetUserInfo::process(CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  ParamBase PVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  GameWorld *this;
  
  iVar3 = check_error(param_1,param_2);
  if (iVar3 < 1) {
    if (iVar3 < 0) {
      uVar4 = CUser::get_acc_id((CUser *)param_2);
      iVar3 = LineFunc(0xf6d,
                       "virtual int DisPatcher_GetUserInfo::process(CUser*, MSG_BASE&, ParamBase&)",
                       0,uVar4);
    }
    else {
      PVar1 = param_3[0xf];
      uVar2 = *(ushort *)(param_3 + 0xd);
      this = (GameWorld *)G_GameWorld();
      GameWorld::get_user_info(this,(CUser *)param_2,(uint)uVar2,(int)(char)PVar1);
    }
  }
  else {
    iVar3 = -1;
  }
  return iVar3;
}
```
