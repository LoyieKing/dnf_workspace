# loadData

`_ZN10CQuestShop8loadDataEP5CUserPc`

`CQuestShop::loadData(CUser*, char*)`

| 类 | 地址 |
|---|---|
| `CQuestShop` | `0x085efa2c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085efa2c  _ZN10CQuestShop8loadDataEP5CUserPc
#           CQuestShop::loadData(CUser*, char*)
# range [0x085efa2c, 0x085efb65]
085efa2c +0x000:  push   %ebp
085efa2d +0x001:  mov    %esp,%ebp
085efa2f +0x003:  sub    $0x38,%esp
085efa32 +0x006:  mov    0x8(%ebp),%eax
085efa35 +0x009:  mov    (%eax),%eax
085efa37 +0x00b:  add    $0x1c,%eax
085efa3a +0x00e:  mov    (%eax),%edx
085efa3c +0x010:  mov    0x8(%ebp),%eax
085efa3f +0x013:  mov    %eax,(%esp)
085efa42 +0x016:  call   *%edx
085efa44 +0x018:  mov    0x10(%ebp),%eax
085efa47 +0x01b:  mov    %eax,-0x10(%ebp)
085efa4a +0x01e:  mov    -0x10(%ebp),%eax
085efa4d +0x021:  mov    %eax,-0xc(%ebp)
085efa50 +0x024:  mov    -0xc(%ebp),%eax
085efa53 +0x027:  mov    0x4(%eax),%eax
085efa56 +0x02a:  mov    %eax,%edx
085efa58 +0x02c:  mov    0x8(%ebp),%eax
085efa5b +0x02f:  mov    %edx,0x38(%eax)
085efa5e +0x032:  mov    -0xc(%ebp),%eax
085efa61 +0x035:  mov    0x8(%eax),%eax
085efa64 +0x038:  mov    %eax,0x4(%esp)
085efa68 +0x03c:  mov    0x8(%ebp),%eax
085efa6b +0x03f:  mov    %eax,(%esp)
085efa6e +0x042:  call   085efefc <_GLOBAL__I__ZN10CQuestShopC2Ev+0x68>  ; global constructors keyed to CQuestShop::CQuestShop()+0x68
085efa73 +0x047:  mov    -0xc(%ebp),%eax
085efa76 +0x04a:  mov    0xa6(%eax),%eax
085efa7c +0x050:  mov    %eax,%edx
085efa7e +0x052:  mov    0x8(%ebp),%eax
085efa81 +0x055:  mov    %edx,0x44(%eax)
085efa84 +0x058:  movl   $0x0,-0x28(%ebp)
085efa8b +0x05f:  jmp    085efafe <+0xd2>
085efa8d +0x061:  mov    -0x28(%ebp),%edx
085efa90 +0x064:  mov    -0xc(%ebp),%eax
085efa93 +0x067:  movzwl 0xc(%eax,%edx,2),%eax
085efa98 +0x06c:  test   %ax,%ax
085efa9b +0x06f:  je     085efaf4 <+0xc8>
085efa9d +0x071:  mov    -0x28(%ebp),%eax
085efaa0 +0x074:  add    %eax,%eax
085efaa2 +0x076:  add    -0xc(%ebp),%eax
085efaa5 +0x079:  lea    0xc(%eax),%edx
085efaa8 +0x07c:  lea    -0x18(%ebp),%eax
085efaab +0x07f:  mov    %edx,0x8(%esp)
085efaaf +0x083:  lea    -0x28(%ebp),%edx
085efab2 +0x086:  mov    %edx,0x4(%esp)
085efab6 +0x08a:  mov    %eax,(%esp)
085efab9 +0x08d:  call   085f0053 <_GLOBAL__I__ZN10CQuestShopC2Ev+0x1bf>  ; global constructors keyed to CQuestShop::CQuestShop()+0x1bf
085efabe +0x092:  sub    $0x4,%esp
085efac1 +0x095:  lea    -0x18(%ebp),%eax
085efac4 +0x098:  mov    %eax,0x4(%esp)
085efac8 +0x09c:  lea    -0x1c(%ebp),%eax
085efacb +0x09f:  mov    %eax,(%esp)
085eface +0x0a2:  call   085f0092 <_GLOBAL__I__ZN10CQuestShopC2Ev+0x1fe>  ; global constructors keyed to CQuestShop::CQuestShop()+0x1fe
085efad3 +0x0a7:  mov    0x8(%ebp),%eax
085efad6 +0x0aa:  lea    0x8(%eax),%ecx
085efad9 +0x0ad:  lea    -0x24(%ebp),%eax
085efadc +0x0b0:  lea    -0x1c(%ebp),%edx
085efadf +0x0b3:  mov    %edx,0x8(%esp)
085efae3 +0x0b7:  mov    %ecx,0x4(%esp)
085efae7 +0x0bb:  mov    %eax,(%esp)
085efaea +0x0be:  call   084540b4 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x6cca>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x6cca
085efaef +0x0c3:  sub    $0x4,%esp
085efaf2 +0x0c6:  jmp    085efaf5 <+0xc9>
085efaf4 +0x0c8:  nop
085efaf5 +0x0c9:  mov    -0x28(%ebp),%eax
085efaf8 +0x0cc:  add    $0x1,%eax
085efafb +0x0cf:  mov    %eax,-0x28(%ebp)
085efafe +0x0d2:  mov    -0x28(%ebp),%eax
085efb01 +0x0d5:  cmp    $0x4c,%eax
085efb04 +0x0d8:  setle  %al
085efb07 +0x0db:  test   %al,%al
085efb09 +0x0dd:  jne    085efa8d <+0x61>
085efb0b +0x0df:  mov    -0x10(%ebp),%eax
085efb0e +0x0e2:  movzbl 0x154(%eax),%eax
085efb15 +0x0e9:  test   %al,%al
085efb17 +0x0eb:  je     085efb36 <+0x10a>
085efb19 +0x0ed:  mov    -0x10(%ebp),%eax
085efb1c +0x0f0:  add    $0xaa,%eax
085efb21 +0x0f5:  mov    %eax,-0xc(%ebp)
085efb24 +0x0f8:  mov    -0xc(%ebp),%eax
085efb27 +0x0fb:  mov    %eax,0x4(%esp)
085efb2b +0x0ff:  mov    0x8(%ebp),%eax
085efb2e +0x102:  mov    %eax,(%esp)
085efb31 +0x105:  call   085efdc0 <_ZN10CQuestShop25SetTagCharacQuestShopDataEP22CHARAC_QUEST_SHOP_DATA>  ; CQuestShop::SetTagCharacQuestShopData(CHARAC_QUEST_SHOP_DATA*)
085efb36 +0x10a:  mov    0xc(%ebp),%eax
085efb39 +0x10d:  mov    %eax,(%esp)
085efb3c +0x110:  call   082a66aa <_GLOBAL__I__ZN4CLog5this_E+0x2ad1>  ; global constructors keyed to CLog::this_+0x2ad1
085efb41 +0x115:  cmp    $0x500723cf,%eax
085efb46 +0x11a:  setle  %al
085efb49 +0x11d:  test   %al,%al
085efb4b +0x11f:  je     085efb5f <+0x133>
085efb4d +0x121:  mov    0xc(%ebp),%eax
085efb50 +0x124:  mov    %eax,0x4(%esp)
085efb54 +0x128:  mov    0x8(%ebp),%eax
085efb57 +0x12b:  mov    %eax,(%esp)
085efb5a +0x12e:  call   085ef54c <_ZN10CQuestShop7clearQPEP5CUser>  ; CQuestShop::clearQP(CUser*)
085efb5f +0x133:  mov    $0x1,%eax
085efb64 +0x138:  leave
085efb65 +0x139:  ret
```

## 反编译 C

```c
// CQuestShop::loadData @ 0x85efa2c

/* CQuestShop::loadData(CUser*, char*) */

undefined4 __thiscall CQuestShop::loadData(CQuestShop *this,CUser *param_1,char *param_2)

{
  int iVar1;
  int local_2c;
  pair local_28 [8];
  pair<unsigned_char_const,short> local_20 [4];
  int local_1c [2];
  char *local_14;
  CHARAC_QUEST_SHOP_DATA *local_10;
  
  (**(code **)(*(int *)this + 0x1c))(this);
  local_14 = param_2;
  local_10 = (CHARAC_QUEST_SHOP_DATA *)param_2;
  *(undefined4 *)(this + 0x38) = *(undefined4 *)(param_2 + 4);
  setInitCount(this,*(int *)(param_2 + 8));
  *(undefined4 *)(this + 0x44) = *(undefined4 *)(local_10 + 0xa6);
  for (local_2c = 0; local_2c < 0x4d; local_2c = local_2c + 1) {
    if (*(short *)(local_10 + local_2c * 2 + 0xc) != 0) {
      std::make_pair<int&,unsigned_short&>(local_1c,(ushort *)&local_2c);
      std::pair<unsigned_char_const,short>::pair<int,unsigned_short>(local_20,(pair *)local_1c);
      std::
      map<unsigned_char,short,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,short>>>
      ::insert(local_28);
    }
  }
  if (local_14[0x154] != '\0') {
    local_10 = (CHARAC_QUEST_SHOP_DATA *)(local_14 + 0xaa);
    SetTagCharacQuestShopData(this,local_10);
  }
  iVar1 = CUserCharacInfo::getCurCharacLastPlayTick((CUserCharacInfo *)param_1);
  if (iVar1 < 0x500723d0) {
    clearQP(this,param_1);
  }
  return 1;
}
```
