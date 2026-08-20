# check_error

`_ZN33Dispatcher_ChangeAnotherSkillTree11check_errorEP5CUserR8MSG_BASE`

`Dispatcher_ChangeAnotherSkillTree::check_error(CUser*, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_ChangeAnotherSkillTree` | `0x081d2094` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081d2094  _ZN33Dispatcher_ChangeAnotherSkillTree11check_errorEP5CUserR8MSG_BASE
#           Dispatcher_ChangeAnotherSkillTree::check_error(CUser*, MSG_BASE&)
# range [0x081d2094, 0x081d2133]
081d2094 +0x00:  push   %ebp
081d2095 +0x01:  mov    %esp,%ebp
081d2097 +0x03:  push   %ebx
081d2098 +0x04:  sub    $0x24,%esp
081d209b +0x07:  cmpl   $0x0,0xc(%ebp)
081d209f +0x0b:  jne    081d20ab <+0x17>
081d20a1 +0x0d:  mov    $0xffffffff,%eax
081d20a6 +0x12:  jmp    081d212e <+0x9a>
081d20ab +0x17:  mov    0xc(%ebp),%eax
081d20ae +0x1a:  mov    %eax,(%esp)
081d20b1 +0x1d:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081d20b6 +0x22:  cmp    $0x3,%eax
081d20b9 +0x25:  je     081d20d2 <+0x3e>
081d20bb +0x27:  mov    0xc(%ebp),%eax
081d20be +0x2a:  mov    %eax,(%esp)
081d20c1 +0x2d:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081d20c6 +0x32:  cmp    $0x6,%eax
081d20c9 +0x35:  je     081d20d2 <+0x3e>
081d20cb +0x37:  mov    $0x1,%eax
081d20d0 +0x3c:  jmp    081d20d7 <+0x43>
081d20d2 +0x3e:  mov    $0x0,%eax
081d20d7 +0x43:  test   %al,%al
081d20d9 +0x45:  je     081d20e2 <+0x4e>
081d20db +0x47:  mov    $0x13,%eax
081d20e0 +0x4c:  jmp    081d212e <+0x9a>
081d20e2 +0x4e:  mov    0x10(%ebp),%eax
081d20e5 +0x51:  mov    %eax,-0xc(%ebp)
081d20e8 +0x54:  mov    -0xc(%ebp),%eax
081d20eb +0x57:  movzbl 0xd(%eax),%eax
081d20ef +0x5b:  movsbl %al,%ebx
081d20f2 +0x5e:  mov    0xc(%ebp),%eax
081d20f5 +0x61:  mov    %eax,(%esp)
081d20f8 +0x64:  call   0822f33c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x49e6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x49e6
081d20fd +0x69:  cmp    %eax,%ebx
081d20ff +0x6b:  setne  %al
081d2102 +0x6e:  test   %al,%al
081d2104 +0x70:  je     081d210d <+0x79>
081d2106 +0x72:  mov    $0xfffffffe,%eax
081d210b +0x77:  jmp    081d212e <+0x9a>
081d210d +0x79:  mov    0xc(%ebp),%eax
081d2110 +0x7c:  mov    %eax,(%esp)
081d2113 +0x7f:  call   0822f33c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x49e6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x49e6
081d2118 +0x84:  cmp    $0xffffffff,%eax
081d211b +0x87:  sete   %al
081d211e +0x8a:  test   %al,%al
081d2120 +0x8c:  je     081d2129 <+0x95>
081d2122 +0x8e:  mov    $0xfffffffd,%eax
081d2127 +0x93:  jmp    081d212e <+0x9a>
081d2129 +0x95:  mov    $0x0,%eax
081d212e +0x9a:  add    $0x24,%esp
081d2131 +0x9d:  pop    %ebx
081d2132 +0x9e:  pop    %ebp
081d2133 +0x9f:  ret
```

## 反编译 C

```c
// Dispatcher_ChangeAnotherSkillTree::check_error @ 0x81d2094

/* Dispatcher_ChangeAnotherSkillTree::check_error(CUser*, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_ChangeAnotherSkillTree::check_error
          (Dispatcher_ChangeAnotherSkillTree *this,CUser *param_1,MSG_BASE *param_2)

{
  MSG_BASE MVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  
  if (param_1 != (CUser *)0x0) {
    iVar3 = CUser::get_state(param_1);
    if ((iVar3 == 3) || (iVar3 = CUser::get_state(param_1), iVar3 == 6)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      uVar4 = 0x13;
    }
    else {
      MVar1 = param_2[0xd];
      iVar3 = CUserCharacInfo::GetCurCharacSkillTreeIndex((CUserCharacInfo *)param_1);
      if ((char)MVar1 == iVar3) {
        iVar3 = CUserCharacInfo::GetCurCharacSkillTreeIndex((CUserCharacInfo *)param_1);
        if (iVar3 == -1) {
          uVar4 = 0xfffffffd;
        }
        else {
          uVar4 = 0;
        }
      }
      else {
        uVar4 = 0xfffffffe;
      }
    }
    return uVar4;
  }
  return 0xffffffff;
}
```
