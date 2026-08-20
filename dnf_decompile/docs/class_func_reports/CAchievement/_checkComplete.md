# _checkComplete

`_ZN12CAchievement14_checkCompleteEj`

`CAchievement::_checkComplete(unsigned int)`

| 类 | 地址 |
|---|---|
| `CAchievement` | `0x0828bbae` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0828bbae  _ZN12CAchievement14_checkCompleteEj
#           CAchievement::_checkComplete(unsigned int)
# range [0x0828bbae, 0x0828bcb7]
0828bbae +0x000:  push   %ebp
0828bbaf +0x001:  mov    %esp,%ebp
0828bbb1 +0x003:  push   %ebx
0828bbb2 +0x004:  sub    $0x34,%esp
0828bbb5 +0x007:  mov    0xc(%ebp),%eax
0828bbb8 +0x00a:  mov    %eax,0x4(%esp)
0828bbbc +0x00e:  mov    0x8(%ebp),%eax
0828bbbf +0x011:  mov    %eax,(%esp)
0828bbc2 +0x014:  call   0828cbe4 <_ZN12CAchievement20isClearedAchievementEj>  ; CAchievement::isClearedAchievement(unsigned int)
0828bbc7 +0x019:  xor    $0x1,%eax
0828bbca +0x01c:  test   %al,%al
0828bbcc +0x01e:  jne    0828bcae <+0x100>
0828bbd2 +0x024:  mov    0xc(%ebp),%ebx
0828bbd5 +0x027:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0828bbda +0x02c:  mov    %ebx,0x4(%esp)
0828bbde +0x030:  mov    %eax,(%esp)
0828bbe1 +0x033:  call   0835fdc6 <_ZNK12CDataManager10find_questEi>  ; CDataManager::find_quest(int) const
0828bbe6 +0x038:  mov    %eax,-0x10(%ebp)
0828bbe9 +0x03b:  cmpl   $0x0,-0x10(%ebp)
0828bbed +0x03f:  je     0828bcb1 <+0x103>
0828bbf3 +0x045:  movl   $0x0,-0x14(%ebp)
0828bbfa +0x04c:  movl   $0x0,-0x18(%ebp)
0828bc01 +0x053:  mov    -0x10(%ebp),%eax
0828bc04 +0x056:  mov    %eax,(%esp)
0828bc07 +0x059:  call   08353082 <_ZNK5Quest16get_title_rewardEv>  ; Quest::get_title_reward() const
0828bc0c +0x05e:  mov    %eax,-0xc(%ebp)
0828bc0f +0x061:  cmpl   $0x0,-0xc(%ebp)
0828bc13 +0x065:  je     0828bc38 <+0x8a>
0828bc15 +0x067:  mov    0x8(%ebp),%eax
0828bc18 +0x06a:  mov    0x8(%eax),%eax
0828bc1b +0x06d:  lea    -0x18(%ebp),%edx
0828bc1e +0x070:  mov    %edx,0xc(%esp)
0828bc22 +0x074:  lea    -0x14(%ebp),%edx
0828bc25 +0x077:  mov    %edx,0x8(%esp)
0828bc29 +0x07b:  mov    -0xc(%ebp),%edx
0828bc2c +0x07e:  mov    %edx,0x4(%esp)
0828bc30 +0x082:  mov    %eax,(%esp)
0828bc33 +0x085:  call   08641e88 <_ZN10CTitleBook12putTitleOnlyEP5CUseriR24ENUM_TITLE_BOOK_CATEGORYRi>  ; CTitleBook::putTitleOnly(CUser*, int, ENUM_TITLE_BOOK_CATEGORY&, int&)
0828bc38 +0x08a:  mov    -0x10(%ebp),%eax
0828bc3b +0x08d:  mov    %eax,0x4(%esp)
0828bc3f +0x091:  mov    0x8(%ebp),%eax
0828bc42 +0x094:  mov    %eax,(%esp)
0828bc45 +0x097:  call   0828c086 <_ZN12CAchievement22_sendEachAchieveRewardEPK5Quest>  ; CAchievement::_sendEachAchieveReward(Quest const*)
0828bc4a +0x09c:  mov    -0x18(%ebp),%edx
0828bc4d +0x09f:  mov    -0x14(%ebp),%eax
0828bc50 +0x0a2:  mov    %edx,0xc(%esp)
0828bc54 +0x0a6:  mov    %eax,0x8(%esp)
0828bc58 +0x0aa:  mov    -0x10(%ebp),%eax
0828bc5b +0x0ad:  mov    %eax,0x4(%esp)
0828bc5f +0x0b1:  mov    0x8(%ebp),%eax
0828bc62 +0x0b4:  mov    %eax,(%esp)
0828bc65 +0x0b7:  call   0828bf2a <_ZN12CAchievement19_sendCompleteRewardEPK5Quest24ENUM_TITLE_BOOK_CATEGORYi>  ; CAchievement::_sendCompleteReward(Quest const*, ENUM_TITLE_BOOK_CATEGORY, int)
0828bc6a +0x0bc:  mov    -0x18(%ebp),%edx
0828bc6d +0x0bf:  mov    -0x14(%ebp),%eax
0828bc70 +0x0c2:  mov    %edx,0x10(%esp)
0828bc74 +0x0c6:  mov    %eax,0xc(%esp)
0828bc78 +0x0ca:  mov    -0xc(%ebp),%eax
0828bc7b +0x0cd:  mov    %eax,0x8(%esp)
0828bc7f +0x0d1:  mov    0xc(%ebp),%eax
0828bc82 +0x0d4:  mov    %eax,0x4(%esp)
0828bc86 +0x0d8:  mov    0x8(%ebp),%eax
0828bc89 +0x0db:  mov    %eax,(%esp)
0828bc8c +0x0de:  call   0828c3a4 <_ZN12CAchievement13_sendCompleteEji24ENUM_TITLE_BOOK_CATEGORYi>  ; CAchievement::_sendComplete(unsigned int, int, ENUM_TITLE_BOOK_CATEGORY, int)
0828bc91 +0x0e3:  mov    0xc(%ebp),%eax
0828bc94 +0x0e6:  mov    0x8(%ebp),%edx
0828bc97 +0x0e9:  mov    0x8(%edx),%edx
0828bc9a +0x0ec:  add    $0x79700,%edx
0828bca0 +0x0f2:  mov    %eax,0x4(%esp)
0828bca4 +0x0f6:  mov    %edx,(%esp)
0828bca7 +0x0f9:  call   0868512a <_ZN15cUserHistoryLog19AchievementCompleteEi>  ; cUserHistoryLog::AchievementComplete(int)
0828bcac +0x0fe:  jmp    0828bcb2 <+0x104>
0828bcae +0x100:  nop
0828bcaf +0x101:  jmp    0828bcb2 <+0x104>
0828bcb1 +0x103:  nop
0828bcb2 +0x104:  add    $0x34,%esp
0828bcb5 +0x107:  pop    %ebx
0828bcb6 +0x108:  pop    %ebp
0828bcb7 +0x109:  ret
```

## 反编译 C

```c
// CAchievement::_checkComplete @ 0x828bbae

/* CAchievement::_checkComplete(unsigned int) */

void __thiscall CAchievement::_checkComplete(CAchievement *this,uint param_1)

{
  char cVar1;
  int iVar2;
  int local_1c;
  undefined4 local_18;
  Quest *local_14;
  int local_10;
  
  cVar1 = isClearedAchievement((uint)this);
  if (cVar1 == '\x01') {
    iVar2 = G_CDataManager();
    local_14 = (Quest *)CDataManager::find_quest(iVar2);
    if (local_14 != (Quest *)0x0) {
      local_18 = 0;
      local_1c = 0;
      local_10 = Quest::get_title_reward(local_14);
      if (local_10 != 0) {
        CTitleBook::putTitleOnly
                  (*(CUser **)(this + 8),local_10,(ENUM_TITLE_BOOK_CATEGORY *)&local_18,&local_1c);
      }
      _sendEachAchieveReward(this,local_14);
      _sendCompleteReward(this,local_14,local_18,local_1c);
      _sendComplete(this,param_1,local_10,local_18,local_1c);
      cUserHistoryLog::AchievementComplete
                ((cUserHistoryLog *)(*(int *)(this + 8) + 0x79700),param_1);
    }
  }
  return;
}
```
