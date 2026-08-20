# isPremiumGoldCardReward

`_ZN6CParty23isPremiumGoldCardRewardEPK8CDungeonRj`

`CParty::isPremiumGoldCardReward(CDungeon const*, unsigned int&)`

| 类 | 地址 |
|---|---|
| `CParty` | `0x085b11ee` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085b11ee  _ZN6CParty23isPremiumGoldCardRewardEPK8CDungeonRj
#           CParty::isPremiumGoldCardReward(CDungeon const*, unsigned int&)
# range [0x085b11ee, 0x085b12f7]
085b11ee +0x000:  push   %ebp
085b11ef +0x001:  mov    %esp,%ebp
085b11f1 +0x003:  sub    $0x38,%esp
085b11f4 +0x006:  mov    0xc(%ebp),%eax
085b11f7 +0x009:  mov    %eax,(%esp)
085b11fa +0x00c:  call   080f9810 <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x1c>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x1c
085b11ff +0x011:  mov    %eax,-0x28(%ebp)
085b1202 +0x014:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
085b1207 +0x019:  movzwl 0x4900(%eax),%eax
085b120e +0x020:  cwtl
085b120f +0x021:  mov    %eax,-0x24(%ebp)
085b1212 +0x024:  movl   $0x0,-0x20(%ebp)
085b1219 +0x02b:  jmp    085b12d6 <+0xe8>
085b121e +0x030:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
085b1223 +0x035:  mov    -0x20(%ebp),%edx
085b1226 +0x038:  add    $0x48f,%edx
085b122c +0x03e:  shl    $0x4,%edx
085b122f +0x041:  add    %edx,%eax
085b1231 +0x043:  add    $0x14,%eax
085b1234 +0x046:  mov    (%eax),%eax
085b1236 +0x048:  mov    %eax,-0x1c(%ebp)
085b1239 +0x04b:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
085b123e +0x050:  mov    -0x20(%ebp),%edx
085b1241 +0x053:  add    $0x48f,%edx
085b1247 +0x059:  shl    $0x4,%edx
085b124a +0x05c:  add    %edx,%eax
085b124c +0x05e:  add    $0x18,%eax
085b124f +0x061:  mov    (%eax),%eax
085b1251 +0x063:  mov    %eax,-0x18(%ebp)
085b1254 +0x066:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
085b1259 +0x06b:  mov    -0x20(%ebp),%edx
085b125c +0x06e:  add    $0x48f,%edx
085b1262 +0x074:  shl    $0x4,%edx
085b1265 +0x077:  add    %edx,%eax
085b1267 +0x079:  add    $0x1c,%eax
085b126a +0x07c:  mov    (%eax),%eax
085b126c +0x07e:  mov    %eax,-0x14(%ebp)
085b126f +0x081:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
085b1274 +0x086:  mov    -0x20(%ebp),%edx
085b1277 +0x089:  add    $0x48f,%edx
085b127d +0x08f:  shl    $0x4,%edx
085b1280 +0x092:  add    %edx,%eax
085b1282 +0x094:  add    $0x20,%eax
085b1285 +0x097:  mov    (%eax),%eax
085b1287 +0x099:  mov    %eax,-0x10(%ebp)
085b128a +0x09c:  cmpl   $0x0,-0x1c(%ebp)
085b128e +0x0a0:  jle    085b12e9 <+0xfb>
085b1290 +0x0a2:  cmpl   $0x0,-0x18(%ebp)
085b1294 +0x0a6:  jle    085b12ec <+0xfe>
085b1296 +0x0a8:  cmpl   $0x0,-0x14(%ebp)
085b129a +0x0ac:  jle    085b12ef <+0x101>
085b129c +0x0ae:  mov    -0x28(%ebp),%eax
085b129f +0x0b1:  cmp    -0x1c(%ebp),%eax
085b12a2 +0x0b4:  jl     085b12d2 <+0xe4>
085b12a4 +0x0b6:  mov    -0x28(%ebp),%eax
085b12a7 +0x0b9:  cmp    -0x18(%ebp),%eax
085b12aa +0x0bc:  jg     085b12d2 <+0xe4>
085b12ac +0x0be:  movl   $0x3e8,(%esp)
085b12b3 +0x0c5:  call   086b1b87 <_Z12get_rand_inti>  ; get_rand_int(int)
085b12b8 +0x0ca:  mov    %eax,-0xc(%ebp)
085b12bb +0x0cd:  mov    -0xc(%ebp),%eax
085b12be +0x0d0:  cmp    -0x14(%ebp),%eax
085b12c1 +0x0d3:  jg     085b12d2 <+0xe4>
085b12c3 +0x0d5:  mov    0x10(%ebp),%eax
085b12c6 +0x0d8:  mov    -0x10(%ebp),%edx
085b12c9 +0x0db:  mov    %edx,(%eax)
085b12cb +0x0dd:  mov    $0x1,%eax
085b12d0 +0x0e2:  jmp    085b12f5 <+0x107>
085b12d2 +0x0e4:  addl   $0x1,-0x20(%ebp)
085b12d6 +0x0e8:  mov    -0x20(%ebp),%eax
085b12d9 +0x0eb:  cmp    -0x24(%ebp),%eax
085b12dc +0x0ee:  setl   %al
085b12df +0x0f1:  test   %al,%al
085b12e1 +0x0f3:  jne    085b121e <+0x30>
085b12e7 +0x0f9:  jmp    085b12f0 <+0x102>
085b12e9 +0x0fb:  nop
085b12ea +0x0fc:  jmp    085b12f0 <+0x102>
085b12ec +0x0fe:  nop
085b12ed +0x0ff:  jmp    085b12f0 <+0x102>
085b12ef +0x101:  nop
085b12f0 +0x102:  mov    $0x0,%eax
085b12f5 +0x107:  leave
085b12f6 +0x108:  ret
085b12f7 +0x109:  nop
```

## 反编译 C

```c
// CParty::isPremiumGoldCardReward @ 0x85b11ee

/* CParty::isPremiumGoldCardReward(CDungeon const*, unsigned int&) */

undefined4 __thiscall CParty::isPremiumGoldCardReward(CParty *this,CDungeon *param_1,uint *param_2)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int local_24;
  
  iVar3 = CDungeon::get_standard_level(param_1);
  iVar4 = G_CDataManager();
  sVar1 = *(short *)(iVar4 + 0x4900);
  local_24 = 0;
  while( true ) {
    if (sVar1 <= local_24) {
      return 0;
    }
    iVar4 = G_CDataManager();
    iVar4 = *(int *)(iVar4 + (local_24 + 0x48f) * 0x10 + 0x14);
    iVar5 = G_CDataManager();
    iVar5 = *(int *)(iVar5 + (local_24 + 0x48f) * 0x10 + 0x18);
    iVar6 = G_CDataManager();
    iVar6 = *(int *)(iVar6 + (local_24 + 0x48f) * 0x10 + 0x1c);
    iVar7 = G_CDataManager();
    uVar2 = *(uint *)(iVar7 + (local_24 + 0x48f) * 0x10 + 0x20);
    if (iVar4 < 1) {
      return 0;
    }
    if (iVar5 < 1) {
      return 0;
    }
    if (iVar6 < 1) break;
    if (((iVar4 <= iVar3) && (iVar3 <= iVar5)) && (iVar4 = get_rand_int(1000), iVar4 <= iVar6)) {
      *param_2 = uVar2;
      return 1;
    }
    local_24 = local_24 + 1;
  }
  return 0;
}
```
