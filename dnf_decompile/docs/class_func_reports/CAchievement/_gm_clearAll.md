# _gm_clearAll

`_ZN12CAchievement12_gm_clearAllEv`

`CAchievement::_gm_clearAll()`

| 类 | 地址 |
|---|---|
| `CAchievement` | `0x0828d738` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0828d738  _ZN12CAchievement12_gm_clearAllEv
#           CAchievement::_gm_clearAll()
# range [0x0828d738, 0x0828d812]
0828d738 +0x00:  push   %ebp
0828d739 +0x01:  mov    %esp,%ebp
0828d73b +0x03:  push   %ebx
0828d73c +0x04:  sub    $0x44,%esp
0828d73f +0x07:  lea    -0x1c(%ebp),%eax
0828d742 +0x0a:  mov    %eax,(%esp)
0828d745 +0x0d:  call   0828d870 <_GLOBAL__I__ZN12CAchievementC2Ev+0x1d>  ; global constructors keyed to CAchievement::CAchievement()+0x1d
0828d74a +0x12:  movl   $0x1965,-0x10(%ebp)
0828d751 +0x19:  jmp    0828d7fb <+0xc3>
0828d756 +0x1e:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0828d75b +0x23:  mov    0x18(%eax),%eax
0828d75e +0x26:  mov    -0x10(%ebp),%edx
0828d761 +0x29:  mov    %edx,0x4(%esp)
0828d765 +0x2d:  mov    %eax,(%esp)
0828d768 +0x30:  call   08355a5c <_ZN9QuestList10find_questEi>  ; QuestList::find_quest(int)
0828d76d +0x35:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0828d772 +0x3a:  mov    -0x10(%ebp),%edx
0828d775 +0x3d:  mov    %edx,0x4(%esp)
0828d779 +0x41:  mov    %eax,(%esp)
0828d77c +0x44:  call   0835fdc6 <_ZNK12CDataManager10find_questEi>  ; CDataManager::find_quest(int) const
0828d781 +0x49:  mov    %eax,-0xc(%ebp)
0828d784 +0x4c:  cmpl   $0x0,-0xc(%ebp)
0828d788 +0x50:  je     0828d7f3 <+0xbb>
0828d78a +0x52:  mov    -0xc(%ebp),%eax
0828d78d +0x55:  mov    0x8(%eax),%eax
0828d790 +0x58:  cmp    $0x7,%eax
0828d793 +0x5b:  jne    0828d7f6 <+0xbe>
0828d795 +0x5d:  lea    -0x1c(%ebp),%eax
0828d798 +0x60:  add    $0x8,%eax
0828d79b +0x63:  mov    %eax,0xc(%esp)
0828d79f +0x67:  lea    -0x1c(%ebp),%eax
0828d7a2 +0x6a:  add    $0x6,%eax
0828d7a5 +0x6d:  mov    %eax,0x8(%esp)
0828d7a9 +0x71:  lea    -0x1c(%ebp),%eax
0828d7ac +0x74:  add    $0x4,%eax
0828d7af +0x77:  mov    %eax,0x4(%esp)
0828d7b3 +0x7b:  mov    -0xc(%ebp),%eax
0828d7b6 +0x7e:  mov    %eax,(%esp)
0828d7b9 +0x81:  call   08352fb4 <_ZNK5Quest28get_init_achievement_triggerERtS0_S0_>  ; Quest::get_init_achievement_trigger(unsigned short&, unsigned short&, unsigned short&) const
0828d7be +0x86:  movzwl -0x14(%ebp),%eax
0828d7c2 +0x8a:  movzwl %ax,%ebx
0828d7c5 +0x8d:  movzwl -0x16(%ebp),%eax
0828d7c9 +0x91:  movzwl %ax,%ecx
0828d7cc +0x94:  movzwl -0x18(%ebp),%eax
0828d7d0 +0x98:  movzwl %ax,%edx
0828d7d3 +0x9b:  mov    -0x10(%ebp),%eax
0828d7d6 +0x9e:  mov    %ebx,0x10(%esp)
0828d7da +0xa2:  mov    %ecx,0xc(%esp)
0828d7de +0xa6:  mov    %edx,0x8(%esp)
0828d7e2 +0xaa:  mov    %eax,0x4(%esp)
0828d7e6 +0xae:  mov    0x8(%ebp),%eax
0828d7e9 +0xb1:  mov    %eax,(%esp)
0828d7ec +0xb4:  call   0828b678 <_ZN12CAchievement10setTriggerEjttt>  ; CAchievement::setTrigger(unsigned int, unsigned short, unsigned short, unsigned short)
0828d7f1 +0xb9:  jmp    0828d7f7 <+0xbf>
0828d7f3 +0xbb:  nop
0828d7f4 +0xbc:  jmp    0828d7f7 <+0xbf>
0828d7f6 +0xbe:  nop
0828d7f7 +0xbf:  addl   $0x1,-0x10(%ebp)
0828d7fb +0xc3:  cmpl   $0x1bbb,-0x10(%ebp)
0828d802 +0xca:  setle  %al
0828d805 +0xcd:  test   %al,%al
0828d807 +0xcf:  jne    0828d756 <+0x1e>
0828d80d +0xd5:  add    $0x44,%esp
0828d810 +0xd8:  pop    %ebx
0828d811 +0xd9:  pop    %ebp
0828d812 +0xda:  ret
```

## 反编译 C

```c
// CAchievement::_gm_clearAll @ 0x828d738

/* CAchievement::_gm_clearAll() */

void __thiscall CAchievement::_gm_clearAll(CAchievement *this)

{
  int iVar1;
  stAchievement local_20 [4];
  ushort local_1c;
  ushort local_1a;
  ushort local_18 [2];
  uint local_14;
  Quest *local_10;
  
  stAchievement::stAchievement(local_20);
  for (local_14 = 0x1965; (int)local_14 < 0x1bbc; local_14 = local_14 + 1) {
    iVar1 = G_CDataManager();
    QuestList::find_quest(*(int *)(iVar1 + 0x18));
    iVar1 = G_CDataManager();
    local_10 = (Quest *)CDataManager::find_quest(iVar1);
    if ((local_10 != (Quest *)0x0) && (*(int *)(local_10 + 8) == 7)) {
      Quest::get_init_achievement_trigger(local_10,&local_1c,&local_1a,local_18);
      setTrigger(this,local_14,local_1c,local_1a,local_18[0]);
    }
  }
  return;
}
```
