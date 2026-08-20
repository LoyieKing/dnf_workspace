# RegisterMonsterKill

`_ZN16CKillMonsterInfo19RegisterMonsterKillERSt3mapIjhSt4lessIjESaISt4pairIKjhEEEjhb`

`CKillMonsterInfo::RegisterMonsterKill(std::map<unsigned int, unsigned char, std::less<unsigned int>, std::allocator<std::pair<unsigned int const, unsigned char> > >&, unsigned int, unsigned char, bool)`

| 类 | 地址 |
|---|---|
| `CKillMonsterInfo` | `0x0854d24c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0854d24c  _ZN16CKillMonsterInfo19RegisterMonsterKillERSt3mapIjhSt4lessIjESaISt4pairIKjhEEEjhb
#           CKillMonsterInfo::RegisterMonsterKill(std::map<unsigned int, unsigned char, std::less<unsigned int>, std::allocator<std::pair<unsigned int const, unsigned char> > >&, unsigned int, unsigned char, bool)
# range [0x0854d24c, 0x0854d417]
0854d24c +0x000:  push   %ebp
0854d24d +0x001:  mov    %esp,%ebp
0854d24f +0x003:  push   %esi
0854d250 +0x004:  push   %ebx
0854d251 +0x005:  sub    $0x60,%esp
0854d254 +0x008:  mov    0x14(%ebp),%edx
0854d257 +0x00b:  mov    0x18(%ebp),%eax
0854d25a +0x00e:  mov    %dl,-0x3c(%ebp)
0854d25d +0x011:  mov    %al,-0x40(%ebp)
0854d260 +0x014:  cmpb   $0x4,-0x3c(%ebp)
0854d264 +0x018:  jbe    0854d270 <+0x24>
0854d266 +0x01a:  mov    $0x0,%eax
0854d26b +0x01f:  jmp    0854d40e <+0x1c2>
0854d270 +0x024:  movzbl -0x40(%ebp),%eax
0854d274 +0x028:  xor    $0x1,%eax
0854d277 +0x02b:  test   %al,%al
0854d279 +0x02d:  je     0854d2a4 <+0x58>
0854d27b +0x02f:  mov    0x10(%ebp),%eax
0854d27e +0x032:  mov    %eax,%ebx
0854d280 +0x034:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0854d285 +0x039:  mov    %ebx,0x4(%esp)
0854d289 +0x03d:  mov    %eax,(%esp)
0854d28c +0x040:  call   0835fd84 <_ZNK12CDataManager12find_monsterEi>  ; CDataManager::find_monster(int) const
0854d291 +0x045:  mov    %eax,-0x10(%ebp)
0854d294 +0x048:  cmpl   $0x0,-0x10(%ebp)
0854d298 +0x04c:  jne    0854d2d1 <+0x85>
0854d29a +0x04e:  mov    $0x0,%eax
0854d29f +0x053:  jmp    0854d40e <+0x1c2>
0854d2a4 +0x058:  mov    0x10(%ebp),%ebx
0854d2a7 +0x05b:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0854d2ac +0x060:  mov    0x869c(%eax),%eax
0854d2b2 +0x066:  mov    %ebx,0x4(%esp)
0854d2b6 +0x06a:  mov    %eax,(%esp)
0854d2b9 +0x06d:  call   0834a9d2 <_ZN16CAICharacterList3getEj>  ; CAICharacterList::get(unsigned int)
0854d2be +0x072:  mov    %eax,-0xc(%ebp)
0854d2c1 +0x075:  cmpl   $0x0,-0xc(%ebp)
0854d2c5 +0x079:  jne    0854d2d1 <+0x85>
0854d2c7 +0x07b:  mov    $0x0,%eax
0854d2cc +0x080:  jmp    0854d40e <+0x1c2>
0854d2d1 +0x085:  lea    -0x34(%ebp),%eax
0854d2d4 +0x088:  lea    0x10(%ebp),%edx
0854d2d7 +0x08b:  mov    %edx,0x8(%esp)
0854d2db +0x08f:  mov    0xc(%ebp),%edx
0854d2de +0x092:  mov    %edx,0x4(%esp)
0854d2e2 +0x096:  mov    %eax,(%esp)
0854d2e5 +0x099:  call   0854d6e0 <_GLOBAL__I__ZN16CKillMonsterInfoC2Ev+0x1da>  ; global constructors keyed to CKillMonsterInfo::CKillMonsterInfo()+0x1da
0854d2ea +0x09e:  sub    $0x4,%esp
0854d2ed +0x0a1:  lea    -0x30(%ebp),%eax
0854d2f0 +0x0a4:  mov    0xc(%ebp),%edx
0854d2f3 +0x0a7:  mov    %edx,0x4(%esp)
0854d2f7 +0x0ab:  mov    %eax,(%esp)
0854d2fa +0x0ae:  call   0854d70c <_GLOBAL__I__ZN16CKillMonsterInfoC2Ev+0x206>  ; global constructors keyed to CKillMonsterInfo::CKillMonsterInfo()+0x206
0854d2ff +0x0b3:  sub    $0x4,%esp
0854d302 +0x0b6:  lea    -0x30(%ebp),%eax
0854d305 +0x0b9:  mov    %eax,0x4(%esp)
0854d309 +0x0bd:  lea    -0x34(%ebp),%eax
0854d30c +0x0c0:  mov    %eax,(%esp)
0854d30f +0x0c3:  call   0854d732 <_GLOBAL__I__ZN16CKillMonsterInfoC2Ev+0x22c>  ; global constructors keyed to CKillMonsterInfo::CKillMonsterInfo()+0x22c
0854d314 +0x0c8:  test   %al,%al
0854d316 +0x0ca:  je     0854d351 <+0x105>
0854d318 +0x0cc:  lea    -0x34(%ebp),%eax
0854d31b +0x0cf:  mov    %eax,(%esp)
0854d31e +0x0d2:  call   0854d746 <_GLOBAL__I__ZN16CKillMonsterInfoC2Ev+0x240>  ; global constructors keyed to CKillMonsterInfo::CKillMonsterInfo()+0x240
0854d323 +0x0d7:  mov    %eax,%ebx
0854d325 +0x0d9:  movzbl 0x4(%ebx),%esi
0854d329 +0x0dd:  movzbl -0x3c(%ebp),%eax
0854d32d +0x0e1:  mov    %eax,0x4(%esp)
0854d331 +0x0e5:  mov    0x8(%ebp),%eax
0854d334 +0x0e8:  mov    %eax,(%esp)
0854d337 +0x0eb:  call   0854d21a <_ZN16CKillMonsterInfo24GetDungeonDifficultyFlagEh>  ; CKillMonsterInfo::GetDungeonDifficultyFlag(unsigned char)
0854d33c +0x0f0:  or     %esi,%eax
0854d33e +0x0f2:  mov    %al,0x4(%ebx)
0854d341 +0x0f5:  mov    0x8(%ebp),%eax
0854d344 +0x0f8:  mov    %eax,(%esp)
0854d347 +0x0fb:  call   080c8bc4 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x1c>  ; global constructors keyed to BestClearTime::BestClearTime()+0x1c
0854d34c +0x100:  jmp    0854d409 <+0x1bd>
0854d351 +0x105:  movzbl -0x3c(%ebp),%eax
0854d355 +0x109:  mov    %eax,0x4(%esp)
0854d359 +0x10d:  mov    0x8(%ebp),%eax
0854d35c +0x110:  mov    %eax,(%esp)
0854d35f +0x113:  call   0854d21a <_ZN16CKillMonsterInfo24GetDungeonDifficultyFlagEh>  ; CKillMonsterInfo::GetDungeonDifficultyFlag(unsigned char)
0854d364 +0x118:  mov    %al,-0x11(%ebp)
0854d367 +0x11b:  lea    -0x1c(%ebp),%eax
0854d36a +0x11e:  lea    -0x11(%ebp),%edx
0854d36d +0x121:  mov    %edx,0x8(%esp)
0854d371 +0x125:  lea    0x10(%ebp),%edx
0854d374 +0x128:  mov    %edx,0x4(%esp)
0854d378 +0x12c:  mov    %eax,(%esp)
0854d37b +0x12f:  call   0854d753 <_GLOBAL__I__ZN16CKillMonsterInfoC2Ev+0x24d>  ; global constructors keyed to CKillMonsterInfo::CKillMonsterInfo()+0x24d
0854d380 +0x134:  sub    $0x4,%esp
0854d383 +0x137:  lea    -0x1c(%ebp),%eax
0854d386 +0x13a:  mov    %eax,0x4(%esp)
0854d38a +0x13e:  lea    -0x24(%ebp),%eax
0854d38d +0x141:  mov    %eax,(%esp)
0854d390 +0x144:  call   0854d560 <_GLOBAL__I__ZN16CKillMonsterInfoC2Ev+0x5a>  ; global constructors keyed to CKillMonsterInfo::CKillMonsterInfo()+0x5a
0854d395 +0x149:  lea    -0x2c(%ebp),%eax
0854d398 +0x14c:  lea    -0x24(%ebp),%edx
0854d39b +0x14f:  mov    %edx,0x8(%esp)
0854d39f +0x153:  mov    0xc(%ebp),%edx
0854d3a2 +0x156:  mov    %edx,0x4(%esp)
0854d3a6 +0x15a:  mov    %eax,(%esp)
0854d3a9 +0x15d:  call   0854d592 <_GLOBAL__I__ZN16CKillMonsterInfoC2Ev+0x8c>  ; global constructors keyed to CKillMonsterInfo::CKillMonsterInfo()+0x8c
0854d3ae +0x162:  sub    $0x4,%esp
0854d3b1 +0x165:  movzbl -0x28(%ebp),%eax
0854d3b5 +0x169:  xor    $0x1,%eax
0854d3b8 +0x16c:  test   %al,%al
0854d3ba +0x16e:  je     0854d3fe <+0x1b2>
0854d3bc +0x170:  movzbl -0x3c(%ebp),%edx
0854d3c0 +0x174:  mov    0x10(%ebp),%eax
0854d3c3 +0x177:  mov    %edx,0x18(%esp)
0854d3c7 +0x17b:  mov    %eax,0x14(%esp)
0854d3cb +0x17f:  movl   $"KillMonsterInfo::RegisterMonsterKill Fail(%u, %u)",0x10(%esp)
0854d3d3 +0x187:  movl   $0xc7,0xc(%esp)
0854d3db +0x18f:  movl   $&_ZZN16CKillMonsterInfo19RegisterMonsterKillERSt3mapIjhSt4lessIjESaISt4pairIKjhEEEjhbE19__PRETTY_FUNCTION__,0x8(%esp)
0854d3e3 +0x197:  movl   $"KillMonsterInfo.cpp",0x4(%esp)
0854d3eb +0x19f:  movl   $0x1,(%esp)
0854d3f2 +0x1a6:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0854d3f7 +0x1ab:  mov    $0x0,%eax
0854d3fc +0x1b0:  jmp    0854d40e <+0x1c2>
0854d3fe +0x1b2:  mov    0x8(%ebp),%eax
0854d401 +0x1b5:  mov    %eax,(%esp)
0854d404 +0x1b8:  call   080c8bc4 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x1c>  ; global constructors keyed to BestClearTime::BestClearTime()+0x1c
0854d409 +0x1bd:  mov    $0x1,%eax
0854d40e +0x1c2:  lea    -0x8(%ebp),%esp
0854d411 +0x1c5:  add    $0x0,%esp
0854d414 +0x1c8:  pop    %ebx
0854d415 +0x1c9:  pop    %esi
0854d416 +0x1ca:  pop    %ebp
0854d417 +0x1cb:  ret
```

## 反编译 C

```c
// CKillMonsterInfo::RegisterMonsterKill @ 0x854d24c

/* CKillMonsterInfo::RegisterMonsterKill(std::map<unsigned int, unsigned char, std::less<unsigned
   int>, std::allocator<std::pair<unsigned int const, unsigned char> > >&, unsigned int, unsigned
   char, bool) */

undefined4 __thiscall
CKillMonsterInfo::RegisterMonsterKill
          (CKillMonsterInfo *this,map *param_1,uint param_2,uchar param_3,bool param_4)

{
  byte bVar1;
  uint uVar2;
  uchar uVar3;
  char cVar4;
  byte bVar5;
  undefined4 uVar6;
  int iVar7;
  undefined3 in_stack_00000011;
  undefined3 in_stack_00000015;
  _Rb_tree_iterator<std::pair<unsigned_int_const,unsigned_char>> local_38 [4];
  map<unsigned_int,unsigned_char,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_char>>>
  local_34 [4];
  pair local_30 [4];
  char local_2c;
  pair<unsigned_int_const,unsigned_char> local_28 [8];
  uint local_20 [2];
  undefined1 local_15;
  int local_14;
  int local_10;
  
  uVar3 = param_3;
  uVar2 = param_2;
  if (param_3 < 5) {
    if (param_4) {
      iVar7 = G_CDataManager();
      local_10 = CAICharacterList::get(*(CAICharacterList **)(iVar7 + 0x869c),uVar2);
      if (local_10 == 0) {
        return 0;
      }
    }
    else {
      iVar7 = G_CDataManager();
      local_14 = CDataManager::find_monster(iVar7);
      if (local_14 == 0) {
        return 0;
      }
    }
    std::
    map<unsigned_int,unsigned_char,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_char>>>
    ::find((uint *)local_38);
    std::
    map<unsigned_int,unsigned_char,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_char>>>
    ::end(local_34);
    cVar4 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,unsigned_char>>::operator!=
                      (local_38,(_Rb_tree_iterator *)local_34);
    if (cVar4 == '\0') {
      local_15 = GetDungeonDifficultyFlag(this,uVar3);
      std::make_pair<unsigned_int&,unsigned_char>(local_20,(uchar *)&param_2);
      std::pair<unsigned_int_const,unsigned_char>::pair<unsigned_int,unsigned_char>
                (local_28,(pair *)local_20);
      std::
      map<unsigned_int,unsigned_char,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_char>>>
      ::insert(local_30);
      if (local_2c != '\x01') {
        LogManager::logFormat
                  (1,"KillMonsterInfo.cpp",
                   "bool CKillMonsterInfo::RegisterMonsterKill(killMonsterMap&, unsigned int, unsigned char, bool)"
                   ,199,"KillMonsterInfo::RegisterMonsterKill Fail(%u, %u)",param_2,(uint)uVar3);
        return 0;
      }
      charac_expand::CData::alter((CData *)this);
    }
    else {
      iVar7 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,unsigned_char>>::operator->
                        (local_38);
      bVar1 = *(byte *)(iVar7 + 4);
      bVar5 = GetDungeonDifficultyFlag(this,uVar3);
      *(byte *)(iVar7 + 4) = bVar5 | bVar1;
      charac_expand::CData::alter((CData *)this);
    }
    uVar6 = 1;
  }
  else {
    uVar6 = 0;
  }
  return uVar6;
}
```
