# is_limit_minimum_level

`_ZN6CParty22is_limit_minimum_levelEiRi`

`CParty::is_limit_minimum_level(int, int&)`

| 类 | 地址 |
|---|---|
| `CParty` | `0x0859a286` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0859a286  _ZN6CParty22is_limit_minimum_levelEiRi
#           CParty::is_limit_minimum_level(int, int&)
# range [0x0859a286, 0x0859a317]
0859a286 +0x00:  push   %ebp
0859a287 +0x01:  mov    %esp,%ebp
0859a289 +0x03:  sub    $0x28,%esp
0859a28c +0x06:  movl   $0x0,-0xc(%ebp)
0859a293 +0x0d:  jmp    0859a306 <+0x80>
0859a295 +0x0f:  mov    -0xc(%ebp),%eax
0859a298 +0x12:  mov    %eax,0x4(%esp)
0859a29c +0x16:  mov    0x8(%ebp),%eax
0859a29f +0x19:  mov    %eax,(%esp)
0859a2a2 +0x1c:  call   085b4d12 <_ZN6CParty15_checkValidUserEi>  ; CParty::_checkValidUser(int)
0859a2a7 +0x21:  test   %al,%al
0859a2a9 +0x23:  je     0859a302 <+0x7c>
0859a2ab +0x25:  mov    -0xc(%ebp),%edx
0859a2ae +0x28:  mov    0x8(%ebp),%ecx
0859a2b1 +0x2b:  mov    %edx,%eax
0859a2b3 +0x2d:  add    %eax,%eax
0859a2b5 +0x2f:  add    %edx,%eax
0859a2b7 +0x31:  shl    $0x3,%eax
0859a2ba +0x34:  lea    (%ecx,%eax,1),%eax
0859a2bd +0x37:  add    $0x78,%eax
0859a2c0 +0x3a:  mov    (%eax),%eax
0859a2c2 +0x3c:  mov    %eax,(%esp)
0859a2c5 +0x3f:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
0859a2ca +0x44:  cmp    0xc(%ebp),%eax
0859a2cd +0x47:  setl   %al
0859a2d0 +0x4a:  test   %al,%al
0859a2d2 +0x4c:  je     0859a302 <+0x7c>
0859a2d4 +0x4e:  mov    -0xc(%ebp),%edx
0859a2d7 +0x51:  mov    0x8(%ebp),%ecx
0859a2da +0x54:  mov    %edx,%eax
0859a2dc +0x56:  add    %eax,%eax
0859a2de +0x58:  add    %edx,%eax
0859a2e0 +0x5a:  shl    $0x3,%eax
0859a2e3 +0x5d:  lea    (%ecx,%eax,1),%eax
0859a2e6 +0x60:  add    $0x78,%eax
0859a2e9 +0x63:  mov    (%eax),%eax
0859a2eb +0x65:  mov    %eax,(%esp)
0859a2ee +0x68:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
0859a2f3 +0x6d:  movzwl %ax,%edx
0859a2f6 +0x70:  mov    0x10(%ebp),%eax
0859a2f9 +0x73:  mov    %edx,(%eax)
0859a2fb +0x75:  mov    $0x0,%eax
0859a300 +0x7a:  jmp    0859a316 <+0x90>
0859a302 +0x7c:  addl   $0x1,-0xc(%ebp)
0859a306 +0x80:  cmpl   $0x3,-0xc(%ebp)
0859a30a +0x84:  setle  %al
0859a30d +0x87:  test   %al,%al
0859a30f +0x89:  jne    0859a295 <+0xf>
0859a311 +0x8b:  mov    $0x1,%eax
0859a316 +0x90:  leave
0859a317 +0x91:  ret
```

## 反编译 C

```c
// CParty::is_limit_minimum_level @ 0x859a286

/* CParty::is_limit_minimum_level(int, int&) */

undefined4 __thiscall CParty::is_limit_minimum_level(CParty *this,int param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int local_10;
  
  local_10 = 0;
  while( true ) {
    if (3 < local_10) {
      return 1;
    }
    cVar1 = _checkValidUser(this,local_10);
    if ((cVar1 != '\0') &&
       (iVar2 = CUserCharacInfo::get_charac_level
                          (*(CUserCharacInfo **)(this + local_10 * 0x18 + 0x78)), iVar2 < param_1))
    break;
    local_10 = local_10 + 1;
  }
  uVar3 = CUser::get_unique_id(*(CUser **)(this + local_10 * 0x18 + 0x78));
  *param_2 = uVar3 & 0xffff;
  return 0;
}
```
