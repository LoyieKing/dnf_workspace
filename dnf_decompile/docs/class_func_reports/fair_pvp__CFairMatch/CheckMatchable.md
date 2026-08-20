# CheckMatchable

`_ZN8fair_pvp10CFairMatch14CheckMatchableEP6IMatch`

`fair_pvp::CFairMatch::CheckMatchable(IMatch*)`

| 类 | 地址 |
|---|---|
| `fair_pvp::CFairMatch` | `0x08565c54` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08565c54  _ZN8fair_pvp10CFairMatch14CheckMatchableEP6IMatch
#           fair_pvp::CFairMatch::CheckMatchable(IMatch*)
# range [0x08565c54, 0x08565d03]
08565c54 +0x00:  push   %ebp
08565c55 +0x01:  mov    %esp,%ebp
08565c57 +0x03:  sub    $0x28,%esp
08565c5a +0x06:  movl   $0x0,-0x14(%ebp)
08565c61 +0x0d:  movl   $0x0,-0x10(%ebp)
08565c68 +0x14:  movl   $0x0,-0xc(%ebp)
08565c6f +0x1b:  jmp    08565c97 <+0x43>
08565c71 +0x1d:  mov    0xc(%ebp),%eax
08565c74 +0x20:  mov    (%eax),%eax
08565c76 +0x22:  add    $0x10,%eax
08565c79 +0x25:  mov    (%eax),%edx
08565c7b +0x27:  mov    -0xc(%ebp),%eax
08565c7e +0x2a:  mov    %eax,0x4(%esp)
08565c82 +0x2e:  mov    0xc(%ebp),%eax
08565c85 +0x31:  mov    %eax,(%esp)
08565c88 +0x34:  call   *%edx
08565c8a +0x36:  mov    %eax,-0x10(%ebp)
08565c8d +0x39:  cmpl   $0x0,-0x10(%ebp)
08565c91 +0x3d:  jne    08565ca4 <+0x50>
08565c93 +0x3f:  addl   $0x1,-0xc(%ebp)
08565c97 +0x43:  cmpl   $0x3,-0xc(%ebp)
08565c9b +0x47:  setle  %al
08565c9e +0x4a:  test   %al,%al
08565ca0 +0x4c:  jne    08565c71 <+0x1d>
08565ca2 +0x4e:  jmp    08565ca5 <+0x51>
08565ca4 +0x50:  nop
08565ca5 +0x51:  cmpl   $0x0,-0x10(%ebp)
08565ca9 +0x55:  jne    08565cb2 <+0x5e>
08565cab +0x57:  mov    $0x0,%eax
08565cb0 +0x5c:  jmp    08565d01 <+0xad>
08565cb2 +0x5e:  movl   $0x0,-0xc(%ebp)
08565cb9 +0x65:  jmp    08565ce1 <+0x8d>
08565cbb +0x67:  mov    0x8(%ebp),%eax
08565cbe +0x6a:  mov    (%eax),%eax
08565cc0 +0x6c:  add    $0x10,%eax
08565cc3 +0x6f:  mov    (%eax),%edx
08565cc5 +0x71:  mov    -0xc(%ebp),%eax
08565cc8 +0x74:  mov    %eax,0x4(%esp)
08565ccc +0x78:  mov    0x8(%ebp),%eax
08565ccf +0x7b:  mov    %eax,(%esp)
08565cd2 +0x7e:  call   *%edx
08565cd4 +0x80:  mov    %eax,-0x14(%ebp)
08565cd7 +0x83:  cmpl   $0x0,-0x14(%ebp)
08565cdb +0x87:  jne    08565cee <+0x9a>
08565cdd +0x89:  addl   $0x1,-0xc(%ebp)
08565ce1 +0x8d:  cmpl   $0x3,-0xc(%ebp)
08565ce5 +0x91:  setle  %al
08565ce8 +0x94:  test   %al,%al
08565cea +0x96:  jne    08565cbb <+0x67>
08565cec +0x98:  jmp    08565cef <+0x9b>
08565cee +0x9a:  nop
08565cef +0x9b:  cmpl   $0x0,-0x14(%ebp)
08565cf3 +0x9f:  jne    08565cfc <+0xa8>
08565cf5 +0xa1:  mov    $0x0,%eax
08565cfa +0xa6:  jmp    08565d01 <+0xad>
08565cfc +0xa8:  mov    $0x1,%eax
08565d01 +0xad:  leave
08565d02 +0xae:  ret
08565d03 +0xaf:  nop
```

## 反编译 C

```c
// fair_pvp::CFairMatch::CheckMatchable @ 0x8565c54

/* fair_pvp::CFairMatch::CheckMatchable(IMatch*) */

undefined4 __thiscall fair_pvp::CFairMatch::CheckMatchable(CFairMatch *this,IMatch *param_1)

{
  undefined4 uVar1;
  int local_18;
  int local_14;
  int local_10;
  
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  while ((local_10 < 4 &&
         (local_14 = (**(code **)(*(int *)param_1 + 0x10))(param_1,local_10), local_14 == 0))) {
    local_10 = local_10 + 1;
  }
  if (local_14 == 0) {
    uVar1 = 0;
  }
  else {
    local_10 = 0;
    while ((local_10 < 4 &&
           (local_18 = (**(code **)(*(int *)this + 0x10))(this,local_10), local_18 == 0))) {
      local_10 = local_10 + 1;
    }
    if (local_18 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  return uVar1;
}
```
