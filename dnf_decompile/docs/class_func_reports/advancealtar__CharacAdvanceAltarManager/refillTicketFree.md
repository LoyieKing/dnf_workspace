# refillTicketFree

`_ZN12advancealtar25CharacAdvanceAltarManager16refillTicketFreeEv`

`advancealtar::CharacAdvanceAltarManager::refillTicketFree()`

| 类 | 地址 |
|---|---|
| `advancealtar::CharacAdvanceAltarManager` | `0x0813159a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0813159a  _ZN12advancealtar25CharacAdvanceAltarManager16refillTicketFreeEv
#           advancealtar::CharacAdvanceAltarManager::refillTicketFree()
# range [0x0813159a, 0x08131615]
0813159a +0x00:  push   %ebp
0813159b +0x01:  mov    %esp,%ebp
0813159d +0x03:  push   %ebx
0813159e +0x04:  sub    $0x24,%esp
081315a1 +0x07:  movl   $0x0,-0xc(%ebp)
081315a8 +0x0e:  jmp    08131605 <+0x6b>
081315aa +0x10:  mov    -0xc(%ebp),%eax
081315ad +0x13:  mov    0x8(%ebp),%edx
081315b0 +0x16:  imul   $0xd0,%eax,%eax
081315b6 +0x1c:  lea    (%edx,%eax,1),%eax
081315b9 +0x1f:  add    $0x4,%eax
081315bc +0x22:  mov    (%eax),%eax
081315be +0x24:  mov    %eax,(%esp)
081315c1 +0x27:  call   08898ff0 <_ZN12advancealtar16isValidRidableIdENS_9RidableId1TE>  ; advancealtar::isValidRidableId(advancealtar::RidableId::T)
081315c6 +0x2c:  test   %al,%al
081315c8 +0x2e:  je     08131601 <+0x67>
081315ca +0x30:  mov    -0xc(%ebp),%ebx
081315cd +0x33:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
081315d2 +0x38:  mov    0x6364(%eax),%eax
081315d8 +0x3e:  mov    0x8(%ebp),%ecx
081315db +0x41:  imul   $0xd0,%ebx,%edx
081315e1 +0x47:  lea    (%ecx,%edx,1),%edx
081315e4 +0x4a:  add    $0x8,%edx
081315e7 +0x4d:  mov    %eax,(%edx)
081315e9 +0x4f:  mov    -0xc(%ebp),%eax
081315ec +0x52:  mov    0x8(%ebp),%edx
081315ef +0x55:  imul   $0xd0,%eax,%eax
081315f5 +0x5b:  lea    (%edx,%eax,1),%eax
081315f8 +0x5e:  add    $0xc0,%eax
081315fd +0x63:  movb   $0x1,0x10(%eax)
08131601 +0x67:  addl   $0x1,-0xc(%ebp)
08131605 +0x6b:  cmpl   $0x0,-0xc(%ebp)
08131609 +0x6f:  setle  %al
0813160c +0x72:  test   %al,%al
0813160e +0x74:  jne    081315aa <+0x10>
08131610 +0x76:  add    $0x24,%esp
08131613 +0x79:  pop    %ebx
08131614 +0x7a:  pop    %ebp
08131615 +0x7b:  ret
```

## 反编译 C

```c
// advancealtar::CharacAdvanceAltarManager::refillTicketFree @ 0x813159a

/* advancealtar::CharacAdvanceAltarManager::refillTicketFree() */

void __thiscall
advancealtar::CharacAdvanceAltarManager::refillTicketFree(CharacAdvanceAltarManager *this)

{
  char cVar1;
  int iVar2;
  int local_10;
  
  for (local_10 = 0; local_10 < 1; local_10 = local_10 + 1) {
    cVar1 = isValidRidableId(*(undefined4 *)(this + local_10 * 0xd0 + 4));
    if (cVar1 != '\0') {
      iVar2 = G_CDataManager();
      *(undefined4 *)(this + local_10 * 0xd0 + 8) = *(undefined4 *)(iVar2 + 0x6364);
      this[local_10 * 0xd0 + 0xd0] = (CharacAdvanceAltarManager)0x1;
    }
  }
  return;
}
```
