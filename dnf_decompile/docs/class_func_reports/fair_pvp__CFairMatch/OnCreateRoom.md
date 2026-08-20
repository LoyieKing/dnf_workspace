# OnCreateRoom

`_ZN8fair_pvp10CFairMatch12OnCreateRoomEP5CUser`

`fair_pvp::CFairMatch::OnCreateRoom(CUser*)`

| 类 | 地址 |
|---|---|
| `fair_pvp::CFairMatch` | `0x08562d08` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08562d08  _ZN8fair_pvp10CFairMatch12OnCreateRoomEP5CUser
#           fair_pvp::CFairMatch::OnCreateRoom(CUser*)
# range [0x08562d08, 0x08562dc5]
08562d08 +0x00:  push   %ebp
08562d09 +0x01:  mov    %esp,%ebp
08562d0b +0x03:  sub    $0x18,%esp
08562d0e +0x06:  mov    0xc(%ebp),%eax
08562d11 +0x09:  mov    %eax,(%esp)
08562d14 +0x0c:  call   08562cfe <_ZN8fair_pvp10CFairMatch28CheckUnusableEquipmentInUserEP5CUser>  ; fair_pvp::CFairMatch::CheckUnusableEquipmentInUser(CUser*)
08562d19 +0x11:  xor    $0x1,%eax
08562d1c +0x14:  test   %al,%al
08562d1e +0x16:  je     08562d2a <+0x22>
08562d20 +0x18:  mov    $0x13,%eax
08562d25 +0x1d:  jmp    08562dc4 <+0xbc>
08562d2a +0x22:  mov    &_ZN8fair_pvp10CFairMatch14nextAuthValue_E,%eax
08562d2f +0x27:  add    $0x1,%eax
08562d32 +0x2a:  mov    %eax,&_ZN8fair_pvp10CFairMatch14nextAuthValue_E
08562d37 +0x2f:  mov    &_ZN8fair_pvp10CFairMatch14nextAuthValue_E,%edx
08562d3d +0x35:  mov    0x8(%ebp),%eax
08562d40 +0x38:  mov    %edx,0x18(%eax)
08562d43 +0x3b:  mov    0x8(%ebp),%eax
08562d46 +0x3e:  movl   $0x0,0x4(%eax)
08562d4d +0x45:  mov    0x8(%ebp),%eax
08562d50 +0x48:  add    $0x64,%eax
08562d53 +0x4b:  mov    %eax,(%esp)
08562d56 +0x4e:  call   08562582 <_ZN8fair_pvp13TeamInfoThird5resetEv>  ; fair_pvp::TeamInfoThird::reset()
08562d5b +0x53:  mov    0x8(%ebp),%eax
08562d5e +0x56:  add    $0x1c,%eax
08562d61 +0x59:  mov    %eax,(%esp)
08562d64 +0x5c:  call   08562582 <_ZN8fair_pvp13TeamInfoThird5resetEv>  ; fair_pvp::TeamInfoThird::reset()
08562d69 +0x61:  mov    0x8(%ebp),%eax
08562d6c +0x64:  lea    0x1c(%eax),%edx
08562d6f +0x67:  mov    0xc(%ebp),%eax
08562d72 +0x6a:  mov    %eax,0x4(%esp)
08562d76 +0x6e:  mov    %edx,(%esp)
08562d79 +0x71:  call   085625c6 <_ZN8fair_pvp13TeamInfoThird3addEP5CUser>  ; fair_pvp::TeamInfoThird::add(CUser*)
08562d7e +0x76:  mov    0x8(%ebp),%eax
08562d81 +0x79:  movl   $0x0,0xb0(%eax)
08562d8b +0x83:  mov    0x8(%ebp),%eax
08562d8e +0x86:  movl   $0x0,0xb4(%eax)
08562d98 +0x90:  mov    0x8(%ebp),%eax
08562d9b +0x93:  movl   $0x0,0xb8(%eax)
08562da5 +0x9d:  mov    0x8(%ebp),%eax
08562da8 +0xa0:  movl   $0x0,0xbc(%eax)
08562db2 +0xaa:  mov    0x8(%ebp),%eax
08562db5 +0xad:  movl   $0x0,0xc0(%eax)
08562dbf +0xb7:  mov    $0x0,%eax
08562dc4 +0xbc:  leave
08562dc5 +0xbd:  ret
```

## 反编译 C

```c
// fair_pvp::CFairMatch::OnCreateRoom @ 0x8562d08

/* fair_pvp::CFairMatch::OnCreateRoom(CUser*) */

undefined4 __thiscall fair_pvp::CFairMatch::OnCreateRoom(CFairMatch *this,CUser *param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = CheckUnusableEquipmentInUser(param_1);
  if (cVar1 == '\x01') {
    nextAuthValue_ = nextAuthValue_ + 1;
    *(int *)(this + 0x18) = nextAuthValue_;
    *(undefined4 *)(this + 4) = 0;
    TeamInfoThird::reset((TeamInfoThird *)(this + 100));
    TeamInfoThird::reset((TeamInfoThird *)(this + 0x1c));
    TeamInfoThird::add((TeamInfoThird *)(this + 0x1c),param_1);
    *(undefined4 *)(this + 0xb0) = 0;
    *(undefined4 *)(this + 0xb4) = 0;
    *(undefined4 *)(this + 0xb8) = 0;
    *(undefined4 *)(this + 0xbc) = 0;
    *(undefined4 *)(this + 0xc0) = 0;
    uVar2 = 0;
  }
  else {
    uVar2 = 0x13;
  }
  return uVar2;
}
```
