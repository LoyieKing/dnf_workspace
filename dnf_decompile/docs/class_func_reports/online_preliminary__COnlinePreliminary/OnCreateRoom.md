# OnCreateRoom

`_ZN18online_preliminary18COnlinePreliminary12OnCreateRoomEP5CUser`

`online_preliminary::COnlinePreliminary::OnCreateRoom(CUser*)`

| 类 | 地址 |
|---|---|
| `online_preliminary::COnlinePreliminary` | `0x08560ae4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08560ae4  _ZN18online_preliminary18COnlinePreliminary12OnCreateRoomEP5CUser
#           online_preliminary::COnlinePreliminary::OnCreateRoom(CUser*)
# range [0x08560ae4, 0x08560b89]
08560ae4 +0x00:  push   %ebp
08560ae5 +0x01:  mov    %esp,%ebp
08560ae7 +0x03:  sub    $0x18,%esp
08560aea +0x06:  mov    0xc(%ebp),%eax
08560aed +0x09:  mov    %eax,(%esp)
08560af0 +0x0c:  call   08560a42 <_ZN18online_preliminary18COnlinePreliminary28CheckUnusableEquipmentInUserEP5CUser>  ; online_preliminary::COnlinePreliminary::CheckUnusableEquipmentInUser(CUser*)
08560af5 +0x11:  xor    $0x1,%eax
08560af8 +0x14:  test   %al,%al
08560afa +0x16:  je     08560b06 <+0x22>
08560afc +0x18:  mov    $0x13,%eax
08560b01 +0x1d:  jmp    08560b88 <+0xa4>
08560b06 +0x22:  mov    &_ZN18online_preliminary18COnlinePreliminary14nextAuthValue_E,%eax
08560b0b +0x27:  add    $0x1,%eax
08560b0e +0x2a:  mov    %eax,&_ZN18online_preliminary18COnlinePreliminary14nextAuthValue_E
08560b13 +0x2f:  mov    &_ZN18online_preliminary18COnlinePreliminary14nextAuthValue_E,%edx
08560b19 +0x35:  mov    0x8(%ebp),%eax
08560b1c +0x38:  mov    %edx,0x18(%eax)
08560b1f +0x3b:  mov    0x8(%ebp),%eax
08560b22 +0x3e:  movl   $0x0,0x4(%eax)
08560b29 +0x45:  mov    0x8(%ebp),%eax
08560b2c +0x48:  add    $0x44,%eax
08560b2f +0x4b:  mov    %eax,(%esp)
08560b32 +0x4e:  call   0855fdc0 <_ZN14TeamInfoSecond5resetEv>  ; TeamInfoSecond::reset()
08560b37 +0x53:  mov    0x8(%ebp),%eax
08560b3a +0x56:  add    $0x1c,%eax
08560b3d +0x59:  mov    %eax,(%esp)
08560b40 +0x5c:  call   0855fdc0 <_ZN14TeamInfoSecond5resetEv>  ; TeamInfoSecond::reset()
08560b45 +0x61:  mov    0x8(%ebp),%eax
08560b48 +0x64:  lea    0x1c(%eax),%edx
08560b4b +0x67:  mov    0xc(%ebp),%eax
08560b4e +0x6a:  mov    %eax,0x4(%esp)
08560b52 +0x6e:  mov    %edx,(%esp)
08560b55 +0x71:  call   0855fdfe <_ZN14TeamInfoSecond3addEP5CUser>  ; TeamInfoSecond::add(CUser*)
08560b5a +0x76:  mov    0xc(%ebp),%eax
08560b5d +0x79:  mov    %eax,(%esp)
08560b60 +0x7c:  call   08645de2 <_ZNK15CUserCharacInfo35GetCurCharacOnlinePreliminaryTeamIdEv>  ; CUserCharacInfo::GetCurCharacOnlinePreliminaryTeamId() const
08560b65 +0x81:  mov    0x8(%ebp),%edx
08560b68 +0x84:  mov    %eax,0x1c(%edx)
08560b6b +0x87:  mov    0xc(%ebp),%eax
08560b6e +0x8a:  mov    %eax,0x4(%esp)
08560b72 +0x8e:  mov    0x8(%ebp),%eax
08560b75 +0x91:  mov    %eax,(%esp)
08560b78 +0x94:  call   08560082 <_ZN18online_preliminary18COnlinePreliminary10_GetRatingEP5CUser>  ; online_preliminary::COnlinePreliminary::_GetRating(CUser*)
08560b7d +0x99:  mov    0x8(%ebp),%eax
08560b80 +0x9c:  fstps  0x20(%eax)
08560b83 +0x9f:  mov    $0x0,%eax
08560b88 +0xa4:  leave
08560b89 +0xa5:  ret
```

## 反编译 C

```c
// online_preliminary::COnlinePreliminary::OnCreateRoom @ 0x8560ae4

/* online_preliminary::COnlinePreliminary::OnCreateRoom(CUser*) */

undefined4 __thiscall
online_preliminary::COnlinePreliminary::OnCreateRoom(COnlinePreliminary *this,CUser *param_1)

{
  char cVar1;
  undefined4 uVar2;
  longdouble lVar3;
  
  cVar1 = CheckUnusableEquipmentInUser(param_1);
  if (cVar1 == '\x01') {
    nextAuthValue_ = nextAuthValue_ + 1;
    *(int *)(this + 0x18) = nextAuthValue_;
    *(undefined4 *)(this + 4) = 0;
    TeamInfoSecond::reset((TeamInfoSecond *)(this + 0x44));
    TeamInfoSecond::reset((TeamInfoSecond *)(this + 0x1c));
    TeamInfoSecond::add((TeamInfoSecond *)(this + 0x1c),param_1);
    uVar2 = CUserCharacInfo::GetCurCharacOnlinePreliminaryTeamId((CUserCharacInfo *)param_1);
    *(undefined4 *)(this + 0x1c) = uVar2;
    lVar3 = (longdouble)_GetRating(this,param_1);
    *(float *)(this + 0x20) = (float)lVar3;
    uVar2 = 0;
  }
  else {
    uVar2 = 0x13;
  }
  return uVar2;
}
```
