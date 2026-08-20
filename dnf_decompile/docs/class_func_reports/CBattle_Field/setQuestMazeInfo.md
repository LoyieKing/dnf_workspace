# setQuestMazeInfo

`_ZN13CBattle_Field16setQuestMazeInfoEv`

`CBattle_Field::setQuestMazeInfo()`

| 类 | 地址 |
|---|---|
| `CBattle_Field` | `0x0830e170` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0830e170  _ZN13CBattle_Field16setQuestMazeInfoEv
#           CBattle_Field::setQuestMazeInfo()
# range [0x0830e170, 0x0830e301]
0830e170 +0x000:  push   %ebp
0830e171 +0x001:  mov    %esp,%ebp
0830e173 +0x003:  push   %ebx
0830e174 +0x004:  sub    $0x34,%esp
0830e177 +0x007:  movl   $0x0,-0x18(%ebp)
0830e17e +0x00e:  jmp    0830e2ed <+0x17d>
0830e183 +0x013:  mov    0x8(%ebp),%eax
0830e186 +0x016:  mov    0x188(%eax),%eax
0830e18c +0x01c:  mov    -0x18(%ebp),%edx
0830e18f +0x01f:  mov    %edx,0x4(%esp)
0830e193 +0x023:  mov    %eax,(%esp)
0830e196 +0x026:  call   0830e69e <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x283>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x283
0830e19b +0x02b:  mov    %eax,-0x14(%ebp)
0830e19e +0x02e:  cmpl   $0x0,-0x14(%ebp)
0830e1a2 +0x032:  je     0830e1bd <+0x4d>
0830e1a4 +0x034:  mov    -0x14(%ebp),%eax
0830e1a7 +0x037:  mov    %eax,(%esp)
0830e1aa +0x03a:  call   0830f8cc <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x14b1>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x14b1
0830e1af +0x03f:  xor    $0x1,%eax
0830e1b2 +0x042:  test   %al,%al
0830e1b4 +0x044:  je     0830e1bd <+0x4d>
0830e1b6 +0x046:  mov    $0x1,%eax
0830e1bb +0x04b:  jmp    0830e1c2 <+0x52>
0830e1bd +0x04d:  mov    $0x0,%eax
0830e1c2 +0x052:  test   %al,%al
0830e1c4 +0x054:  je     0830e2e9 <+0x179>
0830e1ca +0x05a:  lea    -0x1c(%ebp),%eax
0830e1cd +0x05d:  mov    -0x14(%ebp),%edx
0830e1d0 +0x060:  mov    %edx,0x4(%esp)
0830e1d4 +0x064:  mov    %eax,(%esp)
0830e1d7 +0x067:  call   0830f982 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x1567>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x1567
0830e1dc +0x06c:  sub    $0x4,%esp
0830e1df +0x06f:  lea    -0x20(%ebp),%eax
0830e1e2 +0x072:  mov    -0x14(%ebp),%edx
0830e1e5 +0x075:  mov    %edx,0x4(%esp)
0830e1e9 +0x079:  mov    %eax,(%esp)
0830e1ec +0x07c:  call   0830f9a6 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x158b>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x158b
0830e1f1 +0x081:  sub    $0x4,%esp
0830e1f4 +0x084:  jmp    0830e2cf <+0x15f>
0830e1f9 +0x089:  lea    -0x1c(%ebp),%eax
0830e1fc +0x08c:  mov    %eax,(%esp)
0830e1ff +0x08f:  call   0830fa0e <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x15f3>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x15f3
0830e204 +0x094:  mov    %eax,-0x10(%ebp)
0830e207 +0x097:  mov    0x8(%ebp),%eax
0830e20a +0x09a:  mov    0x1b4(%eax),%eax
0830e210 +0x0a0:  cmp    $0x1,%eax
0830e213 +0x0a3:  je     0830e2c3 <+0x153>
0830e219 +0x0a9:  mov    0x8(%ebp),%eax
0830e21c +0x0ac:  mov    (%eax),%eax
0830e21e +0x0ae:  test   %eax,%eax
0830e220 +0x0b0:  je     0830e24b <+0xdb>
0830e222 +0x0b2:  mov    -0x10(%ebp),%eax
0830e225 +0x0b5:  mov    0x50(%eax),%edx
0830e228 +0x0b8:  mov    0x8(%ebp),%eax
0830e22b +0x0bb:  mov    (%eax),%eax
0830e22d +0x0bd:  mov    -0x18(%ebp),%ecx
0830e230 +0x0c0:  mov    %ecx,0x8(%esp)
0830e234 +0x0c4:  mov    %edx,0x4(%esp)
0830e238 +0x0c8:  mov    %eax,(%esp)
0830e23b +0x0cb:  call   085b6478 <_ZN6CParty20CheckQuestConnectionEi20ENUM_MAZE_QUEST_TYPE>  ; CParty::CheckQuestConnection(int, ENUM_MAZE_QUEST_TYPE)
0830e240 +0x0d0:  test   %al,%al
0830e242 +0x0d2:  je     0830e24b <+0xdb>
0830e244 +0x0d4:  mov    $0x1,%eax
0830e249 +0x0d9:  jmp    0830e250 <+0xe0>
0830e24b +0x0db:  mov    $0x0,%eax
0830e250 +0x0e0:  test   %al,%al
0830e252 +0x0e2:  je     0830e2c4 <+0x154>
0830e254 +0x0e4:  mov    -0x10(%ebp),%eax
0830e257 +0x0e7:  mov    0x50(%eax),%ebx
0830e25a +0x0ea:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0830e25f +0x0ef:  mov    %ebx,0x4(%esp)
0830e263 +0x0f3:  mov    %eax,(%esp)
0830e266 +0x0f6:  call   0835fdc6 <_ZNK12CDataManager10find_questEi>  ; CDataManager::find_quest(int) const
0830e26b +0x0fb:  mov    %eax,-0xc(%ebp)
0830e26e +0x0fe:  cmpl   $0x0,-0xc(%ebp)
0830e272 +0x102:  je     0830e2c4 <+0x154>
0830e274 +0x104:  mov    -0xc(%ebp),%eax
0830e277 +0x107:  movzbl 0x120(%eax),%eax
0830e27e +0x10e:  cmp    $0x1,%al
0830e280 +0x110:  jne    0830e2ae <+0x13e>
0830e282 +0x112:  mov    0x8(%ebp),%eax
0830e285 +0x115:  mov    (%eax),%eax
0830e287 +0x117:  mov    %eax,(%esp)
0830e28a +0x11a:  call   0859a16a <_ZN6CParty16get_member_countEv>  ; CParty::get_member_count()
0830e28f +0x11f:  cmp    $0x1,%eax
0830e292 +0x122:  sete   %al
0830e295 +0x125:  test   %al,%al
0830e297 +0x127:  je     0830e2c4 <+0x154>
0830e299 +0x129:  movl   $0x1,0x4(%esp)
0830e2a1 +0x131:  mov    0x8(%ebp),%eax
0830e2a4 +0x134:  mov    %eax,(%esp)
0830e2a7 +0x137:  call   0830e302 <_ZN13CBattle_Field12setQuestMazeEb>  ; CBattle_Field::setQuestMaze(bool)
0830e2ac +0x13c:  jmp    0830e2c4 <+0x154>
0830e2ae +0x13e:  movl   $0x1,0x4(%esp)
0830e2b6 +0x146:  mov    0x8(%ebp),%eax
0830e2b9 +0x149:  mov    %eax,(%esp)
0830e2bc +0x14c:  call   0830e302 <_ZN13CBattle_Field12setQuestMazeEb>  ; CBattle_Field::setQuestMaze(bool)
0830e2c1 +0x151:  jmp    0830e2c4 <+0x154>
0830e2c3 +0x153:  nop
0830e2c4 +0x154:  lea    -0x1c(%ebp),%eax
0830e2c7 +0x157:  mov    %eax,(%esp)
0830e2ca +0x15a:  call   0830f9f8 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x15dd>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x15dd
0830e2cf +0x15f:  lea    -0x20(%ebp),%eax
0830e2d2 +0x162:  mov    %eax,0x4(%esp)
0830e2d6 +0x166:  lea    -0x1c(%ebp),%eax
0830e2d9 +0x169:  mov    %eax,(%esp)
0830e2dc +0x16c:  call   0830f9cc <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x15b1>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x15b1
0830e2e1 +0x171:  test   %al,%al
0830e2e3 +0x173:  jne    0830e1f9 <+0x89>
0830e2e9 +0x179:  addl   $0x1,-0x18(%ebp)
0830e2ed +0x17d:  cmpl   $0x1,-0x18(%ebp)
0830e2f1 +0x181:  setle  %al
0830e2f4 +0x184:  test   %al,%al
0830e2f6 +0x186:  jne    0830e183 <+0x13>
0830e2fc +0x18c:  mov    -0x4(%ebp),%ebx
0830e2ff +0x18f:  leave
0830e300 +0x190:  ret
0830e301 +0x191:  nop
```

## 反编译 C

```c
// CBattle_Field::setQuestMazeInfo @ 0x830e170

/* CBattle_Field::setQuestMazeInfo() */

void __thiscall CBattle_Field::setQuestMazeInfo(CBattle_Field *this)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  __normal_iterator local_24 [4];
  __normal_iterator<MazeScript*,std::vector<MazeScript,std::allocator<MazeScript>>> local_20 [4];
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  local_1c = 0;
  do {
    if (1 < local_1c) {
      return;
    }
    local_18 = CDungeon::GetQuestMazeScriptVector(*(CDungeon **)(this + 0x188),local_1c);
    if (local_18 == 0) {
LAB_0830e1bd:
      bVar2 = false;
    }
    else {
      cVar1 = std::vector<MazeScript,std::allocator<MazeScript>>::empty();
      if (cVar1 == '\x01') goto LAB_0830e1bd;
      bVar2 = true;
    }
    if (bVar2) {
      std::vector<MazeScript,std::allocator<MazeScript>>::begin();
      std::vector<MazeScript,std::allocator<MazeScript>>::end();
      while( true ) {
        bVar2 = __gnu_cxx::operator!=(local_20,local_24);
        if (!bVar2) break;
        local_14 = __gnu_cxx::
                   __normal_iterator<MazeScript*,std::vector<MazeScript,std::allocator<MazeScript>>>
                   ::operator*(local_20);
        if (*(int *)(this + 0x1b4) != 1) {
          if (*(int *)this == 0) {
LAB_0830e24b:
            bVar2 = false;
          }
          else {
            cVar1 = CParty::CheckQuestConnection
                              (*(CParty **)this,*(undefined4 *)(local_14 + 0x50),local_1c);
            if (cVar1 == '\0') goto LAB_0830e24b;
            bVar2 = true;
          }
          if (bVar2) {
            iVar3 = G_CDataManager();
            local_10 = CDataManager::find_quest(iVar3);
            if (local_10 != 0) {
              if (*(char *)(local_10 + 0x120) == '\x01') {
                iVar3 = CParty::get_member_count(*(CParty **)this);
                if (iVar3 == 1) {
                  setQuestMaze(this,true);
                }
              }
              else {
                setQuestMaze(this,true);
              }
            }
          }
        }
        __gnu_cxx::__normal_iterator<MazeScript*,std::vector<MazeScript,std::allocator<MazeScript>>>
        ::operator++(local_20);
      }
    }
    local_1c = local_1c + 1;
  } while( true );
}
```
