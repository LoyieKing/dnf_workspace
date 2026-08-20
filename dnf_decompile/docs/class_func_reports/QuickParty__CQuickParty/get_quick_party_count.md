# get_quick_party_count

`_ZN10QuickParty11CQuickParty21get_quick_party_countEv`

`QuickParty::CQuickParty::get_quick_party_count()`

| 类 | 地址 |
|---|---|
| `QuickParty::CQuickParty` | `0x082698be` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082698be  _ZN10QuickParty11CQuickParty21get_quick_party_countEv
#           QuickParty::CQuickParty::get_quick_party_count()
# range [0x082698be, 0x08269935]
082698be +0x00:  push   %ebp
082698bf +0x01:  mov    %esp,%ebp
082698c1 +0x03:  push   %ebx
082698c2 +0x04:  sub    $0x24,%esp
082698c5 +0x07:  movl   $0x0,-0x18(%ebp)
082698cc +0x0e:  movl   $0x0,-0x14(%ebp)
082698d3 +0x15:  jmp    08269921 <+0x63>
082698d5 +0x17:  mov    -0x14(%ebp),%edx
082698d8 +0x1a:  mov    0x8(%ebp),%eax
082698db +0x1d:  mov    (%eax,%edx,4),%eax
082698de +0x20:  cmp    $0xffffffff,%eax
082698e1 +0x23:  je     0826991d <+0x5f>
082698e3 +0x25:  mov    -0x14(%ebp),%edx
082698e6 +0x28:  mov    0x8(%ebp),%eax
082698e9 +0x2b:  mov    (%eax,%edx,4),%ebx
082698ec +0x2e:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
082698f1 +0x33:  mov    %ebx,0x4(%esp)
082698f5 +0x37:  mov    %eax,(%esp)
082698f8 +0x3a:  call   08294f32 <_ZN12CGameManager8GetPartyEi>  ; CGameManager::GetParty(int)
082698fd +0x3f:  mov    %eax,-0x10(%ebp)
08269900 +0x42:  cmpl   $0x0,-0x10(%ebp)
08269904 +0x46:  je     0826991c <+0x5e>
08269906 +0x48:  mov    -0x10(%ebp),%eax
08269909 +0x4b:  mov    %eax,(%esp)
0826990c +0x4e:  call   0859a16a <_ZN6CParty16get_member_countEv>  ; CParty::get_member_count()
08269911 +0x53:  mov    %eax,-0xc(%ebp)
08269914 +0x56:  mov    -0xc(%ebp),%eax
08269917 +0x59:  add    %eax,-0x18(%ebp)
0826991a +0x5c:  jmp    0826991d <+0x5f>
0826991c +0x5e:  nop
0826991d +0x5f:  addl   $0x1,-0x14(%ebp)
08269921 +0x63:  cmpl   $0x3,-0x14(%ebp)
08269925 +0x67:  setle  %al
08269928 +0x6a:  test   %al,%al
0826992a +0x6c:  jne    082698d5 <+0x17>
0826992c +0x6e:  mov    -0x18(%ebp),%eax
0826992f +0x71:  add    $0x24,%esp
08269932 +0x74:  pop    %ebx
08269933 +0x75:  pop    %ebp
08269934 +0x76:  ret
08269935 +0x77:  nop
```

## 反编译 C

```c
// QuickParty::CQuickParty::get_quick_party_count @ 0x82698be

/* QuickParty::CQuickParty::get_quick_party_count() */

int __thiscall QuickParty::CQuickParty::get_quick_party_count(CQuickParty *this)

{
  int iVar1;
  CParty *this_00;
  int local_1c;
  int local_18;
  
  local_1c = 0;
  for (local_18 = 0; local_18 < 4; local_18 = local_18 + 1) {
    if (*(int *)(this + local_18 * 4) != -1) {
      iVar1 = G_CGameManager();
      this_00 = (CParty *)CGameManager::GetParty(iVar1);
      if (this_00 != (CParty *)0x0) {
        iVar1 = CParty::get_member_count(this_00);
        local_1c = local_1c + iVar1;
      }
    }
  }
  return local_1c;
}
```
