# getPartyMemberAvgLevel

`_ZN6CParty22getPartyMemberAvgLevelEv`

`CParty::getPartyMemberAvgLevel()`

| 类 | 地址 |
|---|---|
| `CParty` | `0x0859f582` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0859f582  _ZN6CParty22getPartyMemberAvgLevelEv
#           CParty::getPartyMemberAvgLevel()
# range [0x0859f582, 0x0859f611]
0859f582 +0x00:  push   %ebp
0859f583 +0x01:  mov    %esp,%ebp
0859f585 +0x03:  sub    $0x28,%esp
0859f588 +0x06:  movl   $0x0,-0x18(%ebp)
0859f58f +0x0d:  movl   $0x0,-0x14(%ebp)
0859f596 +0x14:  movl   $0x0,-0x10(%ebp)
0859f59d +0x1b:  movl   $0x0,-0xc(%ebp)
0859f5a4 +0x22:  jmp    0859f5ec <+0x6a>
0859f5a6 +0x24:  mov    -0xc(%ebp),%eax
0859f5a9 +0x27:  mov    %eax,0x4(%esp)
0859f5ad +0x2b:  mov    0x8(%ebp),%eax
0859f5b0 +0x2e:  mov    %eax,(%esp)
0859f5b3 +0x31:  call   085b4d12 <_ZN6CParty15_checkValidUserEi>  ; CParty::_checkValidUser(int)
0859f5b8 +0x36:  xor    $0x1,%eax
0859f5bb +0x39:  test   %al,%al
0859f5bd +0x3b:  jne    0859f5e7 <+0x65>
0859f5bf +0x3d:  mov    -0xc(%ebp),%edx
0859f5c2 +0x40:  mov    0x8(%ebp),%ecx
0859f5c5 +0x43:  mov    %edx,%eax
0859f5c7 +0x45:  add    %eax,%eax
0859f5c9 +0x47:  add    %edx,%eax
0859f5cb +0x49:  shl    $0x3,%eax
0859f5ce +0x4c:  lea    (%ecx,%eax,1),%eax
0859f5d1 +0x4f:  add    $0x78,%eax
0859f5d4 +0x52:  mov    (%eax),%eax
0859f5d6 +0x54:  mov    %eax,(%esp)
0859f5d9 +0x57:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
0859f5de +0x5c:  add    %eax,-0x18(%ebp)
0859f5e1 +0x5f:  addl   $0x1,-0x10(%ebp)
0859f5e5 +0x63:  jmp    0859f5e8 <+0x66>
0859f5e7 +0x65:  nop
0859f5e8 +0x66:  addl   $0x1,-0xc(%ebp)
0859f5ec +0x6a:  cmpl   $0x3,-0xc(%ebp)
0859f5f0 +0x6e:  setle  %al
0859f5f3 +0x71:  test   %al,%al
0859f5f5 +0x73:  jne    0859f5a6 <+0x24>
0859f5f7 +0x75:  cmpl   $0x0,-0x10(%ebp)
0859f5fb +0x79:  jne    0859f604 <+0x82>
0859f5fd +0x7b:  mov    $0x0,%eax
0859f602 +0x80:  jmp    0859f60f <+0x8d>
0859f604 +0x82:  mov    -0x18(%ebp),%eax
0859f607 +0x85:  mov    %eax,%edx
0859f609 +0x87:  sar    $0x1f,%edx
0859f60c +0x8a:  idivl  -0x10(%ebp)
0859f60f +0x8d:  leave
0859f610 +0x8e:  ret
0859f611 +0x8f:  nop
```

## 反编译 C

```c
// CParty::getPartyMemberAvgLevel @ 0x859f582

/* CParty::getPartyMemberAvgLevel() */

int __thiscall CParty::getPartyMemberAvgLevel(CParty *this)

{
  char cVar1;
  int iVar2;
  int local_1c;
  int local_14;
  int local_10;
  
  local_1c = 0;
  local_14 = 0;
  for (local_10 = 0; local_10 < 4; local_10 = local_10 + 1) {
    cVar1 = _checkValidUser(this,local_10);
    if (cVar1 == '\x01') {
      iVar2 = CUserCharacInfo::get_charac_level
                        (*(CUserCharacInfo **)(this + local_10 * 0x18 + 0x78));
      local_1c = local_1c + iVar2;
      local_14 = local_14 + 1;
    }
  }
  if (local_14 == 0) {
    local_1c = 0;
  }
  else {
    local_1c = local_1c / local_14;
  }
  return local_1c;
}
```
