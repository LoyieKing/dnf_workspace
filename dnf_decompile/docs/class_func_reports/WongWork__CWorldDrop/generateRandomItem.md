# generateRandomItem

`_ZN8WongWork10CWorldDrop18generateRandomItemERKNS_19stGenerateRefData_tERNS_18stGenerateResult_tE`

`WongWork::CWorldDrop::generateRandomItem(WongWork::stGenerateRefData_t const&, WongWork::stGenerateResult_t&)`

| 类 | 地址 |
|---|---|
| `WongWork::CWorldDrop` | `0x085383b8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085383b8  _ZN8WongWork10CWorldDrop18generateRandomItemERKNS_19stGenerateRefData_tERNS_18stGenerateResult_tE
#           WongWork::CWorldDrop::generateRandomItem(WongWork::stGenerateRefData_t const&, WongWork::stGenerateResult_t&)
# range [0x085383b8, 0x0853855b]
085383b8 +0x000:  push   %ebp
085383b9 +0x001:  mov    %esp,%ebp
085383bb +0x003:  sub    $0x78,%esp
085383be +0x006:  mov    0xc(%ebp),%eax
085383c1 +0x009:  add    $0x34,%eax
085383c4 +0x00c:  mov    %eax,-0x20(%ebp)
085383c7 +0x00f:  mov    0x8(%ebp),%eax
085383ca +0x012:  add    $0x8,%eax
085383cd +0x015:  movl   $&_ZL14gUnicodeBuffer+0xe174,0x8(%esp)
085383d5 +0x01d:  movl   $0x0,0x4(%esp)
085383dd +0x025:  mov    %eax,(%esp)
085383e0 +0x028:  call   085334a4 <_ZN8WongWork21CGenerateRandomNumber14generateNumberEii>  ; WongWork::CGenerateRandomNumber::generateNumber(int, int)
085383e5 +0x02d:  mov    %eax,-0x1c(%ebp)
085383e8 +0x030:  mov    -0x20(%ebp),%eax
085383eb +0x033:  movzbl 0x1(%eax),%eax
085383ef +0x037:  cmp    $0xc7,%al
085383f1 +0x039:  ja     0853855a <+0x1a2>
085383f7 +0x03f:  movl   $0x0,-0x18(%ebp)
085383fe +0x046:  mov    -0x20(%ebp),%eax
08538401 +0x049:  movzbl (%eax),%eax
08538404 +0x04c:  cmp    $0x1,%al
08538406 +0x04e:  jne    0853842c <+0x74>
08538408 +0x050:  mov    -0x20(%ebp),%eax
0853840b +0x053:  movzbl 0x1(%eax),%eax
0853840f +0x057:  movzbl %al,%edx
08538412 +0x05a:  mov    %edx,%eax
08538414 +0x05c:  shl    $0x2,%eax
08538417 +0x05f:  add    %edx,%eax
08538419 +0x061:  shl    $0x2,%eax
0853841c +0x064:  add    $0xfc0,%eax
08538421 +0x069:  add    0x8(%ebp),%eax
08538424 +0x06c:  add    $0xc,%eax
08538427 +0x06f:  mov    %eax,-0x18(%ebp)
0853842a +0x072:  jmp    0853844c <+0x94>
0853842c +0x074:  mov    -0x20(%ebp),%eax
0853842f +0x077:  movzbl 0x1(%eax),%eax
08538433 +0x07b:  movzbl %al,%edx
08538436 +0x07e:  mov    %edx,%eax
08538438 +0x080:  shl    $0x2,%eax
0853843b +0x083:  add    %edx,%eax
0853843d +0x085:  shl    $0x2,%eax
08538440 +0x088:  add    $0x10,%eax
08538443 +0x08b:  add    0x8(%ebp),%eax
08538446 +0x08e:  add    $0x8,%eax
08538449 +0x091:  mov    %eax,-0x18(%ebp)
0853844c +0x094:  mov    -0x18(%ebp),%eax
0853844f +0x097:  mov    (%eax),%edx
08538451 +0x099:  mov    0xc(%ebp),%eax
08538454 +0x09c:  mov    (%eax),%eax
08538456 +0x09e:  mov    %edx,%ecx
08538458 +0x0a0:  imul   %eax,%ecx
0853845b +0x0a3:  mov    $0x51eb851f,%edx
08538460 +0x0a8:  mov    %ecx,%eax
08538462 +0x0aa:  imul   %edx
08538464 +0x0ac:  sar    $0x5,%edx
08538467 +0x0af:  mov    %ecx,%eax
08538469 +0x0b1:  sar    $0x1f,%eax
0853846c +0x0b4:  mov    %edx,%ecx
0853846e +0x0b6:  sub    %eax,%ecx
08538470 +0x0b8:  mov    %ecx,%eax
08538472 +0x0ba:  mov    %eax,-0x14(%ebp)
08538475 +0x0bd:  mov    -0x1c(%ebp),%eax
08538478 +0x0c0:  cmp    -0x14(%ebp),%eax
0853847b +0x0c3:  jg     0853855a <+0x1a2>
08538481 +0x0c9:  mov    -0x18(%ebp),%eax
08538484 +0x0cc:  mov    0x10(%eax),%eax
08538487 +0x0cf:  mov    0x8(%ebp),%edx
0853848a +0x0d2:  add    $0x8,%edx
0853848d +0x0d5:  mov    %eax,0x8(%esp)
08538491 +0x0d9:  movl   $0x1,0x4(%esp)
08538499 +0x0e1:  mov    %edx,(%esp)
0853849c +0x0e4:  call   085334a4 <_ZN8WongWork21CGenerateRandomNumber14generateNumberEii>  ; WongWork::CGenerateRandomNumber::generateNumber(int, int)
085384a1 +0x0e9:  mov    %eax,-0x1c(%ebp)
085384a4 +0x0ec:  movl   $0x0,-0x10(%ebp)
085384ab +0x0f3:  movl   $0x0,-0xc(%ebp)
085384b2 +0x0fa:  jmp    0853853e <+0x186>
085384b7 +0x0ff:  mov    -0xc(%ebp),%eax
085384ba +0x102:  mov    -0x18(%ebp),%edx
085384bd +0x105:  add    $0x4,%edx
085384c0 +0x108:  mov    %eax,0x4(%esp)
085384c4 +0x10c:  mov    %edx,(%esp)
085384c7 +0x10f:  call   0853bab2 <_GLOBAL__I__ZN8WongWork20CGeneratorCommonData15getGoldGenTableEh+0x1d3e>  ; global constructors keyed to WongWork::CGeneratorCommonData::getGoldGenTable(unsigned char)+0x1d3e
085384cc +0x114:  mov    0x4(%eax),%eax
085384cf +0x117:  add    %eax,-0x10(%ebp)
085384d2 +0x11a:  mov    -0x1c(%ebp),%eax
085384d5 +0x11d:  cmp    -0x10(%ebp),%eax
085384d8 +0x120:  jge    0853853a <+0x182>
085384da +0x122:  lea    -0x5d(%ebp),%eax
085384dd +0x125:  mov    %eax,(%esp)
085384e0 +0x128:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
085384e5 +0x12d:  mov    -0xc(%ebp),%eax
085384e8 +0x130:  mov    -0x18(%ebp),%edx
085384eb +0x133:  add    $0x4,%edx
085384ee +0x136:  mov    %eax,0x4(%esp)
085384f2 +0x13a:  mov    %edx,(%esp)
085384f5 +0x13d:  call   0853bab2 <_GLOBAL__I__ZN8WongWork20CGeneratorCommonData15getGoldGenTableEh+0x1d3e>  ; global constructors keyed to WongWork::CGeneratorCommonData::getGoldGenTable(unsigned char)+0x1d3e
085384fa +0x142:  mov    (%eax),%eax
085384fc +0x144:  mov    %eax,-0x5b(%ebp)
085384ff +0x147:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08538504 +0x14c:  mov    0xc(%eax),%eax
08538507 +0x14f:  movl   $0x1,0xc(%esp)
0853850f +0x157:  lea    -0x5d(%ebp),%edx
08538512 +0x15a:  mov    %edx,0x8(%esp)
08538516 +0x15e:  movl   $0x1,0x4(%esp)
0853851e +0x166:  mov    %eax,(%esp)
08538521 +0x169:  call   08511fb8 <_ZN9CItemList11create_itemE21ENUM_ITEM_CREATE_TYPER10Inven_Itemi>  ; CItemList::create_item(ENUM_ITEM_CREATE_TYPE, Inven_Item&, int)
08538526 +0x16e:  mov    0x10(%ebp),%eax
08538529 +0x171:  lea    -0x5d(%ebp),%edx
0853852c +0x174:  mov    %edx,0x4(%esp)
08538530 +0x178:  mov    %eax,(%esp)
08538533 +0x17b:  call   08237262 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc90c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc90c
08538538 +0x180:  jmp    0853855a <+0x1a2>
0853853a +0x182:  addl   $0x1,-0xc(%ebp)
0853853e +0x186:  mov    -0x18(%ebp),%eax
08538541 +0x189:  add    $0x4,%eax
08538544 +0x18c:  mov    %eax,(%esp)
08538547 +0x18f:  call   0853ba96 <_GLOBAL__I__ZN8WongWork20CGeneratorCommonData15getGoldGenTableEh+0x1d22>  ; global constructors keyed to WongWork::CGeneratorCommonData::getGoldGenTable(unsigned char)+0x1d22
0853854c +0x194:  cmp    -0xc(%ebp),%eax
0853854f +0x197:  setg   %al
08538552 +0x19a:  test   %al,%al
08538554 +0x19c:  jne    085384b7 <+0xff>
0853855a +0x1a2:  leave
0853855b +0x1a3:  ret
```

## 反编译 C

```c
// WongWork::CWorldDrop::generateRandomItem @ 0x85383b8

/* WongWork::CWorldDrop::generateRandomItem(WongWork::stGenerateRefData_t const&,
   WongWork::stGenerateResult_t&) */

void __thiscall
WongWork::CWorldDrop::generateRandomItem
          (CWorldDrop *this,stGenerateRefData_t *param_1,stGenerateResult_t *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  Inven_Item local_61 [2];
  undefined4 local_5f;
  stGenerateRefData_t *local_24;
  int local_20;
  CWorldDrop *local_1c;
  int local_18;
  int local_14;
  uint local_10;
  
  local_24 = param_1 + 0x34;
  local_20 = CGenerateRandomNumber::generateNumber((CGenerateRandomNumber *)(this + 8),0,100000);
  if ((byte)local_24[1] < 200) {
    if (*local_24 == (stGenerateRefData_t)0x1) {
      iVar2 = (uint)(byte)local_24[1] * 0x14 + 0xfcc;
    }
    else {
      iVar2 = (uint)(byte)local_24[1] * 0x14 + 0x18;
    }
    local_1c = this + iVar2;
    local_18 = (*(int *)local_1c * *(int *)param_1) / 100;
    if (local_20 <= local_18) {
      local_20 = CGenerateRandomNumber::generateNumber
                           ((CGenerateRandomNumber *)(this + 8),1,*(int *)(local_1c + 0x10));
      local_14 = 0;
      local_10 = 0;
      while (iVar2 = std::vector<WorldDropItemChunck,std::allocator<WorldDropItemChunck>>::size
                               ((vector<WorldDropItemChunck,std::allocator<WorldDropItemChunck>> *)
                                (local_1c + 4)), (int)local_10 < iVar2) {
        iVar2 = std::vector<WorldDropItemChunck,std::allocator<WorldDropItemChunck>>::operator[]
                          ((vector<WorldDropItemChunck,std::allocator<WorldDropItemChunck>> *)
                           (local_1c + 4),local_10);
        local_14 = local_14 + *(int *)(iVar2 + 4);
        if (local_20 < local_14) {
          Inven_Item::Inven_Item(local_61);
          puVar1 = (undefined4 *)
                   std::vector<WorldDropItemChunck,std::allocator<WorldDropItemChunck>>::operator[]
                             ((vector<WorldDropItemChunck,std::allocator<WorldDropItemChunck>> *)
                              (local_1c + 4),local_10);
          local_5f = *puVar1;
          iVar2 = G_CDataManager();
          CItemList::create_item(*(CItemList **)(iVar2 + 0xc),1,local_61,1);
          std::vector<Inven_Item,std::allocator<Inven_Item>>::push_back
                    ((vector<Inven_Item,std::allocator<Inven_Item>> *)param_2,local_61);
          return;
        }
        local_10 = local_10 + 1;
      }
    }
  }
  return;
}
```
