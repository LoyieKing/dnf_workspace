# init

`_ZN9CItemList4initEv`

`CItemList::init()`

| 类 | 地址 |
|---|---|
| `CItemList` | `0x08510ffa` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08510ffa  _ZN9CItemList4initEv
#           CItemList::init()
# range [0x08510ffa, 0x0851129d]
08510ffa +0x000:  push   %ebp
08510ffb +0x001:  mov    %esp,%ebp
08510ffd +0x003:  push   %edi
08510ffe +0x004:  push   %esi
08510fff +0x005:  push   %ebx
08511000 +0x006:  sub    $0x3c,%esp
08511003 +0x009:  movl   $0xfb8,(%esp)
0851100a +0x010:  call   08722dc0 <_Znaj>  ; operator new[](unsigned int)
0851100f +0x015:  mov    %eax,%ebx
08511011 +0x017:  mov    %ebx,%eax
08511013 +0x019:  movl   $0xc9,(%eax)
08511019 +0x01f:  mov    %ebx,%eax
0851101b +0x021:  lea    0x4(%eax),%edi
0851101e +0x024:  mov    %edi,-0x24(%ebp)
08511021 +0x027:  mov    $0xc8,%esi
08511026 +0x02c:  jmp    0851103a <+0x40>
08511028 +0x02e:  mov    -0x24(%ebp),%eax
0851102b +0x031:  mov    %eax,(%esp)
0851102e +0x034:  call   0851830e <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x4943>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x4943
08511033 +0x039:  addl   $0x14,-0x24(%ebp)
08511037 +0x03d:  sub    $0x1,%esi
0851103a +0x040:  cmp    $0xffffffff,%esi
0851103d +0x043:  setne  %al
08511040 +0x046:  test   %al,%al
08511042 +0x048:  jne    08511028 <+0x2e>
08511044 +0x04a:  jmp    08511095 <+0x9b>
08511046 +0x04c:  mov    %edx,-0x1c(%ebp)
08511049 +0x04f:  mov    %eax,-0x20(%ebp)
0851104c +0x052:  test   %edi,%edi
0851104e +0x054:  je     08511077 <+0x7d>
08511050 +0x056:  mov    $0xc8,%eax
08511055 +0x05b:  sub    %esi,%eax
08511057 +0x05d:  mov    %eax,%edx
08511059 +0x05f:  mov    %edx,%eax
0851105b +0x061:  shl    $0x2,%eax
0851105e +0x064:  add    %edx,%eax
08511060 +0x066:  shl    $0x2,%eax
08511063 +0x069:  lea    (%edi,%eax,1),%esi
08511066 +0x06c:  cmp    %edi,%esi
08511068 +0x06e:  je     08511077 <+0x7d>
0851106a +0x070:  sub    $0x14,%esi
0851106d +0x073:  mov    %esi,(%esp)
08511070 +0x076:  call   08515282 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x18b7>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x18b7
08511075 +0x07b:  jmp    08511066 <+0x6c>
08511077 +0x07d:  mov    -0x20(%ebp),%eax
0851107a +0x080:  mov    -0x1c(%ebp),%edx
0851107d +0x083:  mov    %edx,%esi
0851107f +0x085:  mov    %eax,%edi
08511081 +0x087:  mov    %ebx,(%esp)
08511084 +0x08a:  call   08724bb0 <_ZdaPv>  ; operator delete[](void*)
08511089 +0x08f:  mov    %edi,%eax
0851108b +0x091:  mov    %esi,%edx
0851108d +0x093:  mov    %eax,(%esp)
08511090 +0x096:  call   08ae3750 <_Unwind_Resume>
08511095 +0x09b:  mov    %ebx,%eax
08511097 +0x09d:  lea    0x4(%eax),%edx
0851109a +0x0a0:  mov    0x8(%ebp),%eax
0851109d +0x0a3:  mov    %edx,(%eax)
0851109f +0x0a5:  mov    0x8(%ebp),%eax
085110a2 +0x0a8:  mov    (%eax),%eax
085110a4 +0x0aa:  test   %eax,%eax
085110a6 +0x0ac:  jne    085110de <+0xe4>
085110a8 +0x0ae:  movl   $"m_pGradeItemList = new ITEM_LIST[ITEM_GRADE_COUNT] fail",0x10(%esp)
085110b0 +0x0b6:  movl   $0x78c,0xc(%esp)
085110b8 +0x0be:  movl   $&_ZZN9CItemList4initEvE19__PRETTY_FUNCTION__,0x8(%esp)
085110c0 +0x0c6:  movl   $"item.cpp",0x4(%esp)
085110c8 +0x0ce:  movl   $0x1,(%esp)
085110cf +0x0d5:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
085110d4 +0x0da:  mov    $0x0,%eax
085110d9 +0x0df:  jmp    08511296 <+0x29c>
085110de +0x0e4:  mov    0x8(%ebp),%eax
085110e1 +0x0e7:  mov    %eax,(%esp)
085110e4 +0x0ea:  call   08511738 <_ZN9CItemList15load_item_filesEv>  ; CItemList::load_item_files()
085110e9 +0x0ef:  xor    $0x1,%eax
085110ec +0x0f2:  test   %al,%al
085110ee +0x0f4:  je     08511126 <+0x12c>
085110f0 +0x0f6:  movl   $"load_item_files() fail",0x10(%esp)
085110f8 +0x0fe:  movl   $0x792,0xc(%esp)
08511100 +0x106:  movl   $&_ZZN9CItemList4initEvE19__PRETTY_FUNCTION__,0x8(%esp)
08511108 +0x10e:  movl   $"item.cpp",0x4(%esp)
08511110 +0x116:  movl   $0x1,(%esp)
08511117 +0x11d:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0851111c +0x122:  mov    $0x0,%eax
08511121 +0x127:  jmp    08511296 <+0x29c>
08511126 +0x12c:  mov    &_ZN10GlobalData19s_pCompoundBindCubeE,%eax
0851112b +0x131:  mov    %eax,(%esp)
0851112e +0x134:  call   0832de18 <_ZN14ExtreamDungeon25CCompound_ExtreamDun_Item13after_addItemEv>  ; ExtreamDungeon::CCompound_ExtreamDun_Item::after_addItem()
08511133 +0x139:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08511138 +0x13e:  mov    %eax,(%esp)
0851113b +0x141:  call   08513fe6 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x61b>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x61b
08511140 +0x146:  mov    %eax,0x4(%esp)
08511144 +0x14a:  mov    0x8(%ebp),%eax
08511147 +0x14d:  mov    %eax,(%esp)
0851114a +0x150:  call   085123da <_ZN9CItemList15Load_Goods_FileEPKc>  ; CItemList::Load_Goods_File(char const*)
0851114f +0x155:  xor    $0x1,%eax
08511152 +0x158:  test   %al,%al
08511154 +0x15a:  je     0851118c <+0x192>
08511156 +0x15c:  movl   $"Load_Goods_File() of ItemVendingMachine fail ",0x10(%esp)
0851115e +0x164:  movl   $0x7a5,0xc(%esp)
08511166 +0x16c:  movl   $&_ZZN9CItemList4initEvE19__PRETTY_FUNCTION__,0x8(%esp)
0851116e +0x174:  movl   $"item.cpp",0x4(%esp)
08511176 +0x17c:  movl   $0x1,(%esp)
0851117d +0x183:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08511182 +0x188:  mov    $0x0,%eax
08511187 +0x18d:  jmp    08511296 <+0x29c>
0851118c +0x192:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08511191 +0x197:  mov    %eax,(%esp)
08511194 +0x19a:  call   08513ffe <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x633>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x633
08511199 +0x19f:  mov    %eax,0x4(%esp)
0851119d +0x1a3:  mov    0x8(%ebp),%eax
085111a0 +0x1a6:  mov    %eax,(%esp)
085111a3 +0x1a9:  call   085123da <_ZN9CItemList15Load_Goods_FileEPKc>  ; CItemList::Load_Goods_File(char const*)
085111a8 +0x1ae:  xor    $0x1,%eax
085111ab +0x1b1:  test   %al,%al
085111ad +0x1b3:  je     085111e5 <+0x1eb>
085111af +0x1b5:  movl   $"SuddenShopFileName1() of ItemVendingMachine fail ",0x10(%esp)
085111b7 +0x1bd:  movl   $0x7c8,0xc(%esp)
085111bf +0x1c5:  movl   $&_ZZN9CItemList4initEvE19__PRETTY_FUNCTION__,0x8(%esp)
085111c7 +0x1cd:  movl   $"item.cpp",0x4(%esp)
085111cf +0x1d5:  movl   $0x1,(%esp)
085111d6 +0x1dc:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
085111db +0x1e1:  mov    $0x0,%eax
085111e0 +0x1e6:  jmp    08511296 <+0x29c>
085111e5 +0x1eb:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
085111ea +0x1f0:  mov    %eax,(%esp)
085111ed +0x1f3:  call   08514016 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x64b>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x64b
085111f2 +0x1f8:  mov    %eax,0x4(%esp)
085111f6 +0x1fc:  mov    0x8(%ebp),%eax
085111f9 +0x1ff:  mov    %eax,(%esp)
085111fc +0x202:  call   085123da <_ZN9CItemList15Load_Goods_FileEPKc>  ; CItemList::Load_Goods_File(char const*)
08511201 +0x207:  xor    $0x1,%eax
08511204 +0x20a:  test   %al,%al
08511206 +0x20c:  je     0851123b <+0x241>
08511208 +0x20e:  movl   $"SuddenShopFileName2() of ItemVendingMachine fail ",0x10(%esp)
08511210 +0x216:  movl   $0x7ce,0xc(%esp)
08511218 +0x21e:  movl   $&_ZZN9CItemList4initEvE19__PRETTY_FUNCTION__,0x8(%esp)
08511220 +0x226:  movl   $"item.cpp",0x4(%esp)
08511228 +0x22e:  movl   $0x1,(%esp)
0851122f +0x235:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08511234 +0x23a:  mov    $0x0,%eax
08511239 +0x23f:  jmp    08511296 <+0x29c>
0851123b +0x241:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08511240 +0x246:  mov    %eax,(%esp)
08511243 +0x249:  call   0851402e <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x663>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x663
08511248 +0x24e:  mov    %eax,0x4(%esp)
0851124c +0x252:  mov    0x8(%ebp),%eax
0851124f +0x255:  mov    %eax,(%esp)
08511252 +0x258:  call   085123da <_ZN9CItemList15Load_Goods_FileEPKc>  ; CItemList::Load_Goods_File(char const*)
08511257 +0x25d:  xor    $0x1,%eax
0851125a +0x260:  test   %al,%al
0851125c +0x262:  je     08511291 <+0x297>
0851125e +0x264:  movl   $"SuddenShopFileName3() of ItemVendingMachine fail ",0x10(%esp)
08511266 +0x26c:  movl   $0x7d4,0xc(%esp)
0851126e +0x274:  movl   $&_ZZN9CItemList4initEvE19__PRETTY_FUNCTION__,0x8(%esp)
08511276 +0x27c:  movl   $"item.cpp",0x4(%esp)
0851127e +0x284:  movl   $0x1,(%esp)
08511285 +0x28b:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0851128a +0x290:  mov    $0x0,%eax
0851128f +0x295:  jmp    08511296 <+0x29c>
08511291 +0x297:  mov    $0x1,%eax
08511296 +0x29c:  add    $0x3c,%esp
08511299 +0x29f:  pop    %ebx
0851129a +0x2a0:  pop    %esi
0851129b +0x2a1:  pop    %edi
0851129c +0x2a2:  pop    %ebp
0851129d +0x2a3:  ret
```

## 反编译 C

```c
// CItemList::init @ 0x8510ffa

/* CItemList::init() */

undefined4 __thiscall CItemList::init(CItemList *this)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  CDataManager *pCVar4;
  char *pcVar5;
  int iVar6;
  hash_map<int,CItem*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CItem*>> *local_28;
  
  puVar2 = operator_new__(0xfb8);
  *puVar2 = 0xc9;
  local_28 = (hash_map<int,CItem*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CItem*>> *)
             (puVar2 + 1);
  for (iVar6 = 200; iVar6 != -1; iVar6 = iVar6 + -1) {
                    /* try { // try from 0851102e to 08511032 has its CatchHandler @ 08511046 */
    __gnu_cxx::hash_map<int,CItem*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CItem*>>::
    hash_map(local_28);
    local_28 = local_28 + 0x14;
  }
  *(undefined4 **)this = puVar2 + 1;
  if (*(int *)this == 0) {
    LogManager::logFormat
              (1,"item.cpp","bool CItemList::init()",0x78c,
               "m_pGradeItemList = new ITEM_LIST[ITEM_GRADE_COUNT] fail");
    uVar3 = 0;
  }
  else {
    cVar1 = load_item_files(this);
    if (cVar1 == '\x01') {
      ExtreamDungeon::CCompound_ExtreamDun_Item::after_addItem();
      pCVar4 = (CDataManager *)G_CDataManager();
      pcVar5 = (char *)CDataManager::GetCeraShopGoodsName(pCVar4);
      cVar1 = Load_Goods_File(this,pcVar5);
      if (cVar1 == '\x01') {
        pCVar4 = (CDataManager *)G_CDataManager();
        pcVar5 = (char *)CDataManager::SuddenShopFileName1(pCVar4);
        cVar1 = Load_Goods_File(this,pcVar5);
        if (cVar1 == '\x01') {
          pCVar4 = (CDataManager *)G_CDataManager();
          pcVar5 = (char *)CDataManager::SuddenShopFileName2(pCVar4);
          cVar1 = Load_Goods_File(this,pcVar5);
          if (cVar1 == '\x01') {
            pCVar4 = (CDataManager *)G_CDataManager();
            pcVar5 = (char *)CDataManager::SuddenShopFileName3(pCVar4);
            cVar1 = Load_Goods_File(this,pcVar5);
            if (cVar1 == '\x01') {
              uVar3 = 1;
            }
            else {
              LogManager::logFormat
                        (1,"item.cpp","bool CItemList::init()",0x7d4,
                         "SuddenShopFileName3() of ItemVendingMachine fail ");
              uVar3 = 0;
            }
          }
          else {
            LogManager::logFormat
                      (1,"item.cpp","bool CItemList::init()",0x7ce,
                       "SuddenShopFileName2() of ItemVendingMachine fail ");
            uVar3 = 0;
          }
        }
        else {
          LogManager::logFormat
                    (1,"item.cpp","bool CItemList::init()",0x7c8,
                     "SuddenShopFileName1() of ItemVendingMachine fail ");
          uVar3 = 0;
        }
      }
      else {
        LogManager::logFormat
                  (1,"item.cpp","bool CItemList::init()",0x7a5,
                   "Load_Goods_File() of ItemVendingMachine fail ");
        uVar3 = 0;
      }
    }
    else {
      LogManager::logFormat(1,"item.cpp","bool CItemList::init()",0x792,"load_item_files() fail");
      uVar3 = 0;
    }
  }
  return uVar3;
}
```
