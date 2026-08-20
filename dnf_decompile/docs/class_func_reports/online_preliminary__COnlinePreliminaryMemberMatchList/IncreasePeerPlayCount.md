# IncreasePeerPlayCount

`_ZN18online_preliminary33COnlinePreliminaryMemberMatchList21IncreasePeerPlayCountEij`

`online_preliminary::COnlinePreliminaryMemberMatchList::IncreasePeerPlayCount(int, unsigned int)`

| 类 | 地址 |
|---|---|
| `online_preliminary::COnlinePreliminaryMemberMatchList` | `0x08586208` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08586208  _ZN18online_preliminary33COnlinePreliminaryMemberMatchList21IncreasePeerPlayCountEij
#           online_preliminary::COnlinePreliminaryMemberMatchList::IncreasePeerPlayCount(int, unsigned int)
# range [0x08586208, 0x08586397]
08586208 +0x000:  push   %ebp
08586209 +0x001:  mov    %esp,%ebp
0858620b +0x003:  push   %ebx
0858620c +0x004:  sub    $0x74,%esp
0858620f +0x007:  mov    0x10(%ebp),%eax
08586212 +0x00a:  mov    %eax,0x8(%esp)
08586216 +0x00e:  mov    0xc(%ebp),%eax
08586219 +0x011:  mov    %eax,0x4(%esp)
0858621d +0x015:  lea    -0x5c(%ebp),%eax
08586220 +0x018:  mov    %eax,(%esp)
08586223 +0x01b:  call   0858691e <_GLOBAL__I__ZN18online_preliminary24COnlinePreliminaryMemberC2Ev+0x66>  ; global constructors keyed to online_preliminary::COnlinePreliminaryMember::COnlinePreliminaryMember()+0x66
08586228 +0x020:  mov    0x8(%ebp),%eax
0858622b +0x023:  lea    0x8(%eax),%ecx
0858622e +0x026:  lea    -0x60(%ebp),%eax
08586231 +0x029:  lea    -0x5c(%ebp),%edx
08586234 +0x02c:  mov    %edx,0x8(%esp)
08586238 +0x030:  mov    %ecx,0x4(%esp)
0858623c +0x034:  mov    %eax,(%esp)
0858623f +0x037:  call   08586a0c <_GLOBAL__I__ZN18online_preliminary24COnlinePreliminaryMemberC2Ev+0x154>  ; global constructors keyed to online_preliminary::COnlinePreliminaryMember::COnlinePreliminaryMember()+0x154
08586244 +0x03c:  sub    $0x4,%esp
08586247 +0x03f:  mov    0x8(%ebp),%eax
0858624a +0x042:  lea    0x8(%eax),%edx
0858624d +0x045:  lea    -0x54(%ebp),%eax
08586250 +0x048:  mov    %edx,0x4(%esp)
08586254 +0x04c:  mov    %eax,(%esp)
08586257 +0x04f:  call   08586a38 <_GLOBAL__I__ZN18online_preliminary24COnlinePreliminaryMemberC2Ev+0x180>  ; global constructors keyed to online_preliminary::COnlinePreliminaryMember::COnlinePreliminaryMember()+0x180
0858625c +0x054:  sub    $0x4,%esp
0858625f +0x057:  lea    -0x54(%ebp),%eax
08586262 +0x05a:  mov    %eax,0x4(%esp)
08586266 +0x05e:  lea    -0x60(%ebp),%eax
08586269 +0x061:  mov    %eax,(%esp)
0858626c +0x064:  call   08586a5e <_GLOBAL__I__ZN18online_preliminary24COnlinePreliminaryMemberC2Ev+0x1a6>  ; global constructors keyed to online_preliminary::COnlinePreliminaryMember::COnlinePreliminaryMember()+0x1a6
08586271 +0x069:  test   %al,%al
08586273 +0x06b:  je     0858629d <+0x95>
08586275 +0x06d:  lea    -0x60(%ebp),%eax
08586278 +0x070:  mov    %eax,(%esp)
0858627b +0x073:  call   08586a72 <_GLOBAL__I__ZN18online_preliminary24COnlinePreliminaryMemberC2Ev+0x1ba>  ; global constructors keyed to online_preliminary::COnlinePreliminaryMember::COnlinePreliminaryMember()+0x1ba
08586280 +0x078:  movb   $0x1,0xc(%eax)
08586284 +0x07c:  lea    -0x60(%ebp),%eax
08586287 +0x07f:  mov    %eax,(%esp)
0858628a +0x082:  call   08586a72 <_GLOBAL__I__ZN18online_preliminary24COnlinePreliminaryMemberC2Ev+0x1ba>  ; global constructors keyed to online_preliminary::COnlinePreliminaryMember::COnlinePreliminaryMember()+0x1ba
0858628f +0x087:  mov    0x8(%eax),%edx
08586292 +0x08a:  add    $0x1,%edx
08586295 +0x08d:  mov    %edx,0x8(%eax)
08586298 +0x090:  jmp    08586387 <+0x17f>
0858629d +0x095:  mov    0x8(%ebp),%eax
085862a0 +0x098:  add    $0x8,%eax
085862a3 +0x09b:  mov    %eax,(%esp)
085862a6 +0x09e:  call   08586a80 <_GLOBAL__I__ZN18online_preliminary24COnlinePreliminaryMemberC2Ev+0x1c8>  ; global constructors keyed to online_preliminary::COnlinePreliminaryMember::COnlinePreliminaryMember()+0x1c8
085862ab +0x0a3:  cmp    $0x3e7,%eax
085862b0 +0x0a8:  seta   %al
085862b3 +0x0ab:  test   %al,%al
085862b5 +0x0ad:  je     08586306 <+0xfe>
085862b7 +0x0af:  mov    0x8(%ebp),%eax
085862ba +0x0b2:  add    $0x8,%eax
085862bd +0x0b5:  mov    %eax,(%esp)
085862c0 +0x0b8:  call   08586a80 <_GLOBAL__I__ZN18online_preliminary24COnlinePreliminaryMemberC2Ev+0x1c8>  ; global constructors keyed to online_preliminary::COnlinePreliminaryMember::COnlinePreliminaryMember()+0x1c8
085862c5 +0x0bd:  mov    %eax,%ebx
085862c7 +0x0bf:  movl   $0x0,0xc(%esp)
085862cf +0x0c7:  movl   $0x65,0x8(%esp)
085862d7 +0x0cf:  movl   $&_ZZN18online_preliminary33COnlinePreliminaryMemberMatchList21IncreasePeerPlayCountEijE19__PRETTY_FUNCTION__,0x4(%esp)
085862df +0x0d7:  lea    -0x50(%ebp),%eax
085862e2 +0x0da:  mov    %eax,(%esp)
085862e5 +0x0dd:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
085862ea +0x0e2:  mov    %ebx,0x8(%esp)
085862ee +0x0e6:  movl   $"Online Preliminary peer play count map size over! %d",0x4(%esp)
085862f6 +0x0ee:  lea    -0x50(%ebp),%eax
085862f9 +0x0f1:  mov    %eax,(%esp)
085862fc +0x0f4:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08586301 +0x0f9:  jmp    08586392 <+0x18a>
08586306 +0x0fe:  movl   $0x1,0x8(%esp)
0858630e +0x106:  movl   $0x1,0x4(%esp)
08586316 +0x10e:  lea    -0x18(%ebp),%eax
08586319 +0x111:  mov    %eax,(%esp)
0858631c +0x114:  call   0858694e <_GLOBAL__I__ZN18online_preliminary24COnlinePreliminaryMemberC2Ev+0x96>  ; global constructors keyed to online_preliminary::COnlinePreliminaryMember::COnlinePreliminaryMember()+0x96
08586321 +0x119:  mov    0x10(%ebp),%eax
08586324 +0x11c:  mov    %eax,0x8(%esp)
08586328 +0x120:  mov    0xc(%ebp),%eax
0858632b +0x123:  mov    %eax,0x4(%esp)
0858632f +0x127:  lea    -0x10(%ebp),%eax
08586332 +0x12a:  mov    %eax,(%esp)
08586335 +0x12d:  call   0858691e <_GLOBAL__I__ZN18online_preliminary24COnlinePreliminaryMemberC2Ev+0x66>  ; global constructors keyed to online_preliminary::COnlinePreliminaryMember::COnlinePreliminaryMember()+0x66
0858633a +0x132:  lea    -0x28(%ebp),%eax
0858633d +0x135:  lea    -0x18(%ebp),%edx
08586340 +0x138:  mov    %edx,0x8(%esp)
08586344 +0x13c:  lea    -0x10(%ebp),%edx
08586347 +0x13f:  mov    %edx,0x4(%esp)
0858634b +0x143:  mov    %eax,(%esp)
0858634e +0x146:  call   08586a93 <_GLOBAL__I__ZN18online_preliminary24COnlinePreliminaryMemberC2Ev+0x1db>  ; global constructors keyed to online_preliminary::COnlinePreliminaryMember::COnlinePreliminaryMember()+0x1db
08586353 +0x14b:  sub    $0x4,%esp
08586356 +0x14e:  lea    -0x28(%ebp),%eax
08586359 +0x151:  mov    %eax,0x4(%esp)
0858635d +0x155:  lea    -0x38(%ebp),%eax
08586360 +0x158:  mov    %eax,(%esp)
08586363 +0x15b:  call   08586ad2 <_GLOBAL__I__ZN18online_preliminary24COnlinePreliminaryMemberC2Ev+0x21a>  ; global constructors keyed to online_preliminary::COnlinePreliminaryMember::COnlinePreliminaryMember()+0x21a
08586368 +0x160:  mov    0x8(%ebp),%eax
0858636b +0x163:  lea    0x8(%eax),%ecx
0858636e +0x166:  lea    -0x40(%ebp),%eax
08586371 +0x169:  lea    -0x38(%ebp),%edx
08586374 +0x16c:  mov    %edx,0x8(%esp)
08586378 +0x170:  mov    %ecx,0x4(%esp)
0858637c +0x174:  mov    %eax,(%esp)
0858637f +0x177:  call   08586b14 <_GLOBAL__I__ZN18online_preliminary24COnlinePreliminaryMemberC2Ev+0x25c>  ; global constructors keyed to online_preliminary::COnlinePreliminaryMember::COnlinePreliminaryMember()+0x25c
08586384 +0x17c:  sub    $0x4,%esp
08586387 +0x17f:  mov    0x8(%ebp),%eax
0858638a +0x182:  mov    %eax,(%esp)
0858638d +0x185:  call   080c8bc4 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x1c>  ; global constructors keyed to BestClearTime::BestClearTime()+0x1c
08586392 +0x18a:  mov    -0x4(%ebp),%ebx
08586395 +0x18d:  leave
08586396 +0x18e:  ret
08586397 +0x18f:  nop
```

## 反编译 C

```c
// online_preliminary::COnlinePreliminaryMemberMatchList::IncreasePeerPlayCount @ 0x8586208

/* online_preliminary::COnlinePreliminaryMemberMatchList::IncreasePeerPlayCount(int, unsigned int)
    */

void __thiscall
online_preliminary::COnlinePreliminaryMemberMatchList::IncreasePeerPlayCount
          (COnlinePreliminaryMemberMatchList *this,int param_1,uint param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  CharacterInServer local_64 [4];
  CharacterInServer local_60 [8];
  map<online_preliminary::CharacterInServer,online_preliminary::PlayCountInfo,std::less<online_preliminary::CharacterInServer>,std::allocator<std::pair<online_preliminary::CharacterInServer_const,online_preliminary::PlayCountInfo>>>
  local_58 [4];
  cMyTrace local_54 [16];
  pair local_44 [8];
  pair<online_preliminary::CharacterInServer_const,online_preliminary::PlayCountInfo> local_3c [16];
  CharacterInServer local_2c [16];
  PlayCountInfo local_1c [8];
  CharacterInServer local_14 [12];
  
  CharacterInServer::CharacterInServer(local_60,param_1,param_2);
  std::
  map<online_preliminary::CharacterInServer,online_preliminary::PlayCountInfo,std::less<online_preliminary::CharacterInServer>,std::allocator<std::pair<online_preliminary::CharacterInServer_const,online_preliminary::PlayCountInfo>>>
  ::find(local_64);
  std::
  map<online_preliminary::CharacterInServer,online_preliminary::PlayCountInfo,std::less<online_preliminary::CharacterInServer>,std::allocator<std::pair<online_preliminary::CharacterInServer_const,online_preliminary::PlayCountInfo>>>
  ::end(local_58);
  cVar1 = std::
          _Rb_tree_iterator<std::pair<online_preliminary::CharacterInServer_const,online_preliminary::PlayCountInfo>>
          ::operator!=((_Rb_tree_iterator<std::pair<online_preliminary::CharacterInServer_const,online_preliminary::PlayCountInfo>>
                        *)local_64,(_Rb_tree_iterator *)local_58);
  if (cVar1 == '\0') {
    uVar3 = std::
            map<online_preliminary::CharacterInServer,online_preliminary::PlayCountInfo,std::less<online_preliminary::CharacterInServer>,std::allocator<std::pair<online_preliminary::CharacterInServer_const,online_preliminary::PlayCountInfo>>>
            ::size((map<online_preliminary::CharacterInServer,online_preliminary::PlayCountInfo,std::less<online_preliminary::CharacterInServer>,std::allocator<std::pair<online_preliminary::CharacterInServer_const,online_preliminary::PlayCountInfo>>>
                    *)(this + 8));
    if (999 < uVar3) {
      uVar4 = std::
              map<online_preliminary::CharacterInServer,online_preliminary::PlayCountInfo,std::less<online_preliminary::CharacterInServer>,std::allocator<std::pair<online_preliminary::CharacterInServer_const,online_preliminary::PlayCountInfo>>>
              ::size((map<online_preliminary::CharacterInServer,online_preliminary::PlayCountInfo,std::less<online_preliminary::CharacterInServer>,std::allocator<std::pair<online_preliminary::CharacterInServer_const,online_preliminary::PlayCountInfo>>>
                      *)(this + 8));
      cMyTrace::cMyTrace(local_54,
                         "void online_preliminary::COnlinePreliminaryMemberMatchList::IncreasePeerPlayCount(int, unsigned int)"
                         ,0x65,0);
      cMyTrace::operator()(local_54,"Online Preliminary peer play count map size over! %d",uVar4);
      return;
    }
    PlayCountInfo::PlayCountInfo(local_1c,1,true);
    CharacterInServer::CharacterInServer(local_14,param_1,param_2);
    std::make_pair<online_preliminary::CharacterInServer,online_preliminary::PlayCountInfo>
              (local_2c,(PlayCountInfo *)local_14);
    std::pair<online_preliminary::CharacterInServer_const,online_preliminary::PlayCountInfo>::
    pair<online_preliminary::CharacterInServer,online_preliminary::PlayCountInfo>(local_3c,local_2c)
    ;
    std::
    map<online_preliminary::CharacterInServer,online_preliminary::PlayCountInfo,std::less<online_preliminary::CharacterInServer>,std::allocator<std::pair<online_preliminary::CharacterInServer_const,online_preliminary::PlayCountInfo>>>
    ::insert(local_44);
  }
  else {
    iVar2 = std::
            _Rb_tree_iterator<std::pair<online_preliminary::CharacterInServer_const,online_preliminary::PlayCountInfo>>
            ::operator->((_Rb_tree_iterator<std::pair<online_preliminary::CharacterInServer_const,online_preliminary::PlayCountInfo>>
                          *)local_64);
    *(undefined1 *)(iVar2 + 0xc) = 1;
    iVar2 = std::
            _Rb_tree_iterator<std::pair<online_preliminary::CharacterInServer_const,online_preliminary::PlayCountInfo>>
            ::operator->((_Rb_tree_iterator<std::pair<online_preliminary::CharacterInServer_const,online_preliminary::PlayCountInfo>>
                          *)local_64);
    *(int *)(iVar2 + 8) = *(int *)(iVar2 + 8) + 1;
  }
  charac_expand::CData::alter((CData *)this);
  return;
}
```
