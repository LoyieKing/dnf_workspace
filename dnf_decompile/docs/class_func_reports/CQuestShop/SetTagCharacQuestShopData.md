# SetTagCharacQuestShopData

`_ZN10CQuestShop25SetTagCharacQuestShopDataEP22CHARAC_QUEST_SHOP_DATA`

`CQuestShop::SetTagCharacQuestShopData(CHARAC_QUEST_SHOP_DATA*)`

| 类 | 地址 |
|---|---|
| `CQuestShop` | `0x085efdc0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085efdc0  _ZN10CQuestShop25SetTagCharacQuestShopDataEP22CHARAC_QUEST_SHOP_DATA
#           CQuestShop::SetTagCharacQuestShopData(CHARAC_QUEST_SHOP_DATA*)
# range [0x085efdc0, 0x085efe53]
085efdc0 +0x00:  push   %ebp
085efdc1 +0x01:  mov    %esp,%ebp
085efdc3 +0x03:  sub    $0x38,%esp
085efdc6 +0x06:  movl   $0x0,-0x20(%ebp)
085efdcd +0x0d:  jmp    085efe40 <+0x80>
085efdcf +0x0f:  mov    -0x20(%ebp),%edx
085efdd2 +0x12:  mov    0xc(%ebp),%eax
085efdd5 +0x15:  movzwl 0xc(%eax,%edx,2),%eax
085efdda +0x1a:  test   %ax,%ax
085efddd +0x1d:  je     085efe36 <+0x76>
085efddf +0x1f:  mov    -0x20(%ebp),%eax
085efde2 +0x22:  add    %eax,%eax
085efde4 +0x24:  add    0xc(%ebp),%eax
085efde7 +0x27:  lea    0xc(%eax),%edx
085efdea +0x2a:  lea    -0x10(%ebp),%eax
085efded +0x2d:  mov    %edx,0x8(%esp)
085efdf1 +0x31:  lea    -0x20(%ebp),%edx
085efdf4 +0x34:  mov    %edx,0x4(%esp)
085efdf8 +0x38:  mov    %eax,(%esp)
085efdfb +0x3b:  call   085f0053 <_GLOBAL__I__ZN10CQuestShopC2Ev+0x1bf>  ; global constructors keyed to CQuestShop::CQuestShop()+0x1bf
085efe00 +0x40:  sub    $0x4,%esp
085efe03 +0x43:  lea    -0x10(%ebp),%eax
085efe06 +0x46:  mov    %eax,0x4(%esp)
085efe0a +0x4a:  lea    -0x14(%ebp),%eax
085efe0d +0x4d:  mov    %eax,(%esp)
085efe10 +0x50:  call   085f0092 <_GLOBAL__I__ZN10CQuestShopC2Ev+0x1fe>  ; global constructors keyed to CQuestShop::CQuestShop()+0x1fe
085efe15 +0x55:  mov    0x8(%ebp),%eax
085efe18 +0x58:  lea    0x20(%eax),%ecx
085efe1b +0x5b:  lea    -0x1c(%ebp),%eax
085efe1e +0x5e:  lea    -0x14(%ebp),%edx
085efe21 +0x61:  mov    %edx,0x8(%esp)
085efe25 +0x65:  mov    %ecx,0x4(%esp)
085efe29 +0x69:  mov    %eax,(%esp)
085efe2c +0x6c:  call   084540b4 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x6cca>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x6cca
085efe31 +0x71:  sub    $0x4,%esp
085efe34 +0x74:  jmp    085efe37 <+0x77>
085efe36 +0x76:  nop
085efe37 +0x77:  mov    -0x20(%ebp),%eax
085efe3a +0x7a:  add    $0x1,%eax
085efe3d +0x7d:  mov    %eax,-0x20(%ebp)
085efe40 +0x80:  mov    -0x20(%ebp),%eax
085efe43 +0x83:  cmp    $0x4c,%eax
085efe46 +0x86:  setle  %al
085efe49 +0x89:  test   %al,%al
085efe4b +0x8b:  jne    085efdcf <+0xf>
085efe4d +0x8d:  mov    $0x1,%eax
085efe52 +0x92:  leave
085efe53 +0x93:  ret
```

## 反编译 C

```c
// CQuestShop::SetTagCharacQuestShopData @ 0x85efdc0

/* CQuestShop::SetTagCharacQuestShopData(CHARAC_QUEST_SHOP_DATA*) */

undefined4 __thiscall
CQuestShop::SetTagCharacQuestShopData(CQuestShop *this,CHARAC_QUEST_SHOP_DATA *param_1)

{
  int local_24;
  pair local_20 [8];
  pair<unsigned_char_const,short> local_18 [4];
  int local_14 [4];
  
  for (local_24 = 0; local_24 < 0x4d; local_24 = local_24 + 1) {
    if (*(short *)(param_1 + local_24 * 2 + 0xc) != 0) {
      std::make_pair<int&,unsigned_short&>(local_14,(ushort *)&local_24);
      std::pair<unsigned_char_const,short>::pair<int,unsigned_short>(local_18,(pair *)local_14);
      std::
      map<unsigned_char,short,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,short>>>
      ::insert(local_20);
    }
  }
  return 1;
}
```
