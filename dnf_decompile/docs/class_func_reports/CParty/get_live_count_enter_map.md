# get_live_count_enter_map

`_ZN6CParty24get_live_count_enter_mapEv`

`CParty::get_live_count_enter_map()`

| 类 | 地址 |
|---|---|
| `CParty` | `0x0859a918` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0859a918  _ZN6CParty24get_live_count_enter_mapEv
#           CParty::get_live_count_enter_map()
# range [0x0859a918, 0x0859a973]
0859a918 +0x00:  push   %ebp
0859a919 +0x01:  mov    %esp,%ebp
0859a91b +0x03:  sub    $0x28,%esp
0859a91e +0x06:  movl   $0x0,-0x10(%ebp)
0859a925 +0x0d:  movl   $0x0,-0xc(%ebp)
0859a92c +0x14:  jmp    0859a964 <+0x4c>
0859a92e +0x16:  mov    -0xc(%ebp),%eax
0859a931 +0x19:  mov    %eax,0x4(%esp)
0859a935 +0x1d:  mov    0x8(%ebp),%eax
0859a938 +0x20:  mov    %eax,(%esp)
0859a93b +0x23:  call   085b4d12 <_ZN6CParty15_checkValidUserEi>  ; CParty::_checkValidUser(int)
0859a940 +0x28:  xor    $0x1,%eax
0859a943 +0x2b:  test   %al,%al
0859a945 +0x2d:  jne    0859a95f <+0x47>
0859a947 +0x2f:  mov    -0xc(%ebp),%eax
0859a94a +0x32:  mov    0x8(%ebp),%edx
0859a94d +0x35:  movzbl 0x384(%edx,%eax,1),%eax
0859a955 +0x3d:  test   %al,%al
0859a957 +0x3f:  je     0859a960 <+0x48>
0859a959 +0x41:  addl   $0x1,-0x10(%ebp)
0859a95d +0x45:  jmp    0859a960 <+0x48>
0859a95f +0x47:  nop
0859a960 +0x48:  addl   $0x1,-0xc(%ebp)
0859a964 +0x4c:  cmpl   $0x3,-0xc(%ebp)
0859a968 +0x50:  setle  %al
0859a96b +0x53:  test   %al,%al
0859a96d +0x55:  jne    0859a92e <+0x16>
0859a96f +0x57:  mov    -0x10(%ebp),%eax
0859a972 +0x5a:  leave
0859a973 +0x5b:  ret
```

## 反编译 C

```c
// CParty::get_live_count_enter_map @ 0x859a918

/* CParty::get_live_count_enter_map() */

int __thiscall CParty::get_live_count_enter_map(CParty *this)

{
  char cVar1;
  int local_14;
  int local_10;
  
  local_14 = 0;
  for (local_10 = 0; local_10 < 4; local_10 = local_10 + 1) {
    cVar1 = _checkValidUser(this,local_10);
    if ((cVar1 == '\x01') && (this[local_10 + 900] != (CParty)0x0)) {
      local_14 = local_14 + 1;
    }
  }
  return local_14;
}
```
