# isMyMember

`_ZN6CParty10isMyMemberEj`

`CParty::isMyMember(unsigned int)`

| 类 | 地址 |
|---|---|
| `CParty` | `0x085b66fa` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085b66fa  _ZN6CParty10isMyMemberEj
#           CParty::isMyMember(unsigned int)
# range [0x085b66fa, 0x085b6767]
085b66fa +0x00:  push   %ebp
085b66fb +0x01:  mov    %esp,%ebp
085b66fd +0x03:  sub    $0x28,%esp
085b6700 +0x06:  movl   $0x0,-0xc(%ebp)
085b6707 +0x0d:  jmp    085b6756 <+0x5c>
085b6709 +0x0f:  mov    -0xc(%ebp),%eax
085b670c +0x12:  mov    %eax,0x4(%esp)
085b6710 +0x16:  mov    0x8(%ebp),%eax
085b6713 +0x19:  mov    %eax,(%esp)
085b6716 +0x1c:  call   085b4d12 <_ZN6CParty15_checkValidUserEi>  ; CParty::_checkValidUser(int)
085b671b +0x21:  test   %al,%al
085b671d +0x23:  je     085b6752 <+0x58>
085b671f +0x25:  mov    -0xc(%ebp),%edx
085b6722 +0x28:  mov    0x8(%ebp),%ecx
085b6725 +0x2b:  mov    %edx,%eax
085b6727 +0x2d:  add    %eax,%eax
085b6729 +0x2f:  add    %edx,%eax
085b672b +0x31:  shl    $0x3,%eax
085b672e +0x34:  lea    (%ecx,%eax,1),%eax
085b6731 +0x37:  add    $0x78,%eax
085b6734 +0x3a:  mov    (%eax),%eax
085b6736 +0x3c:  mov    %eax,(%esp)
085b6739 +0x3f:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
085b673e +0x44:  movzwl %ax,%eax
085b6741 +0x47:  cmp    0xc(%ebp),%eax
085b6744 +0x4a:  sete   %al
085b6747 +0x4d:  test   %al,%al
085b6749 +0x4f:  je     085b6752 <+0x58>
085b674b +0x51:  mov    $0x1,%eax
085b6750 +0x56:  jmp    085b6766 <+0x6c>
085b6752 +0x58:  addl   $0x1,-0xc(%ebp)
085b6756 +0x5c:  cmpl   $0x3,-0xc(%ebp)
085b675a +0x60:  setle  %al
085b675d +0x63:  test   %al,%al
085b675f +0x65:  jne    085b6709 <+0xf>
085b6761 +0x67:  mov    $0x0,%eax
085b6766 +0x6c:  leave
085b6767 +0x6d:  ret
```

## 反编译 C

```c
// CParty::isMyMember @ 0x85b66fa

/* CParty::isMyMember(unsigned int) */

undefined4 __thiscall CParty::isMyMember(CParty *this,uint param_1)

{
  char cVar1;
  uint uVar2;
  int local_10;
  
  local_10 = 0;
  while( true ) {
    if (3 < local_10) {
      return 0;
    }
    cVar1 = _checkValidUser(this,local_10);
    if ((cVar1 != '\0') &&
       (uVar2 = CUser::get_unique_id(*(CUser **)(this + local_10 * 0x18 + 0x78)),
       (uVar2 & 0xffff) == param_1)) break;
    local_10 = local_10 + 1;
  }
  return 1;
}
```
