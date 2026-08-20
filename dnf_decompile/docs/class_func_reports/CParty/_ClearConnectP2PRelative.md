# _ClearConnectP2PRelative

`_ZN6CParty24_ClearConnectP2PRelativeEi`

`CParty::_ClearConnectP2PRelative(int)`

| 类 | 地址 |
|---|---|
| `CParty` | `0x0859a6dc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0859a6dc  _ZN6CParty24_ClearConnectP2PRelativeEi
#           CParty::_ClearConnectP2PRelative(int)
# range [0x0859a6dc, 0x0859a74b]
0859a6dc +0x00:  push   %ebp
0859a6dd +0x01:  mov    %esp,%ebp
0859a6df +0x03:  sub    $0x28,%esp
0859a6e2 +0x06:  movl   $0x2,-0xc(%ebp)
0859a6e9 +0x0d:  jmp    0859a739 <+0x5d>
0859a6eb +0x0f:  mov    -0xc(%ebp),%eax
0859a6ee +0x12:  mov    %eax,0x4(%esp)
0859a6f2 +0x16:  mov    0x8(%ebp),%eax
0859a6f5 +0x19:  mov    %eax,(%esp)
0859a6f8 +0x1c:  call   0859a74c <_ZN6CParty19_GetConnectP2PPointEi>  ; CParty::_GetConnectP2PPoint(int)
0859a6fd +0x21:  cmp    0xc(%ebp),%eax
0859a700 +0x24:  sete   %al
0859a703 +0x27:  test   %al,%al
0859a705 +0x29:  je     0859a735 <+0x59>
0859a707 +0x2b:  mov    -0xc(%ebp),%edx
0859a70a +0x2e:  mov    0x8(%ebp),%ecx
0859a70d +0x31:  mov    %edx,%eax
0859a70f +0x33:  add    %eax,%eax
0859a711 +0x35:  add    %edx,%eax
0859a713 +0x37:  shl    $0x3,%eax
0859a716 +0x3a:  lea    (%ecx,%eax,1),%eax
0859a719 +0x3d:  add    $0x78,%eax
0859a71c +0x40:  mov    (%eax),%eax
0859a71e +0x42:  movl   $0x2,0x8(%esp)
0859a726 +0x4a:  mov    %eax,0x4(%esp)
0859a72a +0x4e:  mov    0x8(%ebp),%eax
0859a72d +0x51:  mov    %eax,(%esp)
0859a730 +0x54:  call   0859c114 <_ZN6CParty10leave_userEP5CUser20ENUM_PARTY_INFO_TYPE>  ; CParty::leave_user(CUser*, ENUM_PARTY_INFO_TYPE)
0859a735 +0x59:  addl   $0x1,-0xc(%ebp)
0859a739 +0x5d:  cmpl   $0x3,-0xc(%ebp)
0859a73d +0x61:  setle  %al
0859a740 +0x64:  test   %al,%al
0859a742 +0x66:  jne    0859a6eb <+0xf>
0859a744 +0x68:  mov    $0x1,%eax
0859a749 +0x6d:  leave
0859a74a +0x6e:  ret
0859a74b +0x6f:  nop
```

## 反编译 C

```c
// CParty::_ClearConnectP2PRelative @ 0x859a6dc

/* CParty::_ClearConnectP2PRelative(int) */

undefined4 __thiscall CParty::_ClearConnectP2PRelative(CParty *this,int param_1)

{
  int iVar1;
  int local_10;
  
  for (local_10 = 2; local_10 < 4; local_10 = local_10 + 1) {
    iVar1 = _GetConnectP2PPoint(this,local_10);
    if (iVar1 == param_1) {
      leave_user(this,*(undefined4 *)(this + local_10 * 0x18 + 0x78),2);
    }
  }
  return 1;
}
```
