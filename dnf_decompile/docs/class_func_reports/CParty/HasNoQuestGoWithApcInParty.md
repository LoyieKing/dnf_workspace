# HasNoQuestGoWithApcInParty

`_ZN6CParty26HasNoQuestGoWithApcInPartyEPK5Quest`

`CParty::HasNoQuestGoWithApcInParty(Quest const*)`

| 类 | 地址 |
|---|---|
| `CParty` | `0x085b65a2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085b65a2  _ZN6CParty26HasNoQuestGoWithApcInPartyEPK5Quest
#           CParty::HasNoQuestGoWithApcInParty(Quest const*)
# range [0x085b65a2, 0x085b6699]
085b65a2 +0x00:  push   %ebp
085b65a3 +0x01:  mov    %esp,%ebp
085b65a5 +0x03:  push   %ebx
085b65a6 +0x04:  sub    $0x24,%esp
085b65a9 +0x07:  movl   $0x0,-0xc(%ebp)
085b65b0 +0x0e:  jmp    085b667f <+0xdd>
085b65b5 +0x13:  mov    -0xc(%ebp),%eax
085b65b8 +0x16:  mov    %eax,0x4(%esp)
085b65bc +0x1a:  mov    0x8(%ebp),%eax
085b65bf +0x1d:  mov    %eax,(%esp)
085b65c2 +0x20:  call   085b4d12 <_ZN6CParty15_checkValidUserEi>  ; CParty::_checkValidUser(int)
085b65c7 +0x25:  test   %al,%al
085b65c9 +0x27:  je     085b667b <+0xd9>
085b65cf +0x2d:  mov    -0xc(%ebp),%edx
085b65d2 +0x30:  mov    0x8(%ebp),%ecx
085b65d5 +0x33:  mov    %edx,%eax
085b65d7 +0x35:  add    %eax,%eax
085b65d9 +0x37:  add    %edx,%eax
085b65db +0x39:  shl    $0x3,%eax
085b65de +0x3c:  lea    (%ecx,%eax,1),%eax
085b65e1 +0x3f:  add    $0x78,%eax
085b65e4 +0x42:  mov    (%eax),%eax
085b65e6 +0x44:  mov    %eax,(%esp)
085b65e9 +0x47:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
085b65ee +0x4c:  cmp    $0x5,%eax
085b65f1 +0x4f:  je     085b6617 <+0x75>
085b65f3 +0x51:  mov    -0xc(%ebp),%edx
085b65f6 +0x54:  mov    0x8(%ebp),%ecx
085b65f9 +0x57:  mov    %edx,%eax
085b65fb +0x59:  add    %eax,%eax
085b65fd +0x5b:  add    %edx,%eax
085b65ff +0x5d:  shl    $0x3,%eax
085b6602 +0x60:  lea    (%ecx,%eax,1),%eax
085b6605 +0x63:  add    $0x78,%eax
085b6608 +0x66:  mov    (%eax),%eax
085b660a +0x68:  mov    %eax,(%esp)
085b660d +0x6b:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
085b6612 +0x70:  cmp    $0xa,%eax
085b6615 +0x73:  jne    085b666b <+0xc9>
085b6617 +0x75:  mov    0xc(%ebp),%eax
085b661a +0x78:  mov    0x4(%eax),%ebx
085b661d +0x7b:  mov    -0xc(%ebp),%edx
085b6620 +0x7e:  mov    0x8(%ebp),%ecx
085b6623 +0x81:  mov    %edx,%eax
085b6625 +0x83:  add    %eax,%eax
085b6627 +0x85:  add    %edx,%eax
085b6629 +0x87:  shl    $0x3,%eax
085b662c +0x8a:  lea    (%ecx,%eax,1),%eax
085b662f +0x8d:  add    $0x78,%eax
085b6632 +0x90:  mov    (%eax),%eax
085b6634 +0x92:  mov    %eax,(%esp)
085b6637 +0x95:  call   0819a8a6 <_GLOBAL__I__ZN4ARAD10DISPATCHER23Arad_InternalDispatcherC2Ev+0x58c>  ; global constructors keyed to ARAD::DISPATCHER::Arad_InternalDispatcher::Arad_InternalDispatcher()+0x58c
085b663c +0x9a:  mov    %ebx,0x4(%esp)
085b6640 +0x9e:  mov    %eax,(%esp)
085b6643 +0xa1:  call   086acffe <_ZNK9UserQuest12IsDoingQuestEi>  ; UserQuest::IsDoingQuest(int) const
085b6648 +0xa6:  test   %al,%al
085b664a +0xa8:  je     085b666b <+0xc9>
085b664c +0xaa:  mov    0xc(%ebp),%eax
085b664f +0xad:  mov    0x7c(%eax),%eax
085b6652 +0xb0:  cmp    $0x3,%eax
085b6655 +0xb3:  jne    085b666b <+0xc9>
085b6657 +0xb5:  mov    0xc(%ebp),%eax
085b665a +0xb8:  mov    0x80(%eax),%eax
085b6660 +0xbe:  test   %eax,%eax
085b6662 +0xc0:  jne    085b666b <+0xc9>
085b6664 +0xc2:  mov    $0x1,%eax
085b6669 +0xc7:  jmp    085b6670 <+0xce>
085b666b +0xc9:  mov    $0x0,%eax
085b6670 +0xce:  test   %al,%al
085b6672 +0xd0:  je     085b667b <+0xd9>
085b6674 +0xd2:  mov    $0x0,%eax
085b6679 +0xd7:  jmp    085b6693 <+0xf1>
085b667b +0xd9:  addl   $0x1,-0xc(%ebp)
085b667f +0xdd:  cmpl   $0x3,-0xc(%ebp)
085b6683 +0xe1:  setle  %al
085b6686 +0xe4:  test   %al,%al
085b6688 +0xe6:  jne    085b65b5 <+0x13>
085b668e +0xec:  mov    $0x1,%eax
085b6693 +0xf1:  add    $0x24,%esp
085b6696 +0xf4:  pop    %ebx
085b6697 +0xf5:  pop    %ebp
085b6698 +0xf6:  ret
085b6699 +0xf7:  nop
```

## 反编译 C

```c
// CParty::HasNoQuestGoWithApcInParty @ 0x85b65a2

/* CParty::HasNoQuestGoWithApcInParty(Quest const*) */

undefined4 __thiscall CParty::HasNoQuestGoWithApcInParty(CParty *this,Quest *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  UserQuest *this_00;
  int local_10;
  
  local_10 = 0;
  do {
    if (3 < local_10) {
      return 1;
    }
    cVar2 = _checkValidUser(this,local_10);
    if (cVar2 != '\0') {
      iVar3 = CUser::get_state(*(CUser **)(this + local_10 * 0x18 + 0x78));
      if ((iVar3 == 5) ||
         (iVar3 = CUser::get_state(*(CUser **)(this + local_10 * 0x18 + 0x78)), iVar3 == 10)) {
        iVar3 = *(int *)(param_1 + 4);
        this_00 = (UserQuest *)CUser::getCurCharacQuestR(*(CUser **)(this + local_10 * 0x18 + 0x78))
        ;
        cVar2 = UserQuest::IsDoingQuest(this_00,iVar3);
        if ((cVar2 == '\0') || ((*(int *)(param_1 + 0x7c) != 3 || (*(int *)(param_1 + 0x80) != 0))))
        goto LAB_085b666b;
        bVar1 = true;
      }
      else {
LAB_085b666b:
        bVar1 = false;
      }
      if (bVar1) {
        return 0;
      }
    }
    local_10 = local_10 + 1;
  } while( true );
}
```
