# CGameOption

`_GLOBAL__I__ZN11CGameOptionC2Ev`

`global constructors keyed to CGameOption::CGameOption()`

| 类 | 地址 |
|---|---|
| `global constructors keyed to CGameOption` | `0x084b731a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084b731a  _GLOBAL__I__ZN11CGameOptionC2Ev
#           global constructors keyed to CGameOption::CGameOption()
# range [0x084b731a, 0x084b73bf]
084b731a +0x00:  push   %ebp
084b731b +0x01:  mov    %esp,%ebp
084b731d +0x03:  sub    $0x18,%esp
084b7320 +0x06:  movl   $0xffff,0x4(%esp)
084b7328 +0x0e:  movl   $0x1,(%esp)
084b732f +0x15:  call   084b72da <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
084b7334 +0x1a:  leave
084b7335 +0x1b:  ret
084b7336 +0x1c:  push   %ebp
084b7337 +0x1d:  mov    %esp,%ebp
084b7339 +0x1f:  sub    $0x4,%esp
084b733c +0x22:  mov    0x10(%ebp),%eax
084b733f +0x25:  mov    %ax,-0x4(%ebp)
084b7343 +0x29:  mov    0xc(%ebp),%eax
084b7346 +0x2c:  cmp    $0x23,%eax
084b7349 +0x2f:  jg     084b7362 <+0x48>
084b734b +0x31:  mov    0xc(%ebp),%eax
084b734e +0x34:  test   %eax,%eax
084b7350 +0x36:  js     084b7365 <+0x4b>
084b7352 +0x38:  mov    0xc(%ebp),%edx
084b7355 +0x3b:  mov    0x8(%ebp),%eax
084b7358 +0x3e:  movzwl -0x4(%ebp),%ecx
084b735c +0x42:  mov    %cx,(%eax,%edx,2)
084b7360 +0x46:  jmp    084b7366 <+0x4c>
084b7362 +0x48:  nop
084b7363 +0x49:  jmp    084b7366 <+0x4c>
084b7365 +0x4b:  nop
084b7366 +0x4c:  leave
084b7367 +0x4d:  ret
084b7368 +0x4e:  push   %ebp
084b7369 +0x4f:  mov    %esp,%ebp
084b736b +0x51:  sub    $0x18,%esp
084b736e +0x54:  mov    0x8(%ebp),%eax
084b7371 +0x57:  mov    %eax,(%esp)
084b7374 +0x5a:  call   080e5ee6 <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x1c>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x1c
084b7379 +0x5f:  leave
084b737a +0x60:  ret
084b737b +0x61:  nop
084b737c +0x62:  push   %ebp
084b737d +0x63:  mov    %esp,%ebp
084b737f +0x65:  mov    0x8(%ebp),%eax
084b7382 +0x68:  movb   $0x1,0x41a(%eax)
084b7389 +0x6f:  pop    %ebp
084b738a +0x70:  ret
084b738b +0x71:  nop
084b738c +0x72:  push   %ebp
084b738d +0x73:  mov    %esp,%ebp
084b738f +0x75:  push   %esi
084b7390 +0x76:  push   %ebx
084b7391 +0x77:  sub    $0x10,%esp
084b7394 +0x7a:  mov    0x8(%ebp),%eax
084b7397 +0x7d:  mov    %eax,%ebx
084b7399 +0x7f:  mov    $0x17,%esi
084b739e +0x84:  jmp    084b73ae <+0x94>
084b73a0 +0x86:  mov    %ebx,(%esp)
084b73a3 +0x89:  call   084b7368 <+0x4e>
084b73a8 +0x8e:  add    $0x16,%ebx
084b73ab +0x91:  sub    $0x1,%esi
084b73ae +0x94:  cmp    $0xffffffff,%esi
084b73b1 +0x97:  setne  %al
084b73b4 +0x9a:  test   %al,%al
084b73b6 +0x9c:  jne    084b73a0 <+0x86>
084b73b8 +0x9e:  add    $0x10,%esp
084b73bb +0xa1:  pop    %ebx
084b73bc +0xa2:  pop    %esi
084b73bd +0xa3:  pop    %ebp
084b73be +0xa4:  ret
084b73bf +0xa5:  nop
```

## 反编译 C

```c
// <global>::global @ 0x84b731a

/* CGameOption::CGameOption() */

void CGameOption::_GLOBAL__I_CGameOption(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
