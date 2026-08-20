# setStandardDimensionLevel

`_ZN6CParty25setStandardDimensionLevelEPK8CDungeon`

`CParty::setStandardDimensionLevel(CDungeon const*)`

| 类 | 地址 |
|---|---|
| `CParty` | `0x0859f612` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0859f612  _ZN6CParty25setStandardDimensionLevelEPK8CDungeon
#           CParty::setStandardDimensionLevel(CDungeon const*)
# range [0x0859f612, 0x0859f6d3]
0859f612 +0x00:  push   %ebp
0859f613 +0x01:  mov    %esp,%ebp
0859f615 +0x03:  sub    $0x38,%esp
0859f618 +0x06:  movb   $0x0,-0x19(%ebp)
0859f61c +0x0a:  movl   $0x0,-0x18(%ebp)
0859f623 +0x11:  movl   $0x0,-0x14(%ebp)
0859f62a +0x18:  movl   $0x0,-0x10(%ebp)
0859f631 +0x1f:  movl   $0x0,-0xc(%ebp)
0859f638 +0x26:  jmp    0859f6a7 <+0x95>
0859f63a +0x28:  mov    -0xc(%ebp),%eax
0859f63d +0x2b:  mov    %eax,0x4(%esp)
0859f641 +0x2f:  mov    0x8(%ebp),%eax
0859f644 +0x32:  mov    %eax,(%esp)
0859f647 +0x35:  call   085b4d12 <_ZN6CParty15_checkValidUserEi>  ; CParty::_checkValidUser(int)
0859f64c +0x3a:  xor    $0x1,%eax
0859f64f +0x3d:  test   %al,%al
0859f651 +0x3f:  jne    0859f6a2 <+0x90>
0859f653 +0x41:  mov    -0xc(%ebp),%edx
0859f656 +0x44:  mov    0x8(%ebp),%ecx
0859f659 +0x47:  mov    %edx,%eax
0859f65b +0x49:  add    %eax,%eax
0859f65d +0x4b:  add    %edx,%eax
0859f65f +0x4d:  shl    $0x3,%eax
0859f662 +0x50:  lea    (%ecx,%eax,1),%eax
0859f665 +0x53:  add    $0x78,%eax
0859f668 +0x56:  mov    (%eax),%eax
0859f66a +0x58:  mov    %eax,(%esp)
0859f66d +0x5b:  call   0814589c <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x31f>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x31f
0859f672 +0x60:  test   %al,%al
0859f674 +0x62:  je     0859f67a <+0x68>
0859f676 +0x64:  movb   $0x1,-0x19(%ebp)
0859f67a +0x68:  mov    -0xc(%ebp),%edx
0859f67d +0x6b:  mov    0x8(%ebp),%ecx
0859f680 +0x6e:  mov    %edx,%eax
0859f682 +0x70:  add    %eax,%eax
0859f684 +0x72:  add    %edx,%eax
0859f686 +0x74:  shl    $0x3,%eax
0859f689 +0x77:  lea    (%ecx,%eax,1),%eax
0859f68c +0x7a:  add    $0x78,%eax
0859f68f +0x7d:  mov    (%eax),%eax
0859f691 +0x7f:  mov    %eax,(%esp)
0859f694 +0x82:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
0859f699 +0x87:  add    %eax,-0x18(%ebp)
0859f69c +0x8a:  addl   $0x1,-0x10(%ebp)
0859f6a0 +0x8e:  jmp    0859f6a3 <+0x91>
0859f6a2 +0x90:  nop
0859f6a3 +0x91:  addl   $0x1,-0xc(%ebp)
0859f6a7 +0x95:  cmpl   $0x3,-0xc(%ebp)
0859f6ab +0x99:  setle  %al
0859f6ae +0x9c:  test   %al,%al
0859f6b0 +0x9e:  jne    0859f63a <+0x28>
0859f6b2 +0xa0:  mov    -0x18(%ebp),%eax
0859f6b5 +0xa3:  mov    %eax,%edx
0859f6b7 +0xa5:  sar    $0x1f,%edx
0859f6ba +0xa8:  idivl  -0x10(%ebp)
0859f6bd +0xab:  mov    %eax,-0x14(%ebp)
0859f6c0 +0xae:  mov    0x8(%ebp),%eax
0859f6c3 +0xb1:  mov    -0x14(%ebp),%edx
0859f6c6 +0xb4:  mov    %edx,0xd5c(%eax)
0859f6cc +0xba:  mov    $0x1,%eax
0859f6d1 +0xbf:  leave
0859f6d2 +0xc0:  ret
0859f6d3 +0xc1:  nop
```

## 反编译 C

```c
// CParty::setStandardDimensionLevel @ 0x859f612

/* CParty::setStandardDimensionLevel(CDungeon const*) */

undefined4 CParty::setStandardDimensionLevel(CDungeon *param_1)

{
  char cVar1;
  int iVar2;
  int local_1c;
  int local_14;
  int local_10;
  
  local_1c = 0;
  local_14 = 0;
  for (local_10 = 0; local_10 < 4; local_10 = local_10 + 1) {
    cVar1 = _checkValidUser((CParty *)param_1,local_10);
    if (cVar1 == '\x01') {
      CUser::isGMUser(*(CUser **)(param_1 + local_10 * 0x18 + 0x78));
      iVar2 = CUserCharacInfo::get_charac_level
                        (*(CUserCharacInfo **)(param_1 + local_10 * 0x18 + 0x78));
      local_1c = local_1c + iVar2;
      local_14 = local_14 + 1;
    }
  }
  *(int *)(param_1 + 0xd5c) = local_1c / local_14;
  return 1;
}
```
