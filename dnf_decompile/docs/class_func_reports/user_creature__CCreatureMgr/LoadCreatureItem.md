# LoadCreatureItem

`_ZN13user_creature12CCreatureMgr16LoadCreatureItemEP10Inven_ItemP29SIG_CREATURE_ITEM_DETAIL_INFO`

`user_creature::CCreatureMgr::LoadCreatureItem(Inven_Item*, SIG_CREATURE_ITEM_DETAIL_INFO*)`

| 类 | 地址 |
|---|---|
| `user_creature::CCreatureMgr` | `0x0833b68c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0833b68c  _ZN13user_creature12CCreatureMgr16LoadCreatureItemEP10Inven_ItemP29SIG_CREATURE_ITEM_DETAIL_INFO
#           user_creature::CCreatureMgr::LoadCreatureItem(Inven_Item*, SIG_CREATURE_ITEM_DETAIL_INFO*)
# range [0x0833b68c, 0x0833b80b]
0833b68c +0x000:  push   %ebp
0833b68d +0x001:  mov    %esp,%ebp
0833b68f +0x003:  push   %edi
0833b690 +0x004:  push   %esi
0833b691 +0x005:  push   %ebx
0833b692 +0x006:  sub    $0x4c,%esp
0833b695 +0x009:  mov    0x10(%ebp),%eax
0833b698 +0x00c:  movzbl 0x24(%eax),%eax
0833b69c +0x010:  movsbl %al,%ebx
0833b69f +0x013:  call   0833f715 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x17e2>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x17e2
0833b6a4 +0x018:  mov    %ebx,0x4(%esp)
0833b6a8 +0x01c:  mov    %eax,(%esp)
0833b6ab +0x01f:  call   0833f57c <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x1649>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x1649
0833b6b0 +0x024:  mov    %eax,-0x20(%ebp)
0833b6b3 +0x027:  cmpl   $0x0,-0x20(%ebp)
0833b6b7 +0x02b:  jne    0833b6c3 <+0x37>
0833b6b9 +0x02d:  mov    $0x0,%eax
0833b6be +0x032:  jmp    0833b804 <+0x178>
0833b6c3 +0x037:  mov    0x8(%ebp),%eax
0833b6c6 +0x03a:  mov    0x2c(%eax),%eax
0833b6c9 +0x03d:  cmp    $0xffffffff,%eax
0833b6cc +0x040:  je     0833b712 <+0x86>
0833b6ce +0x042:  mov    0x8(%ebp),%eax
0833b6d1 +0x045:  mov    0x2c(%eax),%eax
0833b6d4 +0x048:  test   %eax,%eax
0833b6d6 +0x04a:  jne    0833b6e6 <+0x5a>
0833b6d8 +0x04c:  mov    0x8(%ebp),%eax
0833b6db +0x04f:  mov    0x2c(%eax),%edx
0833b6de +0x052:  mov    0x10(%ebp),%eax
0833b6e1 +0x055:  mov    %edx,0x28(%eax)
0833b6e4 +0x058:  jmp    0833b6ff <+0x73>
0833b6e6 +0x05a:  call   0858c802 <_ZN6OS_API15GetDateTimeTickEv>  ; OS_API::GetDateTimeTick()
0833b6eb +0x05f:  mov    %eax,-0x1c(%ebp)
0833b6ee +0x062:  mov    0x8(%ebp),%eax
0833b6f1 +0x065:  mov    0x2c(%eax),%eax
0833b6f4 +0x068:  add    -0x1c(%ebp),%eax
0833b6f7 +0x06b:  mov    %eax,%edx
0833b6f9 +0x06d:  mov    0x10(%ebp),%eax
0833b6fc +0x070:  mov    %edx,0x28(%eax)
0833b6ff +0x073:  movl   $0xffffffff,0x4(%esp)
0833b707 +0x07b:  mov    0x8(%ebp),%eax
0833b70a +0x07e:  mov    %eax,(%esp)
0833b70d +0x081:  call   0833f10c <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x11d9>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x11d9
0833b712 +0x086:  mov    0x10(%ebp),%eax
0833b715 +0x089:  mov    0x4(%eax),%eax
0833b718 +0x08c:  mov    %eax,0x4(%esp)
0833b71c +0x090:  mov    0x8(%ebp),%eax
0833b71f +0x093:  mov    %eax,(%esp)
0833b722 +0x096:  call   0833d962 <_ZN13user_creature12CCreatureMgr18UnRegistTempPeriodEi>  ; user_creature::CCreatureMgr::UnRegistTempPeriod(int)
0833b727 +0x09b:  mov    -0x20(%ebp),%eax
0833b72a +0x09e:  mov    (%eax),%eax
0833b72c +0x0a0:  add    $0x8,%eax
0833b72f +0x0a3:  mov    (%eax),%edx
0833b731 +0x0a5:  mov    0x8(%ebp),%eax
0833b734 +0x0a8:  mov    0x1c(%eax),%eax
0833b737 +0x0ab:  mov    %eax,0x10(%esp)
0833b73b +0x0af:  mov    0x10(%ebp),%eax
0833b73e +0x0b2:  mov    %eax,0xc(%esp)
0833b742 +0x0b6:  mov    0xc(%ebp),%eax
0833b745 +0x0b9:  mov    %eax,0x8(%esp)
0833b749 +0x0bd:  mov    0x8(%ebp),%eax
0833b74c +0x0c0:  mov    %eax,0x4(%esp)
0833b750 +0x0c4:  mov    -0x20(%ebp),%eax
0833b753 +0x0c7:  mov    %eax,(%esp)
0833b756 +0x0ca:  call   *%edx
0833b758 +0x0cc:  xor    $0x1,%eax
0833b75b +0x0cf:  test   %al,%al
0833b75d +0x0d1:  je     0833b7d9 <+0x14d>
0833b75f +0x0d3:  mov    0xc(%ebp),%eax
0833b762 +0x0d6:  mov    0x7(%eax),%edi
0833b765 +0x0d9:  mov    0xc(%ebp),%eax
0833b768 +0x0dc:  mov    0x2(%eax),%esi
0833b76b +0x0df:  mov    0x8(%ebp),%eax
0833b76e +0x0e2:  mov    0x1c(%eax),%eax
0833b771 +0x0e5:  mov    %eax,(%esp)
0833b774 +0x0e8:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
0833b779 +0x0ed:  movzwl %ax,%ebx
0833b77c +0x0f0:  movl   $0x5,0xc(%esp)
0833b784 +0x0f8:  movl   $0xd36,0x8(%esp)
0833b78c +0x100:  movl   $&_ZZN13user_creature12CCreatureMgr16LoadCreatureItemEP10Inven_ItemP29SIG_CREATURE_ITEM_DETAIL_INFOE19__PRETTY_FUNCTION__,0x4(%esp)
0833b794 +0x108:  lea    -0x30(%ebp),%eax
0833b797 +0x10b:  mov    %eax,(%esp)
0833b79a +0x10e:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0833b79f +0x113:  mov    %edi,0x10(%esp)
0833b7a3 +0x117:  mov    %esi,0xc(%esp)
0833b7a7 +0x11b:  mov    %ebx,0x8(%esp)
0833b7ab +0x11f:  movl   $"LoadCreatureItem() failed %d,%d,%d\n",0x4(%esp)
0833b7b3 +0x127:  lea    -0x30(%ebp),%eax
0833b7b6 +0x12a:  mov    %eax,(%esp)
0833b7b9 +0x12d:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0833b7be +0x132:  call   0833f715 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x17e2>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x17e2
0833b7c3 +0x137:  mov    -0x20(%ebp),%edx
0833b7c6 +0x13a:  mov    %edx,0x4(%esp)
0833b7ca +0x13e:  mov    %eax,(%esp)
0833b7cd +0x141:  call   0833f618 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x16e5>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x16e5
0833b7d2 +0x146:  mov    $0x0,%eax
0833b7d7 +0x14b:  jmp    0833b804 <+0x178>
0833b7d9 +0x14d:  mov    0x10(%ebp),%eax
0833b7dc +0x150:  movzbl 0x30(%eax),%eax
0833b7e0 +0x154:  xor    $0x1,%eax
0833b7e3 +0x157:  test   %al,%al
0833b7e5 +0x159:  je     0833b7ff <+0x173>
0833b7e7 +0x15b:  mov    0x10(%ebp),%eax
0833b7ea +0x15e:  movzbl 0x24(%eax),%eax
0833b7ee +0x162:  cmp    $0x1,%al
0833b7f0 +0x164:  jne    0833b7ff <+0x173>
0833b7f2 +0x166:  mov    0x10(%ebp),%eax
0833b7f5 +0x169:  movzbl 0x31(%eax),%edx
0833b7f9 +0x16d:  mov    0x8(%ebp),%eax
0833b7fc +0x170:  mov    %dl,0x48(%eax)
0833b7ff +0x173:  mov    $0x1,%eax
0833b804 +0x178:  add    $0x4c,%esp
0833b807 +0x17b:  pop    %ebx
0833b808 +0x17c:  pop    %esi
0833b809 +0x17d:  pop    %edi
0833b80a +0x17e:  pop    %ebp
0833b80b +0x17f:  ret
```

## 反编译 C

```c
// user_creature::CCreatureMgr::LoadCreatureItem @ 0x833b68c

/* user_creature::CCreatureMgr::LoadCreatureItem(Inven_Item*, SIG_CREATURE_ITEM_DETAIL_INFO*) */

undefined4 __thiscall
user_creature::CCreatureMgr::LoadCreatureItem
          (CCreatureMgr *this,Inven_Item *param_1,SIG_CREATURE_ITEM_DETAIL_INFO *param_2)

{
  SIG_CREATURE_ITEM_DETAIL_INFO SVar1;
  undefined4 uVar2;
  char cVar3;
  CCreatureItemFactory *pCVar4;
  undefined4 uVar5;
  uint uVar6;
  cMyTrace local_34 [16];
  CCreatureItem *local_24;
  int local_20;
  
  SVar1 = param_2[0x24];
  pCVar4 = (CCreatureItemFactory *)GetInstanceCreatureItemFactory();
  local_24 = (CCreatureItem *)CCreatureItemFactory::AcquireCreatureItem(pCVar4,(int)(char)SVar1);
  if (local_24 == (CCreatureItem *)0x0) {
    uVar5 = 0;
  }
  else {
    if (*(int *)(this + 0x2c) != -1) {
      if (*(int *)(this + 0x2c) == 0) {
        *(undefined4 *)(param_2 + 0x28) = *(undefined4 *)(this + 0x2c);
      }
      else {
        local_20 = OS_API::GetDateTimeTick();
        *(int *)(param_2 + 0x28) = *(int *)(this + 0x2c) + local_20;
      }
      setTempExpireTime(this,-1);
    }
    UnRegistTempPeriod((int)this);
    cVar3 = (**(code **)(*(int *)local_24 + 8))
                      (local_24,this,param_1,param_2,*(undefined4 *)(this + 0x1c));
    if (cVar3 == '\x01') {
      if ((param_2[0x30] != (SIG_CREATURE_ITEM_DETAIL_INFO)0x1) &&
         (param_2[0x24] == (SIG_CREATURE_ITEM_DETAIL_INFO)0x1)) {
        this[0x48] = *(CCreatureMgr *)(param_2 + 0x31);
      }
      uVar5 = 1;
    }
    else {
      uVar5 = *(undefined4 *)(param_1 + 7);
      uVar2 = *(undefined4 *)(param_1 + 2);
      uVar6 = CUser::get_unique_id(*(CUser **)(this + 0x1c));
      cMyTrace::cMyTrace(local_34,
                         "bool user_creature::CCreatureMgr::LoadCreatureItem(Inven_Item*, SIG_CREATURE_ITEM_DETAIL_INFO*)"
                         ,0xd36,5);
      cMyTrace::operator()
                (local_34,"LoadCreatureItem() failed %d,%d,%d\n",uVar6 & 0xffff,uVar2,uVar5);
      pCVar4 = (CCreatureItemFactory *)GetInstanceCreatureItemFactory();
      CCreatureItemFactory::FreeCreatureItem(pCVar4,local_24);
      uVar5 = 0;
    }
  }
  return uVar5;
}
```
