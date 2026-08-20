# IncreaseEachOtherTeamPlayCount

`_ZN18online_preliminary22COnlinePreliminaryTeam30IncreaseEachOtherTeamPlayCountEi`

`online_preliminary::COnlinePreliminaryTeam::IncreaseEachOtherTeamPlayCount(int)`

| 类 | 地址 |
|---|---|
| `online_preliminary::COnlinePreliminaryTeam` | `0x085884b6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085884b6  _ZN18online_preliminary22COnlinePreliminaryTeam30IncreaseEachOtherTeamPlayCountEi
#           online_preliminary::COnlinePreliminaryTeam::IncreaseEachOtherTeamPlayCount(int)
# range [0x085884b6, 0x0858860b]
085884b6 +0x000:  push   %ebp
085884b7 +0x001:  mov    %esp,%ebp
085884b9 +0x003:  push   %ebx
085884ba +0x004:  sub    $0x54,%esp
085884bd +0x007:  mov    0x8(%ebp),%eax
085884c0 +0x00a:  lea    0x24(%eax),%ecx
085884c3 +0x00d:  lea    -0x48(%ebp),%eax
085884c6 +0x010:  lea    0xc(%ebp),%edx
085884c9 +0x013:  mov    %edx,0x8(%esp)
085884cd +0x017:  mov    %ecx,0x4(%esp)
085884d1 +0x01b:  mov    %eax,(%esp)
085884d4 +0x01e:  call   0858936c <_GLOBAL__I__ZN18online_preliminary22COnlinePreliminaryTeamC2Ev+0x65f>  ; global constructors keyed to online_preliminary::COnlinePreliminaryTeam::COnlinePreliminaryTeam()+0x65f
085884d9 +0x023:  sub    $0x4,%esp
085884dc +0x026:  mov    0x8(%ebp),%eax
085884df +0x029:  lea    0x24(%eax),%edx
085884e2 +0x02c:  lea    -0x44(%ebp),%eax
085884e5 +0x02f:  mov    %edx,0x4(%esp)
085884e9 +0x033:  mov    %eax,(%esp)
085884ec +0x036:  call   08589184 <_GLOBAL__I__ZN18online_preliminary22COnlinePreliminaryTeamC2Ev+0x477>  ; global constructors keyed to online_preliminary::COnlinePreliminaryTeam::COnlinePreliminaryTeam()+0x477
085884f1 +0x03b:  sub    $0x4,%esp
085884f4 +0x03e:  lea    -0x44(%ebp),%eax
085884f7 +0x041:  mov    %eax,0x4(%esp)
085884fb +0x045:  lea    -0x48(%ebp),%eax
085884fe +0x048:  mov    %eax,(%esp)
08588501 +0x04b:  call   085891aa <_GLOBAL__I__ZN18online_preliminary22COnlinePreliminaryTeamC2Ev+0x49d>  ; global constructors keyed to online_preliminary::COnlinePreliminaryTeam::COnlinePreliminaryTeam()+0x49d
08588506 +0x050:  test   %al,%al
08588508 +0x052:  je     08588532 <+0x7c>
0858850a +0x054:  lea    -0x48(%ebp),%eax
0858850d +0x057:  mov    %eax,(%esp)
08588510 +0x05a:  call   085891dc <_GLOBAL__I__ZN18online_preliminary22COnlinePreliminaryTeamC2Ev+0x4cf>  ; global constructors keyed to online_preliminary::COnlinePreliminaryTeam::COnlinePreliminaryTeam()+0x4cf
08588515 +0x05f:  movb   $0x1,0x8(%eax)
08588519 +0x063:  lea    -0x48(%ebp),%eax
0858851c +0x066:  mov    %eax,(%esp)
0858851f +0x069:  call   085891dc <_GLOBAL__I__ZN18online_preliminary22COnlinePreliminaryTeamC2Ev+0x4cf>  ; global constructors keyed to online_preliminary::COnlinePreliminaryTeam::COnlinePreliminaryTeam()+0x4cf
08588524 +0x06e:  mov    0x4(%eax),%edx
08588527 +0x071:  add    $0x1,%edx
0858852a +0x074:  mov    %edx,0x4(%eax)
0858852d +0x077:  jmp    08588600 <+0x14a>
08588532 +0x07c:  mov    0x8(%ebp),%eax
08588535 +0x07f:  add    $0x24,%eax
08588538 +0x082:  mov    %eax,(%esp)
0858853b +0x085:  call   08589398 <_GLOBAL__I__ZN18online_preliminary22COnlinePreliminaryTeamC2Ev+0x68b>  ; global constructors keyed to online_preliminary::COnlinePreliminaryTeam::COnlinePreliminaryTeam()+0x68b
08588540 +0x08a:  cmp    $0x3e7,%eax
08588545 +0x08f:  seta   %al
08588548 +0x092:  test   %al,%al
0858854a +0x094:  je     08588598 <+0xe2>
0858854c +0x096:  mov    0x8(%ebp),%eax
0858854f +0x099:  add    $0x24,%eax
08588552 +0x09c:  mov    %eax,(%esp)
08588555 +0x09f:  call   08589398 <_GLOBAL__I__ZN18online_preliminary22COnlinePreliminaryTeamC2Ev+0x68b>  ; global constructors keyed to online_preliminary::COnlinePreliminaryTeam::COnlinePreliminaryTeam()+0x68b
0858855a +0x0a4:  mov    %eax,%ebx
0858855c +0x0a6:  movl   $0x0,0xc(%esp)
08588564 +0x0ae:  movl   $0xca,0x8(%esp)
0858856c +0x0b6:  movl   $&_ZZN18online_preliminary22COnlinePreliminaryTeam30IncreaseEachOtherTeamPlayCountEiE19__PRETTY_FUNCTION__,0x4(%esp)
08588574 +0x0be:  lea    -0x40(%ebp),%eax
08588577 +0x0c1:  mov    %eax,(%esp)
0858857a +0x0c4:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0858857f +0x0c9:  mov    %ebx,0x8(%esp)
08588583 +0x0cd:  movl   $"Online Preliminary each other team play count map size over! %d",0x4(%esp)
0858858b +0x0d5:  lea    -0x40(%ebp),%eax
0858858e +0x0d8:  mov    %eax,(%esp)
08588591 +0x0db:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08588596 +0x0e0:  jmp    08588607 <+0x151>
08588598 +0x0e2:  movl   $0x1,0x8(%esp)
085885a0 +0x0ea:  movl   $0x1,0x4(%esp)
085885a8 +0x0f2:  lea    -0x10(%ebp),%eax
085885ab +0x0f5:  mov    %eax,(%esp)
085885ae +0x0f8:  call   08588d40 <_GLOBAL__I__ZN18online_preliminary22COnlinePreliminaryTeamC2Ev+0x33>  ; global constructors keyed to online_preliminary::COnlinePreliminaryTeam::COnlinePreliminaryTeam()+0x33
085885b3 +0x0fd:  lea    -0x1c(%ebp),%eax
085885b6 +0x100:  lea    -0x10(%ebp),%edx
085885b9 +0x103:  mov    %edx,0x8(%esp)
085885bd +0x107:  lea    0xc(%ebp),%edx
085885c0 +0x10a:  mov    %edx,0x4(%esp)
085885c4 +0x10e:  mov    %eax,(%esp)
085885c7 +0x111:  call   085893ab <_GLOBAL__I__ZN18online_preliminary22COnlinePreliminaryTeamC2Ev+0x69e>  ; global constructors keyed to online_preliminary::COnlinePreliminaryTeam::COnlinePreliminaryTeam()+0x69e
085885cc +0x116:  sub    $0x4,%esp
085885cf +0x119:  lea    -0x1c(%ebp),%eax
085885d2 +0x11c:  mov    %eax,0x4(%esp)
085885d6 +0x120:  lea    -0x28(%ebp),%eax
085885d9 +0x123:  mov    %eax,(%esp)
085885dc +0x126:  call   085893ea <_GLOBAL__I__ZN18online_preliminary22COnlinePreliminaryTeamC2Ev+0x6dd>  ; global constructors keyed to online_preliminary::COnlinePreliminaryTeam::COnlinePreliminaryTeam()+0x6dd
085885e1 +0x12b:  mov    0x8(%ebp),%eax
085885e4 +0x12e:  lea    0x24(%eax),%ecx
085885e7 +0x131:  lea    -0x30(%ebp),%eax
085885ea +0x134:  lea    -0x28(%ebp),%edx
085885ed +0x137:  mov    %edx,0x8(%esp)
085885f1 +0x13b:  mov    %ecx,0x4(%esp)
085885f5 +0x13f:  mov    %eax,(%esp)
085885f8 +0x142:  call   08589420 <_GLOBAL__I__ZN18online_preliminary22COnlinePreliminaryTeamC2Ev+0x713>  ; global constructors keyed to online_preliminary::COnlinePreliminaryTeam::COnlinePreliminaryTeam()+0x713
085885fd +0x147:  sub    $0x4,%esp
08588600 +0x14a:  mov    0x8(%ebp),%eax
08588603 +0x14d:  movb   $0x1,0x3d(%eax)
08588607 +0x151:  mov    -0x4(%ebp),%ebx
0858860a +0x154:  leave
0858860b +0x155:  ret
```

## 反编译 C

```c
// online_preliminary::COnlinePreliminaryTeam::IncreaseEachOtherTeamPlayCount @ 0x85884b6

/* online_preliminary::COnlinePreliminaryTeam::IncreaseEachOtherTeamPlayCount(int) */

void online_preliminary::COnlinePreliminaryTeam::IncreaseEachOtherTeamPlayCount(int param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  _Rb_tree_iterator<std::pair<int_const,online_preliminary::PlayCountInfoEx>> local_4c [4];
  map<int,online_preliminary::PlayCountInfoEx,std::less<int>,std::allocator<std::pair<int_const,online_preliminary::PlayCountInfoEx>>>
  local_48 [4];
  cMyTrace local_44 [16];
  pair local_34 [8];
  pair<int_const,online_preliminary::PlayCountInfoEx> local_2c [12];
  int local_20 [3];
  PlayCountInfoEx local_14 [12];
  
  std::
  map<int,online_preliminary::PlayCountInfoEx,std::less<int>,std::allocator<std::pair<int_const,online_preliminary::PlayCountInfoEx>>>
  ::find((int *)local_4c);
  std::
  map<int,online_preliminary::PlayCountInfoEx,std::less<int>,std::allocator<std::pair<int_const,online_preliminary::PlayCountInfoEx>>>
  ::end(local_48);
  cVar1 = std::_Rb_tree_iterator<std::pair<int_const,online_preliminary::PlayCountInfoEx>>::
          operator!=(local_4c,(_Rb_tree_iterator *)local_48);
  if (cVar1 == '\0') {
    uVar3 = std::
            map<int,online_preliminary::PlayCountInfoEx,std::less<int>,std::allocator<std::pair<int_const,online_preliminary::PlayCountInfoEx>>>
            ::size((map<int,online_preliminary::PlayCountInfoEx,std::less<int>,std::allocator<std::pair<int_const,online_preliminary::PlayCountInfoEx>>>
                    *)(param_1 + 0x24));
    if (999 < uVar3) {
      uVar4 = std::
              map<int,online_preliminary::PlayCountInfoEx,std::less<int>,std::allocator<std::pair<int_const,online_preliminary::PlayCountInfoEx>>>
              ::size((map<int,online_preliminary::PlayCountInfoEx,std::less<int>,std::allocator<std::pair<int_const,online_preliminary::PlayCountInfoEx>>>
                      *)(param_1 + 0x24));
      cMyTrace::cMyTrace(local_44,
                         "void online_preliminary::COnlinePreliminaryTeam::IncreaseEachOtherTeamPlayCount(int)"
                         ,0xca,0);
      cMyTrace::operator()
                (local_44,"Online Preliminary each other team play count map size over! %d",uVar4);
      return;
    }
    PlayCountInfoEx::PlayCountInfoEx(local_14,1,true);
    std::make_pair<int&,online_preliminary::PlayCountInfoEx>
              (local_20,(PlayCountInfoEx *)&stack0x00000008);
    std::pair<int_const,online_preliminary::PlayCountInfoEx>::
    pair<int,online_preliminary::PlayCountInfoEx>(local_2c,(pair *)local_20);
    std::
    map<int,online_preliminary::PlayCountInfoEx,std::less<int>,std::allocator<std::pair<int_const,online_preliminary::PlayCountInfoEx>>>
    ::insert(local_34);
  }
  else {
    iVar2 = std::_Rb_tree_iterator<std::pair<int_const,online_preliminary::PlayCountInfoEx>>::
            operator->(local_4c);
    *(undefined1 *)(iVar2 + 8) = 1;
    iVar2 = std::_Rb_tree_iterator<std::pair<int_const,online_preliminary::PlayCountInfoEx>>::
            operator->(local_4c);
    *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + 1;
  }
  *(undefined1 *)(param_1 + 0x3d) = 1;
  return;
}
```
