# set_monster

`_ZN8CMonster11set_monsterER15STMonsterScript`

`CMonster::set_monster(STMonsterScript&)`

| 类 | 地址 |
|---|---|
| `CMonster` | `0x0834f650` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0834f650  _ZN8CMonster11set_monsterER15STMonsterScript
#           CMonster::set_monster(STMonsterScript&)
# range [0x0834f650, 0x0834f745]
0834f650 +0x00:  push   %ebp
0834f651 +0x01:  mov    %esp,%ebp
0834f653 +0x03:  sub    $0x28,%esp
0834f656 +0x06:  mov    0xc(%ebp),%eax
0834f659 +0x09:  mov    (%eax),%edx
0834f65b +0x0b:  mov    0x8(%ebp),%eax
0834f65e +0x0e:  mov    %edx,0x4(%eax)
0834f661 +0x11:  movl   $0x0,-0xc(%ebp)
0834f668 +0x18:  jmp    0834f6a1 <+0x51>
0834f66a +0x1a:  mov    -0xc(%ebp),%edx
0834f66d +0x1d:  mov    %edx,%eax
0834f66f +0x1f:  add    %eax,%eax
0834f671 +0x21:  add    %edx,%eax
0834f673 +0x23:  shl    $0x2,%eax
0834f676 +0x26:  add    $0x20,%eax
0834f679 +0x29:  add    0xc(%ebp),%eax
0834f67c +0x2c:  lea    0x8(%eax),%ecx
0834f67f +0x2f:  mov    -0xc(%ebp),%edx
0834f682 +0x32:  mov    %edx,%eax
0834f684 +0x34:  add    %eax,%eax
0834f686 +0x36:  add    %edx,%eax
0834f688 +0x38:  shl    $0x2,%eax
0834f68b +0x3b:  add    0x8(%ebp),%eax
0834f68e +0x3e:  add    $0x8,%eax
0834f691 +0x41:  mov    %ecx,0x4(%esp)
0834f695 +0x45:  mov    %eax,(%esp)
0834f698 +0x48:  call   0830f08c <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0xc71>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0xc71
0834f69d +0x4d:  addl   $0x1,-0xc(%ebp)
0834f6a1 +0x51:  cmpl   $0x3,-0xc(%ebp)
0834f6a5 +0x55:  setle  %al
0834f6a8 +0x58:  test   %al,%al
0834f6aa +0x5a:  jne    0834f66a <+0x1a>
0834f6ac +0x5c:  mov    0xc(%ebp),%eax
0834f6af +0x5f:  mov    0x88(%eax),%edx
0834f6b5 +0x65:  mov    0x8(%ebp),%eax
0834f6b8 +0x68:  mov    %edx,0x38(%eax)
0834f6bb +0x6b:  mov    0xc(%ebp),%eax
0834f6be +0x6e:  lea    0x8c(%eax),%edx
0834f6c4 +0x74:  mov    0x8(%ebp),%eax
0834f6c7 +0x77:  add    $0x3c,%eax
0834f6ca +0x7a:  mov    %edx,0x4(%esp)
0834f6ce +0x7e:  mov    %eax,(%esp)
0834f6d1 +0x81:  call   0830f08c <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0xc71>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0xc71
0834f6d6 +0x86:  mov    0xc(%ebp),%eax
0834f6d9 +0x89:  mov    0x3ec(%eax),%edx
0834f6df +0x8f:  mov    0x8(%ebp),%eax
0834f6e2 +0x92:  mov    %edx,0x58(%eax)
0834f6e5 +0x95:  mov    0xc(%ebp),%eax
0834f6e8 +0x98:  mov    0x3f0(%eax),%edx
0834f6ee +0x9e:  mov    0x8(%ebp),%eax
0834f6f1 +0xa1:  mov    %edx,0x5c(%eax)
0834f6f4 +0xa4:  mov    0xc(%ebp),%eax
0834f6f7 +0xa7:  mov    0xc4c(%eax),%edx
0834f6fd +0xad:  mov    0x8(%ebp),%eax
0834f700 +0xb0:  mov    %edx,0x1d24(%eax)
0834f706 +0xb6:  mov    0xc(%ebp),%eax
0834f709 +0xb9:  movzbl 0x3a8(%eax),%edx
0834f710 +0xc0:  mov    0x8(%ebp),%eax
0834f713 +0xc3:  mov    %dl,0x54(%eax)
0834f716 +0xc6:  mov    0xc(%ebp),%eax
0834f719 +0xc9:  lea    0x58(%eax),%edx
0834f71c +0xcc:  mov    0x8(%ebp),%eax
0834f71f +0xcf:  add    $0x48,%eax
0834f722 +0xd2:  mov    %edx,0x4(%esp)
0834f726 +0xd6:  mov    %eax,(%esp)
0834f729 +0xd9:  call   0830f08c <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0xc71>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0xc71
0834f72e +0xde:  mov    0x8(%ebp),%eax
0834f731 +0xe1:  lea    0x60(%eax),%edx
0834f734 +0xe4:  mov    0xc(%ebp),%eax
0834f737 +0xe7:  mov    %eax,0x4(%esp)
0834f73b +0xeb:  mov    %edx,(%esp)
0834f73e +0xee:  call   08377994 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x7434>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x7434
0834f743 +0xf3:  leave
0834f744 +0xf4:  ret
0834f745 +0xf5:  nop
```

## 反编译 C

```c
// CMonster::set_monster @ 0x834f650

/* CMonster::set_monster(STMonsterScript&) */

void __thiscall CMonster::set_monster(CMonster *this,STMonsterScript *param_1)

{
  int local_10;
  
  *(undefined4 *)(this + 4) = *(undefined4 *)param_1;
  for (local_10 = 0; local_10 < 4; local_10 = local_10 + 1) {
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::operator=
              ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)
               (this + local_10 * 0xc + 8),(vector *)(param_1 + local_10 * 0xc + 0x28));
  }
  *(undefined4 *)(this + 0x38) = *(undefined4 *)(param_1 + 0x88);
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::operator=
            ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)(this + 0x3c),
             (vector *)(param_1 + 0x8c));
  *(undefined4 *)(this + 0x58) = *(undefined4 *)(param_1 + 0x3ec);
  *(undefined4 *)(this + 0x5c) = *(undefined4 *)(param_1 + 0x3f0);
  *(undefined4 *)(this + 0x1d24) = *(undefined4 *)(param_1 + 0xc4c);
  this[0x54] = *(CMonster *)(param_1 + 0x3a8);
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::operator=
            ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)(this + 0x48),
             (vector *)(param_1 + 0x58));
  STMonsterScript::operator=((STMonsterScript *)(this + 0x60),param_1);
  return;
}
```
