# GetFirstValidMemberState

`_ZN6CParty24GetFirstValidMemberStateEv`

`CParty::GetFirstValidMemberState()`

| 类 | 地址 |
|---|---|
| `CParty` | `0x085ba574` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085ba574  _ZN6CParty24GetFirstValidMemberStateEv
#           CParty::GetFirstValidMemberState()
# range [0x085ba574, 0x085ba5d5]
085ba574 +0x00:  push   %ebp
085ba575 +0x01:  mov    %esp,%ebp
085ba577 +0x03:  sub    $0x28,%esp
085ba57a +0x06:  movl   $0x0,-0xc(%ebp)
085ba581 +0x0d:  jmp    085ba5c3 <+0x4f>
085ba583 +0x0f:  mov    -0xc(%ebp),%eax
085ba586 +0x12:  mov    %eax,0x4(%esp)
085ba58a +0x16:  mov    0x8(%ebp),%eax
085ba58d +0x19:  mov    %eax,(%esp)
085ba590 +0x1c:  call   085b4d12 <_ZN6CParty15_checkValidUserEi>  ; CParty::_checkValidUser(int)
085ba595 +0x21:  xor    $0x1,%eax
085ba598 +0x24:  test   %al,%al
085ba59a +0x26:  je     085ba5a2 <+0x2e>
085ba59c +0x28:  addl   $0x1,-0xc(%ebp)
085ba5a0 +0x2c:  jmp    085ba5c3 <+0x4f>
085ba5a2 +0x2e:  mov    -0xc(%ebp),%edx
085ba5a5 +0x31:  mov    0x8(%ebp),%ecx
085ba5a8 +0x34:  mov    %edx,%eax
085ba5aa +0x36:  add    %eax,%eax
085ba5ac +0x38:  add    %edx,%eax
085ba5ae +0x3a:  shl    $0x3,%eax
085ba5b1 +0x3d:  lea    (%ecx,%eax,1),%eax
085ba5b4 +0x40:  add    $0x78,%eax
085ba5b7 +0x43:  mov    (%eax),%eax
085ba5b9 +0x45:  mov    %eax,(%esp)
085ba5bc +0x48:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
085ba5c1 +0x4d:  jmp    085ba5d3 <+0x5f>
085ba5c3 +0x4f:  cmpl   $0x3,-0xc(%ebp)
085ba5c7 +0x53:  setle  %al
085ba5ca +0x56:  test   %al,%al
085ba5cc +0x58:  jne    085ba583 <+0xf>
085ba5ce +0x5a:  mov    $0x0,%eax
085ba5d3 +0x5f:  leave
085ba5d4 +0x60:  ret
085ba5d5 +0x61:  nop
```

## 反编译 C

```c
// CParty::GetFirstValidMemberState @ 0x85ba574

/* CParty::GetFirstValidMemberState() */

undefined4 __thiscall CParty::GetFirstValidMemberState(CParty *this)

{
  char cVar1;
  undefined4 uVar2;
  int local_10;
  
  local_10 = 0;
  while( true ) {
    if (3 < local_10) {
      return 0;
    }
    cVar1 = _checkValidUser(this,local_10);
    if (cVar1 == '\x01') break;
    local_10 = local_10 + 1;
  }
  uVar2 = CUser::get_state(*(CUser **)(this + local_10 * 0x18 + 0x78));
  return uVar2;
}
```
