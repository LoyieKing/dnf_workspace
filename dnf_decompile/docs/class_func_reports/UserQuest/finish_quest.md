# finish_quest

`_ZN9UserQuest12finish_questEi`

`UserQuest::finish_quest(int)`

| 类 | 地址 |
|---|---|
| `UserQuest` | `0x086ac854` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086ac854  _ZN9UserQuest12finish_questEi
#           UserQuest::finish_quest(int)
# range [0x086ac854, 0x086ac953]
086ac854 +0x00:  push   %ebp
086ac855 +0x01:  mov    %esp,%ebp
086ac857 +0x03:  sub    $0x28,%esp
086ac85a +0x06:  movl   $0x0,-0x10(%ebp)
086ac861 +0x0d:  jmp    086ac93d <+0xe9>
086ac866 +0x12:  mov    -0x10(%ebp),%edx
086ac869 +0x15:  mov    0x8(%ebp),%eax
086ac86c +0x18:  add    $0x1d4c,%edx
086ac872 +0x1e:  mov    0x8(%eax,%edx,4),%eax
086ac876 +0x22:  cmp    0xc(%ebp),%eax
086ac879 +0x25:  jne    086ac939 <+0xe5>
086ac87f +0x2b:  mov    -0x10(%ebp),%edx
086ac882 +0x2e:  mov    0x8(%ebp),%eax
086ac885 +0x31:  add    $0x1d60,%edx
086ac88b +0x37:  mov    0x8(%eax,%edx,4),%eax
086ac88f +0x3b:  test   %eax,%eax
086ac891 +0x3d:  jne    086ac932 <+0xde>
086ac897 +0x43:  mov    -0x10(%ebp),%edx
086ac89a +0x46:  mov    0x8(%ebp),%eax
086ac89d +0x49:  add    $0x1d4c,%edx
086ac8a3 +0x4f:  movl   $0x0,0x8(%eax,%edx,4)
086ac8ab +0x57:  mov    -0x10(%ebp),%edx
086ac8ae +0x5a:  mov    0x8(%ebp),%eax
086ac8b1 +0x5d:  add    $0x1d60,%edx
086ac8b7 +0x63:  movl   $0x0,0x8(%eax,%edx,4)
086ac8bf +0x6b:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
086ac8c4 +0x70:  mov    0xc(%ebp),%edx
086ac8c7 +0x73:  mov    %edx,0x4(%esp)
086ac8cb +0x77:  mov    %eax,(%esp)
086ac8ce +0x7a:  call   0835fdc6 <_ZNK12CDataManager10find_questEi>  ; CDataManager::find_quest(int) const
086ac8d3 +0x7f:  mov    %eax,-0xc(%ebp)
086ac8d6 +0x82:  cmpl   $0x0,-0xc(%ebp)
086ac8da +0x86:  je     086ac8f5 <+0xa1>
086ac8dc +0x88:  mov    -0xc(%ebp),%eax
086ac8df +0x8b:  mov    %eax,(%esp)
086ac8e2 +0x8e:  call   08352bee <_ZNK5Quest17isRepeatableQuestEv>  ; Quest::isRepeatableQuest() const
086ac8e7 +0x93:  xor    $0x1,%eax
086ac8ea +0x96:  test   %al,%al
086ac8ec +0x98:  je     086ac8f5 <+0xa1>
086ac8ee +0x9a:  mov    $0x1,%eax
086ac8f3 +0x9f:  jmp    086ac8fa <+0xa6>
086ac8f5 +0xa1:  mov    $0x0,%eax
086ac8fa +0xa6:  test   %al,%al
086ac8fc +0xa8:  je     086ac913 <+0xbf>
086ac8fe +0xaa:  mov    0xc(%ebp),%eax
086ac901 +0xad:  mov    0x8(%ebp),%edx
086ac904 +0xb0:  add    $0x4,%edx
086ac907 +0xb3:  mov    %eax,0x4(%esp)
086ac90b +0xb7:  mov    %edx,(%esp)
086ac90e +0xba:  call   0808ba78 <_ZN8WongWork11CQuestClear15setClearedQuestEj>  ; WongWork::CQuestClear::setClearedQuest(unsigned int)
086ac913 +0xbf:  mov    -0xc(%ebp),%eax
086ac916 +0xc2:  mov    0x8(%eax),%eax
086ac919 +0xc5:  cmp    $0x8,%eax
086ac91c +0xc8:  jne    086ac92b <+0xd7>
086ac91e +0xca:  mov    0x8(%ebp),%eax
086ac921 +0xcd:  movl   $0xffffffff,0x75f0(%eax)
086ac92b +0xd7:  mov    $0x0,%eax
086ac930 +0xdc:  jmp    086ac951 <+0xfd>
086ac932 +0xde:  mov    $0x16,%eax
086ac937 +0xe3:  jmp    086ac951 <+0xfd>
086ac939 +0xe5:  addl   $0x1,-0x10(%ebp)
086ac93d +0xe9:  cmpl   $0x13,-0x10(%ebp)
086ac941 +0xed:  setle  %al
086ac944 +0xf0:  test   %al,%al
086ac946 +0xf2:  jne    086ac866 <+0x12>
086ac94c +0xf8:  mov    $0x13,%eax
086ac951 +0xfd:  leave
086ac952 +0xfe:  ret
086ac953 +0xff:  nop
```

## 反编译 C

```c
// UserQuest::finish_quest @ 0x86ac854

/* UserQuest::finish_quest(int) */

undefined4 __thiscall UserQuest::finish_quest(UserQuest *this,int param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  Quest *this_00;
  int local_14;
  
  local_14 = 0;
  while( true ) {
    if (0x13 < local_14) {
      return 0x13;
    }
    if (*(int *)(this + (local_14 + 0x1d4c) * 4 + 8) == param_1) break;
    local_14 = local_14 + 1;
  }
  if (*(int *)(this + (local_14 + 0x1d60) * 4 + 8) == 0) {
    *(undefined4 *)(this + (local_14 + 0x1d4c) * 4 + 8) = 0;
    *(undefined4 *)(this + (local_14 + 0x1d60) * 4 + 8) = 0;
    iVar3 = G_CDataManager();
    this_00 = (Quest *)CDataManager::find_quest(iVar3);
    if ((this_00 == (Quest *)0x0) || (cVar2 = Quest::isRepeatableQuest(this_00), cVar2 == '\x01')) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      WongWork::CQuestClear::setClearedQuest((CQuestClear *)(this + 4),param_1);
    }
    if (*(int *)(this_00 + 8) == 8) {
      *(undefined4 *)(this + 0x75f0) = 0xffffffff;
    }
    return 0;
  }
  return 0x16;
}
```
