# IsThereGhostInParty

`_ZN6CParty19IsThereGhostInPartyEv`

`CParty::IsThereGhostInParty()`

| 类 | 地址 |
|---|---|
| `CParty` | `0x085b8fa6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085b8fa6  _ZN6CParty19IsThereGhostInPartyEv
#           CParty::IsThereGhostInParty()
# range [0x085b8fa6, 0x085b900b]
085b8fa6 +0x00:  push   %ebp
085b8fa7 +0x01:  mov    %esp,%ebp
085b8fa9 +0x03:  sub    $0x28,%esp
085b8fac +0x06:  movl   $0x0,-0xc(%ebp)
085b8fb3 +0x0d:  jmp    085b8ff9 <+0x53>
085b8fb5 +0x0f:  mov    -0xc(%ebp),%eax
085b8fb8 +0x12:  mov    %eax,0x4(%esp)
085b8fbc +0x16:  mov    0x8(%ebp),%eax
085b8fbf +0x19:  mov    %eax,(%esp)
085b8fc2 +0x1c:  call   085b4d12 <_ZN6CParty15_checkValidUserEi>  ; CParty::_checkValidUser(int)
085b8fc7 +0x21:  test   %al,%al
085b8fc9 +0x23:  je     085b8ff5 <+0x4f>
085b8fcb +0x25:  mov    -0xc(%ebp),%edx
085b8fce +0x28:  mov    0x8(%ebp),%ecx
085b8fd1 +0x2b:  mov    %edx,%eax
085b8fd3 +0x2d:  add    %eax,%eax
085b8fd5 +0x2f:  add    %edx,%eax
085b8fd7 +0x31:  shl    $0x3,%eax
085b8fda +0x34:  lea    (%ecx,%eax,1),%eax
085b8fdd +0x37:  add    $0x78,%eax
085b8fe0 +0x3a:  mov    (%eax),%eax
085b8fe2 +0x3c:  mov    %eax,(%esp)
085b8fe5 +0x3f:  call   080da2da <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x477>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x477
085b8fea +0x44:  test   %al,%al
085b8fec +0x46:  je     085b8ff5 <+0x4f>
085b8fee +0x48:  mov    $0x1,%eax
085b8ff3 +0x4d:  jmp    085b9009 <+0x63>
085b8ff5 +0x4f:  addl   $0x1,-0xc(%ebp)
085b8ff9 +0x53:  cmpl   $0x3,-0xc(%ebp)
085b8ffd +0x57:  setle  %al
085b9000 +0x5a:  test   %al,%al
085b9002 +0x5c:  jne    085b8fb5 <+0xf>
085b9004 +0x5e:  mov    $0x0,%eax
085b9009 +0x63:  leave
085b900a +0x64:  ret
085b900b +0x65:  nop
```

## 反编译 C

```c
// CParty::IsThereGhostInParty @ 0x85b8fa6

/* CParty::IsThereGhostInParty() */

undefined4 __thiscall CParty::IsThereGhostInParty(CParty *this)

{
  char cVar1;
  int local_10;
  
  local_10 = 0;
  while( true ) {
    if (3 < local_10) {
      return 0;
    }
    cVar1 = _checkValidUser(this,local_10);
    if ((cVar1 != '\0') &&
       (cVar1 = CUserCharacInfo::IsCurCharacGhost
                          (*(CUserCharacInfo **)(this + local_10 * 0x18 + 0x78)), cVar1 != '\0'))
    break;
    local_10 = local_10 + 1;
  }
  return 1;
}
```
