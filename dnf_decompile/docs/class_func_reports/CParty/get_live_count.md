# get_live_count

`_ZN6CParty14get_live_countEv`

`CParty::get_live_count()`

| 类 | 地址 |
|---|---|
| `CParty` | `0x0859a8bc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0859a8bc  _ZN6CParty14get_live_countEv
#           CParty::get_live_count()
# range [0x0859a8bc, 0x0859a917]
0859a8bc +0x00:  push   %ebp
0859a8bd +0x01:  mov    %esp,%ebp
0859a8bf +0x03:  sub    $0x28,%esp
0859a8c2 +0x06:  movl   $0x0,-0x10(%ebp)
0859a8c9 +0x0d:  movl   $0x0,-0xc(%ebp)
0859a8d0 +0x14:  jmp    0859a908 <+0x4c>
0859a8d2 +0x16:  mov    -0xc(%ebp),%eax
0859a8d5 +0x19:  mov    %eax,0x4(%esp)
0859a8d9 +0x1d:  mov    0x8(%ebp),%eax
0859a8dc +0x20:  mov    %eax,(%esp)
0859a8df +0x23:  call   085b4d12 <_ZN6CParty15_checkValidUserEi>  ; CParty::_checkValidUser(int)
0859a8e4 +0x28:  xor    $0x1,%eax
0859a8e7 +0x2b:  test   %al,%al
0859a8e9 +0x2d:  jne    0859a903 <+0x47>
0859a8eb +0x2f:  mov    -0xc(%ebp),%eax
0859a8ee +0x32:  mov    0x8(%ebp),%edx
0859a8f1 +0x35:  movzbl 0x380(%edx,%eax,1),%eax
0859a8f9 +0x3d:  test   %al,%al
0859a8fb +0x3f:  je     0859a904 <+0x48>
0859a8fd +0x41:  addl   $0x1,-0x10(%ebp)
0859a901 +0x45:  jmp    0859a904 <+0x48>
0859a903 +0x47:  nop
0859a904 +0x48:  addl   $0x1,-0xc(%ebp)
0859a908 +0x4c:  cmpl   $0x3,-0xc(%ebp)
0859a90c +0x50:  setle  %al
0859a90f +0x53:  test   %al,%al
0859a911 +0x55:  jne    0859a8d2 <+0x16>
0859a913 +0x57:  mov    -0x10(%ebp),%eax
0859a916 +0x5a:  leave
0859a917 +0x5b:  ret
```

## 反编译 C

```c
// CParty::get_live_count @ 0x859a8bc

/* CParty::get_live_count() */

int __thiscall CParty::get_live_count(CParty *this)

{
  char cVar1;
  int local_14;
  int local_10;
  
  local_14 = 0;
  for (local_10 = 0; local_10 < 4; local_10 = local_10 + 1) {
    cVar1 = _checkValidUser(this,local_10);
    if ((cVar1 == '\x01') && (this[local_10 + 0x380] != (CParty)0x0)) {
      local_14 = local_14 + 1;
    }
  }
  return local_14;
}
```
