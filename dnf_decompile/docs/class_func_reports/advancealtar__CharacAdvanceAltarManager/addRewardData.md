# addRewardData

`_ZN12advancealtar25CharacAdvanceAltarManager13addRewardDataEiRSt3mapIiNS_7_RewardESt4lessIiESaISt4pairIKiS2_EEE`

`advancealtar::CharacAdvanceAltarManager::addRewardData(int, std::map<int, advancealtar::_Reward, std::less<int>, std::allocator<std::pair<int const, advancealtar::_Reward> > >&)`

| 类 | 地址 |
|---|---|
| `advancealtar::CharacAdvanceAltarManager` | `0x08132abe` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08132abe  _ZN12advancealtar25CharacAdvanceAltarManager13addRewardDataEiRSt3mapIiNS_7_RewardESt4lessIiESaISt4pairIKiS2_EEE
#           advancealtar::CharacAdvanceAltarManager::addRewardData(int, std::map<int, advancealtar::_Reward, std::less<int>, std::allocator<std::pair<int const, advancealtar::_Reward> > >&)
# range [0x08132abe, 0x08132bf9]
08132abe +0x000:  push   %ebp
08132abf +0x001:  mov    %esp,%ebp
08132ac1 +0x003:  sub    $0x78,%esp
08132ac4 +0x006:  mov    0x8(%ebp),%eax
08132ac7 +0x009:  mov    (%eax),%eax
08132ac9 +0x00b:  mov    %eax,-0xc(%ebp)
08132acc +0x00e:  cmpl   $0x0,-0xc(%ebp)
08132ad0 +0x012:  jne    08132adc <+0x1e>
08132ad2 +0x014:  mov    $0x0,%eax
08132ad7 +0x019:  jmp    08132bf8 <+0x13a>
08132adc +0x01e:  mov    -0xc(%ebp),%eax
08132adf +0x021:  lea    0xb4(%eax),%ecx
08132ae5 +0x027:  lea    -0x54(%ebp),%eax
08132ae8 +0x02a:  lea    0xc(%ebp),%edx
08132aeb +0x02d:  mov    %edx,0x8(%esp)
08132aef +0x031:  mov    %ecx,0x4(%esp)
08132af3 +0x035:  mov    %eax,(%esp)
08132af6 +0x038:  call   08136282 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1e89>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1e89
08132afb +0x03d:  sub    $0x4,%esp
08132afe +0x040:  mov    -0xc(%ebp),%eax
08132b01 +0x043:  lea    0xb4(%eax),%edx
08132b07 +0x049:  lea    -0x50(%ebp),%eax
08132b0a +0x04c:  mov    %edx,0x4(%esp)
08132b0e +0x050:  mov    %eax,(%esp)
08132b11 +0x053:  call   081362ae <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1eb5>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1eb5
08132b16 +0x058:  sub    $0x4,%esp
08132b19 +0x05b:  lea    -0x50(%ebp),%eax
08132b1c +0x05e:  mov    %eax,0x4(%esp)
08132b20 +0x062:  lea    -0x54(%ebp),%eax
08132b23 +0x065:  mov    %eax,(%esp)
08132b26 +0x068:  call   081362d4 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1edb>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1edb
08132b2b +0x06d:  test   %al,%al
08132b2d +0x06f:  je     08132bf3 <+0x135>
08132b33 +0x075:  lea    -0x59(%ebp),%eax
08132b36 +0x078:  mov    %eax,(%esp)
08132b39 +0x07b:  call   081344be <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0xc5>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0xc5
08132b3e +0x080:  mov    0xc(%ebp),%eax
08132b41 +0x083:  mov    %eax,-0x59(%ebp)
08132b44 +0x086:  movb   $0x0,-0x55(%ebp)
08132b48 +0x08a:  lea    -0x38(%ebp),%eax
08132b4b +0x08d:  lea    -0x59(%ebp),%edx
08132b4e +0x090:  mov    %edx,0x8(%esp)
08132b52 +0x094:  lea    0xc(%ebp),%edx
08132b55 +0x097:  mov    %edx,0x4(%esp)
08132b59 +0x09b:  mov    %eax,(%esp)
08132b5c +0x09e:  call   0813646c <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x2073>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x2073
08132b61 +0x0a3:  sub    $0x4,%esp
08132b64 +0x0a6:  lea    -0x38(%ebp),%eax
08132b67 +0x0a9:  mov    %eax,0x4(%esp)
08132b6b +0x0ad:  lea    -0x44(%ebp),%eax
08132b6e +0x0b0:  mov    %eax,(%esp)
08132b71 +0x0b3:  call   081364aa <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x20b1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x20b1
08132b76 +0x0b8:  mov    -0xc(%ebp),%eax
08132b79 +0x0bb:  lea    0xb4(%eax),%ecx
08132b7f +0x0c1:  lea    -0x4c(%ebp),%eax
08132b82 +0x0c4:  lea    -0x44(%ebp),%edx
08132b85 +0x0c7:  mov    %edx,0x8(%esp)
08132b89 +0x0cb:  mov    %ecx,0x4(%esp)
08132b8d +0x0cf:  mov    %eax,(%esp)
08132b90 +0x0d2:  call   081364e2 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x20e9>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x20e9
08132b95 +0x0d7:  sub    $0x4,%esp
08132b98 +0x0da:  mov    -0xc(%ebp),%eax
08132b9b +0x0dd:  movb   $0x1,0xcc(%eax)
08132ba2 +0x0e4:  lea    -0x18(%ebp),%eax
08132ba5 +0x0e7:  lea    -0x59(%ebp),%edx
08132ba8 +0x0ea:  mov    %edx,0x8(%esp)
08132bac +0x0ee:  lea    0xc(%ebp),%edx
08132baf +0x0f1:  mov    %edx,0x4(%esp)
08132bb3 +0x0f5:  mov    %eax,(%esp)
08132bb6 +0x0f8:  call   0813646c <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x2073>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x2073
08132bbb +0x0fd:  sub    $0x4,%esp
08132bbe +0x100:  lea    -0x18(%ebp),%eax
08132bc1 +0x103:  mov    %eax,0x4(%esp)
08132bc5 +0x107:  lea    -0x24(%ebp),%eax
08132bc8 +0x10a:  mov    %eax,(%esp)
08132bcb +0x10d:  call   081364aa <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x20b1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x20b1
08132bd0 +0x112:  lea    -0x2c(%ebp),%eax
08132bd3 +0x115:  lea    -0x24(%ebp),%edx
08132bd6 +0x118:  mov    %edx,0x8(%esp)
08132bda +0x11c:  mov    0x10(%ebp),%edx
08132bdd +0x11f:  mov    %edx,0x4(%esp)
08132be1 +0x123:  mov    %eax,(%esp)
08132be4 +0x126:  call   081364e2 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x20e9>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x20e9
08132be9 +0x12b:  sub    $0x4,%esp
08132bec +0x12e:  mov    $0x1,%eax
08132bf1 +0x133:  jmp    08132bf8 <+0x13a>
08132bf3 +0x135:  mov    $0x0,%eax
08132bf8 +0x13a:  leave
08132bf9 +0x13b:  ret
```

## 反编译 C

```c
// advancealtar::CharacAdvanceAltarManager::addRewardData @ 0x8132abe

/* advancealtar::CharacAdvanceAltarManager::addRewardData(int, std::map<int, advancealtar::_Reward,
   std::less<int>, std::allocator<std::pair<int const, advancealtar::_Reward> > >&) */

undefined4 __thiscall
advancealtar::CharacAdvanceAltarManager::addRewardData
          (CharacAdvanceAltarManager *this,int param_1,map *param_2)

{
  char cVar1;
  undefined4 uVar2;
  int local_5d;
  undefined1 local_59;
  _Rb_tree_iterator<std::pair<int_const,advancealtar::_Reward>> local_58 [4];
  map<int,advancealtar::_Reward,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_Reward>>>
  local_54 [4];
  pair local_50 [8];
  pair<int_const,advancealtar::_Reward> local_48 [12];
  int local_3c [3];
  pair local_30 [8];
  pair<int_const,advancealtar::_Reward> local_28 [12];
  int local_1c [3];
  int local_10;
  
  local_10 = *(int *)this;
  if (local_10 == 0) {
    uVar2 = 0;
  }
  else {
    std::
    map<int,advancealtar::_Reward,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_Reward>>>
    ::find((int *)local_58);
    std::
    map<int,advancealtar::_Reward,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_Reward>>>
    ::end(local_54);
    cVar1 = std::_Rb_tree_iterator<std::pair<int_const,advancealtar::_Reward>>::operator==
                      (local_58,(_Rb_tree_iterator *)local_54);
    if (cVar1 == '\0') {
      uVar2 = 0;
    }
    else {
      _Reward::_Reward((_Reward *)&local_5d);
      local_5d = param_1;
      local_59 = 0;
      std::make_pair<int&,advancealtar::_Reward&>(local_3c,(_Reward *)&param_1);
      std::pair<int_const,advancealtar::_Reward>::pair<int,advancealtar::_Reward>
                (local_48,(pair *)local_3c);
      std::
      map<int,advancealtar::_Reward,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_Reward>>>
      ::insert(local_50);
      *(undefined1 *)(local_10 + 0xcc) = 1;
      std::make_pair<int&,advancealtar::_Reward&>(local_1c,(_Reward *)&param_1);
      std::pair<int_const,advancealtar::_Reward>::pair<int,advancealtar::_Reward>
                (local_28,(pair *)local_1c);
      std::
      map<int,advancealtar::_Reward,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_Reward>>>
      ::insert(local_30);
      uVar2 = 1;
    }
  }
  return uVar2;
}
```
