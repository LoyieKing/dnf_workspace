# send_to_alive_member

`_ZN6CParty20send_to_alive_memberER11PacketGuard`

`CParty::send_to_alive_member(PacketGuard&)`

| 类 | 地址 |
|---|---|
| `CParty` | `0x085ba5d6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085ba5d6  _ZN6CParty20send_to_alive_memberER11PacketGuard
#           CParty::send_to_alive_member(PacketGuard&)
# range [0x085ba5d6, 0x085ba67f]
085ba5d6 +0x00:  push   %ebp
085ba5d7 +0x01:  mov    %esp,%ebp
085ba5d9 +0x03:  sub    $0x28,%esp
085ba5dc +0x06:  movl   $0x0,-0xc(%ebp)
085ba5e3 +0x0d:  jmp    085ba66e <+0x98>
085ba5e8 +0x12:  mov    -0xc(%ebp),%eax
085ba5eb +0x15:  mov    %eax,0x4(%esp)
085ba5ef +0x19:  mov    0x8(%ebp),%eax
085ba5f2 +0x1c:  mov    %eax,(%esp)
085ba5f5 +0x1f:  call   085b4d12 <_ZN6CParty15_checkValidUserEi>  ; CParty::_checkValidUser(int)
085ba5fa +0x24:  test   %al,%al
085ba5fc +0x26:  je     085ba66a <+0x94>
085ba5fe +0x28:  mov    -0xc(%ebp),%edx
085ba601 +0x2b:  mov    0x8(%ebp),%ecx
085ba604 +0x2e:  mov    %edx,%eax
085ba606 +0x30:  add    %eax,%eax
085ba608 +0x32:  add    %edx,%eax
085ba60a +0x34:  shl    $0x3,%eax
085ba60d +0x37:  lea    (%ecx,%eax,1),%eax
085ba610 +0x3a:  add    $0x78,%eax
085ba613 +0x3d:  mov    (%eax),%eax
085ba615 +0x3f:  mov    %eax,(%esp)
085ba618 +0x42:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
085ba61d +0x47:  cmp    $0x5,%eax
085ba620 +0x4a:  jne    085ba63b <+0x65>
085ba622 +0x4c:  mov    -0xc(%ebp),%eax
085ba625 +0x4f:  mov    0x8(%ebp),%edx
085ba628 +0x52:  movzbl 0x380(%edx,%eax,1),%eax
085ba630 +0x5a:  test   %al,%al
085ba632 +0x5c:  je     085ba63b <+0x65>
085ba634 +0x5e:  mov    $0x1,%eax
085ba639 +0x63:  jmp    085ba640 <+0x6a>
085ba63b +0x65:  mov    $0x0,%eax
085ba640 +0x6a:  test   %al,%al
085ba642 +0x6c:  je     085ba66a <+0x94>
085ba644 +0x6e:  mov    -0xc(%ebp),%edx
085ba647 +0x71:  mov    0x8(%ebp),%ecx
085ba64a +0x74:  mov    %edx,%eax
085ba64c +0x76:  add    %eax,%eax
085ba64e +0x78:  add    %edx,%eax
085ba650 +0x7a:  shl    $0x3,%eax
085ba653 +0x7d:  lea    (%ecx,%eax,1),%eax
085ba656 +0x80:  add    $0x78,%eax
085ba659 +0x83:  mov    (%eax),%eax
085ba65b +0x85:  mov    0xc(%ebp),%edx
085ba65e +0x88:  mov    %edx,0x4(%esp)
085ba662 +0x8c:  mov    %eax,(%esp)
085ba665 +0x8f:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
085ba66a +0x94:  addl   $0x1,-0xc(%ebp)
085ba66e +0x98:  cmpl   $0x3,-0xc(%ebp)
085ba672 +0x9c:  setle  %al
085ba675 +0x9f:  test   %al,%al
085ba677 +0xa1:  jne    085ba5e8 <+0x12>
085ba67d +0xa7:  leave
085ba67e +0xa8:  ret
085ba67f +0xa9:  nop
```

## 反编译 C

```c
// CParty::send_to_alive_member @ 0x85ba5d6

/* CParty::send_to_alive_member(PacketGuard&) */

void __thiscall CParty::send_to_alive_member(CParty *this,PacketGuard *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int local_10;
  
  for (local_10 = 0; local_10 < 4; local_10 = local_10 + 1) {
    cVar2 = _checkValidUser(this,local_10);
    if (cVar2 != '\0') {
      iVar3 = CUser::get_state(*(CUser **)(this + local_10 * 0x18 + 0x78));
      if ((iVar3 == 5) && (this[local_10 + 0x380] != (CParty)0x0)) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
      if (bVar1) {
        CUser::Send(*(CUser **)(this + local_10 * 0x18 + 0x78),param_1);
      }
    }
  }
  return;
}
```
