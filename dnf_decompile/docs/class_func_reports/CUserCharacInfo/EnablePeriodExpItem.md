# EnablePeriodExpItem

`_ZN15CUserCharacInfo19EnablePeriodExpItemEv`

`CUserCharacInfo::EnablePeriodExpItem()`

| 类 | 地址 |
|---|---|
| `CUserCharacInfo` | `0x08659cf0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08659cf0  _ZN15CUserCharacInfo19EnablePeriodExpItemEv
#           CUserCharacInfo::EnablePeriodExpItem()
# range [0x08659cf0, 0x08659e3d]
08659cf0 +0x000:  push   %ebp
08659cf1 +0x001:  mov    %esp,%ebp
08659cf3 +0x003:  push   %ebx
08659cf4 +0x004:  sub    $0x44,%esp
08659cf7 +0x007:  mov    0x8(%ebp),%eax
08659cfa +0x00a:  mov    0x10(%eax),%eax
08659cfd +0x00d:  add    $0xea6,%eax
08659d02 +0x012:  mov    %eax,-0x1c(%ebp)
08659d05 +0x015:  lea    -0x28(%ebp),%eax
08659d08 +0x018:  mov    -0x1c(%ebp),%edx
08659d0b +0x01b:  mov    %edx,0x4(%esp)
08659d0f +0x01f:  mov    %eax,(%esp)
08659d12 +0x022:  call   0869aeba <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x770f>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x770f
08659d17 +0x027:  sub    $0x4,%esp
08659d1a +0x02a:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
08659d21 +0x031:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
08659d26 +0x036:  mov    %eax,-0x18(%ebp)
08659d29 +0x039:  jmp    08659e05 <+0x115>
08659d2e +0x03e:  lea    -0x28(%ebp),%eax
08659d31 +0x041:  mov    %eax,(%esp)
08659d34 +0x044:  call   0869af30 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x7785>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x7785
08659d39 +0x049:  mov    (%eax),%eax
08659d3b +0x04b:  mov    %eax,%ebx
08659d3d +0x04d:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08659d42 +0x052:  mov    %ebx,0x4(%esp)
08659d46 +0x056:  mov    %eax,(%esp)
08659d49 +0x059:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
08659d4e +0x05e:  mov    %eax,-0x14(%ebp)
08659d51 +0x061:  cmpl   $0x0,-0x14(%ebp)
08659d55 +0x065:  jne    08659d61 <+0x71>
08659d57 +0x067:  mov    $0x0,%eax
08659d5c +0x06c:  jmp    08659e39 <+0x149>
08659d61 +0x071:  mov    -0x14(%ebp),%eax
08659d64 +0x074:  mov    %eax,(%esp)
08659d67 +0x077:  call   080f12fa <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x37c>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x37c
08659d6c +0x07c:  test   %al,%al
08659d6e +0x07e:  je     08659de8 <+0xf8>
08659d70 +0x080:  mov    -0x14(%ebp),%eax
08659d73 +0x083:  mov    %eax,-0x10(%ebp)
08659d76 +0x086:  mov    -0x10(%ebp),%eax
08659d79 +0x089:  mov    %eax,(%esp)
08659d7c +0x08c:  call   08694736 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0xf8b>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0xf8b
08659d81 +0x091:  test   %al,%al
08659d83 +0x093:  je     08659de8 <+0xf8>
08659d85 +0x095:  lea    -0x28(%ebp),%eax
08659d88 +0x098:  mov    %eax,(%esp)
08659d8b +0x09b:  call   0869af30 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x7785>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x7785
08659d90 +0x0a0:  mov    0x4(%eax),%eax
08659d93 +0x0a3:  mov    %eax,-0xc(%ebp)
08659d96 +0x0a6:  mov    -0x18(%ebp),%eax
08659d99 +0x0a9:  cmp    -0xc(%ebp),%eax
08659d9c +0x0ac:  jae    08659da8 <+0xb8>
08659d9e +0x0ae:  mov    $0x1,%eax
08659da3 +0x0b3:  jmp    08659e39 <+0x149>
08659da8 +0x0b8:  lea    -0x2c(%ebp),%eax
08659dab +0x0bb:  mov    -0x28(%ebp),%edx
08659dae +0x0be:  mov    %edx,0x8(%esp)
08659db2 +0x0c2:  mov    -0x1c(%ebp),%edx
08659db5 +0x0c5:  mov    %edx,0x4(%esp)
08659db9 +0x0c9:  mov    %eax,(%esp)
08659dbc +0x0cc:  call   0869af3a <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x778f>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x778f
08659dc1 +0x0d1:  sub    $0x4,%esp
08659dc4 +0x0d4:  mov    -0x2c(%ebp),%eax
08659dc7 +0x0d7:  mov    %eax,-0x28(%ebp)
08659dca +0x0da:  mov    $0x0,%eax
08659dcf +0x0df:  mov    %eax,0x8(%esp)
08659dd3 +0x0e3:  movl   $0x0,0x4(%esp)
08659ddb +0x0eb:  mov    0x8(%ebp),%eax
08659dde +0x0ee:  mov    %eax,(%esp)
08659de1 +0x0f1:  call   0863be1c <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x32d>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x32d
08659de6 +0x0f6:  jmp    08659e34 <+0x144>
08659de8 +0x0f8:  lea    -0x20(%ebp),%eax
08659deb +0x0fb:  movl   $0x0,0x8(%esp)
08659df3 +0x103:  lea    -0x28(%ebp),%edx
08659df6 +0x106:  mov    %edx,0x4(%esp)
08659dfa +0x10a:  mov    %eax,(%esp)
08659dfd +0x10d:  call   0869b020 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x7875>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x7875
08659e02 +0x112:  sub    $0x4,%esp
08659e05 +0x115:  lea    -0x24(%ebp),%eax
08659e08 +0x118:  mov    -0x1c(%ebp),%edx
08659e0b +0x11b:  mov    %edx,0x4(%esp)
08659e0f +0x11f:  mov    %eax,(%esp)
08659e12 +0x122:  call   0869aede <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x7733>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x7733
08659e17 +0x127:  sub    $0x4,%esp
08659e1a +0x12a:  lea    -0x24(%ebp),%eax
08659e1d +0x12d:  mov    %eax,0x4(%esp)
08659e21 +0x131:  lea    -0x28(%ebp),%eax
08659e24 +0x134:  mov    %eax,(%esp)
08659e27 +0x137:  call   0869af04 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x7759>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x7759
08659e2c +0x13c:  test   %al,%al
08659e2e +0x13e:  jne    08659d2e <+0x3e>
08659e34 +0x144:  mov    $0x0,%eax
08659e39 +0x149:  mov    -0x4(%ebp),%ebx
08659e3c +0x14c:  leave
08659e3d +0x14d:  ret
```

## 反编译 C

```c
// CUserCharacInfo::EnablePeriodExpItem @ 0x8659cf0

/* CUserCharacInfo::EnablePeriodExpItem() */

undefined4 __thiscall CUserCharacInfo::EnablePeriodExpItem(CUserCharacInfo *this)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  CDataManager *this_00;
  int iVar4;
  undefined4 local_30;
  undefined4 local_2c;
  __normal_iterator local_28 [4];
  __normal_iterator<ContinuousItemInfo*,std::vector<ContinuousItemInfo,std::allocator<ContinuousItemInfo>>>
  local_24 [4];
  int local_20;
  uint local_1c;
  CStackableItem *local_18;
  CStackableItem *local_14;
  uint local_10;
  
  local_20 = *(int *)(this + 0x10) + 0xea6;
  std::vector<ContinuousItemInfo,std::allocator<ContinuousItemInfo>>::begin();
  local_1c = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  while( true ) {
    std::vector<ContinuousItemInfo,std::allocator<ContinuousItemInfo>>::end();
    bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_2c,local_28);
    if (!bVar2) {
      return 0;
    }
    piVar3 = (int *)__gnu_cxx::
                    __normal_iterator<ContinuousItemInfo*,std::vector<ContinuousItemInfo,std::allocator<ContinuousItemInfo>>>
                    ::operator->((__normal_iterator<ContinuousItemInfo*,std::vector<ContinuousItemInfo,std::allocator<ContinuousItemInfo>>>
                                  *)&local_2c);
    iVar4 = *piVar3;
    this_00 = (CDataManager *)G_CDataManager();
    local_18 = (CStackableItem *)CDataManager::find_item(this_00,iVar4);
    if (local_18 == (CStackableItem *)0x0) break;
    cVar1 = CItem::is_stackable((CItem *)local_18);
    if (cVar1 != '\0') {
      local_14 = local_18;
      cVar1 = CStackableItem::IsExpAffect(local_18);
      if (cVar1 != '\0') {
        iVar4 = __gnu_cxx::
                __normal_iterator<ContinuousItemInfo*,std::vector<ContinuousItemInfo,std::allocator<ContinuousItemInfo>>>
                ::operator->((__normal_iterator<ContinuousItemInfo*,std::vector<ContinuousItemInfo,std::allocator<ContinuousItemInfo>>>
                              *)&local_2c);
        local_10 = *(uint *)(iVar4 + 4);
        if (local_10 <= local_1c) {
          std::vector<ContinuousItemInfo,std::allocator<ContinuousItemInfo>>::erase
                    (&local_30,local_20,local_2c);
          local_2c = local_30;
          SetExpAffectItemEffect(this,false,0.0);
          return 0;
        }
        return 1;
      }
    }
    __gnu_cxx::
    __normal_iterator<ContinuousItemInfo*,std::vector<ContinuousItemInfo,std::allocator<ContinuousItemInfo>>>
    ::operator++(local_24,(int)&local_2c);
  }
  return 0;
}
```
