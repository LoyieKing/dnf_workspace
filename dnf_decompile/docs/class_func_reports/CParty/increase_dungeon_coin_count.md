# increase_dungeon_coin_count

`_ZN6CParty27increase_dungeon_coin_countEi`

`CParty::increase_dungeon_coin_count(int)`

| 类 | 地址 |
|---|---|
| `CParty` | `0x0859bc58` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0859bc58  _ZN6CParty27increase_dungeon_coin_countEi
#           CParty::increase_dungeon_coin_count(int)
# range [0x0859bc58, 0x0859bc99]
0859bc58 +0x00:  push   %ebp
0859bc59 +0x01:  mov    %esp,%ebp
0859bc5b +0x03:  sub    $0x18,%esp
0859bc5e +0x06:  mov    0x8(%ebp),%eax
0859bc61 +0x09:  mov    0xcac(%eax),%eax
0859bc67 +0x0f:  test   %eax,%eax
0859bc69 +0x11:  je     0859bc93 <+0x3b>
0859bc6b +0x13:  mov    0x8(%ebp),%eax
0859bc6e +0x16:  mov    0xcac(%eax),%eax
0859bc74 +0x1c:  mov    0x87c(%eax),%eax
0859bc7a +0x22:  cmp    $0xffffffff,%eax
0859bc7d +0x25:  je     0859bc96 <+0x3e>
0859bc7f +0x27:  mov    0xc(%ebp),%eax
0859bc82 +0x2a:  mov    %eax,0x4(%esp)
0859bc86 +0x2e:  mov    0x8(%ebp),%eax
0859bc89 +0x31:  mov    %eax,(%esp)
0859bc8c +0x34:  call   085bf83e <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0xd9c>  ; global constructors keyed to CParty::cMember::cMember()+0xd9c
0859bc91 +0x39:  jmp    0859bc97 <+0x3f>
0859bc93 +0x3b:  nop
0859bc94 +0x3c:  jmp    0859bc97 <+0x3f>
0859bc96 +0x3e:  nop
0859bc97 +0x3f:  leave
0859bc98 +0x40:  ret
0859bc99 +0x41:  nop
```

## 反编译 C

```c
// CParty::increase_dungeon_coin_count @ 0x859bc58

/* CParty::increase_dungeon_coin_count(int) */

void __thiscall CParty::increase_dungeon_coin_count(CParty *this,int param_1)

{
  if ((*(int *)(this + 0xcac) != 0) && (*(int *)(*(int *)(this + 0xcac) + 0x87c) != -1)) {
    SetUsedCoinCount(this,param_1);
  }
  return;
}
```
