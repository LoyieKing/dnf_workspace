# RegisterCreatureItem

`_ZN13user_creature12CCreatureMgr20RegisterCreatureItemEPNS_13CCreatureItemEi`

`user_creature::CCreatureMgr::RegisterCreatureItem(user_creature::CCreatureItem*, int)`

| 类 | 地址 |
|---|---|
| `user_creature::CCreatureMgr` | `0x0833a77e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0833a77e  _ZN13user_creature12CCreatureMgr20RegisterCreatureItemEPNS_13CCreatureItemEi
#           user_creature::CCreatureMgr::RegisterCreatureItem(user_creature::CCreatureItem*, int)
# range [0x0833a77e, 0x0833a853]
0833a77e +0x00:  push   %ebp
0833a77f +0x01:  mov    %esp,%ebp
0833a781 +0x03:  push   %esi
0833a782 +0x04:  push   %ebx
0833a783 +0x05:  sub    $0x40,%esp
0833a786 +0x08:  mov    0x10(%ebp),%eax
0833a789 +0x0b:  mov    %eax,0x4(%esp)
0833a78d +0x0f:  mov    0x8(%ebp),%eax
0833a790 +0x12:  mov    %eax,(%esp)
0833a793 +0x15:  call   08339292 <_ZNK13user_creature12CCreatureMgr16FindCreatureItemEi>  ; user_creature::CCreatureMgr::FindCreatureItem(int) const
0833a798 +0x1a:  test   %eax,%eax
0833a79a +0x1c:  setne  %al
0833a79d +0x1f:  test   %al,%al
0833a79f +0x21:  je     0833a7fa <+0x7c>
0833a7a1 +0x23:  mov    0x10(%ebp),%esi
0833a7a4 +0x26:  mov    0x8(%ebp),%eax
0833a7a7 +0x29:  mov    0x1c(%eax),%eax
0833a7aa +0x2c:  mov    %eax,(%esp)
0833a7ad +0x2f:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
0833a7b2 +0x34:  movzwl %ax,%ebx
0833a7b5 +0x37:  movl   $0x5,0xc(%esp)
0833a7bd +0x3f:  movl   $0xbb4,0x8(%esp)
0833a7c5 +0x47:  movl   $&_ZZN13user_creature12CCreatureMgr20RegisterCreatureItemEPNS_13CCreatureItemEiE19__PRETTY_FUNCTION__,0x4(%esp)
0833a7cd +0x4f:  lea    -0x30(%ebp),%eax
0833a7d0 +0x52:  mov    %eax,(%esp)
0833a7d3 +0x55:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0833a7d8 +0x5a:  mov    %esi,0xc(%esp)
0833a7dc +0x5e:  mov    %ebx,0x8(%esp)
0833a7e0 +0x62:  movl   $"RegisterCreatureItem failed. uid(%d), key(%d)\n",0x4(%esp)
0833a7e8 +0x6a:  lea    -0x30(%ebp),%eax
0833a7eb +0x6d:  mov    %eax,(%esp)
0833a7ee +0x70:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0833a7f3 +0x75:  mov    $0x0,%eax
0833a7f8 +0x7a:  jmp    0833a849 <+0xcb>
0833a7fa +0x7c:  lea    -0x10(%ebp),%eax
0833a7fd +0x7f:  lea    0xc(%ebp),%edx
0833a800 +0x82:  mov    %edx,0x8(%esp)
0833a804 +0x86:  lea    0x10(%ebp),%edx
0833a807 +0x89:  mov    %edx,0x4(%esp)
0833a80b +0x8d:  mov    %eax,(%esp)
0833a80e +0x90:  call   08342a83 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x4b50>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x4b50
0833a813 +0x95:  sub    $0x4,%esp
0833a816 +0x98:  lea    -0x10(%ebp),%eax
0833a819 +0x9b:  mov    %eax,0x4(%esp)
0833a81d +0x9f:  lea    -0x18(%ebp),%eax
0833a820 +0xa2:  mov    %eax,(%esp)
0833a823 +0xa5:  call   08342ac2 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x4b8f>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x4b8f
0833a828 +0xaa:  mov    0x8(%ebp),%edx
0833a82b +0xad:  lea    -0x20(%ebp),%eax
0833a82e +0xb0:  lea    -0x18(%ebp),%ecx
0833a831 +0xb3:  mov    %ecx,0x8(%esp)
0833a835 +0xb7:  mov    %edx,0x4(%esp)
0833a839 +0xbb:  mov    %eax,(%esp)
0833a83c +0xbe:  call   08342af2 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x4bbf>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x4bbf
0833a841 +0xc3:  sub    $0x4,%esp
0833a844 +0xc6:  mov    $0x1,%eax
0833a849 +0xcb:  lea    -0x8(%ebp),%esp
0833a84c +0xce:  add    $0x0,%esp
0833a84f +0xd1:  pop    %ebx
0833a850 +0xd2:  pop    %esi
0833a851 +0xd3:  pop    %ebp
0833a852 +0xd4:  ret
0833a853 +0xd5:  nop
```

## 反编译 C

```c
// user_creature::CCreatureMgr::RegisterCreatureItem @ 0x833a77e

/* user_creature::CCreatureMgr::RegisterCreatureItem(user_creature::CCreatureItem*, int) */

bool __thiscall
user_creature::CCreatureMgr::RegisterCreatureItem
          (CCreatureMgr *this,CCreatureItem *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  cMyTrace local_34 [16];
  pair local_24 [8];
  pair<int_const,user_creature::CCreatureItem*> local_1c [8];
  int local_14 [2];
  
  iVar2 = FindCreatureItem((int)this);
  iVar1 = param_2;
  if (iVar2 == 0) {
    std::make_pair<int&,user_creature::CCreatureItem*&>(local_14,(CCreatureItem **)&param_2);
    std::pair<int_const,user_creature::CCreatureItem*>::pair<int,user_creature::CCreatureItem*>
              (local_1c,(pair *)local_14);
    std::
    map<int,user_creature::CCreatureItem*,std::less<int>,std::allocator<std::pair<int_const,user_creature::CCreatureItem*>>>
    ::insert(local_24);
  }
  else {
    uVar3 = CUser::get_unique_id(*(CUser **)(this + 0x1c));
    cMyTrace::cMyTrace(local_34,
                       "bool user_creature::CCreatureMgr::RegisterCreatureItem(user_creature::CCreatureItem*, int)"
                       ,0xbb4,5);
    cMyTrace::operator()
              (local_34,"RegisterCreatureItem failed. uid(%d), key(%d)\n",uVar3 & 0xffff,iVar1);
  }
  return iVar2 == 0;
}
```
