# SetMemberRoutingState

`_ZN6CParty21SetMemberRoutingStateEP5CUserc`

`CParty::SetMemberRoutingState(CUser*, char)`

| 类 | 地址 |
|---|---|
| `CParty` | `0x085ba0d8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085ba0d8  _ZN6CParty21SetMemberRoutingStateEP5CUserc
#           CParty::SetMemberRoutingState(CUser*, char)
# range [0x085ba0d8, 0x085ba14f]
085ba0d8 +0x00:  push   %ebp
085ba0d9 +0x01:  mov    %esp,%ebp
085ba0db +0x03:  sub    $0x38,%esp
085ba0de +0x06:  mov    0x10(%ebp),%eax
085ba0e1 +0x09:  mov    %al,-0x1c(%ebp)
085ba0e4 +0x0c:  movl   $0x0,-0xc(%ebp)
085ba0eb +0x13:  jmp    085ba143 <+0x6b>
085ba0ed +0x15:  mov    -0xc(%ebp),%eax
085ba0f0 +0x18:  mov    %eax,0x4(%esp)
085ba0f4 +0x1c:  mov    0x8(%ebp),%eax
085ba0f7 +0x1f:  mov    %eax,(%esp)
085ba0fa +0x22:  call   085b4d12 <_ZN6CParty15_checkValidUserEi>  ; CParty::_checkValidUser(int)
085ba0ff +0x27:  xor    $0x1,%eax
085ba102 +0x2a:  test   %al,%al
085ba104 +0x2c:  jne    085ba13e <+0x66>
085ba106 +0x2e:  mov    -0xc(%ebp),%edx
085ba109 +0x31:  mov    0x8(%ebp),%ecx
085ba10c +0x34:  mov    %edx,%eax
085ba10e +0x36:  add    %eax,%eax
085ba110 +0x38:  add    %edx,%eax
085ba112 +0x3a:  shl    $0x3,%eax
085ba115 +0x3d:  lea    (%ecx,%eax,1),%eax
085ba118 +0x40:  add    $0x78,%eax
085ba11b +0x43:  mov    (%eax),%eax
085ba11d +0x45:  cmp    0xc(%ebp),%eax
085ba120 +0x48:  jne    085ba13f <+0x67>
085ba122 +0x4a:  movsbl -0x1c(%ebp),%edx
085ba126 +0x4e:  mov    0x8(%ebp),%eax
085ba129 +0x51:  mov    %edx,0x8(%esp)
085ba12d +0x55:  mov    -0xc(%ebp),%edx
085ba130 +0x58:  mov    %edx,0x4(%esp)
085ba134 +0x5c:  mov    %eax,(%esp)
085ba137 +0x5f:  call   085bf6b8 <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0xc16>  ; global constructors keyed to CParty::cMember::cMember()+0xc16
085ba13c +0x64:  jmp    085ba14e <+0x76>
085ba13e +0x66:  nop
085ba13f +0x67:  addl   $0x1,-0xc(%ebp)
085ba143 +0x6b:  cmpl   $0x3,-0xc(%ebp)
085ba147 +0x6f:  setle  %al
085ba14a +0x72:  test   %al,%al
085ba14c +0x74:  jne    085ba0ed <+0x15>
085ba14e +0x76:  leave
085ba14f +0x77:  ret
```

## 反编译 C

```c
// CParty::SetMemberRoutingState @ 0x85ba0d8

/* CParty::SetMemberRoutingState(CUser*, char) */

void __thiscall CParty::SetMemberRoutingState(CParty *this,CUser *param_1,char param_2)

{
  char cVar1;
  int local_10;
  
  local_10 = 0;
  while( true ) {
    if (3 < local_10) {
      return;
    }
    cVar1 = _checkValidUser(this,local_10);
    if ((cVar1 == '\x01') && (*(CUser **)(this + local_10 * 0x18 + 0x78) == param_1)) break;
    local_10 = local_10 + 1;
  }
  CItemRoutingData::SetMemberRoutingState((CItemRoutingData *)this,local_10,param_2);
  return;
}
```
