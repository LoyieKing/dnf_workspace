# GetMemberRoutingState

`_ZN6CParty21GetMemberRoutingStateEP5CUser`

`CParty::GetMemberRoutingState(CUser*)`

| 类 | 地址 |
|---|---|
| `CParty` | `0x085ba150` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085ba150  _ZN6CParty21GetMemberRoutingStateEP5CUser
#           CParty::GetMemberRoutingState(CUser*)
# range [0x085ba150, 0x085ba1bf]
085ba150 +0x00:  push   %ebp
085ba151 +0x01:  mov    %esp,%ebp
085ba153 +0x03:  sub    $0x28,%esp
085ba156 +0x06:  movl   $0x0,-0xc(%ebp)
085ba15d +0x0d:  jmp    085ba1ad <+0x5d>
085ba15f +0x0f:  mov    -0xc(%ebp),%eax
085ba162 +0x12:  mov    %eax,0x4(%esp)
085ba166 +0x16:  mov    0x8(%ebp),%eax
085ba169 +0x19:  mov    %eax,(%esp)
085ba16c +0x1c:  call   085b4d12 <_ZN6CParty15_checkValidUserEi>  ; CParty::_checkValidUser(int)
085ba171 +0x21:  xor    $0x1,%eax
085ba174 +0x24:  test   %al,%al
085ba176 +0x26:  jne    085ba1a8 <+0x58>
085ba178 +0x28:  mov    -0xc(%ebp),%edx
085ba17b +0x2b:  mov    0x8(%ebp),%ecx
085ba17e +0x2e:  mov    %edx,%eax
085ba180 +0x30:  add    %eax,%eax
085ba182 +0x32:  add    %edx,%eax
085ba184 +0x34:  shl    $0x3,%eax
085ba187 +0x37:  lea    (%ecx,%eax,1),%eax
085ba18a +0x3a:  add    $0x78,%eax
085ba18d +0x3d:  mov    (%eax),%eax
085ba18f +0x3f:  cmp    0xc(%ebp),%eax
085ba192 +0x42:  jne    085ba1a9 <+0x59>
085ba194 +0x44:  mov    0x8(%ebp),%eax
085ba197 +0x47:  mov    -0xc(%ebp),%edx
085ba19a +0x4a:  mov    %edx,0x4(%esp)
085ba19e +0x4e:  mov    %eax,(%esp)
085ba1a1 +0x51:  call   085bf694 <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0xbf2>  ; global constructors keyed to CParty::cMember::cMember()+0xbf2
085ba1a6 +0x56:  jmp    085ba1bd <+0x6d>
085ba1a8 +0x58:  nop
085ba1a9 +0x59:  addl   $0x1,-0xc(%ebp)
085ba1ad +0x5d:  cmpl   $0x3,-0xc(%ebp)
085ba1b1 +0x61:  setle  %al
085ba1b4 +0x64:  test   %al,%al
085ba1b6 +0x66:  jne    085ba15f <+0xf>
085ba1b8 +0x68:  mov    $0xffffffff,%eax
085ba1bd +0x6d:  leave
085ba1be +0x6e:  ret
085ba1bf +0x6f:  nop
```

## 反编译 C

```c
// CParty::GetMemberRoutingState @ 0x85ba150

/* CParty::GetMemberRoutingState(CUser*) */

undefined4 __thiscall CParty::GetMemberRoutingState(CParty *this,CUser *param_1)

{
  char cVar1;
  undefined4 uVar2;
  int local_10;
  
  local_10 = 0;
  while( true ) {
    if (3 < local_10) {
      return 0xffffffff;
    }
    cVar1 = _checkValidUser(this,local_10);
    if ((cVar1 == '\x01') && (*(CUser **)(this + local_10 * 0x18 + 0x78) == param_1)) break;
    local_10 = local_10 + 1;
  }
  uVar2 = CItemRoutingData::GetMemberRoutingState((CItemRoutingData *)this,local_10);
  return uVar2;
}
```
