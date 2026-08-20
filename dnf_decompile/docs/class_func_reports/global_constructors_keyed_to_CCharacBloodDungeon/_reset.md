# _reset

`_GLOBAL__I__ZN19CCharacBloodDungeon6_resetEv`

`global constructors keyed to CCharacBloodDungeon::_reset()`

| 类 | 地址 |
|---|---|
| `global constructors keyed to CCharacBloodDungeon` | `0x0832a679` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0832a679  _GLOBAL__I__ZN19CCharacBloodDungeon6_resetEv
#           global constructors keyed to CCharacBloodDungeon::_reset()
# range [0x0832a679, 0x0832a763]
0832a679 +0x00:  push   %ebp
0832a67a +0x01:  mov    %esp,%ebp
0832a67c +0x03:  sub    $0x18,%esp
0832a67f +0x06:  movl   $0xffff,0x4(%esp)
0832a687 +0x0e:  movl   $0x1,(%esp)
0832a68e +0x15:  call   0832a639 <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
0832a693 +0x1a:  leave
0832a694 +0x1b:  ret
0832a695 +0x1c:  nop
0832a696 +0x1d:  push   %ebp
0832a697 +0x1e:  mov    %esp,%ebp
0832a699 +0x20:  sub    $0x18,%esp
0832a69c +0x23:  mov    0x8(%ebp),%eax
0832a69f +0x26:  mov    (%eax),%eax
0832a6a1 +0x28:  mov    %eax,(%esp)
0832a6a4 +0x2b:  call   0832a6ac <+0x33>
0832a6a9 +0x30:  leave
0832a6aa +0x31:  ret
0832a6ab +0x32:  nop
0832a6ac +0x33:  push   %ebp
0832a6ad +0x34:  mov    %esp,%ebp
0832a6af +0x36:  sub    $0x28,%esp
0832a6b2 +0x39:  jmp    0832a6d0 <+0x57>
0832a6b4 +0x3b:  mov    0x8(%ebp),%eax
0832a6b7 +0x3e:  mov    %eax,(%esp)
0832a6ba +0x41:  call   0861bdc8 <_ZN6Stream4sizeEv>  ; Stream::size()
0832a6bf +0x46:  add    %eax,%eax
0832a6c1 +0x48:  mov    %eax,0x4(%esp)
0832a6c5 +0x4c:  mov    0x8(%ebp),%eax
0832a6c8 +0x4f:  mov    %eax,(%esp)
0832a6cb +0x52:  call   0861bee8 <_ZN6Stream6resizeEi>  ; Stream::resize(int)
0832a6d0 +0x57:  movl   $0x28,0x4(%esp)
0832a6d8 +0x5f:  mov    0x8(%ebp),%eax
0832a6db +0x62:  mov    %eax,(%esp)
0832a6de +0x65:  call   0861bf9e <_ZN6Stream9enable_inEi>  ; Stream::enable_in(int)
0832a6e3 +0x6a:  xor    $0x1,%eax
0832a6e6 +0x6d:  test   %al,%al
0832a6e8 +0x6f:  jne    0832a6b4 <+0x3b>
0832a6ea +0x71:  mov    0x8(%ebp),%eax
0832a6ed +0x74:  mov    0x8(%eax),%eax
0832a6f0 +0x77:  mov    %eax,%edx
0832a6f2 +0x79:  mov    0x8(%ebp),%eax
0832a6f5 +0x7c:  mov    0xc(%eax),%eax
0832a6f8 +0x7f:  lea    (%edx,%eax,1),%eax
0832a6fb +0x82:  mov    %eax,-0xc(%ebp)
0832a6fe +0x85:  movl   $0x28,0x4(%esp)
0832a706 +0x8d:  mov    0x8(%ebp),%eax
0832a709 +0x90:  mov    %eax,(%esp)
0832a70c +0x93:  call   0861be0c <_ZN6Stream6in_ptrEi>  ; Stream::in_ptr(int)
0832a711 +0x98:  mov    -0xc(%ebp),%eax
0832a714 +0x9b:  leave
0832a715 +0x9c:  ret
0832a716 +0x9d:  push   %ebp
0832a717 +0x9e:  mov    %esp,%ebp
0832a719 +0xa0:  sub    $0x18,%esp
0832a71c +0xa3:  mov    0x8(%ebp),%eax
0832a71f +0xa6:  movl   $&_ZTV19CCharacBloodDungeon+0x8,(%eax)
0832a725 +0xac:  mov    0x8(%ebp),%eax
0832a728 +0xaf:  mov    %eax,(%esp)
0832a72b +0xb2:  call   080c8be2 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x3a>  ; global constructors keyed to BestClearTime::BestClearTime()+0x3a
0832a730 +0xb7:  mov    $0x0,%eax
0832a735 +0xbc:  test   %al,%al
0832a737 +0xbe:  je     0832a744 <+0xcb>
0832a739 +0xc0:  mov    0x8(%ebp),%eax
0832a73c +0xc3:  mov    %eax,(%esp)
0832a73f +0xc6:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0832a744 +0xcb:  leave
0832a745 +0xcc:  ret
0832a746 +0xcd:  push   %ebp
0832a747 +0xce:  mov    %esp,%ebp
0832a749 +0xd0:  sub    $0x18,%esp
0832a74c +0xd3:  mov    0x8(%ebp),%eax
0832a74f +0xd6:  mov    %eax,(%esp)
0832a752 +0xd9:  call   0832a716 <+0x9d>
0832a757 +0xde:  mov    0x8(%ebp),%eax
0832a75a +0xe1:  mov    %eax,(%esp)
0832a75d +0xe4:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0832a762 +0xe9:  leave
0832a763 +0xea:  ret
```

## 反编译 C

```c
// <global>::global @ 0x832a679

/* CCharacBloodDungeon::_reset() */

void CCharacBloodDungeon::_GLOBAL__I__reset(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
