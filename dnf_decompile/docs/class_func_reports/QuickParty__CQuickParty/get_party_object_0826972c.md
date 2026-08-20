# get_party_object

`_ZN10QuickParty11CQuickParty16get_party_objectEv`

`QuickParty::CQuickParty::get_party_object()`

| 类 | 地址 |
|---|---|
| `QuickParty::CQuickParty` | `0x0826972c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0826972c  _ZN10QuickParty11CQuickParty16get_party_objectEv
#           QuickParty::CQuickParty::get_party_object()
# range [0x0826972c, 0x0826978b]
0826972c +0x00:  push   %ebp
0826972d +0x01:  mov    %esp,%ebp
0826972f +0x03:  push   %ebx
08269730 +0x04:  sub    $0x24,%esp
08269733 +0x07:  movl   $0x0,-0x10(%ebp)
0826973a +0x0e:  jmp    08269776 <+0x4a>
0826973c +0x10:  mov    -0x10(%ebp),%edx
0826973f +0x13:  mov    0x8(%ebp),%eax
08269742 +0x16:  mov    (%eax,%edx,4),%eax
08269745 +0x19:  cmp    $0xffffffff,%eax
08269748 +0x1c:  je     08269772 <+0x46>
0826974a +0x1e:  mov    -0x10(%ebp),%edx
0826974d +0x21:  mov    0x8(%ebp),%eax
08269750 +0x24:  mov    (%eax,%edx,4),%ebx
08269753 +0x27:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
08269758 +0x2c:  mov    %ebx,0x4(%esp)
0826975c +0x30:  mov    %eax,(%esp)
0826975f +0x33:  call   08294f32 <_ZN12CGameManager8GetPartyEi>  ; CGameManager::GetParty(int)
08269764 +0x38:  mov    %eax,-0xc(%ebp)
08269767 +0x3b:  cmpl   $0x0,-0xc(%ebp)
0826976b +0x3f:  je     08269772 <+0x46>
0826976d +0x41:  mov    -0xc(%ebp),%eax
08269770 +0x44:  jmp    08269786 <+0x5a>
08269772 +0x46:  addl   $0x1,-0x10(%ebp)
08269776 +0x4a:  cmpl   $0x3,-0x10(%ebp)
0826977a +0x4e:  setle  %al
0826977d +0x51:  test   %al,%al
0826977f +0x53:  jne    0826973c <+0x10>
08269781 +0x55:  mov    $0x0,%eax
08269786 +0x5a:  add    $0x24,%esp
08269789 +0x5d:  pop    %ebx
0826978a +0x5e:  pop    %ebp
0826978b +0x5f:  ret
```

## 反编译 C

```c
// QuickParty::CQuickParty::get_party_object @ 0x826972c

/* QuickParty::CQuickParty::get_party_object() */

int __thiscall QuickParty::CQuickParty::get_party_object(CQuickParty *this)

{
  int iVar1;
  int local_14;
  
  local_14 = 0;
  do {
    if (3 < local_14) {
      return 0;
    }
    if (*(int *)(this + local_14 * 4) != -1) {
      iVar1 = G_CGameManager();
      iVar1 = CGameManager::GetParty(iVar1);
      if (iVar1 != 0) {
        return iVar1;
      }
    }
    local_14 = local_14 + 1;
  } while( true );
}
```
