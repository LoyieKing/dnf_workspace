# dieMob

`_ZN12advancealtar9ProcStage18ProcSummonObjectMs6dieMobEttRK15MSG_MONSTER_DIE`

`advancealtar::ProcStage::ProcSummonObjectMs::dieMob(unsigned short, unsigned short, MSG_MONSTER_DIE const&)`

| 类 | 地址 |
|---|---|
| `advancealtar::ProcStage::ProcSummonObjectMs` | `0x0812db00` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0812db00  _ZN12advancealtar9ProcStage18ProcSummonObjectMs6dieMobEttRK15MSG_MONSTER_DIE
#           advancealtar::ProcStage::ProcSummonObjectMs::dieMob(unsigned short, unsigned short, MSG_MONSTER_DIE const&)
# range [0x0812db00, 0x0812dc17]
0812db00 +0x000:  push   %ebp
0812db01 +0x001:  mov    %esp,%ebp
0812db03 +0x003:  sub    $0x48,%esp
0812db06 +0x006:  mov    0xc(%ebp),%edx
0812db09 +0x009:  mov    0x10(%ebp),%eax
0812db0c +0x00c:  mov    %dx,-0x2c(%ebp)
0812db10 +0x010:  mov    %ax,-0x30(%ebp)
0812db14 +0x014:  movzwl -0x2c(%ebp),%eax
0812db18 +0x018:  mov    %ax,-0x1a(%ebp)
0812db1c +0x01c:  mov    0x8(%ebp),%eax
0812db1f +0x01f:  lea    0x10(%eax),%ecx
0812db22 +0x022:  lea    -0x20(%ebp),%eax
0812db25 +0x025:  lea    -0x1a(%ebp),%edx
0812db28 +0x028:  mov    %edx,0x8(%esp)
0812db2c +0x02c:  mov    %ecx,0x4(%esp)
0812db30 +0x030:  mov    %eax,(%esp)
0812db33 +0x033:  call   081353da <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0xfe1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0xfe1
0812db38 +0x038:  sub    $0x4,%esp
0812db3b +0x03b:  mov    0x8(%ebp),%eax
0812db3e +0x03e:  lea    0x10(%eax),%edx
0812db41 +0x041:  lea    -0x18(%ebp),%eax
0812db44 +0x044:  mov    %edx,0x4(%esp)
0812db48 +0x048:  mov    %eax,(%esp)
0812db4b +0x04b:  call   08135406 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x100d>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x100d
0812db50 +0x050:  sub    $0x4,%esp
0812db53 +0x053:  lea    -0x18(%ebp),%eax
0812db56 +0x056:  mov    %eax,0x4(%esp)
0812db5a +0x05a:  lea    -0x20(%ebp),%eax
0812db5d +0x05d:  mov    %eax,(%esp)
0812db60 +0x060:  call   0813542c <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1033>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1033
0812db65 +0x065:  test   %al,%al
0812db67 +0x067:  je     0812dc11 <+0x111>
0812db6d +0x06d:  lea    -0x20(%ebp),%eax
0812db70 +0x070:  mov    %eax,(%esp)
0812db73 +0x073:  call   08135440 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1047>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1047
0812db78 +0x078:  mov    0x4(%eax),%eax
0812db7b +0x07b:  mov    %eax,-0x14(%ebp)
0812db7e +0x07e:  lea    -0x20(%ebp),%eax
0812db81 +0x081:  mov    %eax,(%esp)
0812db84 +0x084:  call   08135440 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1047>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1047
0812db89 +0x089:  mov    0x4(%eax),%eax
0812db8c +0x08c:  mov    0x10(%eax),%eax
0812db8f +0x08f:  mov    %eax,-0x10(%ebp)
0812db92 +0x092:  mov    -0x14(%ebp),%eax
0812db95 +0x095:  mov    0x10(%eax),%eax
0812db98 +0x098:  cmp    $0x1,%eax
0812db9b +0x09b:  jne    0812dc11 <+0x111>
0812db9d +0x09d:  mov    -0x14(%ebp),%eax
0812dba0 +0x0a0:  movzbl 0xc(%eax),%eax
0812dba4 +0x0a4:  xor    $0x1,%eax
0812dba7 +0x0a7:  test   %al,%al
0812dba9 +0x0a9:  je     0812dc11 <+0x111>
0812dbab +0x0ab:  lea    -0x20(%ebp),%eax
0812dbae +0x0ae:  mov    %eax,(%esp)
0812dbb1 +0x0b1:  call   08135440 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1047>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1047
0812dbb6 +0x0b6:  mov    0x4(%eax),%eax
0812dbb9 +0x0b9:  movb   $0x1,0xc(%eax)
0812dbbd +0x0bd:  mov    0x8(%ebp),%eax
0812dbc0 +0x0c0:  mov    0x28(%eax),%eax
0812dbc3 +0x0c3:  lea    0x1(%eax),%edx
0812dbc6 +0x0c6:  mov    0x8(%ebp),%eax
0812dbc9 +0x0c9:  mov    %edx,0x28(%eax)
0812dbcc +0x0cc:  mov    0x8(%ebp),%eax
0812dbcf +0x0cf:  mov    0x30(%eax),%eax
0812dbd2 +0x0d2:  mov    %eax,(%esp)
0812dbd5 +0x0d5:  call   08134814 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x41b>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x41b
0812dbda +0x0da:  mov    %eax,-0xc(%ebp)
0812dbdd +0x0dd:  cmpl   $0x0,-0xc(%ebp)
0812dbe1 +0x0e1:  je     0812dc0a <+0x10a>
0812dbe3 +0x0e3:  lea    -0x20(%ebp),%eax
0812dbe6 +0x0e6:  mov    %eax,(%esp)
0812dbe9 +0x0e9:  call   08135440 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1047>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1047
0812dbee +0x0ee:  mov    0x4(%eax),%eax
0812dbf1 +0x0f1:  mov    0x14(%eax),%eax
0812dbf4 +0x0f4:  mov    0x14(%ebp),%edx
0812dbf7 +0x0f7:  mov    %edx,0x8(%esp)
0812dbfb +0x0fb:  mov    %eax,0x4(%esp)
0812dbff +0x0ff:  mov    -0xc(%ebp),%eax
0812dc02 +0x102:  mov    %eax,(%esp)
0812dc05 +0x105:  call   08133b40 <_ZN12advancealtar10HistoryLog11killMonsterER5CUseriRK15MSG_MONSTER_DIE>  ; advancealtar::HistoryLog::killMonster(CUser&, int, MSG_MONSTER_DIE const&)
0812dc0a +0x10a:  mov    $0x1,%eax
0812dc0f +0x10f:  jmp    0812dc16 <+0x116>
0812dc11 +0x111:  mov    $0x0,%eax
0812dc16 +0x116:  leave
0812dc17 +0x117:  ret
```

## 反编译 C

```c
// advancealtar::ProcStage::ProcSummonObjectMs::dieMob @ 0x812db00

/* advancealtar::ProcStage::ProcSummonObjectMs::dieMob(unsigned short, unsigned short,
   MSG_MONSTER_DIE const&) */

undefined4 __thiscall
advancealtar::ProcStage::ProcSummonObjectMs::dieMob
          (ProcSummonObjectMs *this,ushort param_1,ushort param_2,MSG_MONSTER_DIE *param_3)

{
  char cVar1;
  int iVar2;
  _Rb_tree_iterator<std::pair<short_const,advancealtar::_SummonObjectMs*>> local_24 [6];
  ushort local_1e;
  map<short,advancealtar::_SummonObjectMs*,std::less<short>,std::allocator<std::pair<short_const,advancealtar::_SummonObjectMs*>>>
  local_1c [4];
  int local_18;
  undefined4 local_14;
  CUser *local_10;
  
  local_1e = param_1;
  std::
  map<short,advancealtar::_SummonObjectMs*,std::less<short>,std::allocator<std::pair<short_const,advancealtar::_SummonObjectMs*>>>
  ::find((short *)local_24);
  std::
  map<short,advancealtar::_SummonObjectMs*,std::less<short>,std::allocator<std::pair<short_const,advancealtar::_SummonObjectMs*>>>
  ::end(local_1c);
  cVar1 = std::_Rb_tree_iterator<std::pair<short_const,advancealtar::_SummonObjectMs*>>::operator!=
                    (local_24,(_Rb_tree_iterator *)local_1c);
  if (cVar1 != '\0') {
    iVar2 = std::_Rb_tree_iterator<std::pair<short_const,advancealtar::_SummonObjectMs*>>::
            operator->(local_24);
    local_18 = *(int *)(iVar2 + 4);
    iVar2 = std::_Rb_tree_iterator<std::pair<short_const,advancealtar::_SummonObjectMs*>>::
            operator->(local_24);
    local_14 = *(undefined4 *)(*(int *)(iVar2 + 4) + 0x10);
    if ((*(int *)(local_18 + 0x10) == 1) && (*(char *)(local_18 + 0xc) != '\x01')) {
      iVar2 = std::_Rb_tree_iterator<std::pair<short_const,advancealtar::_SummonObjectMs*>>::
              operator->(local_24);
      *(undefined1 *)(*(int *)(iVar2 + 4) + 0xc) = 1;
      *(int *)(this + 0x28) = *(int *)(this + 0x28) + 1;
      local_10 = (CUser *)CharacData::getUser(*(CharacData **)(this + 0x30));
      if (local_10 != (CUser *)0x0) {
        iVar2 = std::_Rb_tree_iterator<std::pair<short_const,advancealtar::_SummonObjectMs*>>::
                operator->(local_24);
        HistoryLog::killMonster(local_10,*(int *)(*(int *)(iVar2 + 4) + 0x14),param_3);
      }
      return 1;
    }
  }
  return 0;
}
```
