# get_member_count

`_ZN6CParty16get_member_countEv`

`CParty::get_member_count()`

| 类 | 地址 |
|---|---|
| `CParty` | `0x0859a16a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0859a16a  _ZN6CParty16get_member_countEv
#           CParty::get_member_count()
# range [0x0859a16a, 0x0859a1ad]
0859a16a +0x00:  push   %ebp
0859a16b +0x01:  mov    %esp,%ebp
0859a16d +0x03:  sub    $0x28,%esp
0859a170 +0x06:  movl   $0x0,-0x10(%ebp)
0859a177 +0x0d:  movl   $0x0,-0xc(%ebp)
0859a17e +0x14:  jmp    0859a19e <+0x34>
0859a180 +0x16:  mov    -0xc(%ebp),%eax
0859a183 +0x19:  mov    %eax,0x4(%esp)
0859a187 +0x1d:  mov    0x8(%ebp),%eax
0859a18a +0x20:  mov    %eax,(%esp)
0859a18d +0x23:  call   085b4d12 <_ZN6CParty15_checkValidUserEi>  ; CParty::_checkValidUser(int)
0859a192 +0x28:  test   %al,%al
0859a194 +0x2a:  je     0859a19a <+0x30>
0859a196 +0x2c:  addl   $0x1,-0x10(%ebp)
0859a19a +0x30:  addl   $0x1,-0xc(%ebp)
0859a19e +0x34:  cmpl   $0x3,-0xc(%ebp)
0859a1a2 +0x38:  setle  %al
0859a1a5 +0x3b:  test   %al,%al
0859a1a7 +0x3d:  jne    0859a180 <+0x16>
0859a1a9 +0x3f:  mov    -0x10(%ebp),%eax
0859a1ac +0x42:  leave
0859a1ad +0x43:  ret
```

## 反编译 C

```c
// CParty::get_member_count @ 0x859a16a

/* CParty::get_member_count() */

int __thiscall CParty::get_member_count(CParty *this)

{
  char cVar1;
  undefined4 local_14;
  undefined4 local_10;
  
  local_14 = 0;
  for (local_10 = 0; local_10 < 4; local_10 = local_10 + 1) {
    cVar1 = _checkValidUser(this,local_10);
    if (cVar1 != '\0') {
      local_14 = local_14 + 1;
    }
  }
  return local_14;
}
```
