# HasAllMemberSelection

`_ZN6CParty21HasAllMemberSelectionEv`

`CParty::HasAllMemberSelection()`

| 类 | 地址 |
|---|---|
| `CParty` | `0x085ba1c0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085ba1c0  _ZN6CParty21HasAllMemberSelectionEv
#           CParty::HasAllMemberSelection()
# range [0x085ba1c0, 0x085ba221]
085ba1c0 +0x00:  push   %ebp
085ba1c1 +0x01:  mov    %esp,%ebp
085ba1c3 +0x03:  sub    $0x28,%esp
085ba1c6 +0x06:  movl   $0x0,-0xc(%ebp)
085ba1cd +0x0d:  jmp    085ba20f <+0x4f>
085ba1cf +0x0f:  mov    -0xc(%ebp),%eax
085ba1d2 +0x12:  mov    %eax,0x4(%esp)
085ba1d6 +0x16:  mov    0x8(%ebp),%eax
085ba1d9 +0x19:  mov    %eax,(%esp)
085ba1dc +0x1c:  call   085b4d12 <_ZN6CParty15_checkValidUserEi>  ; CParty::_checkValidUser(int)
085ba1e1 +0x21:  xor    $0x1,%eax
085ba1e4 +0x24:  test   %al,%al
085ba1e6 +0x26:  jne    085ba20a <+0x4a>
085ba1e8 +0x28:  mov    0x8(%ebp),%eax
085ba1eb +0x2b:  mov    -0xc(%ebp),%edx
085ba1ee +0x2e:  mov    %edx,0x4(%esp)
085ba1f2 +0x32:  mov    %eax,(%esp)
085ba1f5 +0x35:  call   085bf694 <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0xbf2>  ; global constructors keyed to CParty::cMember::cMember()+0xbf2
085ba1fa +0x3a:  test   %al,%al
085ba1fc +0x3c:  sete   %al
085ba1ff +0x3f:  test   %al,%al
085ba201 +0x41:  je     085ba20b <+0x4b>
085ba203 +0x43:  mov    $0x0,%eax
085ba208 +0x48:  jmp    085ba21f <+0x5f>
085ba20a +0x4a:  nop
085ba20b +0x4b:  addl   $0x1,-0xc(%ebp)
085ba20f +0x4f:  cmpl   $0x3,-0xc(%ebp)
085ba213 +0x53:  setle  %al
085ba216 +0x56:  test   %al,%al
085ba218 +0x58:  jne    085ba1cf <+0xf>
085ba21a +0x5a:  mov    $0x1,%eax
085ba21f +0x5f:  leave
085ba220 +0x60:  ret
085ba221 +0x61:  nop
```

## 反编译 C

```c
// CParty::HasAllMemberSelection @ 0x85ba1c0

/* CParty::HasAllMemberSelection() */

undefined4 __thiscall CParty::HasAllMemberSelection(CParty *this)

{
  char cVar1;
  int local_10;
  
  local_10 = 0;
  while( true ) {
    if (3 < local_10) {
      return 1;
    }
    cVar1 = _checkValidUser(this,local_10);
    if ((cVar1 == '\x01') &&
       (cVar1 = CItemRoutingData::GetMemberRoutingState((CItemRoutingData *)this,local_10),
       cVar1 == '\0')) break;
    local_10 = local_10 + 1;
  }
  return 0;
}
```
