# _reset

`_ZN31Dispatcher_Compound_ExtreamItem6_resetEv`

`Dispatcher_Compound_ExtreamItem::_reset()`

| 类 | 地址 |
|---|---|
| `Dispatcher_Compound_ExtreamItem` | `0x0822577e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0822577e  _ZN31Dispatcher_Compound_ExtreamItem6_resetEv
#           Dispatcher_Compound_ExtreamItem::_reset()
# range [0x0822577e, 0x08225805]
0822577e +0x00:  push   %ebp
0822577f +0x01:  mov    %esp,%ebp
08225781 +0x03:  sub    $0x28,%esp
08225784 +0x06:  movl   $0x0,-0xc(%ebp)
0822578b +0x0d:  jmp    082257c3 <+0x45>
0822578d +0x0f:  mov    -0xc(%ebp),%edx
08225790 +0x12:  mov    0x8(%ebp),%eax
08225793 +0x15:  movw   $0x0,0x8(%eax,%edx,2)
0822579a +0x1c:  mov    -0xc(%ebp),%eax
0822579d +0x1f:  imul   $0x3d,%eax,%eax
082257a0 +0x22:  add    0x8(%ebp),%eax
082257a3 +0x25:  add    $0xc,%eax
082257a6 +0x28:  mov    %eax,(%esp)
082257a9 +0x2b:  call   080cb7d8 <_GLOBAL__I__ZN10BingoEventC2Ev+0x625>  ; global constructors keyed to BingoEvent::BingoEvent()+0x625
082257ae +0x30:  mov    -0xc(%ebp),%edx
082257b1 +0x33:  mov    0x8(%ebp),%eax
082257b4 +0x36:  add    $0x20,%edx
082257b7 +0x39:  movl   $0x0,0x8(%eax,%edx,4)
082257bf +0x41:  addl   $0x1,-0xc(%ebp)
082257c3 +0x45:  cmpl   $0x1,-0xc(%ebp)
082257c7 +0x49:  setle  %al
082257ca +0x4c:  test   %al,%al
082257cc +0x4e:  jne    0822578d <+0xf>
082257ce +0x50:  mov    0x8(%ebp),%eax
082257d1 +0x53:  movw   $0x0,0x6(%eax)
082257d7 +0x59:  mov    0x8(%ebp),%eax
082257da +0x5c:  add    $0x90,%eax
082257df +0x61:  mov    %eax,(%esp)
082257e2 +0x64:  call   080cb7d8 <_GLOBAL__I__ZN10BingoEventC2Ev+0x625>  ; global constructors keyed to BingoEvent::BingoEvent()+0x625
082257e7 +0x69:  mov    0x8(%ebp),%eax
082257ea +0x6c:  movw   $0x0,0x4(%eax)
082257f0 +0x72:  mov    0x8(%ebp),%eax
082257f3 +0x75:  movb   $0x2,0xcd(%eax)
082257fa +0x7c:  mov    0x8(%ebp),%eax
082257fd +0x7f:  movb   $0x2,0xd4(%eax)
08225804 +0x86:  leave
08225805 +0x87:  ret
```

## 反编译 C

```c
// Dispatcher_Compound_ExtreamItem::_reset @ 0x822577e

/* Dispatcher_Compound_ExtreamItem::_reset() */

void __thiscall Dispatcher_Compound_ExtreamItem::_reset(Dispatcher_Compound_ExtreamItem *this)

{
  int local_10;
  
  for (local_10 = 0; local_10 < 2; local_10 = local_10 + 1) {
    *(undefined2 *)(this + local_10 * 2 + 8) = 0;
    Inven_Item::reset((Inven_Item *)(this + local_10 * 0x3d + 0xc));
    *(undefined4 *)(this + (local_10 + 0x20) * 4 + 8) = 0;
  }
  *(undefined2 *)(this + 6) = 0;
  Inven_Item::reset((Inven_Item *)(this + 0x90));
  *(undefined2 *)(this + 4) = 0;
  this[0xcd] = (Dispatcher_Compound_ExtreamItem)0x2;
  this[0xd4] = (Dispatcher_Compound_ExtreamItem)0x2;
  return;
}
```
