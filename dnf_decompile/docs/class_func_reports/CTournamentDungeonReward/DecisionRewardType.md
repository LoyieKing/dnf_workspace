# DecisionRewardType

`_ZN24CTournamentDungeonReward18DecisionRewardTypeE32ENUM_TOURNAMENT_REWARD_CARD_TYPER20TournamentRewardRatePK24TournamentRewardItemRate`

`CTournamentDungeonReward::DecisionRewardType(ENUM_TOURNAMENT_REWARD_CARD_TYPE, TournamentRewardRate&, TournamentRewardItemRate const*)`

| 类 | 地址 |
|---|---|
| `CTournamentDungeonReward` | `0x08284a24` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08284a24  _ZN24CTournamentDungeonReward18DecisionRewardTypeE32ENUM_TOURNAMENT_REWARD_CARD_TYPER20TournamentRewardRatePK24TournamentRewardItemRate
#           CTournamentDungeonReward::DecisionRewardType(ENUM_TOURNAMENT_REWARD_CARD_TYPE, TournamentRewardRate&, TournamentRewardItemRate const*)
# range [0x08284a24, 0x08284b8d]
08284a24 +0x000:  push   %ebp
08284a25 +0x001:  mov    %esp,%ebp
08284a27 +0x003:  push   %esi
08284a28 +0x004:  push   %ebx
08284a29 +0x005:  sub    $0x30,%esp
08284a2c +0x008:  movl   $0x0,-0x20(%ebp)
08284a33 +0x00f:  jmp    08284b78 <+0x154>
08284a38 +0x014:  mov    0x10(%ebp),%eax
08284a3b +0x017:  mov    0xc(%eax),%eax
08284a3e +0x01a:  add    $0x1,%eax
08284a41 +0x01d:  mov    %eax,(%esp)
08284a44 +0x020:  call   086b1b87 <_Z12get_rand_inti>  ; get_rand_int(int)
08284a49 +0x025:  mov    %eax,-0x1c(%ebp)
08284a4c +0x028:  mov    0x10(%ebp),%eax
08284a4f +0x02b:  mov    (%eax),%eax
08284a51 +0x02d:  test   %eax,%eax
08284a53 +0x02f:  je     08284a92 <+0x6e>
08284a55 +0x031:  mov    0x10(%ebp),%eax
08284a58 +0x034:  mov    (%eax),%eax
08284a5a +0x036:  cmp    -0x1c(%ebp),%eax
08284a5d +0x039:  jl     08284a92 <+0x6e>
08284a5f +0x03b:  mov    0xc(%ebp),%edx
08284a62 +0x03e:  mov    -0x20(%ebp),%ecx
08284a65 +0x041:  mov    0x8(%ebp),%ebx
08284a68 +0x044:  mov    %ecx,%eax
08284a6a +0x046:  add    %eax,%eax
08284a6c +0x048:  add    %ecx,%eax
08284a6e +0x04a:  lea    0x0(,%eax,4),%ecx
08284a75 +0x051:  mov    %edx,%eax
08284a77 +0x053:  add    %eax,%eax
08284a79 +0x055:  add    %edx,%eax
08284a7b +0x057:  shl    $0x3,%eax
08284a7e +0x05a:  lea    (%ecx,%eax,1),%eax
08284a81 +0x05d:  lea    (%ebx,%eax,1),%eax
08284a84 +0x060:  add    $0x8,%eax
08284a87 +0x063:  movl   $0x0,(%eax)
08284a8d +0x069:  jmp    08284b74 <+0x150>
08284a92 +0x06e:  mov    0x10(%ebp),%eax
08284a95 +0x071:  mov    (%eax),%edx
08284a97 +0x073:  mov    0x10(%ebp),%eax
08284a9a +0x076:  mov    0x4(%eax),%eax
08284a9d +0x079:  lea    (%edx,%eax,1),%eax
08284aa0 +0x07c:  cmp    -0x1c(%ebp),%eax
08284aa3 +0x07f:  jl     08284b74 <+0x150>
08284aa9 +0x085:  mov    0x14(%ebp),%eax
08284aac +0x088:  mov    0xc(%eax),%eax
08284aaf +0x08b:  mov    %eax,(%esp)
08284ab2 +0x08e:  call   086b1b87 <_Z12get_rand_inti>  ; get_rand_int(int)
08284ab7 +0x093:  add    $0x1,%eax
08284aba +0x096:  mov    %eax,-0x18(%ebp)
08284abd +0x099:  movl   $0x0,-0x14(%ebp)
08284ac4 +0x0a0:  movl   $0x0,-0x10(%ebp)
08284acb +0x0a7:  jmp    08284b5b <+0x137>
08284ad0 +0x0ac:  mov    0x14(%ebp),%eax
08284ad3 +0x0af:  mov    -0x10(%ebp),%edx
08284ad6 +0x0b2:  mov    %edx,0x4(%esp)
08284ada +0x0b6:  mov    %eax,(%esp)
08284add +0x0b9:  call   082855f0 <_GLOBAL__I__ZN20TournamentRewardType5ClearEv+0xc7>  ; global constructors keyed to TournamentRewardType::Clear()+0xc7
08284ae2 +0x0be:  mov    %eax,-0xc(%ebp)
08284ae5 +0x0c1:  mov    -0xc(%ebp),%eax
08284ae8 +0x0c4:  mov    0x4(%eax),%eax
08284aeb +0x0c7:  add    %eax,-0x14(%ebp)
08284aee +0x0ca:  mov    -0x18(%ebp),%eax
08284af1 +0x0cd:  cmp    -0x14(%ebp),%eax
08284af4 +0x0d0:  jg     08284b57 <+0x133>
08284af6 +0x0d2:  mov    0xc(%ebp),%edx
08284af9 +0x0d5:  mov    -0x20(%ebp),%ecx
08284afc +0x0d8:  mov    -0xc(%ebp),%eax
08284aff +0x0db:  mov    (%eax),%ebx
08284b01 +0x0dd:  mov    0x8(%ebp),%esi
08284b04 +0x0e0:  mov    %ecx,%eax
08284b06 +0x0e2:  add    %eax,%eax
08284b08 +0x0e4:  add    %ecx,%eax
08284b0a +0x0e6:  lea    0x0(,%eax,4),%ecx
08284b11 +0x0ed:  mov    %edx,%eax
08284b13 +0x0ef:  add    %eax,%eax
08284b15 +0x0f1:  add    %edx,%eax
08284b17 +0x0f3:  shl    $0x3,%eax
08284b1a +0x0f6:  lea    (%ecx,%eax,1),%eax
08284b1d +0x0f9:  lea    (%esi,%eax,1),%eax
08284b20 +0x0fc:  add    $0x8,%eax
08284b23 +0x0ff:  mov    %ebx,(%eax)
08284b25 +0x101:  mov    0xc(%ebp),%edx
08284b28 +0x104:  mov    -0x20(%ebp),%ecx
08284b2b +0x107:  mov    -0xc(%ebp),%eax
08284b2e +0x10a:  mov    0x8(%eax),%ebx
08284b31 +0x10d:  mov    0x8(%ebp),%esi
08284b34 +0x110:  mov    %ecx,%eax
08284b36 +0x112:  add    %eax,%eax
08284b38 +0x114:  add    %ecx,%eax
08284b3a +0x116:  lea    0x0(,%eax,4),%ecx
08284b41 +0x11d:  mov    %edx,%eax
08284b43 +0x11f:  add    %eax,%eax
08284b45 +0x121:  add    %edx,%eax
08284b47 +0x123:  shl    $0x3,%eax
08284b4a +0x126:  lea    (%ecx,%eax,1),%eax
08284b4d +0x129:  lea    (%esi,%eax,1),%eax
08284b50 +0x12c:  add    $0xc,%eax
08284b53 +0x12f:  mov    %ebx,(%eax)
08284b55 +0x131:  jmp    08284b74 <+0x150>
08284b57 +0x133:  addl   $0x1,-0x10(%ebp)
08284b5b +0x137:  mov    0x14(%ebp),%eax
08284b5e +0x13a:  mov    %eax,(%esp)
08284b61 +0x13d:  call   082855ce <_GLOBAL__I__ZN20TournamentRewardType5ClearEv+0xa5>  ; global constructors keyed to TournamentRewardType::Clear()+0xa5
08284b66 +0x142:  cmp    -0x10(%ebp),%eax
08284b69 +0x145:  seta   %al
08284b6c +0x148:  test   %al,%al
08284b6e +0x14a:  jne    08284ad0 <+0xac>
08284b74 +0x150:  addl   $0x1,-0x20(%ebp)
08284b78 +0x154:  cmpl   $0x1,-0x20(%ebp)
08284b7c +0x158:  setle  %al
08284b7f +0x15b:  test   %al,%al
08284b81 +0x15d:  jne    08284a38 <+0x14>
08284b87 +0x163:  add    $0x30,%esp
08284b8a +0x166:  pop    %ebx
08284b8b +0x167:  pop    %esi
08284b8c +0x168:  pop    %ebp
08284b8d +0x169:  ret
```

## 反编译 C

```c
// CTournamentDungeonReward::DecisionRewardType @ 0x8284a24

/* CTournamentDungeonReward::DecisionRewardType(ENUM_TOURNAMENT_REWARD_CARD_TYPE,
   TournamentRewardRate&, TournamentRewardItemRate const*) */

void __thiscall
CTournamentDungeonReward::DecisionRewardType
          (CTournamentDungeonReward *this,int param_2,int *param_3,
          vector<TournamentRewardItem,std::allocator<TournamentRewardItem>> *param_4)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int local_24;
  int local_18;
  uint local_14;
  
  local_24 = 0;
  do {
    if (1 < local_24) {
      return;
    }
    iVar1 = get_rand_int(param_3[3] + 1);
    if ((*param_3 == 0) || (*param_3 < iVar1)) {
      if (iVar1 <= *param_3 + param_3[1]) {
        iVar1 = get_rand_int(*(int *)(param_4 + 0xc));
        local_18 = 0;
        local_14 = 0;
        while( true ) {
          uVar3 = std::vector<TournamentRewardItem,std::allocator<TournamentRewardItem>>::size
                            (param_4);
          if (uVar3 <= local_14) break;
          puVar2 = (undefined4 *)
                   std::vector<TournamentRewardItem,std::allocator<TournamentRewardItem>>::
                   operator[](param_4,local_14);
          local_18 = local_18 + puVar2[1];
          if (iVar1 + 1 <= local_18) {
            *(undefined4 *)(this + local_24 * 0xc + param_2 * 0x18 + 8) = *puVar2;
            *(undefined4 *)(this + local_24 * 0xc + param_2 * 0x18 + 0xc) = puVar2[2];
            break;
          }
          local_14 = local_14 + 1;
        }
      }
    }
    else {
      *(undefined4 *)(this + local_24 * 0xc + param_2 * 0x18 + 8) = 0;
    }
    local_24 = local_24 + 1;
  } while( true );
}
```
