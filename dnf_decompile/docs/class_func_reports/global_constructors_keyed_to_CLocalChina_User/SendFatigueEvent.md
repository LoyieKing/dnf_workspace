# SendFatigueEvent

`_GLOBAL__I__ZN16CLocalChina_User16SendFatigueEventEv`

`global constructors keyed to CLocalChina_User::SendFatigueEvent()`

| 类 | 地址 |
|---|---|
| `global constructors keyed to CLocalChina_User` | `0x0812cd84` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0812cd84  _GLOBAL__I__ZN16CLocalChina_User16SendFatigueEventEv
#           global constructors keyed to CLocalChina_User::SendFatigueEvent()
# range [0x0812cd84, 0x0812ce5f]
0812cd84 +0x00:  push   %ebp
0812cd85 +0x01:  mov    %esp,%ebp
0812cd87 +0x03:  sub    $0x18,%esp
0812cd8a +0x06:  movl   $0xffff,0x4(%esp)
0812cd92 +0x0e:  movl   $0x1,(%esp)
0812cd99 +0x15:  call   0812cd44 <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
0812cd9e +0x1a:  leave
0812cd9f +0x1b:  ret
0812cda0 +0x1c:  push   %ebp
0812cda1 +0x1d:  mov    %esp,%ebp
0812cda3 +0x1f:  mov    0x8(%ebp),%eax
0812cda6 +0x22:  mov    0x848(%eax),%eax
0812cdac +0x28:  pop    %ebp
0812cdad +0x29:  ret
0812cdae +0x2a:  push   %ebp
0812cdaf +0x2b:  mov    %esp,%ebp
0812cdb1 +0x2d:  mov    0x8(%ebp),%eax
0812cdb4 +0x30:  movzwl 0x850(%eax),%eax
0812cdbb +0x37:  pop    %ebp
0812cdbc +0x38:  ret
0812cdbd +0x39:  nop
0812cdbe +0x3a:  push   %ebp
0812cdbf +0x3b:  mov    %esp,%ebp
0812cdc1 +0x3d:  mov    0x8(%ebp),%eax
0812cdc4 +0x40:  mov    0x10(%eax),%eax
0812cdc7 +0x43:  pop    %ebp
0812cdc8 +0x44:  ret
0812cdc9 +0x45:  nop
0812cdca +0x46:  push   %ebp
0812cdcb +0x47:  mov    %esp,%ebp
0812cdcd +0x49:  mov    0x8(%ebp),%eax
0812cdd0 +0x4c:  movb   $0x1,0x2(%eax)
0812cdd4 +0x50:  pop    %ebp
0812cdd5 +0x51:  ret
0812cdd6 +0x52:  push   %ebp
0812cdd7 +0x53:  mov    %esp,%ebp
0812cdd9 +0x55:  mov    0x8(%ebp),%eax
0812cddc +0x58:  mov    0x10(%eax),%eax
0812cddf +0x5b:  test   %eax,%eax
0812cde1 +0x5d:  je     0812cdef <+0x6b>
0812cde3 +0x5f:  mov    0x8(%ebp),%eax
0812cde6 +0x62:  mov    0x10(%eax),%eax
0812cde9 +0x65:  movzwl 0x35(%eax),%eax
0812cded +0x69:  jmp    0812cdf4 <+0x70>
0812cdef +0x6b:  mov    $0x0,%eax
0812cdf4 +0x70:  pop    %ebp
0812cdf5 +0x71:  ret
0812cdf6 +0x72:  push   %ebp
0812cdf7 +0x73:  mov    %esp,%ebp
0812cdf9 +0x75:  sub    $0x28,%esp
0812cdfc +0x78:  mov    0xc(%ebp),%eax
0812cdff +0x7b:  mov    %ax,-0xc(%ebp)
0812ce03 +0x7f:  mov    0x8(%ebp),%eax
0812ce06 +0x82:  mov    0x10(%eax),%eax
0812ce09 +0x85:  test   %eax,%eax
0812ce0b +0x87:  je     0812ce26 <+0xa2>
0812ce0d +0x89:  mov    0x8(%ebp),%eax
0812ce10 +0x8c:  mov    %eax,(%esp)
0812ce13 +0x8f:  call   0812cdca <+0x46>
0812ce18 +0x94:  mov    0x8(%ebp),%eax
0812ce1b +0x97:  mov    0x10(%eax),%eax
0812ce1e +0x9a:  movzwl -0xc(%ebp),%edx
0812ce22 +0x9e:  mov    %dx,0x79(%eax)
0812ce26 +0xa2:  leave
0812ce27 +0xa3:  ret
0812ce28 +0xa4:  push   %ebp
0812ce29 +0xa5:  mov    %esp,%ebp
0812ce2b +0xa7:  mov    0x8(%ebp),%eax
0812ce2e +0xaa:  add    $0x7121c,%eax
0812ce33 +0xaf:  pop    %ebp
0812ce34 +0xb0:  ret
0812ce35 +0xb1:  nop
0812ce36 +0xb2:  push   %ebp
0812ce37 +0xb3:  mov    %esp,%ebp
0812ce39 +0xb5:  sub    $0x18,%esp
0812ce3c +0xb8:  mov    0x8(%ebp),%eax
0812ce3f +0xbb:  add    $0x7121c,%eax
0812ce44 +0xc0:  mov    %eax,(%esp)
0812ce47 +0xc3:  call   0812cda0 <+0x1c>
0812ce4c +0xc8:  test   %eax,%eax
0812ce4e +0xca:  setne  %al
0812ce51 +0xcd:  leave
0812ce52 +0xce:  ret
0812ce53 +0xcf:  nop
0812ce54 +0xd0:  push   %ebp
0812ce55 +0xd1:  mov    %esp,%ebp
0812ce57 +0xd3:  mov    0x8(%ebp),%eax
0812ce5a +0xd6:  mov    0xc(%eax),%eax
0812ce5d +0xd9:  pop    %ebp
0812ce5e +0xda:  ret
0812ce5f +0xdb:  nop
```

## 反编译 C

```c
// <global>::global @ 0x812cd84

/* CLocalChina_User::SendFatigueEvent() */

void CLocalChina_User::_GLOBAL__I_SendFatigueEvent(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
