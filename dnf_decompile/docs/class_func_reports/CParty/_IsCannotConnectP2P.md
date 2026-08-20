# _IsCannotConnectP2P

`_ZN6CParty19_IsCannotConnectP2PEii`

`CParty::_IsCannotConnectP2P(int, int)`

| 类 | 地址 |
|---|---|
| `CParty` | `0x0859a610` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0859a610  _ZN6CParty19_IsCannotConnectP2PEii
#           CParty::_IsCannotConnectP2P(int, int)
# range [0x0859a610, 0x0859a663]
0859a610 +0x00:  push   %ebp
0859a611 +0x01:  mov    %esp,%ebp
0859a613 +0x03:  push   %ebx
0859a614 +0x04:  sub    $0x14,%esp
0859a617 +0x07:  mov    0xc(%ebp),%edx
0859a61a +0x0a:  mov    0x10(%ebp),%ecx
0859a61d +0x0d:  mov    0x8(%ebp),%ebx
0859a620 +0x10:  mov    %edx,%eax
0859a622 +0x12:  add    %eax,%eax
0859a624 +0x14:  add    %edx,%eax
0859a626 +0x16:  shl    $0x3,%eax
0859a629 +0x19:  lea    (%ebx,%eax,1),%eax
0859a62c +0x1c:  add    %ecx,%eax
0859a62e +0x1e:  add    $0x70,%eax
0859a631 +0x21:  movzbl 0x16(%eax),%eax
0859a635 +0x25:  test   %al,%al
0859a637 +0x27:  je     0859a659 <+0x49>
0859a639 +0x29:  mov    0x10(%ebp),%eax
0859a63c +0x2c:  mov    %eax,0x4(%esp)
0859a640 +0x30:  mov    0x8(%ebp),%eax
0859a643 +0x33:  mov    %eax,(%esp)
0859a646 +0x36:  call   085b4d12 <_ZN6CParty15_checkValidUserEi>  ; CParty::_checkValidUser(int)
0859a64b +0x3b:  xor    $0x1,%eax
0859a64e +0x3e:  test   %al,%al
0859a650 +0x40:  je     0859a659 <+0x49>
0859a652 +0x42:  mov    $0x0,%eax
0859a657 +0x47:  jmp    0859a65e <+0x4e>
0859a659 +0x49:  mov    $0x1,%eax
0859a65e +0x4e:  add    $0x14,%esp
0859a661 +0x51:  pop    %ebx
0859a662 +0x52:  pop    %ebp
0859a663 +0x53:  ret
```

## 反编译 C

```c
// CParty::_IsCannotConnectP2P @ 0x859a610

/* CParty::_IsCannotConnectP2P(int, int) */

undefined4 __thiscall CParty::_IsCannotConnectP2P(CParty *this,int param_1,int param_2)

{
  char cVar1;
  
  if ((this[param_2 + param_1 * 0x18 + 0x86] != (CParty)0x0) &&
     (cVar1 = _checkValidUser(this,param_2), cVar1 != '\x01')) {
    return 0;
  }
  return 1;
}
```
