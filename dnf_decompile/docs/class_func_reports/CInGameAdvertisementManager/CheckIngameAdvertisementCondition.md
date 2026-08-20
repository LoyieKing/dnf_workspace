# CheckIngameAdvertisementCondition

`_ZN27CInGameAdvertisementManager33CheckIngameAdvertisementConditionEP5CUserR20stNotifyIngameADInfoi`

`CInGameAdvertisementManager::CheckIngameAdvertisementCondition(CUser*, stNotifyIngameADInfo&, int)`

| 类 | 地址 |
|---|---|
| `CInGameAdvertisementManager` | `0x080fcfa8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080fcfa8  _ZN27CInGameAdvertisementManager33CheckIngameAdvertisementConditionEP5CUserR20stNotifyIngameADInfoi
#           CInGameAdvertisementManager::CheckIngameAdvertisementCondition(CUser*, stNotifyIngameADInfo&, int)
# range [0x080fcfa8, 0x080fd121]
080fcfa8 +0x000:  push   %ebp
080fcfa9 +0x001:  mov    %esp,%ebp
080fcfab +0x003:  push   %edi
080fcfac +0x004:  push   %esi
080fcfad +0x005:  push   %ebx
080fcfae +0x006:  sub    $0x67c,%esp
080fcfb4 +0x00c:  lea    -0x38(%ebp),%eax
080fcfb7 +0x00f:  mov    %eax,(%esp)
080fcfba +0x012:  call   080fe2f4 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x620>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x620
080fcfbf +0x017:  mov    0x14(%ebp),%eax
080fcfc2 +0x01a:  mov    %ax,-0x2a(%ebp)
080fcfc6 +0x01e:  mov    0x8(%ebp),%edx
080fcfc9 +0x021:  lea    -0x3c(%ebp),%eax
080fcfcc +0x024:  lea    -0x2a(%ebp),%ecx
080fcfcf +0x027:  mov    %ecx,0x8(%esp)
080fcfd3 +0x02b:  mov    %edx,0x4(%esp)
080fcfd7 +0x02f:  mov    %eax,(%esp)
080fcfda +0x032:  call   080fe366 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x692>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x692
080fcfdf +0x037:  sub    $0x4,%esp
080fcfe2 +0x03a:  jmp    080fd05c <+0xb4>
080fcfe4 +0x03c:  lea    -0x3c(%ebp),%eax
080fcfe7 +0x03f:  mov    %eax,(%esp)
080fcfea +0x042:  call   080fe3f0 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x71c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x71c
080fcfef +0x047:  mov    0x4(%eax),%eax
080fcff2 +0x04a:  mov    %eax,-0x1c(%ebp)
080fcff5 +0x04d:  mov    -0x1c(%ebp),%eax
080fcff8 +0x050:  mov    %eax,0x8(%esp)
080fcffc +0x054:  mov    0xc(%ebp),%eax
080fcfff +0x057:  mov    %eax,0x4(%esp)
080fd003 +0x05b:  mov    0x8(%ebp),%eax
080fd006 +0x05e:  mov    %eax,(%esp)
080fd009 +0x061:  call   080fcd2e <_ZN27CInGameAdvertisementManager14checkConditionEP5CUserP24CAdvertisementExposeInfo>  ; CInGameAdvertisementManager::checkCondition(CUser*, CAdvertisementExposeInfo*)
080fd00e +0x066:  test   %al,%al
080fd010 +0x068:  je     080fd051 <+0xa9>
080fd012 +0x06a:  mov    -0x1c(%ebp),%eax
080fd015 +0x06d:  mov    %eax,(%esp)
080fd018 +0x070:  call   080fdd2c <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x58>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x58
080fd01d +0x075:  add    $0x210,%eax
080fd022 +0x07a:  movl   $0x63c,0x8(%esp)
080fd02a +0x082:  mov    %eax,0x4(%esp)
080fd02e +0x086:  lea    -0x678(%ebp),%eax
080fd034 +0x08c:  mov    %eax,(%esp)
080fd037 +0x08f:  call   0807d8a0 <_init+0x198>
080fd03c +0x094:  lea    -0x678(%ebp),%eax
080fd042 +0x09a:  mov    %eax,0x4(%esp)
080fd046 +0x09e:  lea    -0x38(%ebp),%eax
080fd049 +0x0a1:  mov    %eax,(%esp)
080fd04c +0x0a4:  call   080fe3fe <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x72a>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x72a
080fd051 +0x0a9:  lea    -0x3c(%ebp),%eax
080fd054 +0x0ac:  mov    %eax,(%esp)
080fd057 +0x0af:  call   080fe3d2 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x6fe>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x6fe
080fd05c +0x0b4:  mov    0x14(%ebp),%eax
080fd05f +0x0b7:  mov    %ax,-0x22(%ebp)
080fd063 +0x0bb:  mov    0x8(%ebp),%edx
080fd066 +0x0be:  lea    -0x28(%ebp),%eax
080fd069 +0x0c1:  lea    -0x22(%ebp),%ecx
080fd06c +0x0c4:  mov    %ecx,0x8(%esp)
080fd070 +0x0c8:  mov    %edx,0x4(%esp)
080fd074 +0x0cc:  mov    %eax,(%esp)
080fd077 +0x0cf:  call   080fe392 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x6be>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x6be
080fd07c +0x0d4:  sub    $0x4,%esp
080fd07f +0x0d7:  lea    -0x28(%ebp),%eax
080fd082 +0x0da:  mov    %eax,0x4(%esp)
080fd086 +0x0de:  lea    -0x3c(%ebp),%eax
080fd089 +0x0e1:  mov    %eax,(%esp)
080fd08c +0x0e4:  call   080fe3be <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x6ea>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x6ea
080fd091 +0x0e9:  test   %al,%al
080fd093 +0x0eb:  jne    080fcfe4 <+0x3c>
080fd099 +0x0f1:  lea    -0x38(%ebp),%eax
080fd09c +0x0f4:  mov    %eax,(%esp)
080fd09f +0x0f7:  call   080fe474 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x7a0>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x7a0
080fd0a4 +0x0fc:  mov    %eax,-0x20(%ebp)
080fd0a7 +0x0ff:  cmpl   $0x0,-0x20(%ebp)
080fd0ab +0x103:  jne    080fd0b4 <+0x10c>
080fd0ad +0x105:  mov    $0x0,%ebx
080fd0b2 +0x10a:  jmp    080fd109 <+0x161>
080fd0b4 +0x10c:  mov    -0x20(%ebp),%eax
080fd0b7 +0x10f:  mov    %eax,0x4(%esp)
080fd0bb +0x113:  mov    0x8(%ebp),%eax
080fd0be +0x116:  mov    %eax,(%esp)
080fd0c1 +0x119:  call   080fdd34 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x60>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x60
080fd0c6 +0x11e:  mov    %eax,0x4(%esp)
080fd0ca +0x122:  lea    -0x38(%ebp),%eax
080fd0cd +0x125:  mov    %eax,(%esp)
080fd0d0 +0x128:  call   080fe496 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x7c2>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x7c2
080fd0d5 +0x12d:  mov    0x10(%ebp),%edx
080fd0d8 +0x130:  mov    %eax,%ebx
080fd0da +0x132:  mov    $0x18f,%eax
080fd0df +0x137:  mov    %edx,%edi
080fd0e1 +0x139:  mov    %ebx,%esi
080fd0e3 +0x13b:  mov    %eax,%ecx
080fd0e5 +0x13d:  rep movsl %ds:(%esi),%es:(%edi)
080fd0e7 +0x13f:  mov    $0x1,%ebx
080fd0ec +0x144:  jmp    080fd109 <+0x161>
080fd0ee +0x146:  mov    %edx,%ebx
080fd0f0 +0x148:  mov    %eax,%esi
080fd0f2 +0x14a:  lea    -0x38(%ebp),%eax
080fd0f5 +0x14d:  mov    %eax,(%esp)
080fd0f8 +0x150:  call   080fe308 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x634>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x634
080fd0fd +0x155:  mov    %esi,%eax
080fd0ff +0x157:  mov    %ebx,%edx
080fd101 +0x159:  mov    %eax,(%esp)
080fd104 +0x15c:  call   08ae3750 <_Unwind_Resume>
080fd109 +0x161:  lea    -0x38(%ebp),%eax
080fd10c +0x164:  mov    %eax,(%esp)
080fd10f +0x167:  call   080fe308 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x634>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x634
080fd114 +0x16c:  mov    %ebx,%eax
080fd116 +0x16e:  lea    -0xc(%ebp),%esp
080fd119 +0x171:  add    $0x0,%esp
080fd11c +0x174:  pop    %ebx
080fd11d +0x175:  pop    %esi
080fd11e +0x176:  pop    %edi
080fd11f +0x177:  pop    %ebp
080fd120 +0x178:  ret
080fd121 +0x179:  nop
```

## 反编译 C

```c
// CInGameAdvertisementManager::CheckIngameAdvertisementCondition @ 0x80fcfa8

/* CInGameAdvertisementManager::CheckIngameAdvertisementCondition(CUser*, stNotifyIngameADInfo&,
   int) */

undefined4 __thiscall
CInGameAdvertisementManager::CheckIngameAdvertisementCondition
          (CInGameAdvertisementManager *this,CUser *param_1,stNotifyIngameADInfo *param_2,
          int param_3)

{
  char cVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  byte bVar6;
  stNotifyIngameADInfo local_67c [1596];
  multimap<short,CAdvertisementExposeInfo*,std::less<short>,std::allocator<std::pair<short_const,CAdvertisementExposeInfo*>>>
  local_40 [4];
  vector<stNotifyIngameADInfo,std::allocator<stNotifyIngameADInfo>> local_3c [14];
  undefined2 local_2e;
  multimap<short,CAdvertisementExposeInfo*,std::less<short>,std::allocator<std::pair<short_const,CAdvertisementExposeInfo*>>>
  local_2c [6];
  undefined2 local_26;
  int local_24;
  CAdvertisementExposeInfo *local_20;
  
  bVar6 = 0;
  std::vector<stNotifyIngameADInfo,std::allocator<stNotifyIngameADInfo>>::vector(local_3c);
  local_2e = (short)param_3;
                    /* try { // try from 080fcfda to 080fd0d4 has its CatchHandler @ 080fd0ee */
  std::
  multimap<short,CAdvertisementExposeInfo*,std::less<short>,std::allocator<std::pair<short_const,CAdvertisementExposeInfo*>>>
  ::lower_bound(local_40,(short *)this);
  while( true ) {
    local_26 = (short)param_3;
    std::
    multimap<short,CAdvertisementExposeInfo*,std::less<short>,std::allocator<std::pair<short_const,CAdvertisementExposeInfo*>>>
    ::upper_bound(local_2c,(short *)this);
    cVar1 = std::_Rb_tree_iterator<std::pair<short_const,CAdvertisementExposeInfo*>>::operator!=
                      ((_Rb_tree_iterator<std::pair<short_const,CAdvertisementExposeInfo*>> *)
                       local_40,(_Rb_tree_iterator *)local_2c);
    if (cVar1 == '\0') break;
    iVar4 = std::_Rb_tree_iterator<std::pair<short_const,CAdvertisementExposeInfo*>>::operator->
                      ((_Rb_tree_iterator<std::pair<short_const,CAdvertisementExposeInfo*>> *)
                       local_40);
    local_20 = *(CAdvertisementExposeInfo **)(iVar4 + 4);
    cVar1 = checkCondition(this,param_1,local_20);
    if (cVar1 != '\0') {
      iVar4 = CAdvertisementExposeInfo::getExposeCondition(local_20);
      memcpy(local_67c,(void *)(iVar4 + 0x210),0x63c);
      std::vector<stNotifyIngameADInfo,std::allocator<stNotifyIngameADInfo>>::push_back
                (local_3c,local_67c);
    }
    std::_Rb_tree_iterator<std::pair<short_const,CAdvertisementExposeInfo*>>::operator++
              ((_Rb_tree_iterator<std::pair<short_const,CAdvertisementExposeInfo*>> *)local_40);
  }
  local_24 = std::vector<stNotifyIngameADInfo,std::allocator<stNotifyIngameADInfo>>::size(local_3c);
  if (local_24 == 0) {
    uVar5 = 0;
  }
  else {
    uVar2 = RandNum(this,local_24);
    puVar3 = (undefined4 *)
             std::vector<stNotifyIngameADInfo,std::allocator<stNotifyIngameADInfo>>::at
                       (local_3c,uVar2);
    for (iVar4 = 399; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)param_2 = *puVar3;
      puVar3 = puVar3 + (uint)bVar6 * -2 + 1;
      param_2 = param_2 + (uint)bVar6 * -8 + 4;
    }
    uVar5 = 1;
  }
  std::vector<stNotifyIngameADInfo,std::allocator<stNotifyIngameADInfo>>::~vector(local_3c);
  return uVar5;
}
```
