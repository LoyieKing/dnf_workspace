# UseItem

`_ZN13user_creature12CCreatureMgr7UseItemEP10Inven_Itemi`

`user_creature::CCreatureMgr::UseItem(Inven_Item*, int)`

| 类 | 地址 |
|---|---|
| `user_creature::CCreatureMgr` | `0x0833a5bc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0833a5bc  _ZN13user_creature12CCreatureMgr7UseItemEP10Inven_Itemi
#           user_creature::CCreatureMgr::UseItem(Inven_Item*, int)
# range [0x0833a5bc, 0x0833a637]
0833a5bc +0x00:  push   %ebp
0833a5bd +0x01:  mov    %esp,%ebp
0833a5bf +0x03:  sub    $0x18,%esp
0833a5c2 +0x06:  mov    0xc(%ebp),%eax
0833a5c5 +0x09:  mov    0x2(%eax),%eax
0833a5c8 +0x0c:  cmp    $0x18,%eax
0833a5cb +0x0f:  jne    0833a5e6 <+0x2a>
0833a5cd +0x11:  mov    0x8(%ebp),%eax
0833a5d0 +0x14:  mov    %eax,(%esp)
0833a5d3 +0x17:  call   08339dba <_ZN13user_creature12CCreatureMgr7UseFeedEv>  ; user_creature::CCreatureMgr::UseFeed()
0833a5d8 +0x1c:  xor    $0x1,%eax
0833a5db +0x1f:  test   %al,%al
0833a5dd +0x21:  je     0833a5e6 <+0x2a>
0833a5df +0x23:  mov    $0x85,%eax
0833a5e4 +0x28:  jmp    0833a636 <+0x7a>
0833a5e6 +0x2a:  mov    0x8(%ebp),%eax
0833a5e9 +0x2d:  mov    0x18(%eax),%eax
0833a5ec +0x30:  test   %eax,%eax
0833a5ee +0x32:  je     0833a631 <+0x75>
0833a5f0 +0x34:  mov    0xc(%ebp),%eax
0833a5f3 +0x37:  mov    0x2(%eax),%eax
0833a5f6 +0x3a:  mov    %eax,%edx
0833a5f8 +0x3c:  mov    0x8(%ebp),%eax
0833a5fb +0x3f:  mov    0x18(%eax),%eax
0833a5fe +0x42:  mov    %edx,0x4(%esp)
0833a602 +0x46:  mov    %eax,(%esp)
0833a605 +0x49:  call   083378aa <_ZN13user_creature9CCreature12vaildItemExpEi>  ; user_creature::CCreature::vaildItemExp(int)
0833a60a +0x4e:  test   %al,%al
0833a60c +0x50:  je     0833a631 <+0x75>
0833a60e +0x52:  mov    0xc(%ebp),%eax
0833a611 +0x55:  mov    0x2(%eax),%eax
0833a614 +0x58:  mov    %eax,0x4(%esp)
0833a618 +0x5c:  mov    0x8(%ebp),%eax
0833a61b +0x5f:  mov    %eax,(%esp)
0833a61e +0x62:  call   08339b06 <_ZN13user_creature12CCreatureMgr7GainExpEi>  ; user_creature::CCreatureMgr::GainExp(int)
0833a623 +0x67:  xor    $0x1,%eax
0833a626 +0x6a:  test   %al,%al
0833a628 +0x6c:  je     0833a631 <+0x75>
0833a62a +0x6e:  mov    $0x11,%eax
0833a62f +0x73:  jmp    0833a636 <+0x7a>
0833a631 +0x75:  mov    $0x0,%eax
0833a636 +0x7a:  leave
0833a637 +0x7b:  ret
```

## 反编译 C

```c
// user_creature::CCreatureMgr::UseItem @ 0x833a5bc

/* user_creature::CCreatureMgr::UseItem(Inven_Item*, int) */

undefined4 user_creature::CCreatureMgr::UseItem(Inven_Item *param_1,int param_2)

{
  char cVar1;
  
  if ((*(int *)(param_2 + 2) == 0x18) && (cVar1 = UseFeed((CCreatureMgr *)param_1), cVar1 != '\x01')
     ) {
    return 0x85;
  }
  if (((*(int *)(param_1 + 0x18) != 0) &&
      (cVar1 = CCreature::vaildItemExp(*(CCreature **)(param_1 + 0x18),*(int *)(param_2 + 2)),
      cVar1 != '\0')) &&
     (cVar1 = GainExp((CCreatureMgr *)param_1,*(int *)(param_2 + 2)), cVar1 != '\x01')) {
    return 0x11;
  }
  return 0;
}
```
