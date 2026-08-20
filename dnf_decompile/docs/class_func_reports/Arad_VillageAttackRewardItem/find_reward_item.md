# find_reward_item

`_ZN28Arad_VillageAttackRewardItem16find_reward_itemEiRNS_4DataE`

`Arad_VillageAttackRewardItem::find_reward_item(int, Arad_VillageAttackRewardItem::Data&)`

| 类 | 地址 |
|---|---|
| `Arad_VillageAttackRewardItem` | `0x081a3e3c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081a3e3c  _ZN28Arad_VillageAttackRewardItem16find_reward_itemEiRNS_4DataE
#           Arad_VillageAttackRewardItem::find_reward_item(int, Arad_VillageAttackRewardItem::Data&)
# range [0x081a3e3c, 0x081a3eef]
081a3e3c +0x00:  push   %ebp
081a3e3d +0x01:  mov    %esp,%ebp
081a3e3f +0x03:  sub    $0x28,%esp
081a3e42 +0x06:  mov    0x8(%ebp),%eax
081a3e45 +0x09:  lea    0x4(%eax),%edx
081a3e48 +0x0c:  lea    -0x14(%ebp),%eax
081a3e4b +0x0f:  mov    %edx,0x4(%esp)
081a3e4f +0x13:  mov    %eax,(%esp)
081a3e52 +0x16:  call   081a4c14 <_GLOBAL__I__ZN17Arad_ScriptLoader4openEPKc+0xc6f>  ; global constructors keyed to Arad_ScriptLoader::open(char const*)+0xc6f
081a3e57 +0x1b:  sub    $0x4,%esp
081a3e5a +0x1e:  mov    0x8(%ebp),%eax
081a3e5d +0x21:  lea    0x4(%eax),%edx
081a3e60 +0x24:  lea    -0x10(%ebp),%eax
081a3e63 +0x27:  mov    %edx,0x4(%esp)
081a3e67 +0x2b:  mov    %eax,(%esp)
081a3e6a +0x2e:  call   081a4bf0 <_GLOBAL__I__ZN17Arad_ScriptLoader4openEPKc+0xc4b>  ; global constructors keyed to Arad_ScriptLoader::open(char const*)+0xc4b
081a3e6f +0x33:  sub    $0x4,%esp
081a3e72 +0x36:  lea    -0x18(%ebp),%eax
081a3e75 +0x39:  mov    0x10(%ebp),%edx
081a3e78 +0x3c:  mov    %edx,0xc(%esp)
081a3e7c +0x40:  mov    -0x14(%ebp),%edx
081a3e7f +0x43:  mov    %edx,0x8(%esp)
081a3e83 +0x47:  mov    -0x10(%ebp),%edx
081a3e86 +0x4a:  mov    %edx,0x4(%esp)
081a3e8a +0x4e:  mov    %eax,(%esp)
081a3e8d +0x51:  call   081a4c3a <_GLOBAL__I__ZN17Arad_ScriptLoader4openEPKc+0xc95>  ; global constructors keyed to Arad_ScriptLoader::open(char const*)+0xc95
081a3e92 +0x56:  sub    $0x4,%esp
081a3e95 +0x59:  mov    0x8(%ebp),%eax
081a3e98 +0x5c:  lea    0x4(%eax),%edx
081a3e9b +0x5f:  lea    -0xc(%ebp),%eax
081a3e9e +0x62:  mov    %edx,0x4(%esp)
081a3ea2 +0x66:  mov    %eax,(%esp)
081a3ea5 +0x69:  call   081a4c14 <_GLOBAL__I__ZN17Arad_ScriptLoader4openEPKc+0xc6f>  ; global constructors keyed to Arad_ScriptLoader::open(char const*)+0xc6f
081a3eaa +0x6e:  sub    $0x4,%esp
081a3ead +0x71:  lea    -0xc(%ebp),%eax
081a3eb0 +0x74:  mov    %eax,0x4(%esp)
081a3eb4 +0x78:  lea    -0x18(%ebp),%eax
081a3eb7 +0x7b:  mov    %eax,(%esp)
081a3eba +0x7e:  call   081a4c8e <_GLOBAL__I__ZN17Arad_ScriptLoader4openEPKc+0xce9>  ; global constructors keyed to Arad_ScriptLoader::open(char const*)+0xce9
081a3ebf +0x83:  test   %al,%al
081a3ec1 +0x85:  je     081a3ee8 <+0xac>
081a3ec3 +0x87:  lea    -0x18(%ebp),%eax
081a3ec6 +0x8a:  mov    %eax,(%esp)
081a3ec9 +0x8d:  call   081a4cba <_GLOBAL__I__ZN17Arad_ScriptLoader4openEPKc+0xd15>  ; global constructors keyed to Arad_ScriptLoader::open(char const*)+0xd15
081a3ece +0x92:  mov    0x10(%ebp),%edx
081a3ed1 +0x95:  mov    (%eax),%ecx
081a3ed3 +0x97:  mov    %ecx,(%edx)
081a3ed5 +0x99:  mov    0x4(%eax),%ecx
081a3ed8 +0x9c:  mov    %ecx,0x4(%edx)
081a3edb +0x9f:  mov    0x8(%eax),%eax
081a3ede +0xa2:  mov    %eax,0x8(%edx)
081a3ee1 +0xa5:  mov    $0x1,%eax
081a3ee6 +0xaa:  jmp    081a3eed <+0xb1>
081a3ee8 +0xac:  mov    $0x0,%eax
081a3eed +0xb1:  leave
081a3eee +0xb2:  ret
081a3eef +0xb3:  nop
```

## 反编译 C

```c
// Arad_VillageAttackRewardItem::find_reward_item @ 0x81a3e3c

/* Arad_VillageAttackRewardItem::find_reward_item(int, Arad_VillageAttackRewardItem::Data&) */

bool __thiscall
Arad_VillageAttackRewardItem::find_reward_item
          (Arad_VillageAttackRewardItem *this,int param_1,Data *param_2)

{
  bool bVar1;
  undefined4 *puVar2;
  __normal_iterator<Arad_VillageAttackRewardItem::Data*,std::vector<Arad_VillageAttackRewardItem::Data,std::allocator<Arad_VillageAttackRewardItem::Data>>>
  local_1c [4];
  undefined4 local_18;
  undefined4 local_14;
  __normal_iterator local_10 [12];
  
  std::vector<Arad_VillageAttackRewardItem::Data,std::allocator<Arad_VillageAttackRewardItem::Data>>
  ::end();
  std::vector<Arad_VillageAttackRewardItem::Data,std::allocator<Arad_VillageAttackRewardItem::Data>>
  ::begin();
  std::
  find<__gnu_cxx::__normal_iterator<Arad_VillageAttackRewardItem::Data*,std::vector<Arad_VillageAttackRewardItem::Data,std::allocator<Arad_VillageAttackRewardItem::Data>>>,Arad_VillageAttackRewardItem::Data>
            (local_1c,local_14,local_18,param_2);
  std::vector<Arad_VillageAttackRewardItem::Data,std::allocator<Arad_VillageAttackRewardItem::Data>>
  ::end();
  bVar1 = __gnu_cxx::operator!=(local_1c,local_10);
  if (bVar1) {
    puVar2 = (undefined4 *)
             __gnu_cxx::
             __normal_iterator<Arad_VillageAttackRewardItem::Data*,std::vector<Arad_VillageAttackRewardItem::Data,std::allocator<Arad_VillageAttackRewardItem::Data>>>
             ::operator*(local_1c);
    *(undefined4 *)param_2 = *puVar2;
    *(undefined4 *)(param_2 + 4) = puVar2[1];
    *(undefined4 *)(param_2 + 8) = puVar2[2];
  }
  return bVar1;
}
```
