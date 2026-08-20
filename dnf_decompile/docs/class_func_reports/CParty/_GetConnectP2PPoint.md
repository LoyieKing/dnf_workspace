# _GetConnectP2PPoint

`_ZN6CParty19_GetConnectP2PPointEi`

`CParty::_GetConnectP2PPoint(int)`

| 类 | 地址 |
|---|---|
| `CParty` | `0x0859a74c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0859a74c  _ZN6CParty19_GetConnectP2PPointEi
#           CParty::_GetConnectP2PPoint(int)
# range [0x0859a74c, 0x0859a7a1]
0859a74c +0x00:  push   %ebp
0859a74d +0x01:  mov    %esp,%ebp
0859a74f +0x03:  sub    $0x28,%esp
0859a752 +0x06:  movl   $0x0,-0x10(%ebp)
0859a759 +0x0d:  movl   $0x0,-0xc(%ebp)
0859a760 +0x14:  jmp    0859a792 <+0x46>
0859a762 +0x16:  mov    0xc(%ebp),%eax
0859a765 +0x19:  cmp    -0xc(%ebp),%eax
0859a768 +0x1c:  je     0859a78e <+0x42>
0859a76a +0x1e:  mov    -0xc(%ebp),%eax
0859a76d +0x21:  mov    %eax,0x8(%esp)
0859a771 +0x25:  mov    0xc(%ebp),%eax
0859a774 +0x28:  mov    %eax,0x4(%esp)
0859a778 +0x2c:  mov    0x8(%ebp),%eax
0859a77b +0x2f:  mov    %eax,(%esp)
0859a77e +0x32:  call   0859a610 <_ZN6CParty19_IsCannotConnectP2PEii>  ; CParty::_IsCannotConnectP2P(int, int)
0859a783 +0x37:  xor    $0x1,%eax
0859a786 +0x3a:  test   %al,%al
0859a788 +0x3c:  je     0859a78e <+0x42>
0859a78a +0x3e:  addl   $0x1,-0x10(%ebp)
0859a78e +0x42:  addl   $0x1,-0xc(%ebp)
0859a792 +0x46:  cmpl   $0x3,-0xc(%ebp)
0859a796 +0x4a:  setle  %al
0859a799 +0x4d:  test   %al,%al
0859a79b +0x4f:  jne    0859a762 <+0x16>
0859a79d +0x51:  mov    -0x10(%ebp),%eax
0859a7a0 +0x54:  leave
0859a7a1 +0x55:  ret
```

## 反编译 C

```c
// CParty::_GetConnectP2PPoint @ 0x859a74c

/* CParty::_GetConnectP2PPoint(int) */

int __thiscall CParty::_GetConnectP2PPoint(CParty *this,int param_1)

{
  char cVar1;
  undefined4 local_14;
  undefined4 local_10;
  
  local_14 = 0;
  for (local_10 = 0; local_10 < 4; local_10 = local_10 + 1) {
    if (param_1 != local_10) {
      cVar1 = _IsCannotConnectP2P(this,param_1,local_10);
      if (cVar1 != '\x01') {
        local_14 = local_14 + 1;
      }
    }
  }
  return local_14;
}
```
