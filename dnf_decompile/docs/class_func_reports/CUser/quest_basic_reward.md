# quest_basic_reward

`_ZN5CUser18quest_basic_rewardEP5QuestRiS2_S2_S2_b`

`CUser::quest_basic_reward(Quest*, int&, int&, int&, int&, bool)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0866e7a8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0866e7a8  _ZN5CUser18quest_basic_rewardEP5QuestRiS2_S2_S2_b
#           CUser::quest_basic_reward(Quest*, int&, int&, int&, int&, bool)
# range [0x0866e7a8, 0x0866e913]
0866e7a8 +0x000:  push   %ebp
0866e7a9 +0x001:  mov    %esp,%ebp
0866e7ab +0x003:  sub    $0x48,%esp
0866e7ae +0x006:  mov    0x20(%ebp),%eax
0866e7b1 +0x009:  mov    %al,-0x1c(%ebp)
0866e7b4 +0x00c:  mov    0xc(%ebp),%eax
0866e7b7 +0x00f:  mov    %eax,0x4(%esp)
0866e7bb +0x013:  mov    0x8(%ebp),%eax
0866e7be +0x016:  mov    %eax,(%esp)
0866e7c1 +0x019:  call   0866e3e2 <_ZN5CUser30compute_quest_basic_reward_expEP5Quest>  ; CUser::compute_quest_basic_reward_exp(Quest*)
0866e7c6 +0x01e:  mov    0x10(%ebp),%edx
0866e7c9 +0x021:  mov    %eax,(%edx)
0866e7cb +0x023:  mov    0xc(%ebp),%eax
0866e7ce +0x026:  mov    %eax,0x4(%esp)
0866e7d2 +0x02a:  mov    0x8(%ebp),%eax
0866e7d5 +0x02d:  mov    %eax,(%esp)
0866e7d8 +0x030:  call   0866e5e6 <_ZN5CUser31compute_quest_basic_reward_goldEP5Quest>  ; CUser::compute_quest_basic_reward_gold(Quest*)
0866e7dd +0x035:  mov    0x14(%ebp),%edx
0866e7e0 +0x038:  mov    %eax,(%edx)
0866e7e2 +0x03a:  mov    0x8(%ebp),%eax
0866e7e5 +0x03d:  mov    %eax,(%esp)
0866e7e8 +0x040:  call   0850d494 <_GLOBAL__I_g_emptySlot+0x3c9>  ; global constructors keyed to g_emptySlot+0x3c9
0866e7ed +0x045:  mov    %eax,-0x2c(%ebp)
0866e7f0 +0x048:  mov    $0xd1b71759,%edx
0866e7f5 +0x04d:  mov    -0x2c(%ebp),%eax
0866e7f8 +0x050:  mul    %edx
0866e7fa +0x052:  mov    %edx,%eax
0866e7fc +0x054:  shr    $0xd,%eax
0866e7ff +0x057:  mov    %eax,-0xc(%ebp)
0866e802 +0x05a:  cmpl   $0x64,-0xc(%ebp)
0866e806 +0x05e:  jle    0866e80f <+0x67>
0866e808 +0x060:  movl   $0x64,-0xc(%ebp)
0866e80f +0x067:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0866e814 +0x06c:  mov    0x8ce8(%eax),%eax
0866e81a +0x072:  cmp    -0xc(%ebp),%eax
0866e81d +0x075:  setl   %al
0866e820 +0x078:  test   %al,%al
0866e822 +0x07a:  je     0866e878 <+0xd0>
0866e824 +0x07c:  mov    0x10(%ebp),%eax
0866e827 +0x07f:  mov    (%eax),%edx
0866e829 +0x081:  mov    $0x64,%eax
0866e82e +0x086:  sub    -0xc(%ebp),%eax
0866e831 +0x089:  mov    %edx,%ecx
0866e833 +0x08b:  imul   %eax,%ecx
0866e836 +0x08e:  mov    $0x51eb851f,%edx
0866e83b +0x093:  mov    %ecx,%eax
0866e83d +0x095:  imul   %edx
0866e83f +0x097:  sar    $0x5,%edx
0866e842 +0x09a:  mov    %ecx,%eax
0866e844 +0x09c:  sar    $0x1f,%eax
0866e847 +0x09f:  sub    %eax,%edx
0866e849 +0x0a1:  mov    0x10(%ebp),%eax
0866e84c +0x0a4:  mov    %edx,(%eax)
0866e84e +0x0a6:  mov    0x14(%ebp),%eax
0866e851 +0x0a9:  mov    (%eax),%edx
0866e853 +0x0ab:  mov    $0x64,%eax
0866e858 +0x0b0:  sub    -0xc(%ebp),%eax
0866e85b +0x0b3:  mov    %edx,%ecx
0866e85d +0x0b5:  imul   %eax,%ecx
0866e860 +0x0b8:  mov    $0x51eb851f,%edx
0866e865 +0x0bd:  mov    %ecx,%eax
0866e867 +0x0bf:  imul   %edx
0866e869 +0x0c1:  sar    $0x5,%edx
0866e86c +0x0c4:  mov    %ecx,%eax
0866e86e +0x0c6:  sar    $0x1f,%eax
0866e871 +0x0c9:  sub    %eax,%edx
0866e873 +0x0cb:  mov    0x14(%ebp),%eax
0866e876 +0x0ce:  mov    %edx,(%eax)
0866e878 +0x0d0:  mov    0xc(%ebp),%eax
0866e87b +0x0d3:  movzwl 0x138(%eax),%eax
0866e882 +0x0da:  movswl %ax,%edx
0866e885 +0x0dd:  mov    0x18(%ebp),%eax
0866e888 +0x0e0:  mov    %edx,(%eax)
0866e88a +0x0e2:  mov    0xc(%ebp),%eax
0866e88d +0x0e5:  movzwl 0x138(%eax),%eax
0866e894 +0x0ec:  test   %ax,%ax
0866e897 +0x0ef:  jle    0866e8c5 <+0x11d>
0866e899 +0x0f1:  movzbl -0x1c(%ebp),%ecx
0866e89d +0x0f5:  mov    0xc(%ebp),%eax
0866e8a0 +0x0f8:  mov    0x4(%eax),%edx
0866e8a3 +0x0fb:  mov    0xc(%ebp),%eax
0866e8a6 +0x0fe:  movzwl 0x138(%eax),%eax
0866e8ad +0x105:  cwtl
0866e8ae +0x106:  mov    %ecx,0xc(%esp)
0866e8b2 +0x10a:  mov    %edx,0x8(%esp)
0866e8b6 +0x10e:  mov    %eax,0x4(%esp)
0866e8ba +0x112:  mov    0x8(%ebp),%eax
0866e8bd +0x115:  mov    %eax,(%esp)
0866e8c0 +0x118:  call   0868ac66 <_ZN5CUser13incQuestPointEiib>  ; CUser::incQuestPoint(int, int, bool)
0866e8c5 +0x11d:  mov    0xc(%ebp),%eax
0866e8c8 +0x120:  movzwl 0x13a(%eax),%eax
0866e8cf +0x127:  movswl %ax,%edx
0866e8d2 +0x12a:  mov    0x1c(%ebp),%eax
0866e8d5 +0x12d:  mov    %edx,(%eax)
0866e8d7 +0x12f:  mov    0xc(%ebp),%eax
0866e8da +0x132:  movzwl 0x13a(%eax),%eax
0866e8e1 +0x139:  test   %ax,%ax
0866e8e4 +0x13c:  jle    0866e912 <+0x16a>
0866e8e6 +0x13e:  movzbl -0x1c(%ebp),%ecx
0866e8ea +0x142:  mov    0xc(%ebp),%eax
0866e8ed +0x145:  mov    0x4(%eax),%edx
0866e8f0 +0x148:  mov    0xc(%ebp),%eax
0866e8f3 +0x14b:  movzwl 0x13a(%eax),%eax
0866e8fa +0x152:  cwtl
0866e8fb +0x153:  mov    %ecx,0xc(%esp)
0866e8ff +0x157:  mov    %edx,0x8(%esp)
0866e903 +0x15b:  mov    %eax,0x4(%esp)
0866e907 +0x15f:  mov    0x8(%ebp),%eax
0866e90a +0x162:  mov    %eax,(%esp)
0866e90d +0x165:  call   0868af66 <_ZN5CUser13incQuestPieceEiib>  ; CUser::incQuestPiece(int, int, bool)
0866e912 +0x16a:  leave
0866e913 +0x16b:  ret
```

## 反编译 C

```c
// CUser::quest_basic_reward @ 0x866e7a8

/* CUser::quest_basic_reward(Quest*, int&, int&, int&, int&, bool) */

void __thiscall
CUser::quest_basic_reward
          (CUser *this,Quest *param_1,int *param_2,int *param_3,int *param_4,int *param_5,
          bool param_6)

{
  int iVar1;
  uint local_10;
  
  iVar1 = compute_quest_basic_reward_exp(this,param_1);
  *param_2 = iVar1;
  iVar1 = compute_quest_basic_reward_gold(this,param_1);
  *param_3 = iVar1;
  local_10 = CUserCharacInfo::getCurCharacHelpAbuseComputedRatio((CUserCharacInfo *)this);
  local_10 = local_10 / 10000;
  if (100 < local_10) {
    local_10 = 100;
  }
  iVar1 = G_CDataManager();
  if (*(int *)(iVar1 + 0x8ce8) < (int)local_10) {
    *param_2 = (int)(*param_2 * (100 - local_10)) / 100;
    *param_3 = (int)(*param_3 * (100 - local_10)) / 100;
  }
  *param_4 = (int)*(short *)(param_1 + 0x138);
  if (0 < *(short *)(param_1 + 0x138)) {
    incQuestPoint(this,(int)*(short *)(param_1 + 0x138),*(int *)(param_1 + 4),param_6);
  }
  *param_5 = (int)*(short *)(param_1 + 0x13a);
  if (0 < *(short *)(param_1 + 0x13a)) {
    incQuestPiece(this,(int)*(short *)(param_1 + 0x13a),*(int *)(param_1 + 4),param_6);
  }
  return;
}
```
