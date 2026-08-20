# LoadQuestShop

`_ZN10DB_LoadEtc13LoadQuestShopEP12SIG_LOAD_ETC`

`DB_LoadEtc::LoadQuestShop(SIG_LOAD_ETC*)`

| 类 | 地址 |
|---|---|
| `DB_LoadEtc` | `0x08404a68` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08404a68  _ZN10DB_LoadEtc13LoadQuestShopEP12SIG_LOAD_ETC
#           DB_LoadEtc::LoadQuestShop(SIG_LOAD_ETC*)
# range [0x08404a68, 0x08404b71]
08404a68 +0x000:  push   %ebp
08404a69 +0x001:  mov    %esp,%ebp
08404a6b +0x003:  push   %ebx
08404a6c +0x004:  sub    $0x44,%esp
08404a6f +0x007:  mov    0xc(%ebp),%eax
08404a72 +0x00a:  lea    0xd5a7(%eax),%edx
08404a78 +0x010:  mov    0xc(%ebp),%eax
08404a7b +0x013:  mov    0x4(%eax),%eax
08404a7e +0x016:  mov    %edx,0x4(%esp)
08404a82 +0x01a:  mov    %eax,(%esp)
08404a85 +0x01d:  call   08404b72 <_ZN10DB_LoadEtc14_LoadQuestShopEjP22CHARAC_QUEST_SHOP_DATA>  ; DB_LoadEtc::_LoadQuestShop(unsigned int, CHARAC_QUEST_SHOP_DATA*)
08404a8a +0x022:  mov    %al,-0x9(%ebp)
08404a8d +0x025:  movzbl -0x9(%ebp),%eax
08404a91 +0x029:  xor    $0x1,%eax
08404a94 +0x02c:  test   %al,%al
08404a96 +0x02e:  je     08404ae2 <+0x7a>
08404a98 +0x030:  mov    0xc(%ebp),%eax
08404a9b +0x033:  mov    0x4(%eax),%ebx
08404a9e +0x036:  movl   $0x5,0xc(%esp)
08404aa6 +0x03e:  movl   $0x16c4,0x8(%esp)
08404aae +0x046:  movl   $&_ZZN10DB_LoadEtc13LoadQuestShopEP12SIG_LOAD_ETCE19__PRETTY_FUNCTION__,0x4(%esp)
08404ab6 +0x04e:  lea    -0x2c(%ebp),%eax
08404ab9 +0x051:  mov    %eax,(%esp)
08404abc +0x054:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08404ac1 +0x059:  mov    %ebx,0x8(%esp)
08404ac5 +0x05d:  movl   $"DB_LoadInventory::_LoadQuestShop ERROR::charac_no(%d)",0x4(%esp)
08404acd +0x065:  lea    -0x2c(%ebp),%eax
08404ad0 +0x068:  mov    %eax,(%esp)
08404ad3 +0x06b:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08404ad8 +0x070:  mov    $0x0,%eax
08404add +0x075:  jmp    08404b6b <+0x103>
08404ae2 +0x07a:  mov    0xc(%ebp),%eax
08404ae5 +0x07d:  mov    0xc(%eax),%eax
08404ae8 +0x080:  test   %eax,%eax
08404aea +0x082:  je     08404b66 <+0xfe>
08404aec +0x084:  mov    0xc(%ebp),%eax
08404aef +0x087:  lea    0xd651(%eax),%edx
08404af5 +0x08d:  mov    0xc(%ebp),%eax
08404af8 +0x090:  mov    0xc(%eax),%eax
08404afb +0x093:  mov    %edx,0x4(%esp)
08404aff +0x097:  mov    %eax,(%esp)
08404b02 +0x09a:  call   08404b72 <_ZN10DB_LoadEtc14_LoadQuestShopEjP22CHARAC_QUEST_SHOP_DATA>  ; DB_LoadEtc::_LoadQuestShop(unsigned int, CHARAC_QUEST_SHOP_DATA*)
08404b07 +0x09f:  mov    %al,-0x9(%ebp)
08404b0a +0x0a2:  movzbl -0x9(%ebp),%eax
08404b0e +0x0a6:  xor    $0x1,%eax
08404b11 +0x0a9:  test   %al,%al
08404b13 +0x0ab:  je     08404b5c <+0xf4>
08404b15 +0x0ad:  mov    0xc(%ebp),%eax
08404b18 +0x0b0:  mov    0xc(%eax),%ebx
08404b1b +0x0b3:  movl   $0x5,0xc(%esp)
08404b23 +0x0bb:  movl   $0x16d5,0x8(%esp)
08404b2b +0x0c3:  movl   $&_ZZN10DB_LoadEtc13LoadQuestShopEP12SIG_LOAD_ETCE19__PRETTY_FUNCTION__,0x4(%esp)
08404b33 +0x0cb:  lea    -0x1c(%ebp),%eax
08404b36 +0x0ce:  mov    %eax,(%esp)
08404b39 +0x0d1:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08404b3e +0x0d6:  mov    %ebx,0x8(%esp)
08404b42 +0x0da:  movl   $"DB_LoadInventory::_LoadQuestShop ERROR::tag_charac_no(%d)",0x4(%esp)
08404b4a +0x0e2:  lea    -0x1c(%ebp),%eax
08404b4d +0x0e5:  mov    %eax,(%esp)
08404b50 +0x0e8:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08404b55 +0x0ed:  mov    $0x0,%eax
08404b5a +0x0f2:  jmp    08404b6b <+0x103>
08404b5c +0x0f4:  mov    0xc(%ebp),%eax
08404b5f +0x0f7:  movb   $0x1,0xd6fb(%eax)
08404b66 +0x0fe:  mov    $0x1,%eax
08404b6b +0x103:  add    $0x44,%esp
08404b6e +0x106:  pop    %ebx
08404b6f +0x107:  pop    %ebp
08404b70 +0x108:  ret
08404b71 +0x109:  nop
```

## 反编译 C

```c
// DB_LoadEtc::LoadQuestShop @ 0x8404a68

/* DB_LoadEtc::LoadQuestShop(SIG_LOAD_ETC*) */

undefined4 __thiscall DB_LoadEtc::LoadQuestShop(DB_LoadEtc *this,SIG_LOAD_ETC *param_1)

{
  undefined4 uVar1;
  cMyTrace local_30 [16];
  cMyTrace local_20 [19];
  char local_d;
  
  local_d = _LoadQuestShop(*(uint *)(param_1 + 4),(CHARAC_QUEST_SHOP_DATA *)(param_1 + 0xd5a7));
  if (local_d == '\x01') {
    if (*(int *)(param_1 + 0xc) != 0) {
      local_d = _LoadQuestShop(*(uint *)(param_1 + 0xc),(CHARAC_QUEST_SHOP_DATA *)(param_1 + 0xd651)
                              );
      if (local_d != '\x01') {
        uVar1 = *(undefined4 *)(param_1 + 0xc);
        cMyTrace::cMyTrace(local_20,"bool DB_LoadEtc::LoadQuestShop(SIG_LOAD_ETC*)",0x16d5,5);
        cMyTrace::operator()
                  (local_20,"DB_LoadInventory::_LoadQuestShop ERROR::tag_charac_no(%d)",uVar1);
        return 0;
      }
      param_1[0xd6fb] = (SIG_LOAD_ETC)0x1;
    }
    uVar1 = 1;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 4);
    cMyTrace::cMyTrace(local_30,"bool DB_LoadEtc::LoadQuestShop(SIG_LOAD_ETC*)",0x16c4,5);
    cMyTrace::operator()(local_30,"DB_LoadInventory::_LoadQuestShop ERROR::charac_no(%d)",uVar1);
    uVar1 = 0;
  }
  return uVar1;
}
```
