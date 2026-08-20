# GetItemRarity

`_ZN10CLuckPoint13GetItemRarityEPiii`

`CLuckPoint::GetItemRarity(int*, int, int)`

| 类 | 地址 |
|---|---|
| `CLuckPoint` | `0x08550be4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08550be4  _ZN10CLuckPoint13GetItemRarityEPiii
#           CLuckPoint::GetItemRarity(int*, int, int)
# range [0x08550be4, 0x08550e4f]
08550be4 +0x000:  push   %ebp
08550be5 +0x001:  mov    %esp,%ebp
08550be7 +0x003:  push   %ebx
08550be8 +0x004:  sub    $0x74,%esp
08550beb +0x007:  lea    -0x40(%ebp),%edx
08550bee +0x00a:  mov    $0x0,%ecx
08550bf3 +0x00f:  mov    $0x18,%eax
08550bf8 +0x014:  mov    %eax,%ebx
08550bfa +0x016:  and    $0xfffffffc,%ebx
08550bfd +0x019:  mov    $0x0,%eax
08550c02 +0x01e:  mov    %ecx,(%edx,%eax,1)
08550c05 +0x021:  add    $0x4,%eax
08550c08 +0x024:  cmp    %ebx,%eax
08550c0a +0x026:  jb     08550c02 <+0x1e>
08550c0c +0x028:  add    %eax,%edx
08550c0e +0x02a:  cmpl   $0x2,0x14(%ebp)
08550c12 +0x02e:  jne    08550e06 <+0x222>
08550c18 +0x034:  mov    0x8(%ebp),%eax
08550c1b +0x037:  mov    %eax,(%esp)
08550c1e +0x03a:  call   085510fc <_GLOBAL__I__ZN10CLuckPointC2Ev+0x14f>  ; global constructors keyed to CLuckPoint::CLuckPoint()+0x14f
08550c23 +0x03f:  xor    $0x1,%eax
08550c26 +0x042:  test   %al,%al
08550c28 +0x044:  je     08550e06 <+0x222>
08550c2e +0x04a:  movl   $0x0,-0x44(%ebp)
08550c35 +0x051:  mov    0x8(%ebp),%eax
08550c38 +0x054:  mov    %eax,(%esp)
08550c3b +0x057:  call   085509da <_ZN10CLuckPoint12GetLuckPointEv>  ; CLuckPoint::GetLuckPoint()
08550c40 +0x05c:  mov    %eax,%ebx
08550c42 +0x05e:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08550c47 +0x063:  lea    0x68(%eax),%edx
08550c4a +0x066:  lea    -0x44(%ebp),%eax
08550c4d +0x069:  mov    %eax,0x8(%esp)
08550c51 +0x06d:  mov    %ebx,0x4(%esp)
08550c55 +0x071:  mov    %edx,(%esp)
08550c58 +0x074:  call   08a8c486 <_ZN21ServerParameterScript12getLuckPointEiRi>  ; ServerParameterScript::getLuckPoint(int, int&)
08550c5d +0x079:  mov    0xc(%ebp),%eax
08550c60 +0x07c:  add    $0x8,%eax
08550c63 +0x07f:  mov    (%eax),%edx
08550c65 +0x081:  mov    0xc(%ebp),%eax
08550c68 +0x084:  add    $0x4,%eax
08550c6b +0x087:  mov    (%eax),%eax
08550c6d +0x089:  mov    %edx,%ecx
08550c6f +0x08b:  sub    %eax,%ecx
08550c71 +0x08d:  mov    %ecx,%eax
08550c73 +0x08f:  mov    %eax,-0x24(%ebp)
08550c76 +0x092:  mov    -0x44(%ebp),%eax
08550c79 +0x095:  mov    %eax,0x4(%esp)
08550c7d +0x099:  mov    -0x24(%ebp),%eax
08550c80 +0x09c:  mov    %eax,(%esp)
08550c83 +0x09f:  call   08550fc9 <_GLOBAL__I__ZN10CLuckPointC2Ev+0x1c>  ; global constructors keyed to CLuckPoint::CLuckPoint()+0x1c
08550c88 +0x0a4:  neg    %eax
08550c8a +0x0a6:  mov    %eax,-0x20(%ebp)
08550c8d +0x0a9:  movl   $0x0,-0x1c(%ebp)
08550c94 +0x0b0:  movl   $0x0,-0x18(%ebp)
08550c9b +0x0b7:  movl   $0x0,-0x14(%ebp)
08550ca2 +0x0be:  jmp    08550d08 <+0x124>
08550ca4 +0x0c0:  mov    0x8(%ebp),%eax
08550ca7 +0x0c3:  mov    -0x14(%ebp),%edx
08550caa +0x0c6:  mov    %edx,0x4(%esp)
08550cae +0x0ca:  mov    %eax,(%esp)
08550cb1 +0x0cd:  call   082f2ad6 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x285a>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x285a
08550cb6 +0x0d2:  mov    (%eax),%eax
08550cb8 +0x0d4:  test   %eax,%eax
08550cba +0x0d6:  setne  %al
08550cbd +0x0d9:  test   %al,%al
08550cbf +0x0db:  je     08550d04 <+0x120>
08550cc1 +0x0dd:  mov    0x8(%ebp),%eax
08550cc4 +0x0e0:  mov    -0x14(%ebp),%edx
08550cc7 +0x0e3:  mov    %edx,0x4(%esp)
08550ccb +0x0e7:  mov    %eax,(%esp)
08550cce +0x0ea:  call   082f2ad6 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x285a>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x285a
08550cd3 +0x0ef:  mov    (%eax),%eax
08550cd5 +0x0f1:  mov    %eax,(%esp)
08550cd8 +0x0f4:  call   0865514c <_ZN5CUser8GetPartyEv>  ; CUser::GetParty()
08550cdd +0x0f9:  mov    %eax,-0x10(%ebp)
08550ce0 +0x0fc:  cmpl   $0x0,-0x10(%ebp)
08550ce4 +0x100:  je     08550d1f <+0x13b>
08550ce6 +0x102:  mov    -0x10(%ebp),%eax
08550ce9 +0x105:  mov    %eax,(%esp)
08550cec +0x108:  call   08550ffc <_GLOBAL__I__ZN10CLuckPointC2Ev+0x4f>  ; global constructors keyed to CLuckPoint::CLuckPoint()+0x4f
08550cf1 +0x10d:  mov    %eax,-0x1c(%ebp)
08550cf4 +0x110:  mov    -0x10(%ebp),%eax
08550cf7 +0x113:  mov    %eax,(%esp)
08550cfa +0x116:  call   08550fee <_GLOBAL__I__ZN10CLuckPointC2Ev+0x41>  ; global constructors keyed to CLuckPoint::CLuckPoint()+0x41
08550cff +0x11b:  mov    %eax,-0x18(%ebp)
08550d02 +0x11e:  jmp    08550d20 <+0x13c>
08550d04 +0x120:  addl   $0x1,-0x14(%ebp)
08550d08 +0x124:  mov    0x8(%ebp),%eax
08550d0b +0x127:  mov    %eax,(%esp)
08550d0e +0x12a:  call   082f1b90 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x1914>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x1914
08550d13 +0x12f:  cmp    -0x14(%ebp),%eax
08550d16 +0x132:  seta   %al
08550d19 +0x135:  test   %al,%al
08550d1b +0x137:  jne    08550ca4 <+0xc0>
08550d1d +0x139:  jmp    08550d20 <+0x13c>
08550d1f +0x13b:  nop
08550d20 +0x13c:  cmpl   $0x0,-0x1c(%ebp)
08550d24 +0x140:  je     08550d8a <+0x1a6>
08550d26 +0x142:  mov    -0x34(%ebp),%edx
08550d29 +0x145:  mov    0xc(%ebp),%eax
08550d2c +0x148:  add    $0xc,%eax
08550d2f +0x14b:  mov    (%eax),%ecx
08550d31 +0x14d:  mov    0xc(%ebp),%eax
08550d34 +0x150:  add    $0x8,%eax
08550d37 +0x153:  mov    (%eax),%eax
08550d39 +0x155:  mov    %ecx,%ebx
08550d3b +0x157:  sub    %eax,%ebx
08550d3d +0x159:  mov    %ebx,%eax
08550d3f +0x15b:  mov    %eax,-0x4c(%ebp)
08550d42 +0x15e:  fildl  -0x4c(%ebp)
08550d45 +0x161:  fildl  -0x1c(%ebp)
08550d48 +0x164:  flds   "\n�#<"
08550d4e +0x16a:  fmulp  %st,%st(1)
08550d50 +0x16c:  fmulp  %st,%st(1)
08550d52 +0x16e:  fnstcw -0x4e(%ebp)
08550d55 +0x171:  movzwl -0x4e(%ebp),%eax
08550d59 +0x175:  mov    $0xc,%ah
08550d5b +0x177:  mov    %ax,-0x50(%ebp)
08550d5f +0x17b:  fldcw  -0x50(%ebp)
08550d62 +0x17e:  fistpl -0x4c(%ebp)
08550d65 +0x181:  fldcw  -0x4e(%ebp)
08550d68 +0x184:  mov    -0x4c(%ebp),%eax
08550d6b +0x187:  mov    %edx,%ecx
08550d6d +0x189:  sub    %eax,%ecx
08550d6f +0x18b:  mov    %ecx,%eax
08550d71 +0x18d:  mov    %eax,-0x34(%ebp)
08550d74 +0x190:  mov    0xc(%ebp),%eax
08550d77 +0x193:  add    $0xc,%eax
08550d7a +0x196:  mov    (%eax),%eax
08550d7c +0x198:  cmp    $0xf423f,%eax
08550d81 +0x19d:  jle    08550d8a <+0x1a6>
08550d83 +0x19f:  movl   $0x0,-0x34(%ebp)
08550d8a +0x1a6:  cmpl   $0x0,-0x18(%ebp)
08550d8e +0x1aa:  je     08550dd5 <+0x1f1>
08550d90 +0x1ac:  mov    0xc(%ebp),%eax
08550d93 +0x1af:  add    $0x8,%eax
08550d96 +0x1b2:  mov    (%eax),%edx
08550d98 +0x1b4:  mov    0xc(%ebp),%eax
08550d9b +0x1b7:  add    $0x4,%eax
08550d9e +0x1ba:  mov    (%eax),%eax
08550da0 +0x1bc:  mov    %edx,%ebx
08550da2 +0x1be:  sub    %eax,%ebx
08550da4 +0x1c0:  mov    %ebx,%eax
08550da6 +0x1c2:  mov    %eax,-0x4c(%ebp)
08550da9 +0x1c5:  fildl  -0x4c(%ebp)
08550dac +0x1c8:  fildl  -0x18(%ebp)
08550daf +0x1cb:  flds   "\n�#<"
08550db5 +0x1d1:  fmulp  %st,%st(1)
08550db7 +0x1d3:  fmulp  %st,%st(1)
08550db9 +0x1d5:  fnstcw -0x4e(%ebp)
08550dbc +0x1d8:  movzwl -0x4e(%ebp),%eax
08550dc0 +0x1dc:  mov    $0xc,%ah
08550dc2 +0x1de:  mov    %ax,-0x50(%ebp)
08550dc6 +0x1e2:  fldcw  -0x50(%ebp)
08550dc9 +0x1e5:  fistpl -0x4c(%ebp)
08550dcc +0x1e8:  fldcw  -0x4e(%ebp)
08550dcf +0x1eb:  mov    -0x4c(%ebp),%eax
08550dd2 +0x1ee:  sub    %eax,-0x20(%ebp)
08550dd5 +0x1f1:  mov    0xc(%ebp),%eax
08550dd8 +0x1f4:  add    $0x4,%eax
08550ddb +0x1f7:  mov    (%eax),%eax
08550ddd +0x1f9:  test   %eax,%eax
08550ddf +0x1fb:  je     08550e00 <+0x21c>
08550de1 +0x1fd:  mov    0xc(%ebp),%eax
08550de4 +0x200:  mov    (%eax),%eax
08550de6 +0x202:  imul   -0x20(%ebp),%eax
08550dea +0x206:  mov    0xc(%ebp),%edx
08550ded +0x209:  add    $0x4,%edx
08550df0 +0x20c:  mov    (%edx),%edx
08550df2 +0x20e:  mov    %edx,-0x5c(%ebp)
08550df5 +0x211:  mov    %eax,%edx
08550df7 +0x213:  sar    $0x1f,%edx
08550dfa +0x216:  idivl  -0x5c(%ebp)
08550dfd +0x219:  mov    %eax,-0x40(%ebp)
08550e00 +0x21c:  mov    -0x20(%ebp),%eax
08550e03 +0x21f:  mov    %eax,-0x3c(%ebp)
08550e06 +0x222:  movl   $0x0,-0x28(%ebp)
08550e0d +0x229:  movl   $0x0,-0xc(%ebp)
08550e14 +0x230:  jmp    08550e3c <+0x258>
08550e16 +0x232:  mov    -0xc(%ebp),%eax
08550e19 +0x235:  shl    $0x2,%eax
08550e1c +0x238:  add    0xc(%ebp),%eax
08550e1f +0x23b:  mov    (%eax),%edx
08550e21 +0x23d:  mov    -0xc(%ebp),%eax
08550e24 +0x240:  mov    -0x40(%ebp,%eax,4),%eax
08550e28 +0x244:  lea    (%edx,%eax,1),%eax
08550e2b +0x247:  cmp    0x10(%ebp),%eax
08550e2e +0x24a:  jl     08550e38 <+0x254>
08550e30 +0x24c:  mov    -0xc(%ebp),%eax
08550e33 +0x24f:  mov    %eax,-0x28(%ebp)
08550e36 +0x252:  jmp    08550e47 <+0x263>
08550e38 +0x254:  addl   $0x1,-0xc(%ebp)
08550e3c +0x258:  cmpl   $0x5,-0xc(%ebp)
08550e40 +0x25c:  setle  %al
08550e43 +0x25f:  test   %al,%al
08550e45 +0x261:  jne    08550e16 <+0x232>
08550e47 +0x263:  mov    -0x28(%ebp),%eax
08550e4a +0x266:  add    $0x74,%esp
08550e4d +0x269:  pop    %ebx
08550e4e +0x26a:  pop    %ebp
08550e4f +0x26b:  ret
```

## 反编译 C

```c
// CLuckPoint::GetItemRarity @ 0x8550be4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CLuckPoint::GetItemRarity(int*, int, int) */

int __thiscall CLuckPoint::GetItemRarity(CLuckPoint *this,int *param_1,int param_2,int param_3)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  int local_48;
  int local_44 [7];
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  uint local_18;
  CParty *local_14;
  int local_10;
  
  uVar2 = 0;
  do {
    *(undefined4 *)((int)local_44 + uVar2) = 0;
    uVar2 = uVar2 + 4;
  } while (uVar2 < 0x18);
  if ((param_3 == 2) &&
     (cVar1 = std::vector<CUser*,std::allocator<CUser*>>::empty(), cVar1 != '\x01')) {
    local_48 = 0;
    iVar3 = GetLuckPoint(this);
    iVar4 = G_CDataManager();
    ServerParameterScript::getLuckPoint((ServerParameterScript *)(iVar4 + 0x68),iVar3,&local_48);
    local_28 = param_1[2] - param_1[1];
    local_24 = GetTenThousandPercentage(local_28,local_48);
    local_24 = -local_24;
    local_20 = 0;
    local_1c = 0;
    local_18 = 0;
    while (uVar2 = std::vector<CUser*,std::allocator<CUser*>>::size
                             ((vector<CUser*,std::allocator<CUser*>> *)this), local_18 < uVar2) {
      piVar5 = (int *)std::vector<CUser*,std::allocator<CUser*>>::operator[]
                                ((vector<CUser*,std::allocator<CUser*>> *)this,local_18);
      if (*piVar5 != 0) {
        puVar6 = (undefined4 *)
                 std::vector<CUser*,std::allocator<CUser*>>::operator[]
                           ((vector<CUser*,std::allocator<CUser*>> *)this,local_18);
        local_14 = (CParty *)CUser::GetParty((CUser *)*puVar6);
        if (local_14 != (CParty *)0x0) {
          local_20 = CParty::Get_party_overlapped_drop_ratio_unique(local_14);
          local_1c = CParty::Get_party_overlapped_drop_ratio_rare(local_14);
        }
        break;
      }
      local_18 = local_18 + 1;
    }
    if ((local_20 != 0) &&
       (local_44[3] = local_44[3] -
                      (int)ROUND(_DAT_08ca1350 * (float)local_20 * (float)(param_1[3] - param_1[2]))
       , 999999 < param_1[3])) {
      local_44[3] = 0;
    }
    if (local_1c != 0) {
      local_24 = local_24 -
                 (int)ROUND(_DAT_08ca1350 * (float)local_1c * (float)(param_1[2] - param_1[1]));
    }
    if (param_1[1] != 0) {
      local_44[0] = (*param_1 * local_24) / param_1[1];
    }
    local_44[1] = local_24;
  }
  local_10 = 0;
  while( true ) {
    if (5 < local_10) {
      return 0;
    }
    if (param_2 <= param_1[local_10] + local_44[local_10]) break;
    local_10 = local_10 + 1;
  }
  return local_10;
}
```
