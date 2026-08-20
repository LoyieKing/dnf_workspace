# checkCommandExecuteError

`_ZN11game_master16CMonsterDropTest24checkCommandExecuteErrorEP6CParty`

`game_master::CMonsterDropTest::checkCommandExecuteError(CParty*)`

| 类 | 地址 |
|---|---|
| `game_master::CMonsterDropTest` | `0x084ad82a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084ad82a  _ZN11game_master16CMonsterDropTest24checkCommandExecuteErrorEP6CParty
#           game_master::CMonsterDropTest::checkCommandExecuteError(CParty*)
# range [0x084ad82a, 0x084ad8db]
084ad82a +0x00:  push   %ebp
084ad82b +0x01:  mov    %esp,%ebp
084ad82d +0x03:  push   %ebx
084ad82e +0x04:  sub    $0x24,%esp
084ad831 +0x07:  cmpl   $0x0,0xc(%ebp)
084ad835 +0x0b:  jne    084ad841 <+0x17>
084ad837 +0x0d:  mov    $"Party가 없습니다",%eax
084ad83c +0x12:  jmp    084ad8d6 <+0xac>
084ad841 +0x17:  mov    0x8(%ebp),%eax
084ad844 +0x1a:  mov    0x8(%eax),%eax
084ad847 +0x1d:  cmp    $0x1,%eax
084ad84a +0x20:  jne    084ad856 <+0x2c>
084ad84c +0x22:  mov    $"user가 지나간 맵을 저장합니다",%eax
084ad851 +0x27:  jmp    084ad8d6 <+0xac>
084ad856 +0x2c:  mov    0x8(%ebp),%eax
084ad859 +0x2f:  mov    0x8(%eax),%eax
084ad85c +0x32:  cmp    $0x2,%eax
084ad85f +0x35:  jne    084ad875 <+0x4b>
084ad861 +0x37:  mov    0x8(%ebp),%eax
084ad864 +0x3a:  mov    0xc(%eax),%eax
084ad867 +0x3d:  cmp    $0x2710,%eax
084ad86c +0x42:  jbe    084ad889 <+0x5f>
084ad86e +0x44:  mov    $"passed map 통계는 0 ~ 10000번까지만 지원됩니다",%eax
084ad873 +0x49:  jmp    084ad8d6 <+0xac>
084ad875 +0x4b:  mov    0x8(%ebp),%eax
084ad878 +0x4e:  mov    0xc(%eax),%eax
084ad87b +0x51:  cmp    $&_ZL14gUnicodeBuffer+0xe174,%eax
084ad880 +0x56:  jbe    084ad889 <+0x5f>
084ad882 +0x58:  mov    $"0 ~ 100000번 통계까지만 지원됩니다",%eax
084ad887 +0x5d:  jmp    084ad8d6 <+0xac>
084ad889 +0x5f:  mov    0xc(%ebp),%eax
084ad88c +0x62:  add    $0xb24,%eax
084ad891 +0x67:  mov    %eax,(%esp)
084ad894 +0x6a:  call   0822d0d8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2782>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2782
084ad899 +0x6f:  mov    %eax,%ebx
084ad89b +0x71:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
084ad8a0 +0x76:  mov    %ebx,0x4(%esp)
084ad8a4 +0x7a:  mov    %eax,(%esp)
084ad8a7 +0x7d:  call   0835f9f8 <_ZNK12CDataManager12find_dungeonEi>  ; CDataManager::find_dungeon(int) const
084ad8ac +0x82:  mov    %eax,-0xc(%ebp)
084ad8af +0x85:  cmpl   $0x0,-0xc(%ebp)
084ad8b3 +0x89:  jne    084ad8bc <+0x92>
084ad8b5 +0x8b:  mov    $"Dungeon에서 사용가능",%eax
084ad8ba +0x90:  jmp    084ad8d6 <+0xac>
084ad8bc +0x92:  mov    0xc(%ebp),%eax
084ad8bf +0x95:  mov    0xcd8(%eax),%eax
084ad8c5 +0x9b:  cmp    $0x1,%eax
084ad8c8 +0x9e:  jne    084ad8d1 <+0xa7>
084ad8ca +0xa0:  mov    $"연습모드 입니다",%eax
084ad8cf +0xa5:  jmp    084ad8d6 <+0xac>
084ad8d1 +0xa7:  mov    $0x0,%eax
084ad8d6 +0xac:  add    $0x24,%esp
084ad8d9 +0xaf:  pop    %ebx
084ad8da +0xb0:  pop    %ebp
084ad8db +0xb1:  ret
```

## 反编译 C

```c
// game_master::CMonsterDropTest::checkCommandExecuteError @ 0x84ad82a

/* game_master::CMonsterDropTest::checkCommandExecuteError(CParty*) */

undefined * __thiscall
game_master::CMonsterDropTest::checkCommandExecuteError(CMonsterDropTest *this,CParty *param_1)

{
  undefined *puVar1;
  int iVar2;
  
  if (param_1 == (CParty *)0x0) {
    puVar1 = &DAT_08c7fd9c;
  }
  else if (*(int *)(this + 8) == 1) {
    puVar1 = &DAT_08c7ff16;
  }
  else {
    if (*(int *)(this + 8) == 2) {
      if (10000 < *(uint *)(this + 0xc)) {
        return &DAT_08c7ff34;
      }
    }
    else if (100000 < *(uint *)(this + 0xc)) {
      return &DAT_08c7ff64;
    }
    CBattle_Field::get_dungeon_index((CBattle_Field *)(param_1 + 0xb24));
    iVar2 = G_CDataManager();
    iVar2 = CDataManager::find_dungeon(iVar2);
    if (iVar2 == 0) {
      puVar1 = &DAT_08c7ff87;
    }
    else if (*(int *)(param_1 + 0xcd8) == 1) {
      puVar1 = &DAT_08c7ff9c;
    }
    else {
      puVar1 = (undefined *)0x0;
    }
  }
  return puVar1;
}
```
