# ConvertStructToMap

`_ZN16CKillMonsterInfo18ConvertStructToMapEP15stMonsterInfo_tjRSt3mapIjhSt4lessIjESaISt4pairIKjhEEEb`

`CKillMonsterInfo::ConvertStructToMap(stMonsterInfo_t*, unsigned int, std::map<unsigned int, unsigned char, std::less<unsigned int>, std::allocator<std::pair<unsigned int const, unsigned char> > >&, bool)`

| 类 | 地址 |
|---|---|
| `CKillMonsterInfo` | `0x0854cb42` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0854cb42  _ZN16CKillMonsterInfo18ConvertStructToMapEP15stMonsterInfo_tjRSt3mapIjhSt4lessIjESaISt4pairIKjhEEEb
#           CKillMonsterInfo::ConvertStructToMap(stMonsterInfo_t*, unsigned int, std::map<unsigned int, unsigned char, std::less<unsigned int>, std::allocator<std::pair<unsigned int const, unsigned char> > >&, bool)
# range [0x0854cb42, 0x0854ccbb]
0854cb42 +0x000:  push   %ebp
0854cb43 +0x001:  mov    %esp,%ebp
0854cb45 +0x003:  push   %ebx
0854cb46 +0x004:  sub    $0x64,%esp
0854cb49 +0x007:  mov    0x18(%ebp),%eax
0854cb4c +0x00a:  mov    %al,-0x3c(%ebp)
0854cb4f +0x00d:  movl   $0x0,-0x14(%ebp)
0854cb56 +0x014:  jmp    0854cc9e <+0x15c>
0854cb5b +0x019:  mov    -0x14(%ebp),%edx
0854cb5e +0x01c:  mov    %edx,%eax
0854cb60 +0x01e:  shl    $0x2,%eax
0854cb63 +0x021:  add    %edx,%eax
0854cb65 +0x023:  add    0xc(%ebp),%eax
0854cb68 +0x026:  mov    (%eax),%eax
0854cb6a +0x028:  mov    %eax,-0x30(%ebp)
0854cb6d +0x02b:  mov    -0x30(%ebp),%eax
0854cb70 +0x02e:  test   %eax,%eax
0854cb72 +0x030:  je     0854ccb1 <+0x16f>
0854cb78 +0x036:  movzbl -0x3c(%ebp),%eax
0854cb7c +0x03a:  xor    $0x1,%eax
0854cb7f +0x03d:  test   %al,%al
0854cb81 +0x03f:  je     0854cbde <+0x9c>
0854cb83 +0x041:  mov    -0x30(%ebp),%eax
0854cb86 +0x044:  mov    %eax,%ebx
0854cb88 +0x046:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0854cb8d +0x04b:  mov    %ebx,0x4(%esp)
0854cb91 +0x04f:  mov    %eax,(%esp)
0854cb94 +0x052:  call   0835fd84 <_ZNK12CDataManager12find_monsterEi>  ; CDataManager::find_monster(int) const
0854cb99 +0x057:  mov    %eax,-0x10(%ebp)
0854cb9c +0x05a:  cmpl   $0x0,-0x10(%ebp)
0854cba0 +0x05e:  jne    0854cc3c <+0xfa>
0854cba6 +0x064:  mov    -0x30(%ebp),%eax
0854cba9 +0x067:  mov    %eax,0x14(%esp)
0854cbad +0x06b:  movl   $"ConvertStrToMap ERROR : mobIdx is not valid(%u)",0x10(%esp)
0854cbb5 +0x073:  movl   $0x25,0xc(%esp)
0854cbbd +0x07b:  movl   $&_ZZN16CKillMonsterInfo18ConvertStructToMapEP15stMonsterInfo_tjRSt3mapIjhSt4lessIjESaISt4pairIKjhEEEbE19__PRETTY_FUNCTION__,0x8(%esp)
0854cbc5 +0x083:  movl   $"KillMonsterInfo.cpp",0x4(%esp)
0854cbcd +0x08b:  movl   $0x1,(%esp)
0854cbd4 +0x092:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0854cbd9 +0x097:  jmp    0854cc9a <+0x158>
0854cbde +0x09c:  cmpb   $0x0,-0x3c(%ebp)
0854cbe2 +0x0a0:  je     0854cc3c <+0xfa>
0854cbe4 +0x0a2:  mov    -0x30(%ebp),%ebx
0854cbe7 +0x0a5:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0854cbec +0x0aa:  mov    0x869c(%eax),%eax
0854cbf2 +0x0b0:  mov    %ebx,0x4(%esp)
0854cbf6 +0x0b4:  mov    %eax,(%esp)
0854cbf9 +0x0b7:  call   0834a9d2 <_ZN16CAICharacterList3getEj>  ; CAICharacterList::get(unsigned int)
0854cbfe +0x0bc:  mov    %eax,-0xc(%ebp)
0854cc01 +0x0bf:  cmpl   $0x0,-0xc(%ebp)
0854cc05 +0x0c3:  jne    0854cc3c <+0xfa>
0854cc07 +0x0c5:  mov    -0x30(%ebp),%eax
0854cc0a +0x0c8:  mov    %eax,0x14(%esp)
0854cc0e +0x0cc:  movl   $"ConvertStrToMap ERROR : mobIdx is not valid(%u)",0x10(%esp)
0854cc16 +0x0d4:  movl   $0x2e,0xc(%esp)
0854cc1e +0x0dc:  movl   $&_ZZN16CKillMonsterInfo18ConvertStructToMapEP15stMonsterInfo_tjRSt3mapIjhSt4lessIjESaISt4pairIKjhEEEbE19__PRETTY_FUNCTION__,0x8(%esp)
0854cc26 +0x0e4:  movl   $"KillMonsterInfo.cpp",0x4(%esp)
0854cc2e +0x0ec:  movl   $0x1,(%esp)
0854cc35 +0x0f3:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0854cc3a +0x0f8:  jmp    0854cc9a <+0x158>
0854cc3c +0x0fa:  mov    -0x14(%ebp),%edx
0854cc3f +0x0fd:  mov    %edx,%eax
0854cc41 +0x0ff:  shl    $0x2,%eax
0854cc44 +0x102:  add    %edx,%eax
0854cc46 +0x104:  add    0xc(%ebp),%eax
0854cc49 +0x107:  movzbl 0x4(%eax),%eax
0854cc4d +0x10b:  mov    %al,-0x31(%ebp)
0854cc50 +0x10e:  lea    -0x1c(%ebp),%eax
0854cc53 +0x111:  lea    -0x31(%ebp),%edx
0854cc56 +0x114:  mov    %edx,0x8(%esp)
0854cc5a +0x118:  lea    -0x30(%ebp),%edx
0854cc5d +0x11b:  mov    %edx,0x4(%esp)
0854cc61 +0x11f:  mov    %eax,(%esp)
0854cc64 +0x122:  call   0854d522 <_GLOBAL__I__ZN16CKillMonsterInfoC2Ev+0x1c>  ; global constructors keyed to CKillMonsterInfo::CKillMonsterInfo()+0x1c
0854cc69 +0x127:  sub    $0x4,%esp
0854cc6c +0x12a:  lea    -0x1c(%ebp),%eax
0854cc6f +0x12d:  mov    %eax,0x4(%esp)
0854cc73 +0x131:  lea    -0x24(%ebp),%eax
0854cc76 +0x134:  mov    %eax,(%esp)
0854cc79 +0x137:  call   0854d560 <_GLOBAL__I__ZN16CKillMonsterInfoC2Ev+0x5a>  ; global constructors keyed to CKillMonsterInfo::CKillMonsterInfo()+0x5a
0854cc7e +0x13c:  lea    -0x2c(%ebp),%eax
0854cc81 +0x13f:  lea    -0x24(%ebp),%edx
0854cc84 +0x142:  mov    %edx,0x8(%esp)
0854cc88 +0x146:  mov    0x14(%ebp),%edx
0854cc8b +0x149:  mov    %edx,0x4(%esp)
0854cc8f +0x14d:  mov    %eax,(%esp)
0854cc92 +0x150:  call   0854d592 <_GLOBAL__I__ZN16CKillMonsterInfoC2Ev+0x8c>  ; global constructors keyed to CKillMonsterInfo::CKillMonsterInfo()+0x8c
0854cc97 +0x155:  sub    $0x4,%esp
0854cc9a +0x158:  addl   $0x1,-0x14(%ebp)
0854cc9e +0x15c:  mov    -0x14(%ebp),%eax
0854cca1 +0x15f:  cmp    0x10(%ebp),%eax
0854cca4 +0x162:  setb   %al
0854cca7 +0x165:  test   %al,%al
0854cca9 +0x167:  jne    0854cb5b <+0x19>
0854ccaf +0x16d:  jmp    0854ccb2 <+0x170>
0854ccb1 +0x16f:  nop
0854ccb2 +0x170:  mov    $0x1,%eax
0854ccb7 +0x175:  mov    -0x4(%ebp),%ebx
0854ccba +0x178:  leave
0854ccbb +0x179:  ret
```

## 反编译 C

```c
// CKillMonsterInfo::ConvertStructToMap @ 0x854cb42

/* CKillMonsterInfo::ConvertStructToMap(stMonsterInfo_t*, unsigned int, std::map<unsigned int,
   unsigned char, std::less<unsigned int>, std::allocator<std::pair<unsigned int const, unsigned
   char> > >&, bool) */

undefined4 __thiscall
CKillMonsterInfo::ConvertStructToMap
          (CKillMonsterInfo *this,stMonsterInfo_t *param_1,uint param_2,map *param_3,bool param_4)

{
  uint uVar1;
  int iVar2;
  uint local_34;
  pair local_30 [8];
  pair<unsigned_int_const,unsigned_char> local_28 [8];
  uint local_20 [2];
  uint local_18;
  int local_14;
  int local_10;
  
  local_18 = 0;
  do {
    if ((param_2 <= local_18) || (uVar1 = *(uint *)(param_1 + local_18 * 5), uVar1 == 0)) {
      return 1;
    }
    local_34 = uVar1;
    if (param_4) {
      iVar2 = G_CDataManager();
      local_10 = CAICharacterList::get(*(CAICharacterList **)(iVar2 + 0x869c),uVar1);
      if (local_10 != 0) goto LAB_0854cc3c;
      LogManager::logFormat
                (1,"KillMonsterInfo.cpp",
                 "bool CKillMonsterInfo::ConvertStructToMap(stMonsterInfo_t*, size_t, killMonsterMap&, bool)"
                 ,0x2e,"ConvertStrToMap ERROR : mobIdx is not valid(%u)",local_34);
    }
    else {
      iVar2 = G_CDataManager();
      local_14 = CDataManager::find_monster(iVar2);
      if (local_14 == 0) {
        LogManager::logFormat
                  (1,"KillMonsterInfo.cpp",
                   "bool CKillMonsterInfo::ConvertStructToMap(stMonsterInfo_t*, size_t, killMonsterMap&, bool)"
                   ,0x25,"ConvertStrToMap ERROR : mobIdx is not valid(%u)",local_34);
      }
      else {
LAB_0854cc3c:
        std::make_pair<unsigned_int&,unsigned_char&>(local_20,(uchar *)&local_34);
        std::pair<unsigned_int_const,unsigned_char>::pair<unsigned_int,unsigned_char>
                  (local_28,(pair *)local_20);
        std::
        map<unsigned_int,unsigned_char,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_char>>>
        ::insert(local_30);
      }
    }
    local_18 = local_18 + 1;
  } while( true );
}
```
