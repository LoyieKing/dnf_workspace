# process

`_ZN17DisPatcher_SetPos7processEP5CUserR8MSG_BASER9ParamBase`

`DisPatcher_SetPos::process(CUser*, MSG_BASE&, ParamBase&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_SetPos` | `0x081c98c8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081c98c8  _ZN17DisPatcher_SetPos7processEP5CUserR8MSG_BASER9ParamBase
#           DisPatcher_SetPos::process(CUser*, MSG_BASE&, ParamBase&)
# range [0x081c98c8, 0x081c9993]
081c98c8 +0x00:  push   %ebp
081c98c9 +0x01:  mov    %esp,%ebp
081c98cb +0x03:  push   %edi
081c98cc +0x04:  push   %esi
081c98cd +0x05:  push   %ebx
081c98ce +0x06:  sub    $0x4c,%esp
081c98d1 +0x09:  mov    0x10(%ebp),%eax
081c98d4 +0x0c:  mov    %eax,0x8(%esp)
081c98d8 +0x10:  mov    0xc(%ebp),%eax
081c98db +0x13:  mov    %eax,0x4(%esp)
081c98df +0x17:  mov    0x8(%ebp),%eax
081c98e2 +0x1a:  mov    %eax,(%esp)
081c98e5 +0x1d:  call   081c9994 <_ZN17DisPatcher_SetPos11check_errorEP5CUserR8MSG_BASE>  ; DisPatcher_SetPos::check_error(CUser*, MSG_BASE&)
081c98ea +0x22:  mov    %eax,-0x20(%ebp)
081c98ed +0x25:  cmpl   $0x0,-0x20(%ebp)
081c98f1 +0x29:  jle    081c98fd <+0x35>
081c98f3 +0x2b:  mov    $0xffffffff,%eax
081c98f8 +0x30:  jmp    081c998b <+0xc3>
081c98fd +0x35:  cmpl   $0x0,-0x20(%ebp)
081c9901 +0x39:  jns    081c9930 <+0x68>
081c9903 +0x3b:  mov    0xc(%ebp),%eax
081c9906 +0x3e:  mov    %eax,(%esp)
081c9909 +0x41:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
081c990e +0x46:  mov    %eax,0xc(%esp)
081c9912 +0x4a:  movl   $0x0,0x8(%esp)
081c991a +0x52:  movl   $&_ZZN17DisPatcher_SetPos7processEP5CUserR8MSG_BASER9ParamBaseE19__PRETTY_FUNCTION__,0x4(%esp)
081c9922 +0x5a:  movl   $0x1cb8,(%esp)
081c9929 +0x61:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081c992e +0x66:  jmp    081c998b <+0xc3>
081c9930 +0x68:  mov    0x10(%ebp),%eax
081c9933 +0x6b:  mov    %eax,-0x1c(%ebp)
081c9936 +0x6e:  mov    -0x1c(%ebp),%eax
081c9939 +0x71:  movzwl 0x12(%eax),%eax
081c993d +0x75:  movzwl %ax,%eax
081c9940 +0x78:  mov    %eax,-0x2c(%ebp)
081c9943 +0x7b:  mov    -0x1c(%ebp),%eax
081c9946 +0x7e:  movzbl 0x11(%eax),%eax
081c994a +0x82:  movsbl %al,%edi
081c994d +0x85:  mov    -0x1c(%ebp),%eax
081c9950 +0x88:  movzwl 0xf(%eax),%eax
081c9954 +0x8c:  movzwl %ax,%esi
081c9957 +0x8f:  mov    -0x1c(%ebp),%eax
081c995a +0x92:  movzwl 0xd(%eax),%eax
081c995e +0x96:  movzwl %ax,%ebx
081c9961 +0x99:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
081c9966 +0x9e:  mov    -0x2c(%ebp),%edx
081c9969 +0xa1:  mov    %edx,0x14(%esp)
081c996d +0xa5:  mov    %edi,0x10(%esp)
081c9971 +0xa9:  mov    %esi,0xc(%esp)
081c9975 +0xad:  mov    %ebx,0x8(%esp)
081c9979 +0xb1:  mov    0xc(%ebp),%edx
081c997c +0xb4:  mov    %edx,0x4(%esp)
081c9980 +0xb8:  mov    %eax,(%esp)
081c9983 +0xbb:  call   086c5706 <_ZN9GameWorld13move_positionEP5CUseriiit>  ; GameWorld::move_position(CUser*, int, int, int, unsigned short)
081c9988 +0xc0:  mov    -0x20(%ebp),%eax
081c998b +0xc3:  add    $0x4c,%esp
081c998e +0xc6:  pop    %ebx
081c998f +0xc7:  pop    %esi
081c9990 +0xc8:  pop    %edi
081c9991 +0xc9:  pop    %ebp
081c9992 +0xca:  ret
081c9993 +0xcb:  nop
```

## 反编译 C

```c
// DisPatcher_SetPos::process @ 0x81c98c8

/* DisPatcher_SetPos::process(CUser*, MSG_BASE&, ParamBase&) */

int DisPatcher_SetPos::process(CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  ParamBase PVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  uint uVar6;
  GameWorld *this;
  
  iVar5 = check_error(param_1,param_2);
  if (iVar5 < 1) {
    if (iVar5 < 0) {
      uVar6 = CUser::get_acc_id((CUser *)param_2);
      iVar5 = LineFunc(0x1cb8,
                       "virtual int DisPatcher_SetPos::process(CUser*, MSG_BASE&, ParamBase&)",0,
                       uVar6);
    }
    else {
      uVar2 = *(ushort *)(param_3 + 0x12);
      PVar1 = param_3[0x11];
      uVar3 = *(ushort *)(param_3 + 0xf);
      uVar4 = *(ushort *)(param_3 + 0xd);
      this = (GameWorld *)G_GameWorld();
      GameWorld::move_position(this,(CUser *)param_2,(uint)uVar4,(uint)uVar3,(int)(char)PVar1,uVar2)
      ;
    }
  }
  else {
    iVar5 = -1;
  }
  return iVar5;
}
```
