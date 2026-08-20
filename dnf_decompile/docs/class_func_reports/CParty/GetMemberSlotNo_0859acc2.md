# GetMemberSlotNo

`_ZN6CParty15GetMemberSlotNoEj`

`CParty::GetMemberSlotNo(unsigned int)`

| 类 | 地址 |
|---|---|
| `CParty` | `0x0859acc2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0859acc2  _ZN6CParty15GetMemberSlotNoEj
#           CParty::GetMemberSlotNo(unsigned int)
# range [0x0859acc2, 0x0859ad4b]
0859acc2 +0x00:  push   %ebp
0859acc3 +0x01:  mov    %esp,%ebp
0859acc5 +0x03:  sub    $0x28,%esp
0859acc8 +0x06:  movl   $0x0,-0xc(%ebp)
0859accf +0x0d:  jmp    0859ad39 <+0x77>
0859acd1 +0x0f:  mov    -0xc(%ebp),%eax
0859acd4 +0x12:  mov    %eax,0x4(%esp)
0859acd8 +0x16:  mov    0x8(%ebp),%eax
0859acdb +0x19:  mov    %eax,(%esp)
0859acde +0x1c:  call   085b4d12 <_ZN6CParty15_checkValidUserEi>  ; CParty::_checkValidUser(int)
0859ace3 +0x21:  xor    $0x1,%eax
0859ace6 +0x24:  test   %al,%al
0859ace8 +0x26:  jne    0859ad34 <+0x72>
0859acea +0x28:  mov    -0xc(%ebp),%edx
0859aced +0x2b:  mov    0x8(%ebp),%ecx
0859acf0 +0x2e:  mov    %edx,%eax
0859acf2 +0x30:  add    %eax,%eax
0859acf4 +0x32:  add    %edx,%eax
0859acf6 +0x34:  shl    $0x3,%eax
0859acf9 +0x37:  lea    (%ecx,%eax,1),%eax
0859acfc +0x3a:  add    $0x78,%eax
0859acff +0x3d:  mov    (%eax),%eax
0859ad01 +0x3f:  movl   $0xffffffff,0x4(%esp)
0859ad09 +0x47:  mov    %eax,(%esp)
0859ad0c +0x4a:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
0859ad11 +0x4f:  cmp    0xc(%ebp),%eax
0859ad14 +0x52:  sete   %al
0859ad17 +0x55:  test   %al,%al
0859ad19 +0x57:  je     0859ad35 <+0x73>
0859ad1b +0x59:  mov    -0xc(%ebp),%edx
0859ad1e +0x5c:  mov    0x8(%ebp),%ecx
0859ad21 +0x5f:  mov    %edx,%eax
0859ad23 +0x61:  add    %eax,%eax
0859ad25 +0x63:  add    %edx,%eax
0859ad27 +0x65:  shl    $0x3,%eax
0859ad2a +0x68:  lea    (%ecx,%eax,1),%eax
0859ad2d +0x6b:  add    $0x78,%eax
0859ad30 +0x6e:  mov    (%eax),%eax
0859ad32 +0x70:  jmp    0859ad49 <+0x87>
0859ad34 +0x72:  nop
0859ad35 +0x73:  addl   $0x1,-0xc(%ebp)
0859ad39 +0x77:  cmpl   $0x3,-0xc(%ebp)
0859ad3d +0x7b:  setle  %al
0859ad40 +0x7e:  test   %al,%al
0859ad42 +0x80:  jne    0859acd1 <+0xf>
0859ad44 +0x82:  mov    $0x0,%eax
0859ad49 +0x87:  leave
0859ad4a +0x88:  ret
0859ad4b +0x89:  nop
```

## 反编译 C

```c
// CParty::GetMemberSlotNo @ 0x859acc2

/* CParty::GetMemberSlotNo(unsigned int) */

undefined4 __thiscall CParty::GetMemberSlotNo(CParty *this,uint param_1)

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
    if ((cVar1 == '\x01') &&
       (uVar2 = CUser::get_charac_no(*(CUser **)(this + local_10 * 0x18 + 0x78),-1),
       uVar2 == param_1)) break;
    local_10 = local_10 + 1;
  }
  return *(undefined4 *)(this + local_10 * 0x18 + 0x78);
}
```
