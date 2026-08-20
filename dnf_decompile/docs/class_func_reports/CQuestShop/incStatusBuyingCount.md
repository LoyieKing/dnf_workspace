# incStatusBuyingCount

`_ZN10CQuestShop20incStatusBuyingCountEhh`

`CQuestShop::incStatusBuyingCount(unsigned char, unsigned char)`

| 类 | 地址 |
|---|---|
| `CQuestShop` | `0x085eef28` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085eef28  _ZN10CQuestShop20incStatusBuyingCountEhh
#           CQuestShop::incStatusBuyingCount(unsigned char, unsigned char)
# range [0x085eef28, 0x085ef02d]
085eef28 +0x000:  push   %ebp
085eef29 +0x001:  mov    %esp,%ebp
085eef2b +0x003:  sub    $0x58,%esp
085eef2e +0x006:  mov    0xc(%ebp),%edx
085eef31 +0x009:  mov    0x10(%ebp),%eax
085eef34 +0x00c:  mov    %dl,-0x3c(%ebp)
085eef37 +0x00f:  mov    %al,-0x40(%ebp)
085eef3a +0x012:  movzbl -0x3c(%ebp),%eax
085eef3e +0x016:  mov    %eax,0x4(%esp)
085eef42 +0x01a:  mov    0x8(%ebp),%eax
085eef45 +0x01d:  mov    %eax,(%esp)
085eef48 +0x020:  call   085eee6a <_ZN10CQuestShop14findStatusTypeEh>  ; CQuestShop::findStatusType(unsigned char)
085eef4d +0x025:  mov    %eax,-0x28(%ebp)
085eef50 +0x028:  mov    -0x28(%ebp),%eax
085eef53 +0x02b:  cmp    $0x4d,%eax
085eef56 +0x02e:  je     085ef02a <+0x102>
085eef5c +0x034:  mov    0x8(%ebp),%eax
085eef5f +0x037:  mov    %eax,(%esp)
085eef62 +0x03a:  call   080c8bc4 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x1c>  ; global constructors keyed to BestClearTime::BestClearTime()+0x1c
085eef67 +0x03f:  mov    -0x28(%ebp),%eax
085eef6a +0x042:  mov    %al,-0x21(%ebp)
085eef6d +0x045:  mov    0x8(%ebp),%eax
085eef70 +0x048:  lea    0x8(%eax),%ecx
085eef73 +0x04b:  lea    -0x2c(%ebp),%eax
085eef76 +0x04e:  lea    -0x21(%ebp),%edx
085eef79 +0x051:  mov    %edx,0x8(%esp)
085eef7d +0x055:  mov    %ecx,0x4(%esp)
085eef81 +0x059:  mov    %eax,(%esp)
085eef84 +0x05c:  call   0849fd46 <_GLOBAL__I__ZN10expert_job10CExpertJob20IncreaseExpertJobExpEP5CUseri+0xb77>  ; global constructors keyed to expert_job::CExpertJob::IncreaseExpertJobExp(CUser*, int)+0xb77
085eef89 +0x061:  sub    $0x4,%esp
085eef8c +0x064:  mov    0x8(%ebp),%eax
085eef8f +0x067:  lea    0x8(%eax),%edx
085eef92 +0x06a:  lea    -0x20(%ebp),%eax
085eef95 +0x06d:  mov    %edx,0x4(%esp)
085eef99 +0x071:  mov    %eax,(%esp)
085eef9c +0x074:  call   08450180 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x2d96>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x2d96
085eefa1 +0x079:  sub    $0x4,%esp
085eefa4 +0x07c:  lea    -0x20(%ebp),%eax
085eefa7 +0x07f:  mov    %eax,0x4(%esp)
085eefab +0x083:  lea    -0x2c(%ebp),%eax
085eefae +0x086:  mov    %eax,(%esp)
085eefb1 +0x089:  call   084501a6 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x2dbc>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x2dbc
085eefb6 +0x08e:  test   %al,%al
085eefb8 +0x090:  je     085eefdb <+0xb3>
085eefba +0x092:  lea    -0x2c(%ebp),%eax
085eefbd +0x095:  mov    %eax,(%esp)
085eefc0 +0x098:  call   084501ba <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x2dd0>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x2dd0
085eefc5 +0x09d:  movzwl 0x2(%eax),%edx
085eefc9 +0x0a1:  mov    %edx,%ecx
085eefcb +0x0a3:  movzbl -0x40(%ebp),%edx
085eefcf +0x0a7:  movzbl %dl,%edx
085eefd2 +0x0aa:  lea    (%ecx,%edx,1),%edx
085eefd5 +0x0ad:  mov    %dx,0x2(%eax)
085eefd9 +0x0b1:  jmp    085ef02b <+0x103>
085eefdb +0x0b3:  lea    -0x10(%ebp),%eax
085eefde +0x0b6:  lea    -0x40(%ebp),%edx
085eefe1 +0x0b9:  mov    %edx,0x8(%esp)
085eefe5 +0x0bd:  lea    -0x28(%ebp),%edx
085eefe8 +0x0c0:  mov    %edx,0x4(%esp)
085eefec +0x0c4:  mov    %eax,(%esp)
085eefef +0x0c7:  call   085effdd <_GLOBAL__I__ZN10CQuestShopC2Ev+0x149>  ; global constructors keyed to CQuestShop::CQuestShop()+0x149
085eeff4 +0x0cc:  sub    $0x4,%esp
085eeff7 +0x0cf:  lea    -0x10(%ebp),%eax
085eeffa +0x0d2:  mov    %eax,0x4(%esp)
085eeffe +0x0d6:  lea    -0x14(%ebp),%eax
085ef001 +0x0d9:  mov    %eax,(%esp)
085ef004 +0x0dc:  call   085f001c <_GLOBAL__I__ZN10CQuestShopC2Ev+0x188>  ; global constructors keyed to CQuestShop::CQuestShop()+0x188
085ef009 +0x0e1:  mov    0x8(%ebp),%eax
085ef00c +0x0e4:  lea    0x8(%eax),%ecx
085ef00f +0x0e7:  lea    -0x1c(%ebp),%eax
085ef012 +0x0ea:  lea    -0x14(%ebp),%edx
085ef015 +0x0ed:  mov    %edx,0x8(%esp)
085ef019 +0x0f1:  mov    %ecx,0x4(%esp)
085ef01d +0x0f5:  mov    %eax,(%esp)
085ef020 +0x0f8:  call   084540b4 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x6cca>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x6cca
085ef025 +0x0fd:  sub    $0x4,%esp
085ef028 +0x100:  jmp    085ef02b <+0x103>
085ef02a +0x102:  nop
085ef02b +0x103:  leave
085ef02c +0x104:  ret
085ef02d +0x105:  nop
```

## 反编译 C

```c
// CQuestShop::incStatusBuyingCount @ 0x85eef28

/* CQuestShop::incStatusBuyingCount(unsigned char, unsigned char) */

void __thiscall CQuestShop::incStatusBuyingCount(CQuestShop *this,uchar param_1,uchar param_2)

{
  char cVar1;
  int iVar2;
  _Rb_tree_iterator<std::pair<unsigned_char_const,short>> local_30 [4];
  int local_2c;
  undefined1 local_25;
  map<unsigned_char,short,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,short>>>
  local_24 [4];
  pair local_20 [8];
  pair<unsigned_char_const,short> local_18 [4];
  int local_14 [4];
  
  local_2c = findStatusType(this,param_1);
  if (local_2c != 0x4d) {
    charac_expand::CData::alter((CData *)this);
    local_25 = (undefined1)local_2c;
    std::
    map<unsigned_char,short,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,short>>>
    ::find((uchar *)local_30);
    std::
    map<unsigned_char,short,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,short>>>
    ::end(local_24);
    cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_char_const,short>>::operator!=
                      (local_30,(_Rb_tree_iterator *)local_24);
    if (cVar1 == '\0') {
      std::make_pair<int_const&,unsigned_char_const&>(local_14,(uchar *)&local_2c);
      std::pair<unsigned_char_const,short>::pair<int,unsigned_char>(local_18,(pair *)local_14);
      std::
      map<unsigned_char,short,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,short>>>
      ::insert(local_20);
    }
    else {
      iVar2 = std::_Rb_tree_iterator<std::pair<unsigned_char_const,short>>::operator->(local_30);
      *(ushort *)(iVar2 + 2) = *(short *)(iVar2 + 2) + (ushort)param_2;
    }
  }
  return;
}
```
