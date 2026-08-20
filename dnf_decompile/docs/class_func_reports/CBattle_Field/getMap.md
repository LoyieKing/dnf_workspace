# getMap

`_ZN13CBattle_Field6getMapEi`

`CBattle_Field::getMap(int)`

| 类 | 地址 |
|---|---|
| `CBattle_Field` | `0x08300ed4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08300ed4  _ZN13CBattle_Field6getMapEi
#           CBattle_Field::getMap(int)
# range [0x08300ed4, 0x0830107d]
08300ed4 +0x000:  push   %ebp
08300ed5 +0x001:  mov    %esp,%ebp
08300ed7 +0x003:  push   %edi
08300ed8 +0x004:  push   %esi
08300ed9 +0x005:  push   %ebx
08300eda +0x006:  sub    $0x4c,%esp
08300edd +0x009:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08300ee2 +0x00e:  mov    0xc(%ebp),%edx
08300ee5 +0x011:  mov    %edx,0x4(%esp)
08300ee9 +0x015:  mov    %eax,(%esp)
08300eec +0x018:  call   0835fa14 <_ZNK12CDataManager8find_mapEi>  ; CDataManager::find_map(int) const
08300ef1 +0x01d:  mov    %eax,-0x1c(%ebp)
08300ef4 +0x020:  cmpl   $0x0,-0x1c(%ebp)
08300ef8 +0x024:  jne    08300f82 <+0xae>
08300efe +0x02a:  mov    0x8(%ebp),%eax
08300f01 +0x02d:  mov    %eax,(%esp)
08300f04 +0x030:  call   0822cbcc <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2276>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2276
08300f09 +0x035:  movzbl 0xe8(%eax),%eax
08300f10 +0x03c:  test   %al,%al
08300f12 +0x03e:  je     08300f1b <+0x47>
08300f14 +0x040:  mov    $"layeredMap",%eax
08300f19 +0x045:  jmp    08300f20 <+0x4c>
08300f1b +0x047:  mov    $"generalMap",%eax
08300f20 +0x04c:  mov    %eax,%edi
08300f22 +0x04e:  mov    0x8(%ebp),%eax
08300f25 +0x051:  mov    0x64(%eax),%esi
08300f28 +0x054:  mov    0x8(%ebp),%eax
08300f2b +0x057:  mov    0x60(%eax),%ebx
08300f2e +0x05a:  mov    0x8(%ebp),%eax
08300f31 +0x05d:  mov    %eax,(%esp)
08300f34 +0x060:  call   0822cbcc <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2276>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2276
08300f39 +0x065:  mov    0x4(%eax),%eax
08300f3c +0x068:  mov    %edi,0x20(%esp)
08300f40 +0x06c:  mov    %esi,0x1c(%esp)
08300f44 +0x070:  mov    %ebx,0x18(%esp)
08300f48 +0x074:  mov    %eax,0x14(%esp)
08300f4c +0x078:  movl   $"Find Map[%d] Error(In Map Maker)(%d/%d) [Map Kind : %s]",0x10(%esp)
08300f54 +0x080:  movl   $0x4a7,0xc(%esp)
08300f5c +0x088:  movl   $&_ZZN13CBattle_Field6getMapEiE19__PRETTY_FUNCTION__,0x8(%esp)
08300f64 +0x090:  movl   $"battle_field.cpp",0x4(%esp)
08300f6c +0x098:  movl   $0x1,(%esp)
08300f73 +0x09f:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08300f78 +0x0a4:  mov    $0x0,%eax
08300f7d +0x0a9:  jmp    08301075 <+0x1a1>
08300f82 +0x0ae:  mov    0x8(%ebp),%eax
08300f85 +0x0b1:  mov    %eax,(%esp)
08300f88 +0x0b4:  call   080f981c <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x28>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x28
08300f8d +0x0b9:  cmp    $0x4,%eax
08300f90 +0x0bc:  jne    08300fa6 <+0xd2>
08300f92 +0x0be:  mov    -0x1c(%ebp),%eax
08300f95 +0x0c1:  mov    0xb4(%eax),%eax
08300f9b +0x0c7:  test   %eax,%eax
08300f9d +0x0c9:  je     08300fa6 <+0xd2>
08300f9f +0x0cb:  mov    $0x1,%eax
08300fa4 +0x0d0:  jmp    08300fab <+0xd7>
08300fa6 +0x0d2:  mov    $0x0,%eax
08300fab +0x0d7:  test   %al,%al
08300fad +0x0d9:  je     08301072 <+0x19e>
08300fb3 +0x0df:  mov    0x8(%ebp),%eax
08300fb6 +0x0e2:  mov    %eax,(%esp)
08300fb9 +0x0e5:  call   0822cbcc <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2276>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2276
08300fbe +0x0ea:  mov    -0x1c(%ebp),%edx
08300fc1 +0x0ed:  mov    0xb4(%edx),%edx
08300fc7 +0x0f3:  mov    %edx,0x4(%eax)
08300fca +0x0f6:  mov    -0x1c(%ebp),%eax
08300fcd +0x0f9:  mov    0xb4(%eax),%ebx
08300fd3 +0x0ff:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08300fd8 +0x104:  mov    %ebx,0x4(%esp)
08300fdc +0x108:  mov    %eax,(%esp)
08300fdf +0x10b:  call   0835fa14 <_ZNK12CDataManager8find_mapEi>  ; CDataManager::find_map(int) const
08300fe4 +0x110:  mov    %eax,-0x1c(%ebp)
08300fe7 +0x113:  cmpl   $0x0,-0x1c(%ebp)
08300feb +0x117:  jne    08301072 <+0x19e>
08300ff1 +0x11d:  mov    0x8(%ebp),%eax
08300ff4 +0x120:  mov    %eax,(%esp)
08300ff7 +0x123:  call   0822cbcc <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2276>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2276
08300ffc +0x128:  movzbl 0xe8(%eax),%eax
08301003 +0x12f:  test   %al,%al
08301005 +0x131:  je     0830100e <+0x13a>
08301007 +0x133:  mov    $"layeredMap",%eax
0830100c +0x138:  jmp    08301013 <+0x13f>
0830100e +0x13a:  mov    $"generalMap",%eax
08301013 +0x13f:  mov    %eax,%edi
08301015 +0x141:  mov    0x8(%ebp),%eax
08301018 +0x144:  mov    0x64(%eax),%esi
0830101b +0x147:  mov    0x8(%ebp),%eax
0830101e +0x14a:  mov    0x60(%eax),%ebx
08301021 +0x14d:  mov    0x8(%ebp),%eax
08301024 +0x150:  mov    %eax,(%esp)
08301027 +0x153:  call   0822cbcc <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2276>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2276
0830102c +0x158:  mov    0x4(%eax),%eax
0830102f +0x15b:  mov    %edi,0x20(%esp)
08301033 +0x15f:  mov    %esi,0x1c(%esp)
08301037 +0x163:  mov    %ebx,0x18(%esp)
0830103b +0x167:  mov    %eax,0x14(%esp)
0830103f +0x16b:  movl   $"Find Map[%d] Error(In Map Maker)(%d/%d) [Map Kind : %s]",0x10(%esp)
08301047 +0x173:  movl   $0x4c4,0xc(%esp)
0830104f +0x17b:  movl   $&_ZZN13CBattle_Field6getMapEiE19__PRETTY_FUNCTION__,0x8(%esp)
08301057 +0x183:  movl   $"battle_field.cpp",0x4(%esp)
0830105f +0x18b:  movl   $0x1,(%esp)
08301066 +0x192:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0830106b +0x197:  mov    $0x0,%eax
08301070 +0x19c:  jmp    08301075 <+0x1a1>
08301072 +0x19e:  mov    -0x1c(%ebp),%eax
08301075 +0x1a1:  add    $0x4c,%esp
08301078 +0x1a4:  pop    %ebx
08301079 +0x1a5:  pop    %esi
0830107a +0x1a6:  pop    %edi
0830107b +0x1a7:  pop    %ebp
0830107c +0x1a8:  ret
0830107d +0x1a9:  nop
```

## 反编译 C

```c
// CBattle_Field::getMap @ 0x8300ed4

/* CBattle_Field::getMap(int) */

int CBattle_Field::getMap(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  bool bVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  
  iVar4 = G_CDataManager();
  iVar4 = CDataManager::find_map(iVar4);
  if (iVar4 == 0) {
    iVar4 = GetCurrentMapInfo((CBattle_Field *)param_1);
    if (*(char *)(iVar4 + 0xe8) == '\0') {
      pcVar5 = "generalMap";
    }
    else {
      pcVar5 = "layeredMap";
    }
    uVar1 = *(undefined4 *)(param_1 + 100);
    uVar2 = *(undefined4 *)(param_1 + 0x60);
    iVar4 = GetCurrentMapInfo((CBattle_Field *)param_1);
    LogManager::logFormat
              (1,"battle_field.cpp","const CMap* CBattle_Field::getMap(int)",0x4a7,
               "Find Map[%d] Error(In Map Maker)(%d/%d) [Map Kind : %s]",*(undefined4 *)(iVar4 + 4),
               uVar2,uVar1,pcVar5);
    iVar4 = 0;
  }
  else {
    iVar6 = get_dungeon_diff((CBattle_Field *)param_1);
    if ((iVar6 == 4) && (*(int *)(iVar4 + 0xb4) != 0)) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if (bVar3) {
      iVar6 = GetCurrentMapInfo((CBattle_Field *)param_1);
      *(undefined4 *)(iVar6 + 4) = *(undefined4 *)(iVar4 + 0xb4);
      iVar4 = G_CDataManager();
      iVar4 = CDataManager::find_map(iVar4);
      if (iVar4 == 0) {
        iVar4 = GetCurrentMapInfo((CBattle_Field *)param_1);
        if (*(char *)(iVar4 + 0xe8) == '\0') {
          pcVar5 = "generalMap";
        }
        else {
          pcVar5 = "layeredMap";
        }
        uVar1 = *(undefined4 *)(param_1 + 100);
        uVar2 = *(undefined4 *)(param_1 + 0x60);
        iVar4 = GetCurrentMapInfo((CBattle_Field *)param_1);
        LogManager::logFormat
                  (1,"battle_field.cpp","const CMap* CBattle_Field::getMap(int)",0x4c4,
                   "Find Map[%d] Error(In Map Maker)(%d/%d) [Map Kind : %s]",
                   *(undefined4 *)(iVar4 + 4),uVar2,uVar1,pcVar5);
        iVar4 = 0;
      }
    }
  }
  return iVar4;
}
```
