# _SetClearedQuest

`_ZN22CEventCharacterHandler16_SetClearedQuestEP5CUser`

`CEventCharacterHandler::_SetClearedQuest(CUser*)`

| 类 | 地址 |
|---|---|
| `CEventCharacterHandler` | `0x0848e652` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0848e652  _ZN22CEventCharacterHandler16_SetClearedQuestEP5CUser
#           CEventCharacterHandler::_SetClearedQuest(CUser*)
# range [0x0848e652, 0x0848e7d5]
0848e652 +0x000:  push   %ebp
0848e653 +0x001:  mov    %esp,%ebp
0848e655 +0x003:  sub    $0x18,%esp
0848e658 +0x006:  mov    0xc(%ebp),%eax
0848e65b +0x009:  mov    %eax,(%esp)
0848e65e +0x00c:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
0848e663 +0x011:  test   %eax,%eax
0848e665 +0x013:  sete   %al
0848e668 +0x016:  test   %al,%al
0848e66a +0x018:  je     0848e68f <+0x3d>
0848e66c +0x01a:  mov    0xc(%ebp),%eax
0848e66f +0x01d:  mov    %eax,(%esp)
0848e672 +0x020:  call   0814aa5e <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x7fd>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x7fd
0848e677 +0x025:  add    $0x4,%eax
0848e67a +0x028:  movl   $0x37f,0x4(%esp)
0848e682 +0x030:  mov    %eax,(%esp)
0848e685 +0x033:  call   0808ba78 <_ZN8WongWork11CQuestClear15setClearedQuestEj>  ; WongWork::CQuestClear::setClearedQuest(unsigned int)
0848e68a +0x038:  jmp    0848e7d4 <+0x182>
0848e68f +0x03d:  mov    0xc(%ebp),%eax
0848e692 +0x040:  mov    %eax,(%esp)
0848e695 +0x043:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
0848e69a +0x048:  cmp    $0x1,%eax
0848e69d +0x04b:  sete   %al
0848e6a0 +0x04e:  test   %al,%al
0848e6a2 +0x050:  je     0848e6c7 <+0x75>
0848e6a4 +0x052:  mov    0xc(%ebp),%eax
0848e6a7 +0x055:  mov    %eax,(%esp)
0848e6aa +0x058:  call   0814aa5e <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x7fd>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x7fd
0848e6af +0x05d:  add    $0x4,%eax
0848e6b2 +0x060:  movl   $0x382,0x4(%esp)
0848e6ba +0x068:  mov    %eax,(%esp)
0848e6bd +0x06b:  call   0808ba78 <_ZN8WongWork11CQuestClear15setClearedQuestEj>  ; WongWork::CQuestClear::setClearedQuest(unsigned int)
0848e6c2 +0x070:  jmp    0848e7d4 <+0x182>
0848e6c7 +0x075:  mov    0xc(%ebp),%eax
0848e6ca +0x078:  mov    %eax,(%esp)
0848e6cd +0x07b:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
0848e6d2 +0x080:  cmp    $0x2,%eax
0848e6d5 +0x083:  sete   %al
0848e6d8 +0x086:  test   %al,%al
0848e6da +0x088:  je     0848e6ff <+0xad>
0848e6dc +0x08a:  mov    0xc(%ebp),%eax
0848e6df +0x08d:  mov    %eax,(%esp)
0848e6e2 +0x090:  call   0814aa5e <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x7fd>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x7fd
0848e6e7 +0x095:  add    $0x4,%eax
0848e6ea +0x098:  movl   $0x380,0x4(%esp)
0848e6f2 +0x0a0:  mov    %eax,(%esp)
0848e6f5 +0x0a3:  call   0808ba78 <_ZN8WongWork11CQuestClear15setClearedQuestEj>  ; WongWork::CQuestClear::setClearedQuest(unsigned int)
0848e6fa +0x0a8:  jmp    0848e7d4 <+0x182>
0848e6ff +0x0ad:  mov    0xc(%ebp),%eax
0848e702 +0x0b0:  mov    %eax,(%esp)
0848e705 +0x0b3:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
0848e70a +0x0b8:  cmp    $0x3,%eax
0848e70d +0x0bb:  sete   %al
0848e710 +0x0be:  test   %al,%al
0848e712 +0x0c0:  je     0848e737 <+0xe5>
0848e714 +0x0c2:  mov    0xc(%ebp),%eax
0848e717 +0x0c5:  mov    %eax,(%esp)
0848e71a +0x0c8:  call   0814aa5e <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x7fd>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x7fd
0848e71f +0x0cd:  add    $0x4,%eax
0848e722 +0x0d0:  movl   $0x383,0x4(%esp)
0848e72a +0x0d8:  mov    %eax,(%esp)
0848e72d +0x0db:  call   0808ba78 <_ZN8WongWork11CQuestClear15setClearedQuestEj>  ; WongWork::CQuestClear::setClearedQuest(unsigned int)
0848e732 +0x0e0:  jmp    0848e7d4 <+0x182>
0848e737 +0x0e5:  mov    0xc(%ebp),%eax
0848e73a +0x0e8:  mov    %eax,(%esp)
0848e73d +0x0eb:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
0848e742 +0x0f0:  cmp    $0x4,%eax
0848e745 +0x0f3:  sete   %al
0848e748 +0x0f6:  test   %al,%al
0848e74a +0x0f8:  je     0848e76c <+0x11a>
0848e74c +0x0fa:  mov    0xc(%ebp),%eax
0848e74f +0x0fd:  mov    %eax,(%esp)
0848e752 +0x100:  call   0814aa5e <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x7fd>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x7fd
0848e757 +0x105:  add    $0x4,%eax
0848e75a +0x108:  movl   $0x381,0x4(%esp)
0848e762 +0x110:  mov    %eax,(%esp)
0848e765 +0x113:  call   0808ba78 <_ZN8WongWork11CQuestClear15setClearedQuestEj>  ; WongWork::CQuestClear::setClearedQuest(unsigned int)
0848e76a +0x118:  jmp    0848e7d4 <+0x182>
0848e76c +0x11a:  mov    0xc(%ebp),%eax
0848e76f +0x11d:  mov    %eax,(%esp)
0848e772 +0x120:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
0848e777 +0x125:  cmp    $0x5,%eax
0848e77a +0x128:  sete   %al
0848e77d +0x12b:  test   %al,%al
0848e77f +0x12d:  je     0848e7a1 <+0x14f>
0848e781 +0x12f:  mov    0xc(%ebp),%eax
0848e784 +0x132:  mov    %eax,(%esp)
0848e787 +0x135:  call   0814aa5e <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x7fd>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x7fd
0848e78c +0x13a:  add    $0x4,%eax
0848e78f +0x13d:  movl   $0x13f9,0x4(%esp)
0848e797 +0x145:  mov    %eax,(%esp)
0848e79a +0x148:  call   0808ba78 <_ZN8WongWork11CQuestClear15setClearedQuestEj>  ; WongWork::CQuestClear::setClearedQuest(unsigned int)
0848e79f +0x14d:  jmp    0848e7d4 <+0x182>
0848e7a1 +0x14f:  mov    0xc(%ebp),%eax
0848e7a4 +0x152:  mov    %eax,(%esp)
0848e7a7 +0x155:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
0848e7ac +0x15a:  cmp    $0x6,%eax
0848e7af +0x15d:  sete   %al
0848e7b2 +0x160:  test   %al,%al
0848e7b4 +0x162:  je     0848e7d4 <+0x182>
0848e7b6 +0x164:  mov    0xc(%ebp),%eax
0848e7b9 +0x167:  mov    %eax,(%esp)
0848e7bc +0x16a:  call   0814aa5e <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x7fd>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x7fd
0848e7c1 +0x16f:  add    $0x4,%eax
0848e7c4 +0x172:  movl   $0x384,0x4(%esp)
0848e7cc +0x17a:  mov    %eax,(%esp)
0848e7cf +0x17d:  call   0808ba78 <_ZN8WongWork11CQuestClear15setClearedQuestEj>  ; WongWork::CQuestClear::setClearedQuest(unsigned int)
0848e7d4 +0x182:  leave
0848e7d5 +0x183:  ret
```

## 反编译 C

```c
// CEventCharacterHandler::_SetClearedQuest @ 0x848e652

/* CEventCharacterHandler::_SetClearedQuest(CUser*) */

void __thiscall
CEventCharacterHandler::_SetClearedQuest(CEventCharacterHandler *this,CUser *param_1)

{
  int iVar1;
  
  iVar1 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)param_1);
  if (iVar1 == 0) {
    iVar1 = CUser::getCurCharacQuestW(param_1);
    WongWork::CQuestClear::setClearedQuest((CQuestClear *)(iVar1 + 4),0x37f);
  }
  else {
    iVar1 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)param_1);
    if (iVar1 == 1) {
      iVar1 = CUser::getCurCharacQuestW(param_1);
      WongWork::CQuestClear::setClearedQuest((CQuestClear *)(iVar1 + 4),0x382);
    }
    else {
      iVar1 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)param_1);
      if (iVar1 == 2) {
        iVar1 = CUser::getCurCharacQuestW(param_1);
        WongWork::CQuestClear::setClearedQuest((CQuestClear *)(iVar1 + 4),0x380);
      }
      else {
        iVar1 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)param_1);
        if (iVar1 == 3) {
          iVar1 = CUser::getCurCharacQuestW(param_1);
          WongWork::CQuestClear::setClearedQuest((CQuestClear *)(iVar1 + 4),899);
        }
        else {
          iVar1 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)param_1);
          if (iVar1 == 4) {
            iVar1 = CUser::getCurCharacQuestW(param_1);
            WongWork::CQuestClear::setClearedQuest((CQuestClear *)(iVar1 + 4),0x381);
          }
          else {
            iVar1 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)param_1);
            if (iVar1 == 5) {
              iVar1 = CUser::getCurCharacQuestW(param_1);
              WongWork::CQuestClear::setClearedQuest((CQuestClear *)(iVar1 + 4),0x13f9);
            }
            else {
              iVar1 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)param_1);
              if (iVar1 == 6) {
                iVar1 = CUser::getCurCharacQuestW(param_1);
                WongWork::CQuestClear::setClearedQuest((CQuestClear *)(iVar1 + 4),900);
              }
            }
          }
        }
      }
    }
  }
  return;
}
```
