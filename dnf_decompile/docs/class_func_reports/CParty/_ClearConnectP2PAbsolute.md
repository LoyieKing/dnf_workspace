# _ClearConnectP2PAbsolute

`_ZN6CParty24_ClearConnectP2PAbsoluteEi`

`CParty::_ClearConnectP2PAbsolute(int)`

| 类 | 地址 |
|---|---|
| `CParty` | `0x0859a664` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0859a664  _ZN6CParty24_ClearConnectP2PAbsoluteEi
#           CParty::_ClearConnectP2PAbsolute(int)
# range [0x0859a664, 0x0859a6db]
0859a664 +0x00:  push   %ebp
0859a665 +0x01:  mov    %esp,%ebp
0859a667 +0x03:  sub    $0x28,%esp
0859a66a +0x06:  movl   $0x0,-0xc(%ebp)
0859a671 +0x0d:  jmp    0859a6ca <+0x66>
0859a673 +0x0f:  mov    0xc(%ebp),%eax
0859a676 +0x12:  cmp    -0xc(%ebp),%eax
0859a679 +0x15:  je     0859a6c6 <+0x62>
0859a67b +0x17:  mov    -0xc(%ebp),%eax
0859a67e +0x1a:  mov    %eax,0x8(%esp)
0859a682 +0x1e:  mov    0xc(%ebp),%eax
0859a685 +0x21:  mov    %eax,0x4(%esp)
0859a689 +0x25:  mov    0x8(%ebp),%eax
0859a68c +0x28:  mov    %eax,(%esp)
0859a68f +0x2b:  call   0859a610 <_ZN6CParty19_IsCannotConnectP2PEii>  ; CParty::_IsCannotConnectP2P(int, int)
0859a694 +0x30:  test   %al,%al
0859a696 +0x32:  je     0859a6c6 <+0x62>
0859a698 +0x34:  mov    -0xc(%ebp),%edx
0859a69b +0x37:  mov    0x8(%ebp),%ecx
0859a69e +0x3a:  mov    %edx,%eax
0859a6a0 +0x3c:  add    %eax,%eax
0859a6a2 +0x3e:  add    %edx,%eax
0859a6a4 +0x40:  shl    $0x3,%eax
0859a6a7 +0x43:  lea    (%ecx,%eax,1),%eax
0859a6aa +0x46:  add    $0x78,%eax
0859a6ad +0x49:  mov    (%eax),%eax
0859a6af +0x4b:  movl   $0x2,0x8(%esp)
0859a6b7 +0x53:  mov    %eax,0x4(%esp)
0859a6bb +0x57:  mov    0x8(%ebp),%eax
0859a6be +0x5a:  mov    %eax,(%esp)
0859a6c1 +0x5d:  call   0859c114 <_ZN6CParty10leave_userEP5CUser20ENUM_PARTY_INFO_TYPE>  ; CParty::leave_user(CUser*, ENUM_PARTY_INFO_TYPE)
0859a6c6 +0x62:  addl   $0x1,-0xc(%ebp)
0859a6ca +0x66:  cmpl   $0x3,-0xc(%ebp)
0859a6ce +0x6a:  setle  %al
0859a6d1 +0x6d:  test   %al,%al
0859a6d3 +0x6f:  jne    0859a673 <+0xf>
0859a6d5 +0x71:  mov    $0x1,%eax
0859a6da +0x76:  leave
0859a6db +0x77:  ret
```

## 反编译 C

```c
// CParty::_ClearConnectP2PAbsolute @ 0x859a664

/* CParty::_ClearConnectP2PAbsolute(int) */

undefined4 __thiscall CParty::_ClearConnectP2PAbsolute(CParty *this,int param_1)

{
  char cVar1;
  int local_10;
  
  for (local_10 = 0; local_10 < 4; local_10 = local_10 + 1) {
    if (param_1 != local_10) {
      cVar1 = _IsCannotConnectP2P(this,param_1,local_10);
      if (cVar1 != '\0') {
        leave_user(this,*(undefined4 *)(this + local_10 * 0x18 + 0x78),2);
      }
    }
  }
  return 1;
}
```
