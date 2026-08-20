# check_anti_quest

`_ZN9QuestList16check_anti_questEiRKN8WongWork11CQuestClearE`

`QuestList::check_anti_quest(int, WongWork::CQuestClear const&)`

| 类 | 地址 |
|---|---|
| `QuestList` | `0x0835511e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0835511e  _ZN9QuestList16check_anti_questEiRKN8WongWork11CQuestClearE
#           QuestList::check_anti_quest(int, WongWork::CQuestClear const&)
# range [0x0835511e, 0x08355283]
0835511e +0x000:  push   %ebp
0835511f +0x001:  mov    %esp,%ebp
08355121 +0x003:  sub    $0x68,%esp
08355124 +0x006:  mov    0xc(%ebp),%eax
08355127 +0x009:  mov    %eax,0x4(%esp)
0835512b +0x00d:  mov    0x8(%ebp),%eax
0835512e +0x010:  mov    %eax,(%esp)
08355131 +0x013:  call   08355a5c <_ZN9QuestList10find_questEi>  ; QuestList::find_quest(int)
08355136 +0x018:  mov    %eax,-0x10(%ebp)
08355139 +0x01b:  cmpl   $0x0,-0x10(%ebp)
0835513d +0x01f:  jne    0835517c <+0x5e>
0835513f +0x021:  mov    0xc(%ebp),%eax
08355142 +0x024:  mov    %eax,0x14(%esp)
08355146 +0x028:  movl   $"find_quest(%d)",0x10(%esp)
0835514e +0x030:  movl   $0x150a,0xc(%esp)
08355156 +0x038:  movl   $&_ZZN9QuestList16check_anti_questEiRKN8WongWork11CQuestClearEE19__PRETTY_FUNCTION__,0x8(%esp)
0835515e +0x040:  movl   $"data_manager.cpp",0x4(%esp)
08355166 +0x048:  movl   $0x1,(%esp)
0835516d +0x04f:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08355172 +0x054:  mov    $0x0,%eax
08355177 +0x059:  jmp    08355281 <+0x163>
0835517c +0x05e:  lea    -0x2c(%ebp),%eax
0835517f +0x061:  mov    %eax,(%esp)
08355182 +0x064:  call   0817f232 <_GLOBAL__I__ZN29AvatarFixedHiddenOptionServerC2Ev+0x463>  ; global constructors keyed to AvatarFixedHiddenOptionServer::AvatarFixedHiddenOptionServer()+0x463
08355187 +0x069:  mov    -0x10(%ebp),%eax
0835518a +0x06c:  lea    0x38(%eax),%edx
0835518d +0x06f:  lea    -0x3c(%ebp),%eax
08355190 +0x072:  mov    %edx,0x4(%esp)
08355194 +0x076:  mov    %eax,(%esp)
08355197 +0x079:  call   0808e248 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0xb8>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0xb8
0835519c +0x07e:  sub    $0x4,%esp
0835519f +0x081:  mov    -0x3c(%ebp),%eax
083551a2 +0x084:  mov    %eax,-0x2c(%ebp)
083551a5 +0x087:  jmp    0835524a <+0x12c>
083551aa +0x08c:  lea    -0x2c(%ebp),%eax
083551ad +0x08f:  mov    %eax,(%esp)
083551b0 +0x092:  call   0808e7cc <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x63c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x63c
083551b5 +0x097:  mov    (%eax),%eax
083551b7 +0x099:  mov    %eax,-0xc(%ebp)
083551ba +0x09c:  cmpl   $0x752f,-0xc(%ebp)
083551c1 +0x0a3:  jle    08355210 <+0xf2>
083551c3 +0x0a5:  movl   $0x5,0xc(%esp)
083551cb +0x0ad:  movl   $0x151a,0x8(%esp)
083551d3 +0x0b5:  movl   $&_ZZN9QuestList16check_anti_questEiRKN8WongWork11CQuestClearEE19__PRETTY_FUNCTION__,0x4(%esp)
083551db +0x0bd:  lea    -0x24(%ebp),%eax
083551de +0x0c0:  mov    %eax,(%esp)
083551e1 +0x0c3:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
083551e6 +0x0c8:  movl   $0x151a,0xc(%esp)
083551ee +0x0d0:  movl   $&_ZZN9QuestList16check_anti_questEiRKN8WongWork11CQuestClearEE19__PRETTY_FUNCTION__,0x8(%esp)
083551f6 +0x0d8:  movl   $"[%s][%d]",0x4(%esp)
083551fe +0x0e0:  lea    -0x24(%ebp),%eax
08355201 +0x0e3:  mov    %eax,(%esp)
08355204 +0x0e6:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08355209 +0x0eb:  mov    $0x0,%eax
0835520e +0x0f0:  jmp    08355281 <+0x163>
08355210 +0x0f2:  mov    -0xc(%ebp),%eax
08355213 +0x0f5:  mov    %eax,0x4(%esp)
08355217 +0x0f9:  mov    0x10(%ebp),%eax
0835521a +0x0fc:  mov    %eax,(%esp)
0835521d +0x0ff:  call   0808bae0 <_ZNK8WongWork11CQuestClear14isClearedQuestEj>  ; WongWork::CQuestClear::isClearedQuest(unsigned int) const
08355222 +0x104:  test   %al,%al
08355224 +0x106:  je     0835522d <+0x10f>
08355226 +0x108:  mov    $0x0,%eax
0835522b +0x10d:  jmp    08355281 <+0x163>
0835522d +0x10f:  lea    -0x14(%ebp),%eax
08355230 +0x112:  movl   $0x0,0x8(%esp)
08355238 +0x11a:  lea    -0x2c(%ebp),%edx
0835523b +0x11d:  mov    %edx,0x4(%esp)
0835523f +0x121:  mov    %eax,(%esp)
08355242 +0x124:  call   08341906 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x39d3>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x39d3
08355247 +0x129:  sub    $0x4,%esp
0835524a +0x12c:  mov    -0x10(%ebp),%eax
0835524d +0x12f:  lea    0x38(%eax),%edx
08355250 +0x132:  lea    -0x28(%ebp),%eax
08355253 +0x135:  mov    %edx,0x4(%esp)
08355257 +0x139:  mov    %eax,(%esp)
0835525a +0x13c:  call   0808e26c <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0xdc>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0xdc
0835525f +0x141:  sub    $0x4,%esp
08355262 +0x144:  lea    -0x28(%ebp),%eax
08355265 +0x147:  mov    %eax,0x4(%esp)
08355269 +0x14b:  lea    -0x2c(%ebp),%eax
0835526c +0x14e:  mov    %eax,(%esp)
0835526f +0x151:  call   080ea462 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x9b>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x9b
08355274 +0x156:  test   %al,%al
08355276 +0x158:  jne    083551aa <+0x8c>
0835527c +0x15e:  mov    $0x1,%eax
08355281 +0x163:  leave
08355282 +0x164:  ret
08355283 +0x165:  nop
```

## 反编译 C

```c
// QuestList::check_anti_quest @ 0x835511e

/* QuestList::check_anti_quest(int, WongWork::CQuestClear const&) */

undefined4 __thiscall QuestList::check_anti_quest(QuestList *this,int param_1,CQuestClear *param_2)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  uint *puVar4;
  __normal_iterator<int*,std::vector<int,std::allocator<int>>> local_30 [4];
  __normal_iterator local_2c [4];
  cMyTrace local_28 [16];
  __normal_iterator<int*,std::vector<int,std::allocator<int>>> local_18 [4];
  int local_14;
  uint local_10;
  
  local_14 = find_quest((int)this);
  if (local_14 == 0) {
    LogManager::logFormat
              (1,"data_manager.cpp",
               "bool QuestList::check_anti_quest(int, const WongWork::CQuestClear&)",0x150a,
               "find_quest(%d)",param_1);
    uVar3 = 0;
  }
  else {
    __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::__normal_iterator
              (local_30);
    std::vector<int,std::allocator<int>>::begin();
    while( true ) {
      std::vector<int,std::allocator<int>>::end();
      bVar2 = __gnu_cxx::operator!=(local_30,local_2c);
      if (!bVar2) break;
      puVar4 = (uint *)__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::
                       operator*(local_30);
      local_10 = *puVar4;
      if (29999 < (int)local_10) {
        cMyTrace::cMyTrace(local_28,
                           "bool QuestList::check_anti_quest(int, const WongWork::CQuestClear&)",
                           0x151a,5);
        cMyTrace::operator()
                  (local_28,"[%s][%d]",
                   "bool QuestList::check_anti_quest(int, const WongWork::CQuestClear&)",0x151a);
        return 0;
      }
      cVar1 = WongWork::CQuestClear::isClearedQuest(param_2,local_10);
      if (cVar1 != '\0') {
        return 0;
      }
      __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator++
                (local_18,(int)local_30);
    }
    uVar3 = 1;
  }
  return uVar3;
}
```
