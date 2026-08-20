# CheckPremiumTimeout

`_ZNK8WongWork12CUserPremium19CheckPremiumTimeoutEv`

`WongWork::CUserPremium::CheckPremiumTimeout() const`

| 类 | 地址 |
|---|---|
| `WongWork::CUserPremium` | `0x086add9c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086add9c  _ZNK8WongWork12CUserPremium19CheckPremiumTimeoutEv
#           WongWork::CUserPremium::CheckPremiumTimeout() const
# range [0x086add9c, 0x086ade9b]
086add9c +0x00:  push   %ebp
086add9d +0x01:  mov    %esp,%ebp
086add9f +0x03:  push   %ebx
086adda0 +0x04:  sub    $0x24,%esp
086adda3 +0x07:  mov    0x8(%ebp),%ebx
086adda6 +0x0a:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
086addad +0x11:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
086addb2 +0x16:  mov    %eax,-0x10(%ebp)
086addb5 +0x19:  movl   $0x0,(%ebx)
086addbb +0x1f:  movl   $0x1,-0xc(%ebp)
086addc2 +0x26:  jmp    086ade81 <+0xe5>
086addc7 +0x2b:  mov    -0xc(%ebp),%edx
086addca +0x2e:  mov    0xc(%ebp),%ecx
086addcd +0x31:  mov    %edx,%eax
086addcf +0x33:  shl    $0x2,%eax
086addd2 +0x36:  add    %edx,%eax
086addd4 +0x38:  shl    $0x2,%eax
086addd7 +0x3b:  mov    (%eax,%ecx,1),%eax
086addda +0x3e:  test   %eax,%eax
086adddc +0x40:  je     086ade76 <+0xda>
086adde2 +0x46:  mov    -0xc(%ebp),%edx
086adde5 +0x49:  mov    0xc(%ebp),%ecx
086adde8 +0x4c:  mov    %edx,%eax
086addea +0x4e:  shl    $0x2,%eax
086added +0x51:  add    %edx,%eax
086addef +0x53:  shl    $0x2,%eax
086addf2 +0x56:  mov    (%eax,%ecx,1),%edx
086addf5 +0x59:  mov    %edx,%eax
086addf7 +0x5b:  shl    $0x3,%eax
086addfa +0x5e:  add    %edx,%eax
086addfc +0x60:  shl    $0x5,%eax
086addff +0x63:  mov    &g_SPremiumInfo+0x4(%eax),%eax
086ade05 +0x69:  test   %eax,%eax
086ade07 +0x6b:  je     086ade79 <+0xdd>
086ade09 +0x6d:  mov    -0xc(%ebp),%edx
086ade0c +0x70:  mov    0xc(%ebp),%ecx
086ade0f +0x73:  mov    %edx,%eax
086ade11 +0x75:  shl    $0x2,%eax
086ade14 +0x78:  add    %edx,%eax
086ade16 +0x7a:  shl    $0x2,%eax
086ade19 +0x7d:  lea    (%ecx,%eax,1),%eax
086ade1c +0x80:  add    $0x10,%eax
086ade1f +0x83:  mov    (%eax),%eax
086ade21 +0x85:  cmp    $0x3,%eax
086ade24 +0x88:  je     086ade7c <+0xe0>
086ade26 +0x8a:  mov    -0xc(%ebp),%edx
086ade29 +0x8d:  mov    0xc(%ebp),%ecx
086ade2c +0x90:  mov    %edx,%eax
086ade2e +0x92:  shl    $0x2,%eax
086ade31 +0x95:  add    %edx,%eax
086ade33 +0x97:  shl    $0x2,%eax
086ade36 +0x9a:  lea    (%ecx,%eax,1),%eax
086ade39 +0x9d:  add    $0x8,%eax
086ade3c +0xa0:  mov    (%eax),%eax
086ade3e +0xa2:  cmp    -0x10(%ebp),%eax
086ade41 +0xa5:  jg     086ade7d <+0xe1>
086ade43 +0xa7:  mov    -0xc(%ebp),%ecx
086ade46 +0xaa:  mov    0xc(%ebp),%edx
086ade49 +0xad:  mov    %ecx,%eax
086ade4b +0xaf:  shl    $0x2,%eax
086ade4e +0xb2:  add    %ecx,%eax
086ade50 +0xb4:  shl    $0x2,%eax
086ade53 +0xb7:  mov    (%eax,%edx,1),%ecx
086ade56 +0xba:  mov    %ecx,(%ebx)
086ade58 +0xbc:  mov    0x4(%eax,%edx,1),%ecx
086ade5c +0xc0:  mov    %ecx,0x4(%ebx)
086ade5f +0xc3:  mov    0x8(%eax,%edx,1),%ecx
086ade63 +0xc7:  mov    %ecx,0x8(%ebx)
086ade66 +0xca:  mov    0xc(%eax,%edx,1),%ecx
086ade6a +0xce:  mov    %ecx,0xc(%ebx)
086ade6d +0xd1:  mov    0x10(%eax,%edx,1),%eax
086ade71 +0xd5:  mov    %eax,0x10(%ebx)
086ade74 +0xd8:  jmp    086ade91 <+0xf5>
086ade76 +0xda:  nop
086ade77 +0xdb:  jmp    086ade7d <+0xe1>
086ade79 +0xdd:  nop
086ade7a +0xde:  jmp    086ade7d <+0xe1>
086ade7c +0xe0:  nop
086ade7d +0xe1:  addl   $0x1,-0xc(%ebp)
086ade81 +0xe5:  cmpl   $0x69,-0xc(%ebp)
086ade85 +0xe9:  setle  %al
086ade88 +0xec:  test   %al,%al
086ade8a +0xee:  jne    086addc7 <+0x2b>
086ade90 +0xf4:  nop
086ade91 +0xf5:  mov    %ebx,%eax
086ade93 +0xf7:  add    $0x24,%esp
086ade96 +0xfa:  pop    %ebx
086ade97 +0xfb:  pop    %ebp
086ade98 +0xfc:  ret    $0x4
086ade9b +0xff:  nop
```

## 反编译 C

```c
// WongWork::CUserPremium::CheckPremiumTimeout @ 0x86add9c

/* WongWork::CUserPremium::CheckPremiumTimeout() const */

undefined4 * WongWork::CUserPremium::CheckPremiumTimeout(void)

{
  int iVar1;
  undefined4 *in_stack_00000004;
  int in_stack_00000008;
  int local_10;
  
  iVar1 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  *in_stack_00000004 = 0;
  local_10 = 1;
  while( true ) {
    if (0x69 < local_10) {
      return in_stack_00000004;
    }
    if ((((*(int *)(local_10 * 0x14 + in_stack_00000008) != 0) &&
         (*(int *)(g_SPremiumInfo + *(int *)(local_10 * 0x14 + in_stack_00000008) * 0x120 + 4) != 0)
         ) && (*(int *)(in_stack_00000008 + local_10 * 0x14 + 0x10) != 3)) &&
       (*(int *)(in_stack_00000008 + local_10 * 0x14 + 8) <= iVar1)) break;
    local_10 = local_10 + 1;
  }
  local_10 = local_10 * 0x14;
  *in_stack_00000004 = *(undefined4 *)(local_10 + in_stack_00000008);
  in_stack_00000004[1] = *(undefined4 *)(local_10 + 4 + in_stack_00000008);
  in_stack_00000004[2] = *(undefined4 *)(local_10 + 8 + in_stack_00000008);
  in_stack_00000004[3] = *(undefined4 *)(local_10 + 0xc + in_stack_00000008);
  in_stack_00000004[4] = *(undefined4 *)(local_10 + 0x10 + in_stack_00000008);
  return in_stack_00000004;
}
```
