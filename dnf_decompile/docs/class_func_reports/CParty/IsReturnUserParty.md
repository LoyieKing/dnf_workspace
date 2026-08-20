# IsReturnUserParty

`_ZN6CParty17IsReturnUserPartyEv`

`CParty::IsReturnUserParty()`

| 类 | 地址 |
|---|---|
| `CParty` | `0x085b9f50` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085b9f50  _ZN6CParty17IsReturnUserPartyEv
#           CParty::IsReturnUserParty()
# range [0x085b9f50, 0x085b9fd3]
085b9f50 +0x00:  push   %ebp
085b9f51 +0x01:  mov    %esp,%ebp
085b9f53 +0x03:  sub    $0x28,%esp
085b9f56 +0x06:  movl   $0x0,-0xc(%ebp)
085b9f5d +0x0d:  jmp    085b9fc2 <+0x72>
085b9f5f +0x0f:  mov    -0xc(%ebp),%eax
085b9f62 +0x12:  mov    %eax,0x4(%esp)
085b9f66 +0x16:  mov    0x8(%ebp),%eax
085b9f69 +0x19:  mov    %eax,(%esp)
085b9f6c +0x1c:  call   08145868 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x2eb>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x2eb
085b9f71 +0x21:  xor    $0x1,%eax
085b9f74 +0x24:  test   %al,%al
085b9f76 +0x26:  jne    085b9fbd <+0x6d>
085b9f78 +0x28:  mov    -0xc(%ebp),%edx
085b9f7b +0x2b:  mov    0x8(%ebp),%ecx
085b9f7e +0x2e:  mov    %edx,%eax
085b9f80 +0x30:  add    %eax,%eax
085b9f82 +0x32:  add    %edx,%eax
085b9f84 +0x34:  shl    $0x3,%eax
085b9f87 +0x37:  lea    (%ecx,%eax,1),%eax
085b9f8a +0x3a:  add    $0x78,%eax
085b9f8d +0x3d:  mov    (%eax),%eax
085b9f8f +0x3f:  test   %eax,%eax
085b9f91 +0x41:  je     085b9fbe <+0x6e>
085b9f93 +0x43:  mov    -0xc(%ebp),%edx
085b9f96 +0x46:  mov    0x8(%ebp),%ecx
085b9f99 +0x49:  mov    %edx,%eax
085b9f9b +0x4b:  add    %eax,%eax
085b9f9d +0x4d:  add    %edx,%eax
085b9f9f +0x4f:  shl    $0x3,%eax
085b9fa2 +0x52:  lea    (%ecx,%eax,1),%eax
085b9fa5 +0x55:  add    $0x78,%eax
085b9fa8 +0x58:  mov    (%eax),%eax
085b9faa +0x5a:  mov    %eax,(%esp)
085b9fad +0x5d:  call   085bfd66 <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0x12c4>  ; global constructors keyed to CParty::cMember::cMember()+0x12c4
085b9fb2 +0x62:  test   %al,%al
085b9fb4 +0x64:  je     085b9fbe <+0x6e>
085b9fb6 +0x66:  mov    $0x1,%eax
085b9fbb +0x6b:  jmp    085b9fd2 <+0x82>
085b9fbd +0x6d:  nop
085b9fbe +0x6e:  addl   $0x1,-0xc(%ebp)
085b9fc2 +0x72:  cmpl   $0x3,-0xc(%ebp)
085b9fc6 +0x76:  setle  %al
085b9fc9 +0x79:  test   %al,%al
085b9fcb +0x7b:  jne    085b9f5f <+0xf>
085b9fcd +0x7d:  mov    $0x0,%eax
085b9fd2 +0x82:  leave
085b9fd3 +0x83:  ret
```

## 反编译 C

```c
// CParty::IsReturnUserParty @ 0x85b9f50

/* CParty::IsReturnUserParty() */

undefined4 __thiscall CParty::IsReturnUserParty(CParty *this)

{
  char cVar1;
  int local_10;
  
  local_10 = 0;
  while( true ) {
    if (3 < local_10) {
      return 0;
    }
    cVar1 = checkValidUser(this,local_10);
    if (((cVar1 == '\x01') && (*(int *)(this + local_10 * 0x18 + 0x78) != 0)) &&
       (cVar1 = CUser::IsReturnUser(*(CUser **)(this + local_10 * 0x18 + 0x78)), cVar1 != '\0'))
    break;
    local_10 = local_10 + 1;
  }
  return 1;
}
```
