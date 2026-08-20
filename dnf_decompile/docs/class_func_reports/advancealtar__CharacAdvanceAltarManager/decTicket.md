# decTicket

`_ZN12advancealtar25CharacAdvanceAltarManager9decTicketEv`

`advancealtar::CharacAdvanceAltarManager::decTicket()`

| 类 | 地址 |
|---|---|
| `advancealtar::CharacAdvanceAltarManager` | `0x081313b6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081313b6  _ZN12advancealtar25CharacAdvanceAltarManager9decTicketEv
#           advancealtar::CharacAdvanceAltarManager::decTicket()
# range [0x081313b6, 0x08131425]
081313b6 +0x00:  push   %ebp
081313b7 +0x01:  mov    %esp,%ebp
081313b9 +0x03:  sub    $0x10,%esp
081313bc +0x06:  mov    0x8(%ebp),%eax
081313bf +0x09:  mov    (%eax),%eax
081313c1 +0x0b:  test   %eax,%eax
081313c3 +0x0d:  jne    081313cc <+0x16>
081313c5 +0x0f:  mov    $0x0,%eax
081313ca +0x14:  jmp    08131424 <+0x6e>
081313cc +0x16:  movb   $0x0,-0x1(%ebp)
081313d0 +0x1a:  mov    0x8(%ebp),%eax
081313d3 +0x1d:  mov    (%eax),%eax
081313d5 +0x1f:  mov    0x4(%eax),%eax
081313d8 +0x22:  test   %eax,%eax
081313da +0x24:  jle    081313f0 <+0x3a>
081313dc +0x26:  mov    0x8(%ebp),%eax
081313df +0x29:  mov    (%eax),%eax
081313e1 +0x2b:  mov    0x4(%eax),%edx
081313e4 +0x2e:  sub    $0x1,%edx
081313e7 +0x31:  mov    %edx,0x4(%eax)
081313ea +0x34:  movb   $0x1,-0x1(%ebp)
081313ee +0x38:  jmp    0813140e <+0x58>
081313f0 +0x3a:  mov    0x8(%ebp),%eax
081313f3 +0x3d:  mov    (%eax),%eax
081313f5 +0x3f:  mov    0x8(%eax),%eax
081313f8 +0x42:  test   %eax,%eax
081313fa +0x44:  jle    0813140e <+0x58>
081313fc +0x46:  mov    0x8(%ebp),%eax
081313ff +0x49:  mov    (%eax),%eax
08131401 +0x4b:  mov    0x8(%eax),%edx
08131404 +0x4e:  sub    $0x1,%edx
08131407 +0x51:  mov    %edx,0x8(%eax)
0813140a +0x54:  movb   $0x1,-0x1(%ebp)
0813140e +0x58:  cmpb   $0x0,-0x1(%ebp)
08131412 +0x5c:  je     08131420 <+0x6a>
08131414 +0x5e:  mov    0x8(%ebp),%eax
08131417 +0x61:  mov    (%eax),%eax
08131419 +0x63:  movb   $0x1,0xcc(%eax)
08131420 +0x6a:  movzbl -0x1(%ebp),%eax
08131424 +0x6e:  leave
08131425 +0x6f:  ret
```

## 反编译 C

```c
// advancealtar::CharacAdvanceAltarManager::decTicket @ 0x81313b6

/* advancealtar::CharacAdvanceAltarManager::decTicket() */

char __thiscall advancealtar::CharacAdvanceAltarManager::decTicket(CharacAdvanceAltarManager *this)

{
  undefined1 local_5;
  
  if (*(int *)this == 0) {
    local_5 = '\0';
  }
  else {
    local_5 = '\0';
    if (*(int *)(*(int *)this + 4) < 1) {
      if (0 < *(int *)(*(int *)this + 8)) {
        *(int *)(*(int *)this + 8) = *(int *)(*(int *)this + 8) + -1;
        local_5 = '\x01';
      }
    }
    else {
      *(int *)(*(int *)this + 4) = *(int *)(*(int *)this + 4) + -1;
      local_5 = '\x01';
    }
    if (local_5 != '\0') {
      *(undefined1 *)(*(int *)this + 0xcc) = 1;
    }
  }
  return local_5;
}
```
