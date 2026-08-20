# CheckMemberFatigue

`_ZN6CParty18CheckMemberFatigueEv`

`CParty::CheckMemberFatigue()`

| 类 | 地址 |
|---|---|
| `CParty` | `0x0859d5e8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0859d5e8  _ZN6CParty18CheckMemberFatigueEv
#           CParty::CheckMemberFatigue()
# range [0x0859d5e8, 0x0859d655]
0859d5e8 +0x00:  push   %ebp
0859d5e9 +0x01:  mov    %esp,%ebp
0859d5eb +0x03:  sub    $0x28,%esp
0859d5ee +0x06:  movl   $0x0,-0xc(%ebp)
0859d5f5 +0x0d:  jmp    0859d643 <+0x5b>
0859d5f7 +0x0f:  mov    -0xc(%ebp),%eax
0859d5fa +0x12:  mov    %eax,0x4(%esp)
0859d5fe +0x16:  mov    0x8(%ebp),%eax
0859d601 +0x19:  mov    %eax,(%esp)
0859d604 +0x1c:  call   085b4d12 <_ZN6CParty15_checkValidUserEi>  ; CParty::_checkValidUser(int)
0859d609 +0x21:  xor    $0x1,%eax
0859d60c +0x24:  test   %al,%al
0859d60e +0x26:  jne    0859d63e <+0x56>
0859d610 +0x28:  mov    -0xc(%ebp),%edx
0859d613 +0x2b:  mov    0x8(%ebp),%ecx
0859d616 +0x2e:  mov    %edx,%eax
0859d618 +0x30:  add    %eax,%eax
0859d61a +0x32:  add    %edx,%eax
0859d61c +0x34:  shl    $0x3,%eax
0859d61f +0x37:  lea    (%ecx,%eax,1),%eax
0859d622 +0x3a:  add    $0x78,%eax
0859d625 +0x3d:  mov    (%eax),%eax
0859d627 +0x3f:  mov    %eax,(%esp)
0859d62a +0x42:  call   08656500 <_ZN5CUser12CheckFatigueEv>  ; CUser::CheckFatigue()
0859d62f +0x47:  xor    $0x1,%eax
0859d632 +0x4a:  test   %al,%al
0859d634 +0x4c:  je     0859d63f <+0x57>
0859d636 +0x4e:  mov    -0xc(%ebp),%eax
0859d639 +0x51:  add    $0x1,%eax
0859d63c +0x54:  jmp    0859d653 <+0x6b>
0859d63e +0x56:  nop
0859d63f +0x57:  addl   $0x1,-0xc(%ebp)
0859d643 +0x5b:  cmpl   $0x3,-0xc(%ebp)
0859d647 +0x5f:  setle  %al
0859d64a +0x62:  test   %al,%al
0859d64c +0x64:  jne    0859d5f7 <+0xf>
0859d64e +0x66:  mov    $0x0,%eax
0859d653 +0x6b:  leave
0859d654 +0x6c:  ret
0859d655 +0x6d:  nop
```

## 反编译 C

```c
// CParty::CheckMemberFatigue @ 0x859d5e8

/* CParty::CheckMemberFatigue() */

int __thiscall CParty::CheckMemberFatigue(CParty *this)

{
  char cVar1;
  int local_10;
  
  local_10 = 0;
  while( true ) {
    if (3 < local_10) {
      return 0;
    }
    cVar1 = _checkValidUser(this,local_10);
    if ((cVar1 == '\x01') &&
       (cVar1 = CUser::CheckFatigue(*(CUser **)(this + local_10 * 0x18 + 0x78)), cVar1 != '\x01'))
    break;
    local_10 = local_10 + 1;
  }
  return local_10 + 1;
}
```
