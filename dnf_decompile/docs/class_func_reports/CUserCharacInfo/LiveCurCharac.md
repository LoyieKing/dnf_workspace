# LiveCurCharac

`_ZN15CUserCharacInfo13LiveCurCharacEv`

`CUserCharacInfo::LiveCurCharac()`

| 类 | 地址 |
|---|---|
| `CUserCharacInfo` | `0x08646406` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08646406  _ZN15CUserCharacInfo13LiveCurCharacEv
#           CUserCharacInfo::LiveCurCharac()
# range [0x08646406, 0x08646495]
08646406 +0x00:  push   %ebp
08646407 +0x01:  mov    %esp,%ebp
08646409 +0x03:  sub    $0x18,%esp
0864640c +0x06:  mov    0x8(%ebp),%eax
0864640f +0x09:  mov    0x10(%eax),%eax
08646412 +0x0c:  test   %eax,%eax
08646414 +0x0e:  je     08646494 <+0x8e>
08646416 +0x10:  mov    0x8(%ebp),%eax
08646419 +0x13:  mov    %eax,(%esp)
0864641c +0x16:  call   0819a870 <_GLOBAL__I__ZN4ARAD10DISPATCHER23Arad_InternalDispatcherC2Ev+0x556>  ; global constructors keyed to ARAD::DISPATCHER::Arad_InternalDispatcher::Arad_InternalDispatcher()+0x556
08646421 +0x1b:  mov    0x8(%ebp),%eax
08646424 +0x1e:  mov    0x10(%eax),%eax
08646427 +0x21:  movb   $0x0,0xe66(%eax)
0864642e +0x28:  mov    0x8(%ebp),%eax
08646431 +0x2b:  mov    0x10(%eax),%eax
08646434 +0x2e:  movl   $0x0,0xe5d(%eax)
0864643e +0x38:  mov    0x8(%ebp),%eax
08646441 +0x3b:  mov    0x10(%eax),%eax
08646444 +0x3e:  movl   $0x0,0xe61(%eax)
0864644e +0x48:  mov    &_ZN10GlobalData15s_power_managerE,%eax
08646453 +0x4d:  mov    %eax,(%esp)
08646456 +0x50:  call   0847f910 <_ZN13CPowerManager17IsPowerWarEventOnEv>  ; CPowerManager::IsPowerWarEventOn()
0864645b +0x55:  xor    $0x1,%eax
0864645e +0x58:  test   %al,%al
08646460 +0x5a:  jne    08646471 <+0x6b>
08646462 +0x5c:  mov    0x8(%ebp),%eax
08646465 +0x5f:  mov    %eax,(%esp)
08646468 +0x62:  call   08645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>  ; CUserCharacInfo::getCurCharacVill() const
0864646d +0x67:  cmp    $0x7,%al
0864646f +0x69:  je     08646478 <+0x72>
08646471 +0x6b:  mov    $0x1,%eax
08646476 +0x70:  jmp    0864647d <+0x77>
08646478 +0x72:  mov    $0x0,%eax
0864647d +0x77:  test   %al,%al
0864647f +0x79:  je     08646494 <+0x8e>
08646481 +0x7b:  mov    0x8(%ebp),%eax
08646484 +0x7e:  mov    0x10(%eax),%eax
08646487 +0x81:  mov    0x8(%ebp),%edx
0864648a +0x84:  mov    0x10(%edx),%edx
0864648d +0x87:  movzbl 0x76(%edx),%edx
08646491 +0x8b:  mov    %dl,0x75(%eax)
08646494 +0x8e:  leave
08646495 +0x8f:  ret
```

## 反编译 C

```c
// CUserCharacInfo::LiveCurCharac @ 0x8646406

/* CUserCharacInfo::LiveCurCharac() */

void __thiscall CUserCharacInfo::LiveCurCharac(CUserCharacInfo *this)

{
  bool bVar1;
  char cVar2;
  
  if (*(int *)(this + 0x10) != 0) {
    enableSaveCharacStat(this);
    *(undefined1 *)(*(int *)(this + 0x10) + 0xe66) = 0;
    *(undefined4 *)(*(int *)(this + 0x10) + 0xe5d) = 0;
    *(undefined4 *)(*(int *)(this + 0x10) + 0xe61) = 0;
    cVar2 = CPowerManager::IsPowerWarEventOn();
    if ((cVar2 == '\x01') && (cVar2 = getCurCharacVill(this), cVar2 == '\a')) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      *(undefined1 *)(*(int *)(this + 0x10) + 0x75) = *(undefined1 *)(*(int *)(this + 0x10) + 0x76);
    }
    return;
  }
  return;
}
```
