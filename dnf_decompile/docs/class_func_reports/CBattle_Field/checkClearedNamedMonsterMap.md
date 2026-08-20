# checkClearedNamedMonsterMap

`_ZN13CBattle_Field27checkClearedNamedMonsterMapEhi`

`CBattle_Field::checkClearedNamedMonsterMap(unsigned char, int)`

| 类 | 地址 |
|---|---|
| `CBattle_Field` | `0x08300c76` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08300c76  _ZN13CBattle_Field27checkClearedNamedMonsterMapEhi
#           CBattle_Field::checkClearedNamedMonsterMap(unsigned char, int)
# range [0x08300c76, 0x08300da5]
08300c76 +0x000:  push   %ebp
08300c77 +0x001:  mov    %esp,%ebp
08300c79 +0x003:  push   %esi
08300c7a +0x004:  push   %ebx
08300c7b +0x005:  sub    $0x380,%esp
08300c81 +0x00b:  mov    0xc(%ebp),%eax
08300c84 +0x00e:  mov    %al,-0x36c(%ebp)
08300c8a +0x014:  mov    0x8(%ebp),%eax
08300c8d +0x017:  mov    0x188(%eax),%eax
08300c93 +0x01d:  test   %eax,%eax
08300c95 +0x01f:  jne    08300ca1 <+0x2b>
08300c97 +0x021:  mov    $0x0,%ebx
08300c9c +0x026:  jmp    08300d9a <+0x124>
08300ca1 +0x02b:  movzbl -0x36c(%ebp),%esi
08300ca8 +0x032:  mov    0x8(%ebp),%eax
08300cab +0x035:  mov    0x188(%eax),%eax
08300cb1 +0x03b:  add    $0x8f0,%eax
08300cb6 +0x040:  mov    %eax,(%esp)
08300cb9 +0x043:  call   0830fea4 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x1a89>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x1a89
08300cbe +0x048:  cmp    %eax,%esi
08300cc0 +0x04a:  setae  %al
08300cc3 +0x04d:  test   %al,%al
08300cc5 +0x04f:  je     08300cd1 <+0x5b>
08300cc7 +0x051:  mov    $0x0,%ebx
08300ccc +0x056:  jmp    08300d9a <+0x124>
08300cd1 +0x05b:  movzbl -0x36c(%ebp),%eax
08300cd8 +0x062:  mov    0x8(%ebp),%edx
08300cdb +0x065:  mov    0x188(%edx),%edx
08300ce1 +0x06b:  add    $0x8f0,%edx
08300ce7 +0x071:  mov    %eax,0x4(%esp)
08300ceb +0x075:  mov    %edx,(%esp)
08300cee +0x078:  call   0830fec0 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x1aa5>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x1aa5
08300cf3 +0x07d:  mov    (%eax),%eax
08300cf5 +0x07f:  mov    %eax,-0x10(%ebp)
08300cf8 +0x082:  movzbl -0x36c(%ebp),%eax
08300cff +0x089:  mov    0x8(%ebp),%edx
08300d02 +0x08c:  mov    0x188(%edx),%edx
08300d08 +0x092:  add    $0x8f0,%edx
08300d0e +0x098:  mov    %eax,0x4(%esp)
08300d12 +0x09c:  mov    %edx,(%esp)
08300d15 +0x09f:  call   0830fec0 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x1aa5>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x1aa5
08300d1a +0x0a4:  mov    0x4(%eax),%eax
08300d1d +0x0a7:  mov    %eax,-0xc(%ebp)
08300d20 +0x0aa:  movl   $0x0,0xc(%esp)
08300d28 +0x0b2:  mov    -0xc(%ebp),%eax
08300d2b +0x0b5:  mov    %eax,0x8(%esp)
08300d2f +0x0b9:  mov    -0x10(%ebp),%eax
08300d32 +0x0bc:  mov    %eax,0x4(%esp)
08300d36 +0x0c0:  mov    0x8(%ebp),%eax
08300d39 +0x0c3:  mov    %eax,(%esp)
08300d3c +0x0c6:  call   0822cc48 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x22f2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x22f2
08300d41 +0x0cb:  movzbl 0x1(%eax),%eax
08300d45 +0x0cf:  test   %al,%al
08300d47 +0x0d1:  je     08300d95 <+0x11f>
08300d49 +0x0d3:  lea    -0x35c(%ebp),%eax
08300d4f +0x0d9:  mov    %eax,(%esp)
08300d52 +0x0dc:  call   081511c8 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0xafd>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0xafd
08300d57 +0x0e1:  mov    0x10(%ebp),%eax
08300d5a +0x0e4:  mov    %eax,-0x350(%ebp)
08300d60 +0x0ea:  lea    -0x35c(%ebp),%eax
08300d66 +0x0f0:  mov    %eax,(%esp)
08300d69 +0x0f3:  call   08151182 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0xab7>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0xab7
08300d6e +0x0f8:  test   %al,%al
08300d70 +0x0fa:  je     08300d7e <+0x108>
08300d72 +0x0fc:  mov    $0x1,%ebx
08300d77 +0x101:  mov    $0x0,%esi
08300d7c +0x106:  jmp    08300d83 <+0x10d>
08300d7e +0x108:  mov    $0x1,%esi
08300d83 +0x10d:  lea    -0x35c(%ebp),%eax
08300d89 +0x113:  mov    %eax,(%esp)
08300d8c +0x116:  call   081515ae <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0xee3>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0xee3
08300d91 +0x11b:  test   %esi,%esi
08300d93 +0x11d:  je     08300d9a <+0x124>
08300d95 +0x11f:  mov    $0x0,%ebx
08300d9a +0x124:  mov    %ebx,%eax
08300d9c +0x126:  add    $0x380,%esp
08300da2 +0x12c:  pop    %ebx
08300da3 +0x12d:  pop    %esi
08300da4 +0x12e:  pop    %ebp
08300da5 +0x12f:  ret
```

## 反编译 C

```c
// CBattle_Field::checkClearedNamedMonsterMap @ 0x8300c76

/* CBattle_Field::checkClearedNamedMonsterMap(unsigned char, int) */

undefined4 __thiscall
CBattle_Field::checkClearedNamedMonsterMap(CBattle_Field *this,uchar param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  undefined4 unaff_EBX;
  map_monster local_360 [12];
  int local_354;
  int local_14;
  int local_10;
  
  if ((*(int *)(this + 0x188) != 0) &&
     (uVar2 = std::vector<STNamedMonsterMapPos,std::allocator<STNamedMonsterMapPos>>::size
                        ((vector<STNamedMonsterMapPos,std::allocator<STNamedMonsterMapPos>> *)
                         (*(int *)(this + 0x188) + 0x8f0)), param_1 < uVar2)) {
    piVar3 = (int *)std::vector<STNamedMonsterMapPos,std::allocator<STNamedMonsterMapPos>>::
                    operator[]((vector<STNamedMonsterMapPos,std::allocator<STNamedMonsterMapPos>> *)
                               (*(int *)(this + 0x188) + 0x8f0),(uint)param_1);
    local_14 = *piVar3;
    iVar4 = std::vector<STNamedMonsterMapPos,std::allocator<STNamedMonsterMapPos>>::operator[]
                      ((vector<STNamedMonsterMapPos,std::allocator<STNamedMonsterMapPos>> *)
                       (*(int *)(this + 0x188) + 0x8f0),(uint)param_1);
    local_10 = *(int *)(iVar4 + 4);
    iVar4 = GetMapInfoFromPos(this,local_14,local_10,false);
    if (*(char *)(iVar4 + 1) != '\0') {
      map_monster::map_monster(local_360);
      local_354 = param_2;
      cVar1 = map_monster::isNamedMonster(local_360);
      if (cVar1 != '\0') {
        unaff_EBX = 1;
      }
      map_monster::~map_monster(local_360);
      if (cVar1 != '\0') {
        return unaff_EBX;
      }
    }
  }
  return 0;
}
```
