# set_quest

`_ZN9UserQuest9set_questEPK14SIG_LOAD_QUEST`

`UserQuest::set_quest(SIG_LOAD_QUEST const*)`

| 类 | 地址 |
|---|---|
| `UserQuest` | `0x086ab95c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086ab95c  _ZN9UserQuest9set_questEPK14SIG_LOAD_QUEST
#           UserQuest::set_quest(SIG_LOAD_QUEST const*)
# range [0x086ab95c, 0x086abad5]
086ab95c +0x000:  push   %ebp
086ab95d +0x001:  mov    %esp,%ebp
086ab95f +0x003:  push   %esi
086ab960 +0x004:  push   %ebx
086ab961 +0x005:  sub    $0x30,%esp
086ab964 +0x008:  movl   $0x0,-0x10(%ebp)
086ab96b +0x00f:  jmp    086aba68 <+0x10c>
086ab970 +0x014:  mov    -0x10(%ebp),%ecx
086ab973 +0x017:  mov    -0x10(%ebp),%edx
086ab976 +0x01a:  mov    0xc(%ebp),%eax
086ab979 +0x01d:  mov    0xc(%eax,%edx,4),%edx
086ab97d +0x021:  mov    0x8(%ebp),%eax
086ab980 +0x024:  add    $0x1d4c,%ecx
086ab986 +0x02a:  mov    %edx,0x8(%eax,%ecx,4)
086ab98a +0x02e:  mov    -0x10(%ebp),%ecx
086ab98d +0x031:  mov    -0x10(%ebp),%edx
086ab990 +0x034:  mov    0xc(%ebp),%eax
086ab993 +0x037:  add    $0x14,%edx
086ab996 +0x03a:  mov    0xc(%eax,%edx,4),%edx
086ab99a +0x03e:  mov    0x8(%ebp),%eax
086ab99d +0x041:  add    $0x1d60,%ecx
086ab9a3 +0x047:  mov    %edx,0x8(%eax,%ecx,4)
086ab9a7 +0x04b:  mov    -0x10(%ebp),%edx
086ab9aa +0x04e:  mov    0x8(%ebp),%eax
086ab9ad +0x051:  add    $0x1d4c,%edx
086ab9b3 +0x057:  mov    0x8(%eax,%edx,4),%ebx
086ab9b7 +0x05b:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
086ab9bc +0x060:  mov    %ebx,0x4(%esp)
086ab9c0 +0x064:  mov    %eax,(%esp)
086ab9c3 +0x067:  call   0835fdc6 <_ZNK12CDataManager10find_questEi>  ; CDataManager::find_quest(int) const
086ab9c8 +0x06c:  mov    %eax,-0xc(%ebp)
086ab9cb +0x06f:  cmpl   $0x0,-0xc(%ebp)
086ab9cf +0x073:  jne    086aba64 <+0x108>
086ab9d5 +0x079:  mov    -0x10(%ebp),%edx
086ab9d8 +0x07c:  mov    0x8(%ebp),%eax
086ab9db +0x07f:  add    $0x1d4c,%edx
086ab9e1 +0x085:  mov    0x8(%eax,%edx,4),%eax
086ab9e5 +0x089:  test   %eax,%eax
086ab9e7 +0x08b:  je     086aba64 <+0x108>
086ab9e9 +0x08d:  mov    0xc(%ebp),%eax
086ab9ec +0x090:  mov    (%eax),%esi
086ab9ee +0x092:  mov    -0x10(%ebp),%edx
086ab9f1 +0x095:  mov    0x8(%ebp),%eax
086ab9f4 +0x098:  add    $0x1d4c,%edx
086ab9fa +0x09e:  mov    0x8(%eax,%edx,4),%ebx
086ab9fe +0x0a2:  movl   $0x0,0xc(%esp)
086aba06 +0x0aa:  movl   $0x42,0x8(%esp)
086aba0e +0x0b2:  movl   $&_ZZN9UserQuest9set_questEPK14SIG_LOAD_QUESTE19__PRETTY_FUNCTION__,0x4(%esp)
086aba16 +0x0ba:  lea    -0x20(%ebp),%eax
086aba19 +0x0bd:  mov    %eax,(%esp)
086aba1c +0x0c0:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
086aba21 +0x0c5:  mov    %esi,0xc(%esp)
086aba25 +0x0c9:  mov    %ebx,0x8(%esp)
086aba29 +0x0cd:  movl   $"VERIFY_QUEST : ABNOMAL QUEST INDEX (%d) : CHARAC_NO (%u)",0x4(%esp)
086aba31 +0x0d5:  lea    -0x20(%ebp),%eax
086aba34 +0x0d8:  mov    %eax,(%esp)
086aba37 +0x0db:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
086aba3c +0x0e0:  mov    -0x10(%ebp),%edx
086aba3f +0x0e3:  mov    0x8(%ebp),%eax
086aba42 +0x0e6:  add    $0x1d4c,%edx
086aba48 +0x0ec:  movl   $0x0,0x8(%eax,%edx,4)
086aba50 +0x0f4:  mov    -0x10(%ebp),%edx
086aba53 +0x0f7:  mov    0x8(%ebp),%eax
086aba56 +0x0fa:  add    $0x1d60,%edx
086aba5c +0x100:  movl   $0x0,0x8(%eax,%edx,4)
086aba64 +0x108:  addl   $0x1,-0x10(%ebp)
086aba68 +0x10c:  cmpl   $0x13,-0x10(%ebp)
086aba6c +0x110:  setle  %al
086aba6f +0x113:  test   %al,%al
086aba71 +0x115:  jne    086ab970 <+0x14>
086aba77 +0x11b:  mov    0xc(%ebp),%eax
086aba7a +0x11e:  lea    0xb0(%eax),%edx
086aba80 +0x124:  mov    0x8(%ebp),%eax
086aba83 +0x127:  add    $0x4,%eax
086aba86 +0x12a:  mov    %edx,0x4(%esp)
086aba8a +0x12e:  mov    %eax,(%esp)
086aba8d +0x131:  call   0808bb5e <_ZN8WongWork11CQuestClear15setClearedQuestEPKNS_14STClearedQuestE>  ; WongWork::CQuestClear::setClearedQuest(WongWork::STClearedQuest const*)
086aba92 +0x136:  mov    0xc(%ebp),%eax
086aba95 +0x139:  mov    0xac(%eax),%edx
086aba9b +0x13f:  mov    0x8(%ebp),%eax
086aba9e +0x142:  mov    %edx,0x75f0(%eax)
086abaa4 +0x148:  mov    0xc(%ebp),%eax
086abaa7 +0x14b:  lea    0x75e0(%eax),%edx
086abaad +0x151:  mov    0x8(%ebp),%eax
086abab0 +0x154:  add    $0x75f4,%eax
086abab5 +0x159:  movl   $0x28,0x8(%esp)
086ababd +0x161:  mov    %edx,0x4(%esp)
086abac1 +0x165:  mov    %eax,(%esp)
086abac4 +0x168:  call   0807d8a0 <_init+0x198>
086abac9 +0x16d:  mov    $0x1,%eax
086abace +0x172:  add    $0x30,%esp
086abad1 +0x175:  pop    %ebx
086abad2 +0x176:  pop    %esi
086abad3 +0x177:  pop    %ebp
086abad4 +0x178:  ret
086abad5 +0x179:  nop
```

## 反编译 C

```c
// UserQuest::set_quest @ 0x86ab95c

/* UserQuest::set_quest(SIG_LOAD_QUEST const*) */

undefined4 __thiscall UserQuest::set_quest(UserQuest *this,SIG_LOAD_QUEST *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  cMyTrace local_24 [16];
  int local_14;
  int local_10;
  
  for (local_14 = 0; local_14 < 0x14; local_14 = local_14 + 1) {
    *(undefined4 *)(this + (local_14 + 0x1d4c) * 4 + 8) =
         *(undefined4 *)(param_1 + local_14 * 4 + 0xc);
    *(undefined4 *)(this + (local_14 + 0x1d60) * 4 + 8) =
         *(undefined4 *)(param_1 + (local_14 + 0x14) * 4 + 0xc);
    iVar3 = G_CDataManager();
    local_10 = CDataManager::find_quest(iVar3);
    if ((local_10 == 0) && (*(int *)(this + (local_14 + 0x1d4c) * 4 + 8) != 0)) {
      uVar1 = *(undefined4 *)param_1;
      uVar2 = *(undefined4 *)(this + (local_14 + 0x1d4c) * 4 + 8);
      cMyTrace::cMyTrace(local_24,"bool UserQuest::set_quest(const SIG_LOAD_QUEST*)",0x42,0);
      cMyTrace::operator()
                (local_24,"VERIFY_QUEST : ABNOMAL QUEST INDEX (%d) : CHARAC_NO (%u)",uVar2,uVar1);
      *(undefined4 *)(this + (local_14 + 0x1d4c) * 4 + 8) = 0;
      *(undefined4 *)(this + (local_14 + 0x1d60) * 4 + 8) = 0;
    }
  }
  WongWork::CQuestClear::setClearedQuest
            ((CQuestClear *)(this + 4),(STClearedQuest *)(param_1 + 0xb0));
  *(undefined4 *)(this + 0x75f0) = *(undefined4 *)(param_1 + 0xac);
  memcpy(this + 0x75f4,param_1 + 0x75e0,0x28);
  return 1;
}
```
