# process

`_ZN30Dispatcher_RequestDisjointItem7processEP5CUserR8MSG_BASER9ParamBase`

`Dispatcher_RequestDisjointItem::process(CUser*, MSG_BASE&, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_RequestDisjointItem` | `0x081cfcac` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081cfcac  _ZN30Dispatcher_RequestDisjointItem7processEP5CUserR8MSG_BASER9ParamBase
#           Dispatcher_RequestDisjointItem::process(CUser*, MSG_BASE&, ParamBase&)
# range [0x081cfcac, 0x081cfd99]
081cfcac +0x00:  push   %ebp
081cfcad +0x01:  mov    %esp,%ebp
081cfcaf +0x03:  push   %ebx
081cfcb0 +0x04:  sub    $0x34,%esp
081cfcb3 +0x07:  mov    0x14(%ebp),%eax
081cfcb6 +0x0a:  mov    %eax,-0x14(%ebp)
081cfcb9 +0x0d:  mov    0x14(%ebp),%eax
081cfcbc +0x10:  mov    %eax,0xc(%esp)
081cfcc0 +0x14:  mov    0x10(%ebp),%eax
081cfcc3 +0x17:  mov    %eax,0x8(%esp)
081cfcc7 +0x1b:  mov    0xc(%ebp),%eax
081cfcca +0x1e:  mov    %eax,0x4(%esp)
081cfcce +0x22:  mov    0x8(%ebp),%eax
081cfcd1 +0x25:  mov    %eax,(%esp)
081cfcd4 +0x28:  call   081cfc04 <_ZN30Dispatcher_RequestDisjointItem11check_errorEP5CUserR8MSG_BASER9ParamBase>  ; Dispatcher_RequestDisjointItem::check_error(CUser*, MSG_BASE&, ParamBase&)
081cfcd9 +0x2d:  mov    %eax,%edx
081cfcdb +0x2f:  mov    -0x14(%ebp),%eax
081cfcde +0x32:  mov    %edx,0x4(%eax)
081cfce1 +0x35:  mov    -0x14(%ebp),%eax
081cfce4 +0x38:  mov    0x4(%eax),%eax
081cfce7 +0x3b:  test   %eax,%eax
081cfce9 +0x3d:  jle    081cfcf5 <+0x49>
081cfceb +0x3f:  mov    $0x0,%eax
081cfcf0 +0x44:  jmp    081cfd93 <+0xe7>
081cfcf5 +0x49:  mov    -0x14(%ebp),%eax
081cfcf8 +0x4c:  mov    0x4(%eax),%eax
081cfcfb +0x4f:  test   %eax,%eax
081cfcfd +0x51:  jns    081cfd2e <+0x82>
081cfcff +0x53:  mov    0xc(%ebp),%eax
081cfd02 +0x56:  mov    %eax,(%esp)
081cfd05 +0x59:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
081cfd0a +0x5e:  mov    -0x14(%ebp),%edx
081cfd0d +0x61:  mov    0x4(%edx),%edx
081cfd10 +0x64:  mov    %eax,0xc(%esp)
081cfd14 +0x68:  mov    %edx,0x8(%esp)
081cfd18 +0x6c:  movl   $&_ZZN30Dispatcher_RequestDisjointItem7processEP5CUserR8MSG_BASER9ParamBaseE19__PRETTY_FUNCTION__,0x4(%esp)
081cfd20 +0x74:  movl   $0x2a1f,(%esp)
081cfd27 +0x7b:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081cfd2c +0x80:  jmp    081cfd93 <+0xe7>
081cfd2e +0x82:  mov    0x10(%ebp),%eax
081cfd31 +0x85:  mov    %eax,-0x10(%ebp)
081cfd34 +0x88:  mov    -0x10(%ebp),%eax
081cfd37 +0x8b:  movzwl 0xe(%eax),%eax
081cfd3b +0x8f:  movzwl %ax,%ebx
081cfd3e +0x92:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
081cfd43 +0x97:  mov    %ebx,0x4(%esp)
081cfd47 +0x9b:  mov    %eax,(%esp)
081cfd4a +0x9e:  call   086c4b9c <_ZN9GameWorld15find_from_worldEt>  ; GameWorld::find_from_world(unsigned short)
081cfd4f +0xa3:  mov    %eax,-0xc(%ebp)
081cfd52 +0xa6:  mov    -0x10(%ebp),%eax
081cfd55 +0xa9:  movzbl 0x12(%eax),%eax
081cfd59 +0xad:  movsbl %al,%edx
081cfd5c +0xb0:  mov    -0x10(%ebp),%eax
081cfd5f +0xb3:  movzwl 0x10(%eax),%eax
081cfd63 +0xb7:  cwtl
081cfd64 +0xb8:  movl   $0xffff,0x14(%esp)
081cfd6c +0xc0:  mov    -0xc(%ebp),%ecx
081cfd6f +0xc3:  mov    %ecx,0x10(%esp)
081cfd73 +0xc7:  movl   $0xef,0xc(%esp)
081cfd7b +0xcf:  mov    %edx,0x8(%esp)
081cfd7f +0xd3:  mov    %eax,0x4(%esp)
081cfd83 +0xd7:  mov    0xc(%ebp),%eax
081cfd86 +0xda:  mov    %eax,(%esp)
081cfd89 +0xdd:  call   081f92ca <_ZN23DisPatcher_DisJointItem9_disjointEP5CUserii14ENUM_CMDPACKETS1_t>  ; DisPatcher_DisJointItem::_disjoint(CUser*, int, int, ENUM_CMDPACKET, CUser*, unsigned short)
081cfd8e +0xe2:  mov    $0x0,%eax
081cfd93 +0xe7:  add    $0x34,%esp
081cfd96 +0xea:  pop    %ebx
081cfd97 +0xeb:  pop    %ebp
081cfd98 +0xec:  ret
081cfd99 +0xed:  nop
```

## 反编译 C

```c
// Dispatcher_RequestDisjointItem::process @ 0x81cfcac

/* Dispatcher_RequestDisjointItem::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
Dispatcher_RequestDisjointItem::process
          (Dispatcher_RequestDisjointItem *this,CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  ushort uVar1;
  undefined4 uVar2;
  uint uVar3;
  GameWorld *this_00;
  
  uVar2 = check_error((CUser *)this,(MSG_BASE *)param_1,(ParamBase *)param_2);
  *(undefined4 *)(param_3 + 4) = uVar2;
  if (*(int *)(param_3 + 4) < 1) {
    if (*(int *)(param_3 + 4) < 0) {
      uVar3 = CUser::get_acc_id(param_1);
      uVar2 = LineFunc(0x2a1f,
                       "virtual int Dispatcher_RequestDisjointItem::process(CUser*, MSG_BASE&, ParamBase&)"
                       ,*(int *)(param_3 + 4),uVar3);
    }
    else {
      uVar1 = *(ushort *)(param_2 + 0xe);
      this_00 = (GameWorld *)G_GameWorld();
      uVar2 = GameWorld::find_from_world(this_00,uVar1);
      DisPatcher_DisJointItem::_disjoint
                (param_1,(int)*(short *)(param_2 + 0x10),(int)(char)param_2[0x12],0xef,uVar2,0xffff)
      ;
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
```
